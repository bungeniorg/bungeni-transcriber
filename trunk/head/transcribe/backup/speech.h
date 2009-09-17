#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'speech.ui'
**
** Created: Fri Jun 12 11:39:52 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SPEECH_H
#define SPEECH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Speech
{
public:

    void setupUi(QWidget *Speech)
    {
        if (Speech->objectName().isEmpty())
            Speech->setObjectName(QString::fromUtf8("Speech"));
        Speech->resize(592, 541);

        retranslateUi(Speech);

        QMetaObject::connectSlotsByName(Speech);
    } // setupUi

    void retranslateUi(QWidget *Speech)
    {
        Speech->setWindowTitle(Q_("Form", 0));
        Q_UNUSED(Speech);
    } // retranslateUi

};

namespace Ui {
    class Speech: public Ui_Speech {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPEECH_H
