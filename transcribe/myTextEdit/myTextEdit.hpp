#ifndef _MY_LINE_EDIT_H_
#define _MY_LINE_EDIT_H_

#include <QTextEdit>

class myTextEdit : public QTextEdit
{
    Q_OBJECT;
public:
	myTextEdit(QWidget *parent, const char *name = 0);
protected:
	virtual void keyPressEvent( QKeyEvent *keyEvent );
};

#endif

