#ifndef _TRANSCRIBE_KEY_SELECTOR_H_
#define _TRANSCRIBE_KEY_SELECTOR_H_

#include <QWidget>

#include <QCheckBox>
#include <QComboBox>
#include <QLineEdit>
#include <QTreeWidget>
#include <QSpinBox>
#include <QLabel>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QVector>
#include <QDialog>
#include <QSettings>

#include "util/util.hpp"

class QTreeWidget;
class QTreeWidgetItem;
class QGroupBox;
class QGridLayout;
class QDialogButtonBox;
class QVBoxLayout;

class transcribeKeyInputDialog : public QDialog
{
Q_OBJECT
public:
    transcribeKeyInputDialog( QTreeWidget *, QString, QWidget * );
    int keyValue;
    bool conflicts;
private:
    QTreeWidget *table;
    void checkForConflicts( int i_vlckey );
    void keyPressEvent( QKeyEvent *);
    void wheelEvent( QWheelEvent *);
    QLabel *selected;
    QVBoxLayout *vLayout;
    QDialogButtonBox *buttonBox;
};

class transcribeKeySelectorControl  : public QWidget
{
    Q_OBJECT
public:
    transcribeKeySelectorControl();
    virtual ~transcribeKeySelectorControl() {};
    virtual void hide() { table->hide(); if( label ) label->hide(); }
    virtual void show() { table->show(); if( label ) label->show(); }
    
private:
    void finish();
    QLabel *label;
    QTreeWidget *table;
    KeyShortcutEdit *shortcutValue;
private slots:
    void setTheKey();
    void selectKey( QTreeWidgetItem * = NULL );
    void select1Key();
public slots:
    void doApply();
};
#endif
