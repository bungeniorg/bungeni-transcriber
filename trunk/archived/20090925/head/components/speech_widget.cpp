#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc_vout.h>
#include "speech_widget.hpp"


#include <QHBoxLayout>
#include <QGroupBox>
SpeechWidget::SpeechWidget(QWidget * parent) : QWidget(parent)
{
    ui.setupUi(this);

    horizontalSlider = new QxtSpanSlider();
    horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
    horizontalSlider->setOrientation(Qt::Horizontal);
    ui.gridLayout->addWidget(horizontalSlider, 0, 1, 1, 3);

    QObject::connect(ui.startTime, SIGNAL(timeChanged( const QTime & )), this, SLOT(updateStartTime( const QTime &)));
    QObject::connect(ui.endTime, SIGNAL(timeChanged( const QTime & )), this, SLOT(updateEndTime( const QTime &)));
    QObject::connect(horizontalSlider, SIGNAL( lowerValueChanged( int ) ), this, SLOT( updateStartTime( int ) ));
    QObject::connect(horizontalSlider, SIGNAL( upperValueChanged( int ) ), this, SLOT( updateEndTime( int ) ));  
}

SpeechWidget::~SpeechWidget()
{}

void SpeechWidget::setValues(QString _name, QString _speech, int _startTime, int _endTime)
{
    ui.name->setText(_name);
    ui.speech->setText(_speech);
}


void SpeechWidget::updateEndTime( const QTime & time )
{
	int temp;
	temp = time.hour() * 3600 + time.minute()*60 + time.second();
	horizontalSlider->setUpperValue(temp);
}

void SpeechWidget::updateStartTime( const QTime & time )
{
	int temp;
	temp = time.hour() * 3600 + time.minute()*60 + time.second();
	horizontalSlider->setLowerValue(temp);
}

void SpeechWidget::updateStartTime( int time )
{
	int hours, minutes, seconds;
	QString temp;
	QTime start;
	QString timeText = "";
	timeText = SpeechWidget::timeSecondstoString(time);
	start = QTime::fromString(timeText);
	ui.startTime->setTime(start);
	
}

void SpeechWidget::updateEndTime( int time )
{
	int hours, minutes, seconds;
	QString temp;
	QTime end;
	QString timeText = "";
	timeText = SpeechWidget::timeSecondstoString(time);
	end = QTime::fromString(timeText);
	ui.endTime->setTime(end);
}

//Converts number of seconds into time in this format hh:mm:ss
QString SpeechWidget::timeSecondstoString(int time)
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

