#ifndef _INPLACEEDITOR_H_
#define _INPLACEEDITOR_H_


#include "../components/qxtspanslider/qxtspanslider.h"
#include "inplace_editor.h"
#include "input_manager.hpp"
#include <QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QTimeEdit>
#include <QModelIndex>
#include "myTextEdit/myTextEdit.hpp"
class InplaceEditor : public QWidget
{
    Q_OBJECT
public:
    InplaceEditor(QWidget * parent = 0);
    virtual ~InplaceEditor();
    void setValues(QString _name, QString _speech, int _startTime, int _endTime);
    QString getName();
    QString getSpeech();
    QTime getStartTime();
    QTime getEndTime();
    void setName(QString);
    void setSpeech(QString);
    void setStartTime(int);
    void setEndTime(int);
    void setIndex(const QModelIndex& );
private:
    QString timeSecondstoString(int time);
    Ui::inPlaceEditor ui;
    QxtSpanSlider *horizontalSlider; 
    myTextEdit *speechText;
    QModelIndex index;
	intf_thread_t *p_intf;
public slots:
    void updateStartTime( const QTime & );
    void updateEndTime( const QTime & );
    void updateStartTime( int );
    void updateEndTime( int );
    void bold();
    void italics();
    void underline();
    void save();
    void cancel();
signals:
    void close(QWidget *);
    void cancelled(QWidget *);
    void closeIndex(QModelIndex); 
};



#endif
