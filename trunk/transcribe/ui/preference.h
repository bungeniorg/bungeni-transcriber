#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'preference.ui'
**
** Created: Wed Feb 25 05:04:26 2009
**      by: Qt User Interface Compiler version 4.3.4
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef PREFERENCE_H
#define PREFERENCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>

class Ui_preferenceDialog
{
public:

    void setupUi(QDialog *preferenceDialog)
    {
    if (preferenceDialog->objectName().isEmpty())
        preferenceDialog->setObjectName(QString::fromUtf8("preferenceDialog"));
    preferenceDialog->resize(400, 300);

    retranslateUi(preferenceDialog);

    QMetaObject::connectSlotsByName(preferenceDialog);
    } // setupUi

    void retranslateUi(QDialog *preferenceDialog)
    {
    preferenceDialog->setWindowTitle(Q_("Dialog", 0));
    Q_UNUSED(preferenceDialog);
    } // retranslateUi

};

namespace Ui {
    class preferenceDialog: public Ui_preferenceDialog {};
} // namespace Ui

#endif // PREFERENCE_H
