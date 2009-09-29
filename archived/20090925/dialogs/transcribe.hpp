/*****************************************************************************
 * Transcribe.hpp : Transcribe Window
 ****************************************************************************
 * Copyright (C) 2006 the VideoLAN team
 * $Id$
 *
 * Authors: Miano Njoka <miano.feedback@gmail.com>
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

#ifndef _TRANSCRIBE_DIALOG_H_
#define _TRANSCRIBE_DIALOG_H_

#include "util/qvlcframe.hpp"

#include "transcribe/ui/transcribe.h"
#include "transcribe/ui/preference.h"
#include "transcribe/qxtspanslider/qxtspanslider.h"
#include "transcribe/qxtspanslider/qxtspanslider_p.h"
#include "transcribe/myTextEdit/myTextEdit.hpp"
//#include "test.h"
//class QAbstractItemModel;
//class QItemSelectionModel;
#define BUFFER_SIZE 10

#define CHANNELS_NUMBER 4
class QAbstractItemModel;
class QItemSelectionModel;
class QSortFilterProxyModel;
class QTimeEdit;
class QKeyEvent;
class TranscribeDialog : public QVLCFrame
{
    Q_OBJECT;
public:
    static TranscribeDialog * getInstance( intf_thread_t *p_intf )
    {
        if( !instance)
            instance = new TranscribeDialog( p_intf );
        return instance;
    }
    static void killInstance()
    {
        if( instance ) delete instance;
        instance = NULL;
    }
    virtual ~TranscribeDialog();
private:
    TranscribeDialog( intf_thread_t * );
    static TranscribeDialog *instance;
     Ui::Transcribe ui;
     QAbstractItemModel *model; 
     void setupModel();
     void setupViews();
     QItemSelectionModel *selectionModel;
     QModelIndex currentIndex;
     bool writeFile(QString filename);
     QString fileName;
     QTimeEdit *endTime;
     QTimeEdit *startTime;
     QxtSpanSlider *horizontalSlider;
     int i_length;
     QString timeSecondstoString(int time);
     QSortFilterProxyModel *filterModel;
     myTextEdit *textEdit;
     void keyPressEvent( QKeyEvent *e );
     int keyModifiersToVLC( Qt::KeyboardModifiers modifiers );
     int keyToVLCKey(Qt::KeyboardModifiers modifiers, int key );
    // int PutAction( intf_thread_t *p_intf, int i_action );
    /*
    Ui::test ui;
    QAbstractItemModel *model; 
    void setupModel();
    void setupViews();
    QItemSelectionModel *selectionModel;
    */
private slots:
    void changedItem( int );
    void openFile();
     void saveFile();
     void saveFileAs();
     void newFile();
     void updateText();
     void preferenceDialog();
     void updatePerson( const QString &);
     void updateStartTime( const QTime & );
     void updateEndTime( const QTime & );
     void updateStartTime( int );
     void updateEndTime( int );
     void loadValues(QModelIndex);
     void play(QModelIndex);
     void addTranscript();
     void removeTranscript();
};


#endif

