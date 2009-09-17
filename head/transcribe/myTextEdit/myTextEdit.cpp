#include "myTextEdit.hpp"

#include <vlc_keys.h>
#include "util/customwidgets.hpp"
#include "input_manager.hpp"
#include <QDebug>
#include <QSettings>
myTextEdit::myTextEdit(QWidget *parent, const char *name) : QTextEdit(parent)
{
}

void myTextEdit::keyPressEvent( QKeyEvent *keyEvent )
{
/*
    	QSettings settings("Bungeni", "transcribe");
     	QStringList keys = settings.childKeys();
     	int values[30];
     	int j=0, i=0;
     	int event = qtEventToVLCKey(keyEvent);
     	bool found = false;
     	keys = settings.childKeys();
     	for (i = 0; i < keys.size(); ++i)
     	{
            values[i]=  settings.value(keys.at(i)).toInt();  
    	}
    	qDebug() << "EVENT IS" << keyEvent;
    	if (keyEvent->key()==Qt::Key_Backspace)
    	{
    		found == true;
    		QTextEdit::keyPressEvent(keyEvent);
    		keyEvent->accept();
    	}
    	if ((event > 0) && (found == false))
    	{
    		while ((found == false) && (j <= i))
    		{
    			if( values[j] == event)
    			{
    				qDebug() << "ignore" << event;
    				keyEvent->ignore();
    				found = true;
    			}
    			j++;
    		}
    		if (found == false)
    		{
    			qDebug() << "accept" << event;
    			QTextEdit::keyPressEvent(keyEvent);
    			keyEvent->accept();
    		}
    	}
 */
    if (keyEvent->modifiers() == Qt::NoModifier)
    {
        if( (keyEvent->key() >= Qt::Key_A) && (keyEvent->key() <= Qt::Key_Z) )
        {
            qDebug() << "accept";
    	    QTextEdit::keyPressEvent(keyEvent);
    	    keyEvent->accept();
        }
        else if( (keyEvent->key() >= Qt::Key_Space) && (keyEvent->key() <= Qt::Key_AsciiTilde) )
        {
            qDebug() << "accept";
        	QTextEdit::keyPressEvent(keyEvent);
    	    keyEvent->accept();
        }
        else
        {
            qDebug() << "ignore";
    	    keyEvent->ignore();
        }
    }
    else if (keyEvent->modifiers() == Qt::ControlModifier)
    {
        if( (keyEvent->key() == Qt::Key_C) || (keyEvent->key() <= Qt::Key_V) || (keyEvent->key() <= Qt::Key_Z) || (keyEvent->key() <= Qt::Key_X))
        {
            qDebug() << "accept";
        	QTextEdit::keyPressEvent(keyEvent);
    	    keyEvent->accept();
        }
        else
        {
            qDebug() << "ignore";
    	    keyEvent->ignore();
        }
    }
    else
    {
        qDebug() << "ignore";
    	keyEvent->ignore();
    }
    
}
