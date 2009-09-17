#ifndef _SPEECHWIDGETS_H_
#define _SPEECHWIDGETS_H_

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc_common.h>
#include <vlc_interface.h>
#include <vlc_aout.h>

#include "qt4.hpp"
#include "main_interface.hpp"
#include "input_manager.hpp"
#include "qxtspanslider/qxtspanslider.h"
#include "transcribe/speech.h"

#include <QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QTimeEdit>

class SpeechWidget : public QWidget
{
    Q_OBJECT
public:
    SpeechWidget(QWidget * parent = 0);
    virtual ~SpeechWidget();
    void setValues(QString _name, QString _speech, int _startTime, int _endTime);
private:
    QString timeSecondstoString(int time);
    Ui::Speech ui;
QxtSpanSlider *horizontalSlider; 
public slots:

    void updateStartTime( const QTime & );
     void updateEndTime( const QTime & );
     void updateStartTime( int );
     void updateEndTime( int );
};



#endif
