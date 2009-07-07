/********************************************************************************
** Form generated from reading ui file 'serverSettings.ui'
**
** Created: Tue Jun 16 13:48:59 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SERVERSETTINGS_H
#define SERVERSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *password;
    QLineEdit *username;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *portnumber;
    QLabel *label_2;
    QLineEdit *hostname;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(370, 250);
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 351, 101));
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 20, 351, 80));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        password = new QLineEdit(formLayoutWidget_2);
        password->setObjectName(QString::fromUtf8("password"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, password);

        username = new QLineEdit(formLayoutWidget_2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setEnabled(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, username);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 210, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 351, 101));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 20, 351, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        portnumber = new QLineEdit(formLayoutWidget);
        portnumber->setObjectName(QString::fromUtf8("portnumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, portnumber);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        hostname = new QLineEdit(formLayoutWidget);
        hostname->setObjectName(QString::fromUtf8("hostname"));

        formLayout->setWidget(1, QFormLayout::FieldRole, hostname);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Dialog", "User Details", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "User Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "Password", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "Server Details", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "Bungeni Server Hostname", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Port Number", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SERVERSETTINGS_H
