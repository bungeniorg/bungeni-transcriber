/********************************************************************
 * ListViewDelegate.cpp
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
 
 


#include "ListViewDelegate.hpp"
#include "inplaceEditor.hpp"

#include <QString>
#include <QTextDocument>
#include <QModelIndex>
#include <QPainter>
#include <QDebug>

ListViewDelegate::ListViewDelegate(QObject *parent)
    		: QAbstractItemDelegate(parent)
	{
	   // current = NULL;
	}

void ListViewDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                         const QModelIndex &index) const
{
	int i_startTime, i_endTime;
	/*
	if(option.state & QStyle::State_Selected){
    			painter->fillRect(option.rect, option.palette.color(QPalette::Highlight));
    	}	
    	*/	
   	QModelIndex textIndex = index.model()->index( index.row() , 0);
   	QModelIndex personIndex = index.model()->index( index.row() , 1);
   	QModelIndex startTimeIndex = index.model()->index( index.row() , 2);
   	QModelIndex endTimeIndex = index.model()->index( index.row() , 3);
  	  	
  	QTextDocument *Qtext = new QTextDocument();
  	Qtext->setHtml(textIndex.data(Qt::DisplayRole).toString()); 
  	QString text = Qtext->toPlainText();
  	QString personTxt = personIndex.data(Qt::DisplayRole).toString();
  	i_startTime = startTimeIndex.data(Qt::DisplayRole).toInt();
  	i_endTime = endTimeIndex.data(Qt::DisplayRole).toInt();
 
	QString startTimeTxt = "Start Time : "+this->timeSecondstoString(i_startTime);
  	QString endTimeTxt = "End Time : "+this->timeSecondstoString(i_endTime);
  	  	
  	QRect rStartTime = option.rect.adjusted(2, 2, 150, 29);
  	painter->drawText(rStartTime.left(), rStartTime.top(), rStartTime.width(), rStartTime.height(), Qt::AlignTop|Qt::AlignLeft|Qt::TextWordWrap, startTimeTxt, &rStartTime);
  	  	
  	QRect rEndTime = option.rect.adjusted(151, 2, 200, 29);
  	painter->drawText(rEndTime.left(), rEndTime.top(), rEndTime.width(), rEndTime.height(), Qt::AlignTop|Qt::AlignLeft|Qt::TextWordWrap, endTimeTxt, &rEndTime);
  	  	
  	QRect rText = option.rect.adjusted(2, 30, 151, -2);
  	painter->drawText(rText.left(), rText.top(), rText.width(), rText.height(), Qt::AlignTop|Qt::AlignLeft|Qt::TextWordWrap, personTxt, &rText);
  	  	
  	QRect r = option.rect.adjusted(151, 30, -2, -2);
  	painter->drawText(r.left(), r.top(), r.width(), r.height(), Qt::AlignTop|Qt::AlignLeft|Qt::TextWordWrap, text, &r);
  	
}


QSize ListViewDelegate::sizeHint(const QStyleOptionViewItem &option,
                             const QModelIndex &index) const
{
       // if(option.state & QStyle::State_Selected){
       if (editing == true)
       {
            if (current == index)
            {
                //qDebug() << "Yes";
    			return QSize(option.rect.width(), 350);	
    	    }	
    	    else
    	    {
    	        return QSize(option.rect.width(), 50);
    	    }
        }
        else 
    	{
    	    if (current == index)
            {
       	    QModelIndex textIndex = index.model()->index( index.row() , 0);
	        QTextDocument *Qtext = new QTextDocument();
  	        Qtext->setHtml(textIndex.data(Qt::DisplayRole).toString()); 
    	    QString text = Qtext->toPlainText();
	        int numberoflines = (text.length() / 65 ) ;
       	    return QSize(option.rect.width(), 50 + (25 * numberoflines));
       	    }
       	    else
       	    {
       	        return QSize(option.rect.width(), 50);
       	    }
       	 }
}
	

QString ListViewDelegate::timeSecondstoString(const int time) const
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

 QWidget *ListViewDelegate::createEditor(QWidget *parent,
     const QStyleOptionViewItem & option,
     const QModelIndex & index ) const
 {
     InplaceEditor *editor = new InplaceEditor(parent);
     editor->setIndex(index);
     QObject::connect( editor, SIGNAL(close(QWidget *)), this, SLOT( editorClose(QWidget *) ) );
     QObject::connect( this, SIGNAL(commitData(QWidget *)), this, SIGNAL( closeEditor(QWidget *) ) );
     
     
     QObject::connect( editor, SIGNAL(closeIndex(QModelIndex)), this, SLOT( display(QModelIndex) ) );
     QObject::connect( editor, SIGNAL(cancelled(QWidget *)), this, SIGNAL( closeEditor(QWidget *) ) );
     
     editor->setGeometry(option.rect);
    return editor;
 }

 void ListViewDelegate::editorClose(QWidget *editor)
 {
    emit commitData(editor);
 }

  void ListViewDelegate::setEditorData(QWidget *editor_,
                                     const QModelIndex &index) const
 {
    InplaceEditor *editor = static_cast<InplaceEditor*>(editor_);
    QModelIndex textIndex = index.model()->index( index.row() , 0);
   	QModelIndex personIndex = index.model()->index( index.row() , 1);
   	QModelIndex startTimeIndex = index.model()->index( index.row() , 2);
   	QModelIndex endTimeIndex = index.model()->index( index.row() , 3);
   	QModelIndex completeIndex = index.model()->index( index.row() , 4);
  	 int i_startTime, i_endTime; 	
  	//QTextDocument *Qtext = new QTextDocument();
  	//Qtext->setHtml(textIndex.data(Qt::DisplayRole).toString()); 
  	//QString text = Qtext->toPlainText();
  	QString personTxt = personIndex.data(Qt::DisplayRole).toString();
  	i_startTime = startTimeIndex.data(Qt::DisplayRole).toInt();
  	i_endTime = endTimeIndex.data(Qt::DisplayRole).toInt();
  	bool complete = completeIndex.data(Qt::DisplayRole).toBool();
  	qDebug() << "Set Editor data Complete = "<< complete;
  	editor->setName(personTxt);
  	//editor->setSpeech(text);
  	editor->setSpeech(textIndex.data(Qt::DisplayRole).toString());
  	editor->setStartTime(i_startTime);
  	editor->setEndTime(i_endTime);
  	editor->setComplete(complete);
 }

 void ListViewDelegate::setModelData(QWidget *editor_, QAbstractItemModel *model,
                                    const QModelIndex &index) const
 {
    InplaceEditor *editor = static_cast<InplaceEditor*>(editor_);
    model->setData(model->index( index.row() , 1), editor->getName());
    model->setData(model->index( index.row() , 4), editor->getComplete());
    qDebug() << "Set Model data Complete = "<<editor->getComplete();
    model->setData(model->index( index.row() , 0), editor->getSpeech());
    QTime time = editor->getStartTime();
    int temp;
	temp = time.hour() * 3600 + time.minute()*60 + time.second();
    model->setData(model->index( index.row() , 2), temp);
    time = editor->getEndTime();
    temp = time.hour() * 3600 + time.minute()*60 + time.second();
    model->setData(model->index( index.row() , 3), temp);
 }
 
 void ListViewDelegate::updateEditorGeometry(QWidget *editor,
     const QStyleOptionViewItem &option, const QModelIndex &/* index */) const
 {
     editor->setGeometry(option.rect);
 }

void ListViewDelegate::currentEditing(QModelIndex index)
{
    current = index;
    editing = true;
    //static_cast<QWidget*>(QObject::sender())->repaint();
    emit sizeHintChanged(index);
}

void ListViewDelegate::display(QModelIndex index)
{
    editing = false;
    current = index;
    //static_cast<QWidget*>(QObject::sender())->repaint();
    qDebug( "display entered" );
    emit sizeHintChanged(index);
}
