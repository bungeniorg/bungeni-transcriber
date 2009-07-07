#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'sprefs_input.ui'
**
** Created: Wed May 6 11:27:32 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SPREFS_INPUT_H
#define SPREFS_INPUT_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsInputAndCodecs
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *DVDDevice;
    QPushButton *DVDBrowse;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *label_4;
    QSpinBox *UDPPort;
    QLabel *label_7;
    QLineEdit *proxy;
    QGroupBox *groupBox_5;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QComboBox *cachingCombo;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout2;
    QLabel *label_5;
    QSpinBox *PostProcLevel;
    QLabel *label_6;
    QComboBox *AviRepair;
    QCheckBox *systemCodecBox;
    QCheckBox *RTSP_TCPBox;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout1;
    QCheckBox *timeshiftBox;
    QCheckBox *recordBox;
    QCheckBox *dumpBox;
    QCheckBox *bandwidthBox;

    void setupUi(QWidget *SPrefsInputAndCodecs)
    {
        if (SPrefsInputAndCodecs->objectName().isEmpty())
            SPrefsInputAndCodecs->setObjectName(QString::fromUtf8("SPrefsInputAndCodecs"));
        SPrefsInputAndCodecs->resize(512, 516);
        vboxLayout = new QVBoxLayout(SPrefsInputAndCodecs);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(SPrefsInputAndCodecs);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        DVDDevice = new QLineEdit(groupBox);
        DVDDevice->setObjectName(QString::fromUtf8("DVDDevice"));

        gridLayout->addWidget(DVDDevice, 0, 1, 1, 1);

        DVDBrowse = new QPushButton(groupBox);
        DVDBrowse->setObjectName(QString::fromUtf8("DVDBrowse"));

        gridLayout->addWidget(DVDBrowse, 0, 2, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(SPrefsInputAndCodecs);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 0, 0, 1, 1);

        UDPPort = new QSpinBox(groupBox_2);
        UDPPort->setObjectName(QString::fromUtf8("UDPPort"));
        UDPPort->setAlignment(Qt::AlignRight);
        UDPPort->setMinimum(1);
        UDPPort->setMaximum(65535);
        UDPPort->setValue(1234);

        gridLayout1->addWidget(UDPPort, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 1, 0, 1, 1);

        proxy = new QLineEdit(groupBox_2);
        proxy->setObjectName(QString::fromUtf8("proxy"));

        gridLayout1->addWidget(proxy, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(SPrefsInputAndCodecs);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        hboxLayout = new QHBoxLayout(groupBox_5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        cachingCombo = new QComboBox(groupBox_5);
        cachingCombo->setObjectName(QString::fromUtf8("cachingCombo"));

        hboxLayout->addWidget(cachingCombo);


        vboxLayout->addWidget(groupBox_5);

        groupBox_3 = new QGroupBox(SPrefsInputAndCodecs);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout2 = new QGridLayout(groupBox_3);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout2->addWidget(label_5, 0, 0, 1, 1);

        PostProcLevel = new QSpinBox(groupBox_3);
        PostProcLevel->setObjectName(QString::fromUtf8("PostProcLevel"));
        PostProcLevel->setAlignment(Qt::AlignRight);
        PostProcLevel->setMinimum(1);
        PostProcLevel->setMaximum(65535);
        PostProcLevel->setValue(6);

        gridLayout2->addWidget(PostProcLevel, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout2->addWidget(label_6, 1, 0, 1, 1);

        AviRepair = new QComboBox(groupBox_3);
        AviRepair->setObjectName(QString::fromUtf8("AviRepair"));

        gridLayout2->addWidget(AviRepair, 1, 1, 1, 1);

        systemCodecBox = new QCheckBox(groupBox_3);
        systemCodecBox->setObjectName(QString::fromUtf8("systemCodecBox"));

        gridLayout2->addWidget(systemCodecBox, 3, 0, 1, 2);

        RTSP_TCPBox = new QCheckBox(groupBox_3);
        RTSP_TCPBox->setObjectName(QString::fromUtf8("RTSP_TCPBox"));

        gridLayout2->addWidget(RTSP_TCPBox, 2, 0, 1, 2);


        vboxLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(SPrefsInputAndCodecs);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        hboxLayout1 = new QHBoxLayout(groupBox_4);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        timeshiftBox = new QCheckBox(groupBox_4);
        timeshiftBox->setObjectName(QString::fromUtf8("timeshiftBox"));

        hboxLayout1->addWidget(timeshiftBox);

        recordBox = new QCheckBox(groupBox_4);
        recordBox->setObjectName(QString::fromUtf8("recordBox"));

        hboxLayout1->addWidget(recordBox);

        dumpBox = new QCheckBox(groupBox_4);
        dumpBox->setObjectName(QString::fromUtf8("dumpBox"));

        hboxLayout1->addWidget(dumpBox);

        bandwidthBox = new QCheckBox(groupBox_4);
        bandwidthBox->setObjectName(QString::fromUtf8("bandwidthBox"));

        hboxLayout1->addWidget(bandwidthBox);


        vboxLayout->addWidget(groupBox_4);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(DVDDevice);
        label_4->setBuddy(UDPPort);
        label_7->setBuddy(proxy);
        label_2->setBuddy(cachingCombo);
        label_5->setBuddy(PostProcLevel);
        label_6->setBuddy(AviRepair);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(DVDDevice, DVDBrowse);
        QWidget::setTabOrder(DVDBrowse, UDPPort);
        QWidget::setTabOrder(UDPPort, proxy);
        QWidget::setTabOrder(proxy, cachingCombo);
        QWidget::setTabOrder(cachingCombo, PostProcLevel);
        QWidget::setTabOrder(PostProcLevel, AviRepair);
        QWidget::setTabOrder(AviRepair, RTSP_TCPBox);
        QWidget::setTabOrder(RTSP_TCPBox, systemCodecBox);
        QWidget::setTabOrder(systemCodecBox, timeshiftBox);
        QWidget::setTabOrder(timeshiftBox, recordBox);
        QWidget::setTabOrder(recordBox, dumpBox);
        QWidget::setTabOrder(dumpBox, bandwidthBox);

        retranslateUi(SPrefsInputAndCodecs);

        QMetaObject::connectSlotsByName(SPrefsInputAndCodecs);
    } // setupUi

    void retranslateUi(QWidget *SPrefsInputAndCodecs)
    {
        SPrefsInputAndCodecs->setWindowTitle(Q_("Form", 0));
        groupBox->setTitle(Q_("Disc Devices", 0));
        label->setText(Q_("Default disc device", 0));
        DVDBrowse->setText(Q_("Browse...", 0));
        groupBox_2->setTitle(Q_("Network", 0));
        label_4->setText(Q_("Server default port", 0));
        label_7->setText(Q_("HTTP proxy", 0));
        groupBox_5->setTitle(Q_("Caching", 0));
        label_2->setText(Q_("Default caching level", 0));
        groupBox_3->setTitle(Q_("Codecs / Muxers", 0));
        label_5->setText(Q_("Post-Processing quality", 0));
        label_6->setText(Q_("Repair AVI files", 0));
        systemCodecBox->setText(Q_("Use system codecs if available (better quality)", 0));
        RTSP_TCPBox->setText(Q_("Use RTP over RTSP (TCP)", 0));
        groupBox_4->setTitle(Q_("Access Filter", 0));
        timeshiftBox->setText(Q_("Timeshift", 0));
        recordBox->setText(Q_("Record", 0));
        dumpBox->setText(Q_("Dump", 0));
        bandwidthBox->setText(Q_("Bandwidth limiter", 0));
        Q_UNUSED(SPrefsInputAndCodecs);
    } // retranslateUi

};

namespace Ui {
    class SPrefsInputAndCodecs: public Ui_SPrefsInputAndCodecs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_INPUT_H
