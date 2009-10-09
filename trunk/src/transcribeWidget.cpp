/********************************************************************
 * transcribeWidget.cpp
 ********************************************************************
 * This file is part of Bungeni Transcribe
 *
 * Copyright (C) 2009 - UNDESA <www.parliaments.info>
 *
 *
 * Author - Miano Njoka <miano@parliaments.info>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA  02110-1301  USA
 ***********************************************************************/
 

#include <QMessageBox>
#include <QDebug>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QMetaEnum>
#include <QProgressDialog>
#include <QFileDialog>
#include <QSettings>
#include <QTimer>
#include <QKeyEvent>
#include <QWheelEvent>
#include "transcribeWidget.hpp"
#include "about.hpp"
#include "hotkeyWidget.hpp"
#include "settings.hpp"

//Use taglib for now since libvlc doesnt get correct file length
//TO DO : Remove
#include <taglib/tag.h>
#include <taglib/fileref.h>
#include <taglib/tfile.h>
TranscribeWidget::TranscribeWidget() : QMainWindow()
{
    //Setup UI 
    ui.setupUi(this);
    delegate = new ListViewDelegate(this);
    QObject::connect( ui.addButton, SIGNAL(clicked()), this, SLOT(addSpeech()) );
    QObject::connect( ui.removeButton, SIGNAL(clicked()), this, SLOT(removeSpeech()) );
    QObject::connect( ui.table, SIGNAL(doubleClicked(QModelIndex)), delegate, SLOT(currentEditing(QModelIndex)));
    QObject::connect( ui.table, SIGNAL(clicked(QModelIndex)), delegate, SLOT(display(QModelIndex)));
    this->setupModelView();
    fileName="";
    
    //video stuff
    //preparation of the vlc command
    const char * const vlc_args[] = {
              "-I", "dummy", /* Don't use any interface */
              "--ignore-config", /* Don't use VLC's config */
              "--extraintf=logger", //log anything
             // "--verbose=2", //be much more verbose then normal for debugging purpose
              "--plugin-path=/home/miano/Work/vlc-0.9.10/modules/" };

    video=new QFrame(this);

   
    // Note: if you use streaming, there is no ability to use the position slider
   // ui.positionSlider->setMaximum(POSITION_RESOLUTION);

    
    ui.gridLayout_2->addWidget(video, 0, 0, 1, 3);
    
    controls = new ControlsWidget();
    ui.gridLayout_2->addWidget(controls, 1, 0, 1, 3);
    
    playlist = new PlaylistWidget();
    ui.gridLayout_2->addWidget(playlist, 2, 0, 1, 3);
    
    currentMediaFile = "";
    
    QObject::connect( playlist, SIGNAL(playMediaFile(QString)), this, SLOT(playFile(QString)));
    QObject::connect( playlist, SIGNAL(playMediaFile(QString)), this, SLOT(loadMetaData(QString)));
    
    QObject::connect( playlist, SIGNAL(loadTranscriptFile(int,QString)), this, SLOT(loadNextFileSlot(int,QString)));
    
    QObject::connect( controls, SIGNAL(playSignal()), this, SLOT(play()));
    QObject::connect( controls, SIGNAL(stopSignal()), this, SLOT(stop()));
    QObject::connect( controls, SIGNAL(nextSignal()), playlist, SLOT(next()));
    QObject::connect( controls, SIGNAL(prevSignal()), playlist, SLOT(prev()));
    this->createActions();
    this->createMenus();
    
    _isPlaying=false;
    poller=new QTimer(this);

    //Initialize an instance of vlc
    //a structure for the exception is neede for this initalization
    libvlc_exception_init(&_vlcexcep);

    //create a new libvlc instance
    _vlcinstance=libvlc_new(sizeof(vlc_args) / sizeof(vlc_args[0]), vlc_args,&_vlcexcep);  //tricky calculation of the char space used
    raise (&_vlcexcep);
    
    // Create a media player playing environement 
    _mp = libvlc_media_player_new (_vlcinstance, &_vlcexcep);
    raise (&_vlcexcep);

    //connect the two sliders to the corresponding slots (uses Qt's signal / slots technology)
    connect(poller, SIGNAL(timeout()), this, SLOT(updateInterface()));
    connect(controls, SIGNAL(sliderMoved(int)), this, SLOT(changePosition(int)));
    

    poller->start(100); //start timer to trigger every 100 ms the updateInterface slot
    
    
}



TranscribeWidget::~TranscribeWidget()
{
    /* Stop playing */
    libvlc_media_player_stop (_mp, &_vlcexcep);

    /* Free the media_player */
    libvlc_media_player_release (_mp);

    libvlc_release (_vlcinstance);
    raise (&_vlcexcep);
}

void TranscribeWidget :: stop()
{
    /* Stop playing */
    libvlc_media_player_stop (_mp, &_vlcexcep);
    raise(&_vlcexcep);
    /* Free the media_player */
   // libvlc_media_player_release (_mp);
    qDebug() << currentMediaFile;
    _isPlaying = false;
    controls->changeIcon(false);
}


void TranscribeWidget::play()
{
    qDebug() << currentMediaFile;
    //if (currentMediaFile != "")
    //{
     //   playFile(currentMediaFile);
    //}
    qDebug() << "is playing(Before)" << _isPlaying;
    if (currentMediaFile != "")
    {
        qDebug() << "Enter current file != NULL ";
        if ( _isPlaying == true )
        {
            libvlc_media_player_pause (_mp, &_vlcexcep);
            raise(&_vlcexcep);
            controls->changeIcon(false);
            _isPlaying = false;
        }
        else
        {
            libvlc_media_player_play (_mp, &_vlcexcep );
            raise(&_vlcexcep);
            
            _file_duration = libvlc_media_player_get_length( _mp, &_vlcexcep);
            raise(&_vlcexcep);
            
            _isPlaying = true;
            controls->changeIcon(true);
        }
    }
    qDebug() << "is playing(after)" << _isPlaying;

}


void TranscribeWidget::skipForward(int sec)
{
}

void TranscribeWidget::skipBackward(int sec)
{
}
void TranscribeWidget::playFaster()
{
}
void TranscribeWidget::playSlower()
{
}





/** Converts a Qt4 QString to a TagLib::String. */
#define Qt4QStringToTString(s) TagLib::String(s.toUtf8().data(), TagLib::String::UTF8)


void TranscribeWidget::loadMetaData(QString file)
{
    /*
    QByteArray fileName = QFile::encodeName( file );
    const char * encodedName = fileName.constData();
    TagLib::FileRef fileref = TagLib::FileRef( encodedName, false );
    if (fileref.isNull())
    {
       qDebug() << "Null";
    }
    else
    {
       qDebug() << "Not Null";
    }
    */
    _file_duration = libvlc_media_player_get_length( _mp, &_vlcexcep);
     raise(&_vlcexcep);
     qDebug() << "file duration = " << _file_duration ;
     
}




void TranscribeWidget::playFile(QString file)
{
    //the file has to be in one of the following formats /perhaps a little bit outdated)
    /*
    [file://]filename              Plain media file
    http://ip:port/file            HTTP URL
    ftp://ip:port/file             FTP URL
    mms://ip:port/file             MMS URL
    screen://                      Screen capture
    [dvd://][device][@raw_device]  DVD device
    [vcd://][device]               VCD device
    [cdda://][device]              Audio CD device
    udp:[[<source address>]@[<bind address>][:<bind port>]]
    */
    qDebug() << file;
    
    currentMediaFile = file;
    
    
    
    /* Create a new LibVLC media descriptor */
    _m = libvlc_media_new (_vlcinstance, file.toAscii(), &_vlcexcep);
    raise(&_vlcexcep);
    
    libvlc_media_player_set_media (_mp, _m, &_vlcexcep);
    raise(&_vlcexcep);
    /*
     /!\ Please note /!\
    
    passing the widget to the lib shows vlc at which position it should show up
    vlc automatically resizes the video to the ´given size of the widget
    and it even resizes it, if the size changes at the playing
    */
    /* Get our media instance to use our window */
    #if defined(Q_OS_WIN)
        libvlc_media_player_set_drawable(_mp, reinterpret_cast<unsigned int>(video->winId()), &_vlcexcep );
        //libvlc_media_player_set_hwnd(_mp, _videoWidget->winId(), &_vlcexcep ); // for vlc 1.0
    #elif defined(Q_OS_MAC)
        libvlc_media_player_set_drawable(_mp, video->winId(), &_vlcexcep );
        //libvlc_media_player_set_agl (_mp, _videoWidget->winId(), &_vlcexcep); // for vlc 1.0
    #else //Linux
        libvlc_media_player_set_drawable(_mp, video->winId(), &_vlcexcep );
        //libvlc_media_player_set_xwindow(_mp, _videoWidget->winId(), &_vlcexcep ); // for vlc 1.0
    #endif
    raise(&_vlcexcep);

    /* Play */
    libvlc_media_player_play (_mp, &_vlcexcep );
    raise(&_vlcexcep);


     
     
    // qDebug() << "file duartion" << _file_duration;
     //controls->setDuration(_file_duration);
     
     //get file duration using taglib since libvlc sucks
     
   //  std::String filePath = file.toStdString ();
     //char * filePath;
     
    // filePath = new char [file.size()+1];
    // strcpy (filePath, file.toStdString().c_str());

    // qDebug() << filePath;
     
    // TagLib::FileRef f(filePath);
   //  this->currentFileDuration = f.file()->length(); 
    
     //  TagLib::FileRef f(filePath);
     //  if (!f.isNull())
      //      TagLib::String artist = f.tag()->artist();      
    //
     //qDebug() << "Artist" << QString(artist.toCString());
     
     /*
     
    #ifdef Q_OS_WIN
        const wchar_t * encodedName = reinterpret_cast<const wchar_t*>(file.utf16());
    #else
        const char * encodedName = QFile::encodeName(file).constData();
    #endif

    TagLib::FileRef fileRef(encodedName); 
     qDebug() << encodedName;
     if (!fileRef.isNull())
     {
       //TagLib::String artist = f.tag()->artist(); 
       qDebug() << "Not Null";
     }
     else
     {
        qDebug() << "Null";
     }
     */
     
     
   // TagLib::String str(Qt4QStringToTString(file));
    //TagLib::FileRef fileRef(str.toCString());
     
    // long duration = fileRef.file()->length(); 
    //    qDebug() << "duration = " << duration;
     
     //TagLib::Tag * tag = fileRef.tag(); 
    // if (tag) {
     //   if (!tag->isEmpty()) {
     //           _title = TStringToQString(tag->title()).trimmed(); 
    _isPlaying=true;
    controls->changeIcon(true);
}

void TranscribeWidget::changeVolume(int newVolume)
{
    libvlc_exception_clear(&_vlcexcep);
    libvlc_audio_set_volume (_vlcinstance,newVolume , &_vlcexcep);
    raise(&_vlcexcep);
}

void TranscribeWidget::changePosition(int newPosition)
{
    libvlc_exception_clear(&_vlcexcep);
    // It's possible that the vlc doesn't play anything
    // so check before
    libvlc_media_t *curMedia = libvlc_media_player_get_media (_mp, &_vlcexcep);
    libvlc_exception_clear(&_vlcexcep);
    if (curMedia == NULL)
        return;

    float pos=(newPosition)/POSITION_RESOLUTION;
    libvlc_media_player_set_position (_mp, pos, &_vlcexcep);
    raise(&_vlcexcep);
}

void TranscribeWidget::updateInterface()
{
    if(!_isPlaying)
        return;

    // It's possible that the vlc doesn't play anything
    // so check before
    libvlc_media_t *curMedia = libvlc_media_player_get_media (_mp, &_vlcexcep);
    libvlc_exception_clear(&_vlcexcep);
    if (curMedia == NULL)
        return;

    float pos=libvlc_media_player_get_position (_mp, &_vlcexcep);
    
    
    //qDebug() << "Update Interface" << _file_duration;
    int siderPos=(int)(pos*(float)(POSITION_RESOLUTION));
   // ui.positionSlider->setValue(siderPos);
   controls->updateSlider(siderPos);
    
}

void TranscribeWidget::raise(libvlc_exception_t * ex)
{
    if (libvlc_exception_raised (ex))
    {
         fprintf (stderr, "error: %s\n", libvlc_exception_get_message(ex));
         exit (-1);
    }
}

/*
void TranscribeWidget::keyPressEvent( QKeyEvent *keyEvent )
{
   qDebug() << "ignore - Transcribe Widget";
   keyEvent->ignore();
   
}
*/
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
/*
void TranscribeWidget::refresh(const QModelIndex & index)
{
    qDebug( "Refresh entered" );
    emit refreshWidget(index);
    //delegate->display(index);
}
*/
void TranscribeWidget::addSpeech()
{
	qDebug( "Add Transcript entered" );
	int i_length = 200;
	if (playlist->getSelected()>=0)
	{
	    model->insertRows(model->rowCount(), 1, QModelIndex());
	    model->setData(model->index(model->rowCount()-1, 1, QModelIndex()), "Name of Person");
        model->setData(model->index(model->rowCount()-1, 0, QModelIndex()), "Speech Text");
        model->setData(model->index(model->rowCount()-1, 4, QModelIndex()), false);
	    if (model->rowCount() == 1)
        {  
      		    model->setData(model->index(0, 2, QModelIndex()), 0);
      		    if (i_length < 120)
     			    model->setData(model->index(0, 3, QModelIndex()), i_length);
     		    else
     			    model->setData(model->index(0, 3, QModelIndex()), 120);
     			qDebug( "model->rowCount() = 1" );
        }
        else
        {
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
		    qDebug( "model->rowCount() > 1" );
        }
    }
    else
    {
        QMessageBox::warning(this, tr("Error"),"Please add/select a file from the playlist");
    }
}


void TranscribeWidget::setupModelView()
{
    model = new QStandardItemModel(0,5,this);
    
	ui.table->setItemDelegate(delegate);
	ui.table->setAlternatingRowColors(true);
	
	filterModel = new QSortFilterProxyModel();
    filterModel->setSourceModel(model);
	filterModel->setDynamicSortFilter(true);
    filterModel->sort(2, Qt::AscendingOrder);
    ui.table->setModel(filterModel);
     	
    selectionModel = new QItemSelectionModel(filterModel);
	ui.table->setSelectionModel(selectionModel);
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
/*
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
*/
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
	playlist->setTranscriptFileLocation(newfileName, -1);
}
void TranscribeWidget::openFile()
{
    QString newfileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Transcript Files (*.trs);;Any File (*.*)"));
    newFile();
    if (!this->loadFile(newfileName))
    {
        QMessageBox::warning(this, tr("Error"),"Cannot Open File");
    }
}

void TranscribeWidget::loadNextFileSlot(int currentLogicalIndex, QString newfileName)
{
    qDebug() << "Load File Slot, newfilename = " << newfileName;
    qDebug() << "Load File Slot, filename = " << fileName;
    qDebug() << "Load File Slot, currentLogicalIndex = " << currentLogicalIndex;
    if ((fileName == "") && (model->rowCount() > 0 ))
    {
	    QMessageBox::warning(this, tr("Error"),"Please save the current transcripts before loading another");
        //this->saveFileAs();
        QString f = QFileDialog::getSaveFileName(this, tr("File Save As"), "", tr("Transcript Files (*.trs);;Any File (*.*)"));
	    playlist->setTranscriptFileLocation(f, currentLogicalIndex);
	    this->writeFile(f);
    }
    else if (fileName != "")
    {
        this->writeFile(fileName);
    }
   
    this->loadFile(newfileName);
}

bool TranscribeWidget::loadFile(QString newfileName)
{
	
	if (newfileName == "")
	{
	    model->removeRows(0, model->rowCount(QModelIndex()), QModelIndex());
	    fileName = newfileName;
	    return true;
	}
	fileName = newfileName;
	QFile newfile(newfileName);
	if (!newfile.open(QFile::ReadOnly | QFile::Text)) {
        	return false;
    	}
	QXmlStreamReader reader;
   	reader.setDevice(&newfile);
	
	if (!reader.atEnd()) {
         	reader.readNext();

         	if (reader.isStartElement()) {
             		if (reader.name() != "trs")
                 	{	
            			return false;	
                 	}	
         	}
     	}
     	
     	if (reader.hasError()) {
            			return false;	
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
        		if (reader.isCDATA())
        		{
        		 
        	        str = reader.text().toString();
        	    }
        	    else
        	    {
        	        str = reader.readElementText();
        	    }
        	    qDebug() << str;
        		model->insertRows(row, 1, QModelIndex());
        		model->setData(model->index(row, 0, QModelIndex()), str);
                	model->setData(model->index(row, 1, QModelIndex()), person);
     			model->setData(model->index(row, 2, QModelIndex()), i_startTime);
     			model->setData(model->index(row, 3, QModelIndex()), i_endTime);
     			row++;
     		}
    	}
    	
	newfile.close();
	return true;
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

if (fileName != "")
{
    this->saveFile();
}

QString string;
QXmlStreamWriter writer(&string);
writer.writeStartDocument();
writer.writeDTD("<!DOCTYPE trs>");
writer.writeStartElement("trs");

QHashIterator<QString, QString> i(hash);

while (i.hasNext()) {
    i.next();
    QString fileName = i.key() + ".trs";
    QFile newfile(fileName);
    writer.writeStartElement("take");
    writer.writeAttribute("sitting", i.key().section("-",0,0));
    writer.writeAttribute("startTime", i.key().section("-",1,1));
    qDebug() << i.key().section("-",0,0);
	if (newfile.open(QFile::ReadOnly | QFile::Text)) {
        QXmlStreamReader reader;
   	    reader.setDevice(&newfile);
     	while (!reader.atEnd()) {
        	reader.readNext();
        	if (reader.name() == "speech")
        	{	
        		 writer.writeCurrentToken(reader);
        		 writer.writeCharacters(reader.readElementText());
        		 writer.writeEndElement();
     		}
    	}
    }	
    writer.writeEndElement();    
	newfile.close();
}
writer.writeEndElement();
writer.writeEndDocument();
qDebug() << string;

FormPostPlugin * post = new FormPostPlugin();

QSettings settings("transcribe.conf", QSettings::IniFormat);
settings.beginGroup("Network");
QString str = "http://"+settings.value("hostname").toString()+"/mediawiki/index.php/Special:Speech_from_VLC";
post->addField("string", string);
settings.endGroup();
QNetworkReply *reply = post->postData(str);

connect( reply, SIGNAL(finished()), this, SLOT(postFinished()) );


return true;

}

void TranscribeWidget::postFinished()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(QObject::sender());
    QByteArray ba = reply->readAll();

  qDebug() << ba;
  qDebug() << reply->url();
  QMessageBox::information(0, "Success", "Speeches successfully posted to Bungeni");
}

bool TranscribeWidget::takes()
{  
    QSettings settings("transcribe.conf", QSettings::IniFormat);
    settings.beginGroup("Network");
    QString name = settings.value("username").toString();
    qDebug() << "Name : " << name;
    QString password = settings.value("password").toString();
   QString url = "http://"+settings.value("hostname").toString()+"/mediawiki/api.php";
    qDebug() << "url : " << url;
    posta = new FormPostPlugin();
    
    posta->addField("action", "login");
    posta->addField("lgname", name);
    posta->addField("lgpassword", password);
    posta->addField("format", "xml");
    reply = posta->postData(url);
    connect( reply, SIGNAL(finished()), this, SLOT(slotReadyRead()) );
    settings.endGroup();
    return true;
}


void TranscribeWidget::slotReadyRead()
{
    QByteArray data = posta->response();
    QByteArray cookie = reply->rawHeader("Set-Cookie");
    qDebug() << data;
    qDebug() << cookie;
    QNetworkRequest request;
    QSettings settings("transcribe.conf", QSettings::IniFormat);
    settings.beginGroup("Network");
    QString url = "http://"+settings.value("hostname").toString()+"/mediawiki/index.php/Special:Assignment";
    request.setUrl(QUrl(url));
    reply = posta->http->get(request);
    connect( reply, SIGNAL(finished()), this, SLOT(takesReply()) );
    settings.endGroup();
}

void TranscribeWidget::takesReply()
{
    QByteArray data = posta->response();
    qDebug() << data;
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
   // playlist_Clear(THEPL, true);
    progress.setValue(0);
    while (i.hasNext()) {
        i.next();
        

        if (progress.wasCanceled())
             break;
        request.setUrl(QUrl(i.value()));
        qDebug() << i.value();
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
  //  playlist_Add( THEPL, qtu( toNativeSeparators(absfilepath)) , NULL, PLAYLIST_APPEND , PLAYLIST_END, true, true );
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
   // int value = (int)((float) bytesSent / (float) bytesTotal * 100);
   // uiProgress.progressBar->setValue(value);
}

void TranscribeWidget::playItem(const QModelIndex& index)
{
    qDebug() << "success";
    QString currentFile = index.model()->index( index.row() , 0).data(Qt::DisplayRole).toString();
    //qDebug() << currentFile;
    if (fileName != "")
    {
        this->saveFile();
    }
    setupModelView();
    currentFile = currentFile + ".trs";
    if(!this->loadFile(currentFile))
    {
        fileName = currentFile;
        
    }
}
/*

void TranscribeWidget::keyPressEvent( QKeyEvent *e )
{

    int i_vlck = qtEventToVLCKey( e );
    if( i_vlck > 0 )
    {
        //var_SetInteger( _mp, "key-pressed", i_vlck );
        e->accept();
    }
    else
        e->ignore();
}
*/
/***************************************************************************
 * Hotkeys converters
 ***************************************************************************/
/*
int TranscribeWidget::qtKeyModifiersToVLC( QInputEvent* e )
{
    int i_keyModifiers = 0;
    if( e->modifiers() & Qt::ShiftModifier ) i_keyModifiers |= KEY_MODIFIER_SHIFT;
    if( e->modifiers() & Qt::AltModifier ) i_keyModifiers |= KEY_MODIFIER_ALT;
    if( e->modifiers() & Qt::ControlModifier ) i_keyModifiers |= KEY_MODIFIER_CTRL;
    if( e->modifiers() & Qt::MetaModifier ) i_keyModifiers |= KEY_MODIFIER_META;
    return i_keyModifiers;
}

int TranscribeWidget::qtEventToVLCKey( QKeyEvent *e )
{
    int i_vlck = 0;
    i_vlck |= qtKeyModifiersToVLC( e );

    bool found = false;
#define HANDLE( qt, vk ) case Qt::qt : i_vlck |= vk; found = true;break
    switch( e->key() )
    {
        HANDLE( Key_Left, KEY_LEFT );
        HANDLE( Key_Right, KEY_RIGHT );
        HANDLE( Key_Up, KEY_UP );
        HANDLE( Key_Down, KEY_DOWN );
        HANDLE( Key_Space, KEY_SPACE );
        HANDLE( Key_Escape, KEY_ESC );
        HANDLE( Key_Return, KEY_ENTER );
        HANDLE( Key_Enter, KEY_ENTER );
        HANDLE( Key_F1, KEY_F1 );
        HANDLE( Key_F2, KEY_F2 );
        HANDLE( Key_F3, KEY_F3 );
        HANDLE( Key_F4, KEY_F4 );
        HANDLE( Key_F5, KEY_F5 );
        HANDLE( Key_F6, KEY_F6 );
        HANDLE( Key_F7, KEY_F7 );
        HANDLE( Key_F8, KEY_F8 );
        HANDLE( Key_F9, KEY_F9 );
        HANDLE( Key_F10, KEY_F10 );
        HANDLE( Key_F11, KEY_F11 );
        HANDLE( Key_F12, KEY_F12 );
        HANDLE( Key_PageUp, KEY_PAGEUP );
        HANDLE( Key_PageDown, KEY_PAGEDOWN );
        HANDLE( Key_Home, KEY_HOME );
        HANDLE( Key_End, KEY_END );
        HANDLE( Key_Insert, KEY_INSERT );
        HANDLE( Key_Delete, KEY_DELETE );
        HANDLE( Key_VolumeDown, KEY_VOLUME_DOWN);
        HANDLE( Key_VolumeUp, KEY_VOLUME_UP );
        HANDLE( Key_VolumeMute, KEY_VOLUME_MUTE );
        HANDLE( Key_MediaPlay, KEY_MEDIA_PLAY_PAUSE );
        HANDLE( Key_MediaStop, KEY_MEDIA_STOP );
        HANDLE( Key_MediaPrevious, KEY_MEDIA_PREV_TRACK );
        HANDLE( Key_MediaNext, KEY_MEDIA_NEXT_TRACK );

    }
    if( !found )
    {
        if( e->key() >= Qt::Key_A && e->key() <= Qt::Key_Z )
            i_vlck += e->key() + 32;
        else if( e->key() >= Qt::Key_Space && e->key() <= Qt::Key_AsciiTilde )
            i_vlck += e->key();
    }
    return i_vlck;
}

int TranscribeWidget::qtWheelEventToVLCKey( QWheelEvent *e )
{
    int i_vlck = 0;
    i_vlck |= qtKeyModifiersToVLC( e );
    if ( e->delta() > 0 )
        i_vlck |= KEY_MOUSEWHEELUP;
    else
        i_vlck |= KEY_MOUSEWHEELDOWN;
    return i_vlck;
}

QString VLCKeyToString( int val )
{
    const char *base = KeyToString (val & ~KEY_MODIFIER);

    QString r = "";
    if( val & KEY_MODIFIER_CTRL )
        r+= "Ctrl+";
    if( val & KEY_MODIFIER_ALT )
        r+= "Alt+";
    if( val & KEY_MODIFIER_SHIFT )
        r+= "Shift+";

    return r + (base ? base : "Unset");
}

*/


void TranscribeWidget::createMenus()
{
     fileMenu = menuBar()->addMenu("&File");
     fileMenu->addAction(addToPlaylistAct);
     fileMenu->addSeparator();
     fileMenu->addAction(saveAct);
     fileMenu->addAction(saveAsAct);
     fileMenu->addSeparator();
     fileMenu->addAction(getTakesAct);
     fileMenu->addAction(postTakesAct);
     fileMenu->addSeparator();
     fileMenu->addAction(exitAct);

     editMenu = menuBar()->addMenu("&Edit");
     editMenu->addAction(preferencesAct);
     editMenu->addAction(hotkeyAct);
     
     helpMenu = menuBar()->addMenu("&Help");
     helpMenu->addAction(aboutAct);
}

void TranscribeWidget::preferences()
{
    SettingsDialog *settings = new SettingsDialog(this);
    settings->show();
}

void TranscribeWidget::createActions()
 {
     addToPlaylistAct = new QAction("&Add to Playlist", this);
     addToPlaylistAct->setShortcuts(QKeySequence::New);
     addToPlaylistAct->setStatusTip("Add an existing or new item to playlist");
     connect(addToPlaylistAct, SIGNAL(triggered()), playlist, SLOT(addToPlaylistDialog()));

     saveAct = new QAction("&Save", this);
     saveAct->setShortcuts(QKeySequence::Save);
     saveAct->setStatusTip("Save the document to disk");
     connect(saveAct, SIGNAL(triggered()), this, SLOT(saveFile()));

     saveAsAct = new QAction("Save As", this);
     saveAsAct->setStatusTip("Save the document to disk");
     connect(saveAsAct, SIGNAL(triggered()), this, SLOT(saveFileAs()));

     preferencesAct = new QAction("Preferences", this);
     preferencesAct->setStatusTip("Bungeni Transcribe Preferences");
     connect(preferencesAct, SIGNAL(triggered()), this, SLOT(preferences()));
     
     hotkeyAct = new QAction("Hotkey Settings", this);
     hotkeyAct->setStatusTip("Hotkey Settings");
     connect(hotkeyAct, SIGNAL(triggered()), this, SLOT(hotkeySettings()));
     
     getTakesAct = new QAction("Get Takes", this);
     getTakesAct->setStatusTip("Get Assigned Takes from Bungeni Portal Server");
     connect(getTakesAct, SIGNAL(triggered()), this, SLOT(getTakes()));
     
     postTakesAct = new QAction("Post Takes", this);
     postTakesAct->setStatusTip("Post Transcribed Takes to Bungeni Portal Server");
     connect(postTakesAct, SIGNAL(triggered()), this, SLOT(getTakes()));
      
     exitAct = new QAction("E&xit", this);
     //exitAct->setShortcut("Ctrl+Q");
     exitAct->setStatusTip("Exit the application");
     connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

     aboutAct = new QAction("&About", this);
     aboutAct->setStatusTip("Show the application's About box");
     connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));
     
     
}

void TranscribeWidget::hotkeySettings()
{
    HotkeyWidget *hotkey = new HotkeyWidget();
    //qDebug() << "Hotkey";
    qDebug() << "Hotkey";
    hotkey->show(); 
    
}


void TranscribeWidget::about()
{
    aboutWidget *about = new aboutWidget();
    about->show(); 
}
