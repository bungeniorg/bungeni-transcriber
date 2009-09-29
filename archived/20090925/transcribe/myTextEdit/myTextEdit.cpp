#include "myTextEdit.hpp"

#include <vlc_keys.h>
#include "util/customwidgets.hpp"
#include <QDebug>
#include <QSettings>
myTextEdit::myTextEdit(QWidget *parent, const char *name) : QTextEdit(parent)
{
}

void myTextEdit::keyPressEvent( QKeyEvent *keyEvent )
{
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
}

