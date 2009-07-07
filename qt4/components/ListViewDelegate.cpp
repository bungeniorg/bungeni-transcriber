#include "ListViewDelegate.hpp"
//#include "speech_widget.hpp"

#include <QString>
#include <QTextDocument>
#include <QModelIndex>
#include <QPainter>

ListViewDelegate::ListViewDelegate(QObject *parent)
    		: QAbstractItemDelegate(parent)
	{
	}

void ListViewDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                         const QModelIndex &index) const
{
	int i_startTime, i_endTime;
	
	if(option.state & QStyle::State_Selected){
    			painter->fillRect(option.rect, option.palette.color(QPalette::Highlight));
    	}	
    		
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
	    QModelIndex textIndex = index.model()->index( index.row() , 0);
	    QTextDocument *Qtext = new QTextDocument();
  	    Qtext->setHtml(textIndex.data(Qt::DisplayRole).toString()); 
    	QString text = Qtext->toPlainText();
	    int numberoflines = (text.length() / 65 ) ;
       	return QSize(option.rect.width(), 50 + (25 * numberoflines));
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

