#ifndef _TRANSCRIBEWIDGETS_H_
#define _TRANSCRIBEWIDGETS_H_

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc_common.h>
#include <vlc_interface.h>
#include <vlc_aout.h>

#include "qt4.hpp"
#include "main_interface.hpp"
#include "input_manager.hpp"

#include <QWidget>
#include <QTemporaryFile>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTableView>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QItemSelectionModel>
#include <QNetworkReply>
#include <QHash>
#include "ListViewDelegate.hpp"
#include "transcribe/speech2.h"
#include "qxtspanslider/qxtspanslider.h"
#include "transcribe/uploadProgress.h"
#include "transcribe/upload/formpost.hpp"
class TranscribeWidget : public QFrame
{
    Q_OBJECT
public:
    
    static TranscribeWidget * getInstance( intf_thread_t *p_intf )
    {
        if( !instance)
            instance = new TranscribeWidget( p_intf );
        return instance;
    }
    static void killInstance()
    {
        if( instance ) delete instance;
        instance = NULL;
    }
    virtual ~TranscribeWidget();
    QTemporaryFile * writeTemp();
    bool post();
    bool takes();
    void refresh(const QModelIndex & index);
    intf_thread_t * getp_intf(){return p_intf;}
protected:
	virtual void keyPressEvent( QKeyEvent *keyEvent );
private:
TranscribeWidget( intf_thread_t *);
    intf_thread_t *p_intf;
    QTableView *table;
    static TranscribeWidget *instance;
    QVBoxLayout *mainLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    ListViewDelegate *delegate;
    QStandardItemModel *model;
    QSortFilterProxyModel *filterModel;
    QItemSelectionModel *selectionModel;
    Ui::Speech ui;
    void setupModelView();
    QxtSpanSlider *horizontalSlider; 
    QString timeSecondstoString(int time);
    QModelIndex currentIndex;

    bool writeFile(QString fileName);
    QWidget *progressWidget; 
    Ui::uploadProgress uiProgress;
    QString fileName;
    FormPostPlugin * posta;
    QNetworkReply *reply;
    QHash<QString, QString> hash;
    
    bool loadFile(QString newfileName);
public slots:
    void addSpeech();
    void removeSpeech();
   // void edit(QModelIndex);
    /*
    void updateStartTime( int time );
    void updateEndTime( int time );
    void updateStartTime( const QTime & time );
    void updateEndTime( const QTime & time );
    void updateText();
    void updatePerson( const QString & text );
    void bold();
    void italics();
    void underline();
    */
    void  play(QModelIndex);
    void updateComplete( int state );
   
    void replyFinished(QNetworkReply*);
    void saveFileAs();
    void saveFile();
    void openFile();
    void newFile();
    void slotError(QNetworkReply::NetworkError);
    void slotReadyRead();
    void progress ( qint64, qint64 );
    void takesReply();
    void takesDownload( QNetworkReply * reply );
    void playItem(const QModelIndex& );
    void postFinished();
signals:
    void refreshWidget(const QModelIndex & index);
    
};

#endif
