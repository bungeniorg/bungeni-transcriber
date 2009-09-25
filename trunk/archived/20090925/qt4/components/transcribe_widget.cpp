#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc_vout.h>
#include "transcribe_widget.hpp"
#include "main_interface.hpp"
#include "dialogs_provider.hpp"
#include "input_manager.hpp"
#include <QHBoxLayout>
#include <QGroupBox>
#include <QMessageBox>
#include <QDebug>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QMetaEnum>
#include <QProgressDialog>

TranscribeWidget *TranscribeWidget::instance = NULL;

TranscribeWidget::TranscribeWidget( intf_thread_t *_p_i ) :
                             QFrame( NULL ), p_intf( _p_i )
{
    delegate = new ListViewDelegate(this);

    ui.setupUi(this);
    horizontalSlider = new QxtSpanSlider();
    horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
    horizontalSlider->setOrientation(Qt::Horizontal);
    ui.gridLayout->addWidget(horizontalSlider,  2, 3, 1, 2);
/*
    QFrame hr( this, "<hr>", 0 );
    hr.setFrameStyle( QFrame::Sunken + QFrame::HLine );
    hr.setFixedHeight( 12 );

    ui.gridLayout_2->addWidget(hr, 4, 1, 1, 3);
*/
    setLayout(ui.gridLayout_2);

    connect( ui.addButton, SIGNAL(clicked()), this, SLOT(addSpeech()) );
    connect( ui.removeButton, SIGNAL(clicked()), this, SLOT(removeSpeech()) );
    //connect(table, SIGNAL(doubleClicked(QModelIndex)), delegate, SLOT(update(QModelIndex)));
    connect(ui.table, SIGNAL(clicked(QModelIndex)), this, SLOT(edit(QModelIndex)));
connect(ui.table, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(play(QModelIndex)));
    QObject::connect(ui.startTime, SIGNAL(timeChanged( const QTime & )), this, SLOT(updateStartTime( const QTime &)));
    QObject::connect(ui.endTime, SIGNAL(timeChanged( const QTime & )), this, SLOT(updateEndTime( const QTime &)));
    QObject::connect(horizontalSlider, SIGNAL( lowerValueChanged( int ) ), this, SLOT( updateStartTime( int ) ));
    QObject::connect(horizontalSlider, SIGNAL( upperValueChanged( int ) ), this, SLOT( updateEndTime( int ) ));  
    QObject::connect(ui.speech, SIGNAL(textChanged()), this, SLOT(updateText()));
     QObject::connect(ui.name, SIGNAL(textEdited( const QString & )), this, SLOT(updatePerson( const QString & )));
    CONNECT( horizontalSlider, lowerValueChanged( int ), THEMIM->getIM(), sliderUpdate( int ) );
    CONNECT( horizontalSlider, upperValueChanged( int ), THEMIM->getIM(), sliderUpdate( int ) );
    CONNECT( ui.incomplete, stateChanged( int ), this,  updateComplete( int )  );
CONNECT( ui.bold, clicked( ), this, bold( ) );
CONNECT( ui.italics, clicked( ), this, italics( ) );
CONNECT( ui.underline, clicked( ), this, underline( ) );
    this->setupModelView();
fileName="";
}

TranscribeWidget::~TranscribeWidget()
{}

void TranscribeWidget::edit(QModelIndex _index)
{
        
    QVariant person, text;
	int i_startTime, i_endTime;
	QTime start, end;
	int temp;
	
	QModelIndex index = filterModel->mapToSource(_index);
	currentIndex = index;
	person = model->data(model->index(index.row(), 1));
	i_startTime = model->data(model->index(index.row(), 2)).toInt();
	i_endTime = model->data(model->index(index.row(), 3)).toInt();
	text = model->data(model->index(index.row(), 0));
	int incomplete = model->data(model->index(index.row(), 4)).toInt();
	//textEdit->setPlainText(text.toString());
	ui.speech->setHtml(text.toString());
	
	//textEdit->setHtml("<b>bold</b>");
	ui.name->setText(person.toString());
	
	start = QTime::fromString(this->timeSecondstoString(i_startTime));
	ui.startTime->setTime(start);
	end = QTime::fromString(this->timeSecondstoString(i_endTime));
	ui.endTime->setTime(end);

    if (incomplete==1)
	    ui.incomplete->setChecked(true);
	else
        ui.incomplete->setChecked(false);

	horizontalSlider->setLowerValue(i_startTime);
	horizontalSlider->setUpperValue(i_endTime);


}

void TranscribeWidget::bold()
{
    QTextCursor cursor(ui.speech->textCursor());
    QTextCharFormat format;
    if (cursor.charFormat().fontItalic()==true)
    {    
        format.setFontItalic(true);
    }
    if (cursor.charFormat().fontUnderline()==true)
    {    
        format.setFontUnderline(true);
    }
    if (cursor.charFormat().fontWeight()==QFont::Bold)
    {    
        format.setFontWeight(QFont::Light);     
    }
    else
    {
        format.setFontWeight(QFont::Bold);
    }
    cursor.setCharFormat(format);
}

void TranscribeWidget::underline()
{
    QTextCursor cursor(ui.speech->textCursor());
    QTextCharFormat format;
    if (cursor.charFormat().fontItalic()==true)
    {    
        format.setFontItalic(true);
    }
    if (cursor.charFormat().fontWeight()==QFont::Bold)
    {    
        format.setFontWeight(QFont::Bold);     
    }
    if (cursor.charFormat().fontUnderline()==true)
    {    
        format.setFontUnderline(false);
    }
    else
    {
        format.setFontUnderline(true);
    }
    cursor.setCharFormat(format);
}

void TranscribeWidget::italics()
{
    QTextCursor cursor(ui.speech->textCursor());
    QTextCharFormat format;
    if (cursor.charFormat().fontUnderline()==true)
    {    
        format.setFontUnderline(true);
    }
    if (cursor.charFormat().fontWeight()==QFont::Bold)
    {    
        format.setFontWeight(QFont::Bold);     
    }
    if (cursor.charFormat().fontItalic()==true)
    {    
        format.setFontItalic(false);
    }
    else
    {
        format.setFontItalic(true);
    }
    cursor.setCharFormat(format);
}


void TranscribeWidget::removeSpeech()
{
    QMessageBox msgBox;
    msgBox.setText("Do you want to remove the transcript?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    QModelIndexList indexes = selectionModel->selectedIndexes();
    QModelIndex index;    
    
    if (indexes.isEmpty() != true)
    {    
        int ret = msgBox.exec();
        if (ret == QMessageBox::Yes)
        {
            QModelIndexList indexes = selectionModel->selectedIndexes();
     	    QModelIndex index;
     	    foreach(index, indexes) {
         	    model->removeRow(index.row(),QModelIndex());
    	    }
        }
    }
}

void TranscribeWidget::addSpeech()
{
	qDebug( "Add Transcript entered" );
	 if( THEPL->current.i_size > 0 )
    {
		int i_length = var_GetTime(  THEMIM->getInput() , "length" ) / 1000000;
		model->insertRows(model->rowCount(), 1, QModelIndex());
        
        horizontalSlider->setMaximum(i_length);
	
      	if (model->rowCount() == 1)
      	{
      		model->setData(model->index(model->rowCount()-1, 1, QModelIndex()), "Name of Person");
        	model->setData(model->index(model->rowCount()-1, 0, QModelIndex()), "Speech Text");
      		model->setData(model->index(0, 2, QModelIndex()), 0);
      		if (i_length < 120)
     			model->setData(model->index(0, 3, QModelIndex()), i_length);
     		else
     			model->setData(model->index(0, 3, QModelIndex()), 120);
     	}
     	else
     	{
     		model->setData(model->index(model->rowCount()-1, 1, QModelIndex()), "Name of Person");
        	model->setData(model->index(model->rowCount()-1, 0, QModelIndex()), "Speech Text");
     		int end = model->data(model->index(model->rowCount()-2, 3, QModelIndex())).toInt();
     		if ((end+120) < i_length)
     		{
     			model->setData(model->index(model->rowCount()-1, 2, QModelIndex()), QVariant(end));
			    model->setData(model->index(model->rowCount()-1, 3, QModelIndex()), QVariant(end+120));
		    }
			else
			{
				model->setData(model->index(model->rowCount()-1, 2, QModelIndex()), QVariant(end));
				model->setData(model->index(model->rowCount()-1, 3, QModelIndex()), QVariant(i_length));
			}
     	}
     }
     else
     {
        /* The playlist is empty, open a file requester */
    #ifndef WIN32
        THEDP->openFileDialog();
    #else
        THEDP->simpleOpenDialog();
    #endif
    }
  
}


void TranscribeWidget::setupModelView()
{
    model = new QStandardItemModel(0,5,this);

	
//table->setResizeMode(QListView::Adjust);
	ui.table->setItemDelegate(delegate);
	ui.table->setAlternatingRowColors(true);
	
	filterModel = new QSortFilterProxyModel();
    filterModel->setSourceModel(model);
	filterModel->setDynamicSortFilter(true);
    filterModel->sort(2, Qt::AscendingOrder);
    ui.table->setModel(filterModel);
     	
    selectionModel = new QItemSelectionModel(filterModel);
	ui.table->setSelectionModel(selectionModel);
	ui.table->show();	
}


void TranscribeWidget::updateComplete( int state )
{
    int checked=0;
	if (state == Qt::Checked)
    {
        checked = 1;
        model->setData(model->index(currentIndex.row(),4), QVariant(checked));
        qDebug() << "Checked";
    }
    else
    {
        checked = 0;
        model->setData(model->index(currentIndex.row(),4), QVariant(checked));
qDebug() << "Unchecked";
    }
qDebug() << "Model Changed to " << model->data(model->index(currentIndex.row(), 4)).toInt();
}


void TranscribeWidget::updateEndTime( const QTime & time )
{
	int temp;
	temp = time.hour() * 3600 + time.minute()*60 + time.second();
	horizontalSlider->setUpperValue(temp);
    model->setData(model->index(currentIndex.row(),3), QVariant(temp));
}

void TranscribeWidget::updateStartTime( const QTime & time )
{
	int temp;
	temp = time.hour() * 3600 + time.minute()*60 + time.second();
	horizontalSlider->setLowerValue(temp);
model->setData(model->index(currentIndex.row(),2), QVariant(temp));
}

void TranscribeWidget::updateStartTime( int time )
{
	int hours, minutes, seconds;
	QString temp;
	QTime start;
	QString timeText = "";
	timeText = timeSecondstoString(time);
	start = QTime::fromString(timeText);
	ui.startTime->setTime(start);
	model->setData(model->index(currentIndex.row(),2), QVariant(time));
}

void TranscribeWidget::updateEndTime( int time )
{
	int hours, minutes, seconds;
	QString temp;
	QTime end;
	QString timeText = "";
	timeText = timeSecondstoString(time);
	end = QTime::fromString(timeText);
	ui.endTime->setTime(end);
    model->setData(model->index(currentIndex.row(),3), QVariant(time));
}

QString TranscribeWidget::timeSecondstoString(int time)
{

	int hours, minutes, seconds;
	QString temp;
	hours = time / 3600;
	minutes = (time % 3600) / 60;
	seconds = (time % 3600) % 60;
	
QString timeText = "";

if (hours < 10)
	{
		timeText.append("0"); 
		temp.setNum(hours);
		timeText += temp;
	}
	else
	{
		temp.setNum(hours);
		timeText += temp;
	}
	if ( minutes < 10 )
	{
		timeText.append(":0"); 
		temp.setNum(minutes);
		timeText += temp;
	}
	else
	{
		temp.setNum(minutes);
		timeText += ":"+temp;
	}
	if ( seconds < 10 )
	{
		timeText.append(":0"); 
		temp.setNum(seconds);
		timeText += temp;
	}
	else
	{
		temp.setNum(seconds);
		timeText += ":" + temp;
	}
	return timeText;

}
void TranscribeWidget::updateText()
{
//qDebug( "Slot:updateTExt entered" );
	model->setData(model->index(currentIndex.row(),0), ui.speech->toHtml());
}

void TranscribeWidget::updatePerson( const QString & text )
{
	//qDebug( "slot:updatePerson entered" );
	model->setData(model->index(currentIndex.row(),1), text);
	//model->setData(model->index(currentIndex.row(),1),"asdfasd");
}

void  TranscribeWidget::play(QModelIndex _index)
{
	QModelIndex index = filterModel->mapToSource(_index);
	
	int temp;
	QVariant startTimeTxt;
	QTime start;
	startTimeTxt = model->data(model->index(index.row(), 2));
	start = QTime::fromString(timeSecondstoString(startTimeTxt.toInt()));
	//qDebug() << "Time : " << start.toString();
	if( THEPL->current.i_size > 0 )
	{
		
		if ( THEMIM->getIM()->hasInput() )
    		{
    			int64_t i_length = var_GetTime(  THEMIM->getInput() , "length" );
		   // qDebug() << "i_length : " << i_length;
        		int64_t i_time = (int64_t)
            			( QTime( 0, 0, 0 ).msecsTo( start ) ) * 1000;
            		//qDebug() << "i_time : " << i_time;
        		if (startTimeTxt.toInt() > 1)
        		{
        			
        			if (i_time > i_length) 
        				QMessageBox::warning(this, "Error", "Current Media does not have that timestamp. Please ensure that transcript file is for the right media file");
        			else
        				var_SetTime( THEMIM->getInput(), "time", i_time );
    			}
    			else
    			{
    				var_SetTime( THEMIM->getInput(), "time", (int64_t)(1000000) );
    			}
    		}
    		else
    		{
    			playlist_Play( THEPL );
    		}
    	}
    	else
    	{
    		QMessageBox::warning(this, "Error", "Please open a media file through main VLC menu");
    	}
}

void TranscribeWidget::saveFile()
{
	if (fileName != "")
	{
		this->writeFile(fileName);
	}
	else
	{
		this->saveFileAs();
	}
}

void TranscribeWidget::saveFileAs()
{
	QString newfileName = QFileDialog::getSaveFileName(this, tr("File Save As"), "", tr("Transcript Files (*.trs);;Any File (*.*)"));
	fileName = newfileName;
	
	this->writeFile(newfileName);
}

void TranscribeWidget::openFile()
{
	QString newfileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Transcript Files (*.trs);;Any File (*.*)"));
	if (newfileName == "")
		return;
	fileName = newfileName;
	QFile newfile(newfileName);
	if (!newfile.open(QFile::ReadOnly | QFile::Text)) {
        	QMessageBox::warning(this, tr("error"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(newfileName)
                             .arg(newfile.errorString()));
        	return;
    	}
	QXmlStreamReader reader;
   	reader.setDevice(&newfile);
	
	if (!reader.atEnd()) {
         	reader.readNext();

         	if (reader.isStartElement()) {
             		if (reader.name() != "trs")
                 	{	
                 		QMessageBox::warning(this, tr("Open Transcript File"),
                              		tr("This is not a trs file %1.")
                              		.arg(newfileName));
            			return;	
                 	}	
         	}
     	}
     	
     	if (reader.hasError()) {
       		QMessageBox::warning(this, tr("error"),
                              		tr("Parse error in file %1 at line %2, column %3:\n%4")
                             .arg(fileName)
                             .arg(reader.lineNumber())
                             .arg(reader.columnNumber())
                             .arg(reader.errorString()));
            			return;	
	 }
 	     
     	QString str; 
     	QString person, startTimeTxt, endTimeTxt, mediaLocation;
     	QTime q_endTime, q_startTime;
     	model->removeRows(0, model->rowCount(QModelIndex()), QModelIndex());
	int i_startTime, i_endTime;
        int row = 0;
     	while (!reader.atEnd()) {
        	reader.readNext();
        	if (reader.name() == "trs")
        	{
        		mediaLocation = reader.attributes().value("media").toString();
        		
        	}
        	else if (reader.name() == "speech")
        	{	
        		
        		startTimeTxt = reader.attributes().value("startTime").toString();
        		endTimeTxt = reader.attributes().value("endTime").toString();
        		
        		q_startTime = QTime::fromString(startTimeTxt);
        		i_startTime = q_startTime.hour() * 3600 + q_startTime.minute()*60 + q_startTime.second();
        		
        		q_endTime = QTime::fromString(endTimeTxt);
        		i_endTime = q_endTime.hour() * 3600 + q_endTime.minute()*60 + q_endTime.second();
        		
        		person = reader.attributes().value("person").toString();
        		
        
        		    str = reader.readElementText();
        	
        		model->insertRows(row, 1, QModelIndex());
        		model->setData(model->index(row, 0, QModelIndex()), str);
                	model->setData(model->index(row, 1, QModelIndex()), person);
     			model->setData(model->index(row, 2, QModelIndex()), i_startTime);
     			model->setData(model->index(row, 3, QModelIndex()), i_endTime);
     			row++;
     		}
    	}
    	
	newfile.close();
}

void TranscribeWidget::newFile()
{
	int ret;
	if (fileName != "")
	{
		ret = QMessageBox::warning(this, tr("Transcribe"),
                   tr("The document has been modified.\n"
                      "Do you want to save your changes?"),
                   QMessageBox::Save | QMessageBox::Discard
                   | QMessageBox::Cancel,
                   QMessageBox::Save);
        switch (ret)
		{
			case QMessageBox::Save:
				saveFile();
				setupModelView();
			break;
			case QMessageBox::Discard:
				setupModelView();
			break;
			case QMessageBox::Cancel:
			break;
		}
        }       
        else
        {
        	setupModelView();	
        } 
	
	
}

bool TranscribeWidget::writeFile(QString fileName)
{
    QXmlStreamWriter writer;
    QFile newfile(fileName);
    if (!newfile.open(QFile::WriteOnly | QFile::Text)) {
        	QMessageBox::warning(this, tr("error"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(fileName)
                             .arg(newfile.errorString()));
        	return false;
    }
    writer.setDevice(&newfile);
    writer.writeStartDocument();
    writer.writeDTD("<!DOCTYPE trs>");
    writer.writeStartElement("trs");
    for (int i = 0; i < model->rowCount(QModelIndex()); ++i)
    {
    	writer.writeStartElement("speech");
    	writer.writeAttribute("person", model->data(model->index(i, 1, QModelIndex()),Qt::DisplayRole).toString());
    	writer.writeAttribute("startTime", TranscribeWidget::timeSecondstoString(model->data(model->index(i, 2, QModelIndex()),Qt::DisplayRole).toInt()));
    	writer.writeAttribute("endTime", TranscribeWidget::timeSecondstoString(model->data(model->index(i, 3, QModelIndex()),Qt::DisplayRole).toInt()));
        writer.writeCDATA(model->data(model->index(i, 0, QModelIndex()),Qt::DisplayRole).toString());
        //writer.writeCharacters( QDomDocument::createCDATASection ( model->data(model->index(i, 0, QModelIndex()),Qt::DisplayRole).toString() ) );
        writer.writeEndElement();    
    }
    writer.writeEndDocument();
    newfile.close();
    return true;
}

QTemporaryFile * TranscribeWidget::writeTemp()
{
    QXmlStreamWriter writer;
    QTemporaryFile * file = new QTemporaryFile();
    if (!file->open()) {
        	QMessageBox::warning(this, tr("error"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(fileName)
                             .arg(file->errorString()));
        	return NULL;
    }
    qDebug( "temp file opened" );
    writer.setDevice(file);
    writer.writeStartDocument();
    writer.writeDTD("<!DOCTYPE trs>");
    writer.writeStartElement("trs");
    for (int i = 0; i < model->rowCount(QModelIndex()); ++i)
    {
    	writer.writeStartElement("speech");
    	writer.writeAttribute("person", model->data(model->index(i, 1, QModelIndex()),Qt::DisplayRole).toString());
    	writer.writeAttribute("startTime", TranscribeWidget::timeSecondstoString(model->data(model->index(i, 2, QModelIndex()),Qt::DisplayRole).toInt()));
    	writer.writeAttribute("endTime", TranscribeWidget::timeSecondstoString(model->data(model->index(i, 3, QModelIndex()),Qt::DisplayRole).toInt()));
        writer.writeCharacters(model->data(model->index(i, 0, QModelIndex()),Qt::DisplayRole).toString());
        writer.writeEndElement();    
    }
    writer.writeEndDocument();
    qDebug( "file written" );
    file->close();
    return file;
}

bool TranscribeWidget::post()
{
    //QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    //QNetworkRequest request;
    //request.setUrl(QUrl("http://localhost/upload.php"));
    //request.setRawHeader("User-Agent", "MyOwnBrowser 1.0");

    //QNetworkReply *reply = manager->post(request, file);
    
 //connect(manager, SIGNAL(finished(QNetworkReply*)),
  //       this, SLOT(replyFinished(QNetworkReply*)));
         // QByteArray ba("Hello");
//manager->post(request, ba);
 //manager->get(QNetworkRequest(QUrl("http://localhost/upload.php")));
    //QNetworkReply *reply = manager->get(request);
    /*
    uiProgress.setupUi(progressWidget);
    uiProgress.progressBar->setRange(0,100);
    progressWidget->show();
    */
   // connect(reply, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
    //connect(reply, SIGNAL(uploadProgress(qint64 bytesSent, qint64 bytesTotal)), this, SLOT(progress ( qint64 bytesSent, qint64 bytesTotal )));
  //  connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),
   //                 this, SLOT(slotError(QNetworkReply::NetworkError)))

//file->open(QIODevice::ReadOnly);
//QTemporaryFile * file = this->writeTemp();
//QByteArray ba=file->readAll();
qDebug( "start post" );
//QByteArray ba("Hello");
QTemporaryFile * file; 
file = this->writeTemp();
//this->writeFile("temp.trs");

//QByteArray ba=file->readAll();
file->open();
FormPostPlugin * post = new FormPostPlugin();
post->addFile("uploaded", file->fileName(), "text/plain");
QString str = "http://localhost/uploaded.php";
QNetworkReply *reply = post->postData(str);
//connect(reply, SIGNAL(uploadProgress(qint64 bytesSent, qint64 bytesTotal)), this, SLOT(progress ( qint64 bytesSent, qint64 bytesTotal )));

qDebug( "end post" );

file->close();

return true;

}

bool TranscribeWidget::takes()
{  
    QSettings settings("Bungeni", "transcribe");
    QString name = settings.value("username").toString();
    qDebug() << "Name : " << name;
    QString password = settings.value("password").toString();
   // QString url = "http://localhost/mediawiki/index.php/Special:UserLogin";
   QString url = "http://localhost/mediawiki/api.php";
    //QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    //QNetworkRequest request;
    //request.setUrl(QUrl(url));
    //QByteArray data("hello");?action=login&lgname="+name+"&lgpassword="+password
    //QNetworkReply *reply = manager->post(request, data);
    //if reply
    posta = new FormPostPlugin();
    
    posta->addField("action", "login");
    posta->addField("lgname", name);
    posta->addField("lgpassword", password);
    posta->addField("format", "xml");
    /*
    posta->addField("wpName", name);
    posta->addField("wpPassword", password);
    posta->addField("wpRemember", "true");
    */
    reply = posta->postData(url);
    connect( reply, SIGNAL(finished()), this, SLOT(slotReadyRead()) );
    // post->response();
     //QByteArray data = post->response();

     //qDebug() << data;
  
    return true;
}


void TranscribeWidget::slotReadyRead()
{
    QByteArray data = posta->response();
    QByteArray cookie = reply->rawHeader("Set-Cookie");
    qDebug() << data;
    qDebug() << cookie;
    QNetworkRequest request;
    QString url = "http://localhost/mediawiki/index.php/Special:Assignment";
    request.setUrl(QUrl(url));
    reply = posta->http->get(request);
    connect( reply, SIGNAL(finished()), this, SLOT(takesReply()) );
}

void TranscribeWidget::takesReply()
{
    QByteArray data = posta->response();
    qDebug() << data;
    //qDebug() << reply->readAll();
    QXmlStreamReader reader;
    QString streamName;
    reader.addData(data);
    QStringList files;
    while (!reader.atEnd()) {
        reader.readNext();
        if (reader.name() == "ass")
        {
        	//mediaLocation = reader.attributes().value("media").toString();
        }
        else if (reader.name() == "stream")
        {	
        	streamName = reader.attributes().value("name").toString();
        	//qDebug() << streamName << "streams";
     	}
     	else if (reader.name() == "take")
     	{
     	    QString takeURL = reader.attributes().value("file").toString();
     	    QString startTime = reader.attributes().value("startTime").toString();
     	    QString endTime = reader.attributes().value("endTime").toString();
        	QString takeName = streamName + "-" + startTime + "-" + endTime+".ogg";
        	if (takeURL != "")
        	{
        	    //files.insert(files.size(),take);
        	    hash.insert(takeName, takeURL);
        	}
     	}
    }
   // QHash<QString, QString> hash;
    QNetworkRequest request;
    QNetworkAccessManager networkmanager;
    QEventLoop q;
    QTimer tT;
    
    tT.setSingleShot(true);
    connect(&tT, SIGNAL(timeout()), &q, SLOT(quit()));
    connect( &networkmanager, SIGNAL(finished( QNetworkReply* )), this, SLOT(takesDownload( QNetworkReply* )) );
    connect(&networkmanager, SIGNAL(finished(QNetworkReply*)), &q, SLOT(quit()));

    QHashIterator<QString, QString> i(hash);
    QProgressDialog progress("Downloading Takes", "Abort", 0, hash.size(), this);
    progress.setWindowModality(Qt::WindowModal);
    int counter = 1;
    playlist_Clear(THEPL, true);
    progress.setValue(0);
    while (i.hasNext()) {
        i.next();
        

        if (progress.wasCanceled())
             break;
        request.setUrl(QUrl(i.value()));
        networkmanager.get(request);
        //connect( reply, SIGNAL(finished()), this, SLOT(takesDownload()) );
        tT.start(120000); // 120s timeout
        q.exec();
        if(tT.isActive()){
            // download complete
            tT.stop();
        } else {
            qDebug() << "Time out: Please check your network connection";
            break;
        }
        progress.setValue(counter);
        counter++;
    }
    progress.setValue(hash.size());
    /*
    foreach( QString file, files )
    {
        //playlist_Add( );
        //qDebug() << file;
        QNetworkRequest request;
        QNetworkAccessManager *networkmanager = new QNetworkAccessManager();
        request.setUrl(QUrl(file));
        networkmanager->get(request);
        //connect( reply, SIGNAL(finished()), this, SLOT(takesDownload()) );
        connect( networkmanager, SIGNAL(finished( QNetworkReply* )), this, SLOT(takesDownload( QNetworkReply* )) );
    }
    */

}

void TranscribeWidget::takesDownload( QNetworkReply * reply )
{
    QByteArray data = reply->readAll();
    QString url = reply->url().toString();
    //qDebug() << url;
    QString fileName = hash.key(url);
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "error opening media file";
    }else
    {
       // QDataStream out(&file);
        //out << data;
        file.write(data);
    }  
    file.flush();
    file.close();
    QFileInfo fileInfo(file);
    QByteArray absfilepath = fileInfo.absoluteFilePath().toAscii(); 
    playlist_Add( THEPL, qtu( toNativeSeparators(absfilepath)) , NULL, PLAYLIST_APPEND , PLAYLIST_END, true, true );
    qDebug() << "File has been downloaded -> " << fileName;
}


void TranscribeWidget::replyFinished(QNetworkReply* reply)
{
    QVariant statusCodeV = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
 
    // "200 OK" received?
    if (statusCodeV.toInt()==200)
        {
        QMessageBox::warning(0, "Get Worked", "Get Worked");
        }
    // Some http error or redirect
    else
        {
        QMessageBox::warning(0, "Error", "Error");
        }
        
    delete reply;   
}

void TranscribeWidget::slotError(QNetworkReply::NetworkError error)
{
    QString errorValue;
    QMetaObject meta = QNetworkReply::staticMetaObject;
    for (int i=0; i < meta.enumeratorCount(); ++i) {
        QMetaEnum m = meta.enumerator(i);
        if (m.name() == QLatin1String("NetworkError")) {
            errorValue = QLatin1String(m.valueToKey(error));
            break;
        }
    }
progressWidget->hide();
    QMessageBox::warning(0, "Upload Error", "Error code:"+errorValue);
}

void TranscribeWidget::progress ( qint64 bytesSent, qint64 bytesTotal )
{
    int value = (int)((float) bytesSent / (float) bytesTotal * 100);
   // uiProgress.progressBar->setValue(value);
}
