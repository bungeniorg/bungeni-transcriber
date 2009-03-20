/*****************************************************************************
 * transcribe.cpp : Transcribe window
 ****************************************************************************
 * Copyright (C) 2006 the VideoLAN team
 * $Id$
 *
 * Author: Miano Njoka <miano.feedback@gmail.com>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "dialogs/transcribe.hpp"
#include "dialogs_provider.hpp"
#include "transcribe/listviewdelegate.hpp"
#include "transcribe/util/transcribeKeySelector.hpp"
#include <vlc_keys.h>
#include "util/customwidgets.hpp"
#include "components/preferences_widgets.hpp"
#include "main_interface.hpp"
#include "input_manager.hpp"
#include "util/input_slider.hpp"
#include <QTabWidget>
#include <QGridLayout>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QPainter>
#include <QTimeEdit>
#include <QTime>
#include <QDebug>
#include <QString>
#include <QtGui>



TranscribeDialog *TranscribeDialog::instance = NULL;

TranscribeDialog::TranscribeDialog( intf_thread_t *_p_intf ): QVLCFrame( _p_intf )
 {
 
 
     QSettings settings("Bungeni", "transcribe");
      QStringList keys = settings.childKeys();
     	
     if (keys.size()==0)
     {
    	settings.setValue("Play-Pause", keyToVLCKey(Qt::ControlModifier, Qt::Key_P));
    	settings.setValue("Stop", keyToVLCKey(Qt::ControlModifier, Qt::Key_W));
    	settings.setValue("Add Transcript", keyToVLCKey(Qt::ControlModifier, Qt::Key_A));
    	settings.setValue("Remove Transcript", keyToVLCKey(Qt::ControlModifier, Qt::Key_R));
    	settings.setValue("Save", keyToVLCKey(Qt::ControlModifier, Qt::Key_S));
    	settings.setValue("Open", keyToVLCKey(Qt::ControlModifier, Qt::Key_O));
    	settings.setValue("Faster", keyToVLCKey(Qt::ControlModifier, Qt::Key_F));
    	settings.setValue("Slower", keyToVLCKey(Qt::ControlModifier, Qt::Key_I));
    	settings.setValue("Very short backwards jump", keyToVLCKey(Qt::ControlModifier, Qt::Key_Y));
    	settings.setValue("Very short forwards jump", keyToVLCKey(Qt::ControlModifier, Qt::Key_U));
    	settings.setValue("Short backwards jump", keyToVLCKey(Qt::ControlModifier, Qt::Key_T));
    	settings.setValue("Short forwards jump", keyToVLCKey(Qt::ControlModifier, Qt::Key_K));
    	settings.setValue("Medium backwards jump", keyToVLCKey(Qt::ControlModifier, Qt::Key_L));
    	settings.setValue("Medium forwards jump", keyToVLCKey(Qt::ControlModifier, Qt::Key_J));
    	settings.setValue("Long backwards jump", keyToVLCKey(Qt::ControlModifier, Qt::Key_H));
    	settings.setValue("Long forwards jump", keyToVLCKey(Qt::ControlModifier, Qt::Key_G));
    	
    }
     ui.setupUi(this);
     horizontalSlider = new QxtSpanSlider(this);
     horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
     horizontalSlider->setGeometry(QRect(110, 360, 361, 20));
     horizontalSlider->setOrientation(Qt::Horizontal);
	
     textEdit = new myTextEdit(this);
     textEdit->setObjectName(QString::fromUtf8("textEdit"));
     textEdit->setGeometry(QRect(100, 450, 481, 151));	
     
     endTime = new QTimeEdit(this);
     endTime->setTimeRange(QTime(0, 0, 0, 0), QTime(24, 0, 0, 0));
     endTime->setGeometry(QRect(490, 350, 91, 28));
     endTime->setDisplayFormat("hh:mm:ss");    
     startTime = new QTimeEdit(this);
     startTime->setTimeRange(QTime(0, 0, 0, 0), QTime(24, 0, 0, 0));
     startTime->setGeometry(QRect(10, 350, 91, 28));
     startTime->setDisplayFormat("hh:mm:ss");      
     QObject::connect(ui.openButton, SIGNAL(clicked()), this, SLOT(openFile()));
     QObject::connect(ui.saveButton, SIGNAL(clicked()), this, SLOT(saveFile()));
     QObject::connect(ui.saveAsButton, SIGNAL(clicked()), this, SLOT(saveFileAs()));
     QObject::connect(ui.newButton, SIGNAL(clicked()), this, SLOT(newFile()));
     QObject::connect(ui.addTranscriptButton, SIGNAL(clicked()), this, SLOT(addTranscript()));
     QObject::connect(ui.preference, SIGNAL(clicked()), this, SLOT(preferenceDialog()));
     QObject::connect(ui.removeTranscriptButton, SIGNAL(clicked()), this, SLOT(removeTranscript()));
     
     QObject::connect(ui.table, SIGNAL(clicked(QModelIndex)), this, SLOT(loadValues(QModelIndex)));
     
     QObject::connect(ui.table, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(play(QModelIndex)));
     
     QObject::connect(textEdit, SIGNAL(textChanged()), this, SLOT(updateText()));
     QObject::connect(ui.person, SIGNAL(textEdited( const QString & )), this, SLOT(updatePerson( const QString & )));
     QObject::connect(startTime, SIGNAL(timeChanged( const QTime & )), this, SLOT(updateStartTime( const QTime &)));
     QObject::connect(endTime, SIGNAL(timeChanged( const QTime & )), this, SLOT(updateEndTime( const QTime &)));
     QObject::connect(horizontalSlider, SIGNAL( lowerValueChanged( int ) ), this, SLOT( updateStartTime( int ) ));
     QObject::connect(horizontalSlider, SIGNAL( upperValueChanged( int ) ), this, SLOT( updateEndTime( int ) ));    
     
      
     setupModel();
     setupViews();
     
 }
/*
int TranscribeDialog::PutAction( intf_thread_t *p_intf, int i_action )
{
    intf_sys_t *p_sys = p_intf->p_sys;
    int i_ret = VLC_EGENERIC;

    vlc_object_lock( p_intf );
    if ( p_sys->i_size >= BUFFER_SIZE )
        msg_Warn( p_intf, "event buffer full, dropping key actions" );
    else
        p_sys->p_actions[p_sys->i_size++] = i_action;

    vlc_object_signal_unlocked( p_intf );
    vlc_object_unlock( p_intf );
    return i_ret;
}
*/
int TranscribeDialog::keyModifiersToVLC( Qt::KeyboardModifiers modifiers )
{
    int i_keyModifiers = 0;
    if( modifiers & Qt::ShiftModifier ) i_keyModifiers |= KEY_MODIFIER_SHIFT;
    if( modifiers & Qt::AltModifier ) i_keyModifiers |= KEY_MODIFIER_ALT;
    if( modifiers & Qt::ControlModifier ) i_keyModifiers |= KEY_MODIFIER_CTRL;
    if( modifiers & Qt::MetaModifier ) i_keyModifiers |= KEY_MODIFIER_META;
    return i_keyModifiers;
}

int TranscribeDialog::keyToVLCKey(Qt::KeyboardModifiers modifiers, int key )
{
    int i_vlck = 0;
    i_vlck |= keyModifiersToVLC( modifiers );

    if( key >= Qt::Key_A && key <= Qt::Key_Z )
            i_vlck += key + 32;
   else if( key >= Qt::Key_Space && key <= Qt::Key_AsciiTilde )
            i_vlck += key;
    return i_vlck;
}




void TranscribeDialog::updateText()
{
//qDebug( "Slot:updateTExt entered" );
	model->setData(model->index(currentIndex.row(),0), textEdit->toHtml());
}

void TranscribeDialog::updatePerson( const QString & text )
{
	//qDebug( "slot:updatePerson entered" );
	model->setData(model->index(currentIndex.row(),1), text);
	//model->setData(model->index(currentIndex.row(),1),"asdfasd");
}

void TranscribeDialog::updateStartTime( const QTime & time )
{
	//qDebug( "slot:updateStartTime entered" );
	int temp;
	temp = time.hour() * 3600 + time.minute()*60 + time.second();
	horizontalSlider->setLowerValue(temp);
	model->setData(model->index(currentIndex.row(),2), temp);
}

void TranscribeDialog::preferenceDialog()
{
	ConfigControl *control;	
	module_config_t *p_config;
        
        int line = 0;
         p_config = config_FindConfig( VLC_OBJECT(p_intf), "key-fullscreen" );
        
        QGridLayout *gLayout = new QGridLayout;
        QDialog *preferenceDialog = new QDialog(this);
        if (preferenceDialog->objectName().isEmpty())
        preferenceDialog->setObjectName(QString::fromUtf8("preferenceDialog"));
    	preferenceDialog->resize(400, 300);
	qDebug ("p_config");
        preferenceDialog->setWindowTitle(Q_("Preferences Dialog", 0));
    	Q_UNUSED(preferenceDialog);
        control = new transcribeKeySelectorControl( VLC_OBJECT(p_intf), p_config ,
                                                this, gLayout, line );
       
        QPushButton *save = new QPushButton("Save", preferenceDialog);
        QPushButton *cancel = new QPushButton("Close", preferenceDialog);
        gLayout->addWidget(save,2,0);
        gLayout->addWidget(cancel,2,1);
        
             QObject::connect(save, SIGNAL(clicked()), control, SLOT(doApply()));
     QObject::connect(cancel, SIGNAL(clicked()), preferenceDialog, SLOT(close()));
        
        
         preferenceDialog->setLayout( gLayout );
        preferenceDialog->exec();
        qDebug ("p_config 3");
}


void TranscribeDialog::updateEndTime( const QTime & time )
{
	int temp;
	//qDebug( "Slot:updateEndTime entered" );
	temp = time.hour() * 3600 + time.minute()*60 + time.second();
	horizontalSlider->setUpperValue(temp);
	model->setData(model->index(currentIndex.row(),3), QVariant(temp));
}

void TranscribeDialog::updateStartTime( int time )
{
	int hours, minutes, seconds;
	QString temp;
	QTime start;
	QString timeText = "";
	timeText = TranscribeDialog::timeSecondstoString(time);
	//qDebug() << "Slot: new updateStartTime entered" << timeText;
	start = QTime::fromString(timeText);
	startTime->setTime(start);
	
	model->setData(model->index(currentIndex.row(),2), QVariant(time));
	
	
	if ( THEMIM->getIM()->hasInput() )
    	{
    		int64_t i_length = var_GetTime(  THEMIM->getInput() , "length" );
        	int64_t i_time = (int64_t) time * 1000000;
          	float pos = 0.0f;
        		
        	if (i_time > i_length) 
        		QMessageBox::warning(this, "Error", "Current Media does not have that timestamp. Please ensure that transcript file is for the right media file");
        	else
        	{
        		pos = (float) i_time / (float) i_length;
        		var_SetFloat( THEMIM->getInput(), "position", pos );
        	}
    	}
	
}

void TranscribeDialog::keyPressEvent( QKeyEvent *e )
{
    //int i_vlck = qtEventToVLCKey( e );
    //if( i_vlck > 0 )
    //{
    	
       // var_SetInteger( p_intf->p_libvlc, "key-pressed", i_vlck );
      //  qDebug ("qvlc frame i_vlck: %d", i_vlck);
     //   e->accept();
    //}
    //else
    
   QSettings settings("Bungeni", "transcribe");
     	QStringList keys = settings.childKeys();
     	int values[30];
     	int j=0, i=0;
     	int event = qtEventToVLCKey(e);
     	bool found = false;
     	int i_action;
     	keys = settings.childKeys();
     	if (event > 0)
     	{
     		for (i = 0; i < keys.size(); ++i)
     		{
        	    values[i]=  settings.value(keys.at(i)).toInt(); 
    		}
    		while ((found == false) && (j <= i))
    		{
    			if( values[j] == event)
    			{
    				qDebug() << "accept" << event;
    				
    				if (keys.at(j) == "Faster")
    				{
    					i_action = ACTIONID_FASTER;
    				}    			
    				else if (keys.at(j) == "Play-Pause")
    				{
    					i_action = ACTIONID_PLAY_PAUSE;
    				}
    				else if (keys.at(j) == "Stop")
    				{
    					i_action = ACTIONID_STOP;
    				}
    				else if (keys.at(j) == "Add Transcript")
    				{
    					addTranscript();
    				}
    				else if (keys.at(j) == "Remove Transcript")
    				{
    					removeTranscript();
    				}
    				else if (keys.at(j) == "Save")
    				{
    					saveFile();
    				}
    				else if (keys.at(j) == "Open")
    				{
    					openFile();
    				}
    				else if (keys.at(j) == "Slower")
    				{
    					i_action = ACTIONID_SLOWER;
    				}
    				else if (keys.at(j) == "Very short backwards jump")
    				{
    					i_action = ACTIONID_JUMP_BACKWARD_EXTRASHORT;
    				}
    				else if (keys.at(j) == "Very short forwards jump")
    				{
    					i_action = ACTIONID_JUMP_FORWARD_EXTRASHORT;
    				}
    				else if (keys.at(j) == "Short forwards jump")
    				{
    					i_action = ACTIONID_JUMP_BACKWARD_SHORT;
    				}
    				else if (keys.at(j) == "Short backwards jump")
    				{
    					i_action = ACTIONID_JUMP_FORWARD_SHORT;
    				}
    				else if (keys.at(j) == "Medium forwards jump")
    				{
    					i_action = ACTIONID_JUMP_FORWARD_MEDIUM;
    				}
    				else if (keys.at(j) == "Medium backwards jump")
    				{
    					i_action = ACTIONID_JUMP_BACKWARD_MEDIUM;
    				}
    				else if (keys.at(j) == "Long forwards jump")
    				{
    					i_action = ACTIONID_JUMP_FORWARD_LONG;
    				}
    				else if (keys.at(j) == "Long backwards jump")
    				{
    					i_action = ACTIONID_JUMP_BACKWARD_LONG;
    				}
    				
    				 found = true;
    		    		 var_SetInteger( p_intf->p_libvlc, "key-action", i_action );
    				qDebug() << "i_action : " << i_action;
    				e->accept();
    			}
	    		j++;
    		}
    	
    		if (found == false)
    		{
    			qDebug() << "ignore" << event;
    			//QTextEdit::keyPressEvent(e);
    			e->ignore();
    		}
	}
    /*
    if( ( e->modifiers() &  Qt::ControlModifier ) && ( e->key() == Qt::Key_N ))
    {
    		openFile();
    		e->accept();
    }
    else if ( ( e->modifiers() &  Qt::ControlModifier ) && ( e->key() == Qt::Key_P ))
    {
        if( THEPL->current.i_size > 0 )
	{
		if ( THEMIM->getIM()->hasInput() )
    		{	
    			int64_t i_length = var_GetTime(  THEMIM->getInput() , "length" );
		qDebug() << "i_length : " << i_length;
    				var_SetTime( THEMIM->getInput(), "time", (int64_t)(1000000) );
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
    	e->accept();
    }
    else
    {
        e->ignore();
    } */
    /*
    if (action == "Open")
    {
    	openFile();
    	e->accept();
    }
    else
    {
    	e->ignore();
    }
    */
}

void TranscribeDialog::updateEndTime( int time )
{
	int hours, minutes, seconds;
	QString temp;
	QTime end;
	QString timeText = "";
	timeText = TranscribeDialog::timeSecondstoString(time);
	//qDebug( "Slot: new updateEndTime entered %d %d %d", hours, minutes, seconds);
	//qDebug() << "Slot: new updateEndTime entered" << timeText;
	end = QTime::fromString(timeText);
	endTime->setTime(end);
	model->setData(model->index(currentIndex.row(),3), time);
	
	if ( THEMIM->getIM()->hasInput() )
    	{
    		int64_t i_length = var_GetTime(  THEMIM->getInput() , "length" );
        	int64_t i_time = (int64_t) time * 1000000;
          	float pos = 0.0f;
        		
        	if (i_time > i_length) 
        		QMessageBox::warning(this, "Error", "Current Media does not have that timestamp. Please ensure that transcript file is for the right media file");
        	else
        	{
        		pos = (float) i_time / (float) i_length;
        		var_SetFloat( THEMIM->getInput(), "position", pos );
        	}
    	}

	
}


//Converts number of seconds into time in this format hh:mm:ss
QString TranscribeDialog::timeSecondstoString(int time)
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

void  TranscribeDialog::loadValues(QModelIndex _index)
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
	
	textEdit->setPlainText(text.toString());
	//textEdit->setHtml(text.toString());
	ui.person->setText(person.toString());
	
	start = QTime::fromString(this->timeSecondstoString(i_startTime));
	startTime->setTime(start);
	end = QTime::fromString(this->timeSecondstoString(i_endTime));
	endTime->setTime(end);
	
	
	horizontalSlider->setLowerValue(i_startTime);
	horizontalSlider->setUpperValue(i_endTime);
} 
 
void  TranscribeDialog::play(QModelIndex _index)
{
	QModelIndex index = filterModel->mapToSource(_index);
	
	int temp;
	QVariant startTimeTxt;
	QTime start;
	startTimeTxt = model->data(model->index(index.row(), 2));
	start = QTime::fromString(timeSecondstoString(startTimeTxt.toInt()));
	//temp = start.hour() * 3600 + start.minute()*60 + start.second();
	//qDebug( "play %d", temp);
	//float temp2 = ((float)(temp)) / ((float)(i_length));
	//THEMIM->getIM()->sliderUpdate( temp2 );
	qDebug() << "Time : " << start.toString();
	if( THEPL->current.i_size > 0 )
	{
		
		if ( THEMIM->getIM()->hasInput() )
    		{
    			int64_t i_length = var_GetTime(  THEMIM->getInput() , "length" );
		qDebug() << "i_length : " << i_length;
        		int64_t i_time = (int64_t)
            			( QTime( 0, 0, 0 ).msecsTo( start ) ) * 1000;
            		qDebug() << "i_time : " << i_time;
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
 void TranscribeDialog::setupViews()
{

	 
	myDelegate *delegate = new myDelegate(this);
	ui.table->setItemDelegate(delegate);
	//myDelegate delegate;
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

void TranscribeDialog::addTranscript()
{
	qDebug( "Add Transcript entered" );
	if( THEPL->current.i_size > 0 )
    	{
		i_length = var_GetTime(  THEMIM->getInput() , "length" ) / 1000000;
		
		horizontalSlider->setMinimum(0);
     		horizontalSlider->setMaximum(i_length);
     		
     		startTime->setMaximumTime(QTime::fromString(TranscribeDialog::timeSecondstoString(i_length)));
      		endTime->setMaximumTime(QTime::fromString(TranscribeDialog::timeSecondstoString(i_length)));
		model->insertRows(model->rowCount(), 1, QModelIndex());
        	
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
     		
     		QMessageBox::warning(this, "Error", "Please open a media file through main VLC menu");
     	}
}


void TranscribeDialog::removeTranscript()
{
	QModelIndexList indexes = selectionModel->selectedIndexes();
     	QModelIndex index;
	//qDebug() << "entered removeTranscript";
     	foreach(index, indexes) {
     		qDebug() << "removeTranscript" << index.row();
         	model->removeRow(index.row(),QModelIndex());
    	 }
}

void TranscribeDialog::setupModel()
{
    model = new QStandardItemModel(0,4,this);
    //model->sort(3, Qt::AscendingOrder);
}


void TranscribeDialog::saveFile()
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

void TranscribeDialog::saveFileAs()
{
	QString newfileName = QFileDialog::getSaveFileName(this, tr("File Save As"), "", tr("Transcript Files (*.trs);;Any File (*.*)"));
	fileName = newfileName;
	
	this->writeFile(newfileName);
}

void TranscribeDialog::openFile()
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

void TranscribeDialog::newFile()
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
				setupModel();
				setupViews();
			break;
			case QMessageBox::Discard:
				setupModel();
				setupViews();
			break;
			case QMessageBox::Cancel:
			break;
		}
        }       
        else
        {
        	setupModel();
		setupViews();	
        } 
	
	
}

bool TranscribeDialog::writeFile(QString fileName)
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
    	writer.writeAttribute("startTime", TranscribeDialog::timeSecondstoString(model->data(model->index(i, 2, QModelIndex()),Qt::DisplayRole).toInt()));
    	writer.writeAttribute("endTime", TranscribeDialog::timeSecondstoString(model->data(model->index(i, 3, QModelIndex()),Qt::DisplayRole).toInt()));
        writer.writeCharacters(model->data(model->index(i, 0, QModelIndex()),Qt::DisplayRole).toString());
        writer.writeEndElement();    
    }
    writer.writeEndDocument();
    return true;
}


TranscribeDialog::~TranscribeDialog()
{
    //writeSettings( "TranscribePanel" );
}

void TranscribeDialog::changedItem( int i_status )
{
    if( i_status != END_S ) return;
}

