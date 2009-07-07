#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'open_net.ui'
**
** Created: Wed May 6 11:27:31 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef OPEN_NET_H
#define OPEN_NET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenNetwork
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *protocolCombo;
    QLabel *label;
    QSpinBox *portSpin;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *addressText;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout;
    QCheckBox *timeShift;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *OpenNetwork)
    {
        if (OpenNetwork->objectName().isEmpty())
            OpenNetwork->setObjectName(QString::fromUtf8("OpenNetwork"));
        OpenNetwork->resize(431, 233);
        vboxLayout = new QVBoxLayout(OpenNetwork);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(OpenNetwork);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        protocolCombo = new QComboBox(groupBox);
        protocolCombo->setObjectName(QString::fromUtf8("protocolCombo"));

        gridLayout->addWidget(protocolCombo, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        portSpin = new QSpinBox(groupBox);
        portSpin->setObjectName(QString::fromUtf8("portSpin"));
        portSpin->setAccelerated(true);
        portSpin->setMaximum(65535);
        portSpin->setValue(1234);

        gridLayout->addWidget(portSpin, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        addressText = new QLineEdit(groupBox);
        addressText->setObjectName(QString::fromUtf8("addressText"));

        gridLayout->addWidget(addressText, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(OpenNetwork);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(groupBox_3);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        timeShift = new QCheckBox(groupBox_3);
        timeShift->setObjectName(QString::fromUtf8("timeShift"));

        hboxLayout->addWidget(timeShift);


        vboxLayout->addWidget(groupBox_3);

        spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout->addItem(spacerItem);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(protocolCombo);
        label_2->setBuddy(addressText);
        label_4->setBuddy(portSpin);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(protocolCombo, addressText);
        QWidget::setTabOrder(addressText, portSpin);
        QWidget::setTabOrder(portSpin, timeShift);

        retranslateUi(OpenNetwork);

        QMetaObject::connectSlotsByName(OpenNetwork);
    } // setupUi

    void retranslateUi(QWidget *OpenNetwork)
    {
        OpenNetwork->setWindowTitle(Q_("Form", 0));
        groupBox->setTitle(Q_("Network Protocol", 0));
#ifndef QT_NO_TOOLTIP
        protocolCombo->setToolTip(Q_("Select the protocol for the URL.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(Q_("Protocol", 0));
#ifndef QT_NO_TOOLTIP
        portSpin->setToolTip(Q_("Select the port used", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(Q_("Address", 0));
        label_4->setText(Q_("Port", 0));
#ifndef QT_NO_TOOLTIP
        addressText->setToolTip(Q_("Enter the URL of the network stream here, with or without the protocol.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(Q_("Options", 0));
#ifndef QT_NO_TOOLTIP
        timeShift->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        timeShift->setText(Q_("Allow timeshifting", 0));
        Q_UNUSED(OpenNetwork);
    } // retranslateUi

};

namespace Ui {
    class OpenNetwork: public Ui_OpenNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_NET_H
