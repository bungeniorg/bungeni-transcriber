#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc_vout.h>
#include "transcribe_widget2.hpp"
#include "main_interface.hpp"
#include "dialogs_provider.hpp"
#include "input_manager.hpp"
#include <QHBoxLayout>
#include <QGroupBox>
#include <QMessageBox>
#include <QDebug>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QMetaEnum>
#include <QProgressDialog>

TranscribeWidget2 *TranscribeWidget2::instance = NULL;

TranscribeWidget2::TranscribeWidget2( intf_thread_t *_p_i ) :
                             QFrame( NULL ), p_intf( _p_i )
{
    delegate = new ListViewDelegate(this);

    ui.setupUi(this);
    
   
    connect( ui.addButton, SIGNAL(clicked()), this, SLOT(addSpeech()) );
    connect( ui.removeButton, SIGNAL(clicked()), this, SLOT(removeSpeech()) );
    this->setupModelView();
fileName="";
}

TranscribeWidget2::~TranscribeWidget2()
{}
void TranscribeWidget2::removeSpeech()
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

void TranscribeWidget2::addSpeech()
{
	qDebug( "Add Transcript entered" );
	 if ( THEPL->current.i_size > 0 )
	 {
	    if (fileName != "")
        {
		    int i_length = var_GetTime(  THEMIM->getInput() , "length" ) / 1000000;
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
     	    QMessageBox::warning(this, "Select Media File","Please choose a media file from the playlist before you start transcribing");
     	 }
     }
     else
     {
        /* The playlist is empty, open a file requester */
    #ifndef WIN32
        THEDP->openFileDialog();
    #else
        THEDP->simpleOpenDialog();
    #endif
    }
  
}
void TranscribeWidget2::setupModelView()
{
    model = new QStandardItemModel(0,5,this);

	
//table->setResizeMode(QListView::Adjust);
	ui.table->setItemDelegate(delegate);
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
