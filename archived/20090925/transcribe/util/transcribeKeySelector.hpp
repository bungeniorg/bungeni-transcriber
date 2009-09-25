#ifndef _TRANSCRIBE_KEY_SELECTOR_H_
#define _TRANSCRIBE_KEY_SELECTOR_H_
#include "components/preferences_widgets.hpp"

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

class QTreeWidget;
class QTreeWidgetItem;
class QGroupBox;
class QGridLayout;
class QDialogButtonBox;
class QVBoxLayout;

class transcribeKeyInputDialog : public QDialog
{
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

class transcribeKeySelectorControl  : public ConfigControl
{
    Q_OBJECT;
public:
    transcribeKeySelectorControl( vlc_object_t *, module_config_t *, QWidget *,
                        QGridLayout*, int& );
    virtual int getType() { return CONFIG_ITEM_KEY; }
    virtual ~transcribeKeySelectorControl() {};
    virtual void hide() { table->hide(); if( label ) label->hide(); }
    virtual void show() { table->show(); if( label ) label->show(); }
    
private:
    void finish();
    QLabel *label;
    QTreeWidget *table;
    KeyShortcutEdit *shortcutValue;
    QList<module_config_t *> values;
private slots:
    void setTheKey();
    void selectKey( QTreeWidgetItem * = NULL );
    void select1Key();
    void doApply();
};
#endif
