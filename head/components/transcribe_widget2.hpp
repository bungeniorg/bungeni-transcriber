#ifndef _TRANSCRIBEWIDGETS2_H_
#define _TRANSCRIBEWIDGETS2_H_

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


class TranscribeWidget2 : public QFrame
{
    Q_OBJECT
public:
    
    static TranscribeWidget2 * getInstance( intf_thread_t *p_intf )
    {
        if( !instance)
            instance = new TranscribeWidget2( p_intf );
        return instance;
    }
    static void killInstance()
    {
        if( instance ) delete instance;
        instance = NULL;
    }
    virtual ~TranscribeWidget2();
private:
    TranscribeWidget2( intf_thread_t *);
    intf_thread_t *p_intf;
    static TranscribeWidget2 *instance;
    ListViewDelegate *delegate;
    Ui::Speech ui;
    void setupModelView();
    QStandardItemModel *model;
    QString fileName;
    QItemSelectionModel *selectionModel;
    QSortFilterProxyModel *filterModel;
public slots:
    void addSpeech();
    void removeSpeech();
    
};
#endif
