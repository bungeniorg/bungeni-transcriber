#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'sprefs_video.ui'
**
** Created: Wed May 6 11:27:32 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SPREFS_VIDEO_H
#define SPREFS_VIDEO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsVideo
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *enableVideo;
    QGroupBox *displayBox;
    QGridLayout *gridLayout;
    QCheckBox *windowDecorations;
    QCheckBox *fullscreen;
    QCheckBox *alwaysOnTop;
    QComboBox *outputModule;
    QLabel *label_4;
    QCheckBox *overlay;
    QCheckBox *skipFrames;
    QCheckBox *hwYUVBox;
    QGroupBox *directXBox;
    QGridLayout *gridLayout1;
    QComboBox *dXdisplayDevice;
    QLabel *label_5;
    QCheckBox *wallpaperMode;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QLineEdit *snapshotsDirectory;
    QPushButton *snapshotsDirectoryBrowse;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *snapshotsPrefix;
    QLabel *label_3;
    QComboBox *snapshotsFormat;
    QCheckBox *snapshotsSequentialNumbering;

    void setupUi(QWidget *SPrefsVideo)
    {
        if (SPrefsVideo->objectName().isEmpty())
            SPrefsVideo->setObjectName(QString::fromUtf8("SPrefsVideo"));
        SPrefsVideo->resize(482, 516);
        vboxLayout = new QVBoxLayout(SPrefsVideo);
        vboxLayout->setSpacing(10);
#ifndef Q_OS_MAC
        vboxLayout->setMargin(9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        enableVideo = new QCheckBox(SPrefsVideo);
        enableVideo->setObjectName(QString::fromUtf8("enableVideo"));
        enableVideo->setChecked(true);

        vboxLayout->addWidget(enableVideo);

        displayBox = new QGroupBox(SPrefsVideo);
        displayBox->setObjectName(QString::fromUtf8("displayBox"));
        gridLayout = new QGridLayout(displayBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setMargin(9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        windowDecorations = new QCheckBox(displayBox);
        windowDecorations->setObjectName(QString::fromUtf8("windowDecorations"));
        windowDecorations->setChecked(true);

        gridLayout->addWidget(windowDecorations, 1, 2, 1, 1);

        fullscreen = new QCheckBox(displayBox);
        fullscreen->setObjectName(QString::fromUtf8("fullscreen"));

        gridLayout->addWidget(fullscreen, 0, 0, 1, 2);

        alwaysOnTop = new QCheckBox(displayBox);
        alwaysOnTop->setObjectName(QString::fromUtf8("alwaysOnTop"));

        gridLayout->addWidget(alwaysOnTop, 1, 0, 1, 2);

        outputModule = new QComboBox(displayBox);
        outputModule->setObjectName(QString::fromUtf8("outputModule"));

        gridLayout->addWidget(outputModule, 3, 1, 1, 2);

        label_4 = new QLabel(displayBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        overlay = new QCheckBox(displayBox);
        overlay->setObjectName(QString::fromUtf8("overlay"));
        overlay->setChecked(true);

        gridLayout->addWidget(overlay, 0, 2, 1, 1);

        skipFrames = new QCheckBox(displayBox);
        skipFrames->setObjectName(QString::fromUtf8("skipFrames"));
        skipFrames->setChecked(true);

        gridLayout->addWidget(skipFrames, 2, 0, 1, 2);

        hwYUVBox = new QCheckBox(displayBox);
        hwYUVBox->setObjectName(QString::fromUtf8("hwYUVBox"));

        gridLayout->addWidget(hwYUVBox, 2, 2, 1, 1);


        vboxLayout->addWidget(displayBox);

        directXBox = new QGroupBox(SPrefsVideo);
        directXBox->setObjectName(QString::fromUtf8("directXBox"));
        gridLayout1 = new QGridLayout(directXBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setMargin(9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        dXdisplayDevice = new QComboBox(directXBox);
        dXdisplayDevice->setObjectName(QString::fromUtf8("dXdisplayDevice"));

        gridLayout1->addWidget(dXdisplayDevice, 1, 1, 1, 2);

        label_5 = new QLabel(directXBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 1, 0, 1, 1);

        wallpaperMode = new QCheckBox(directXBox);
        wallpaperMode->setObjectName(QString::fromUtf8("wallpaperMode"));

        gridLayout1->addWidget(wallpaperMode, 0, 0, 1, 2);


        vboxLayout->addWidget(directXBox);

        groupBox = new QGroupBox(SPrefsVideo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setMargin(9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        snapshotsDirectory = new QLineEdit(groupBox);
        snapshotsDirectory->setObjectName(QString::fromUtf8("snapshotsDirectory"));

        gridLayout2->addWidget(snapshotsDirectory, 0, 1, 1, 2);

        snapshotsDirectoryBrowse = new QPushButton(groupBox);
        snapshotsDirectoryBrowse->setObjectName(QString::fromUtf8("snapshotsDirectoryBrowse"));

        gridLayout2->addWidget(snapshotsDirectoryBrowse, 0, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 1, 0, 1, 1);

        snapshotsPrefix = new QLineEdit(groupBox);
        snapshotsPrefix->setObjectName(QString::fromUtf8("snapshotsPrefix"));

        gridLayout2->addWidget(snapshotsPrefix, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout2->addWidget(label_3, 2, 0, 1, 1);

        snapshotsFormat = new QComboBox(groupBox);
        snapshotsFormat->setObjectName(QString::fromUtf8("snapshotsFormat"));

        gridLayout2->addWidget(snapshotsFormat, 2, 1, 1, 3);

        snapshotsSequentialNumbering = new QCheckBox(groupBox);
        snapshotsSequentialNumbering->setObjectName(QString::fromUtf8("snapshotsSequentialNumbering"));

        gridLayout2->addWidget(snapshotsSequentialNumbering, 1, 2, 1, 2);


        vboxLayout->addWidget(groupBox);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(outputModule);
        label_5->setBuddy(dXdisplayDevice);
        label->setBuddy(snapshotsDirectory);
        label_2->setBuddy(snapshotsPrefix);
        label_3->setBuddy(snapshotsFormat);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(enableVideo, fullscreen);
        QWidget::setTabOrder(fullscreen, overlay);
        QWidget::setTabOrder(overlay, alwaysOnTop);
        QWidget::setTabOrder(alwaysOnTop, windowDecorations);
        QWidget::setTabOrder(windowDecorations, skipFrames);
        QWidget::setTabOrder(skipFrames, outputModule);
        QWidget::setTabOrder(outputModule, wallpaperMode);
        QWidget::setTabOrder(wallpaperMode, dXdisplayDevice);
        QWidget::setTabOrder(dXdisplayDevice, snapshotsDirectory);
        QWidget::setTabOrder(snapshotsDirectory, snapshotsDirectoryBrowse);
        QWidget::setTabOrder(snapshotsDirectoryBrowse, snapshotsPrefix);
        QWidget::setTabOrder(snapshotsPrefix, snapshotsSequentialNumbering);
        QWidget::setTabOrder(snapshotsSequentialNumbering, snapshotsFormat);
        QWidget::setTabOrder(snapshotsFormat, overlay);

        retranslateUi(SPrefsVideo);

        QMetaObject::connectSlotsByName(SPrefsVideo);
    } // setupUi

    void retranslateUi(QWidget *SPrefsVideo)
    {
        SPrefsVideo->setWindowTitle(Q_("Form", 0));
        enableVideo->setText(Q_("Enable video", 0));
        displayBox->setTitle(Q_("Display", 0));
        windowDecorations->setText(Q_("Window decorations", 0));
        fullscreen->setText(Q_("Fullscreen", 0));
        alwaysOnTop->setText(Q_("Always on top", 0));
        label_4->setText(Q_("Output", 0));
        overlay->setText(Q_("Accelerated video output", 0));
        skipFrames->setText(Q_("Skip frames", 0));
        hwYUVBox->setText(Q_("Use hardware YUV->RGB conversions", 0));
        directXBox->setTitle(Q_("DirectX", 0));
        label_5->setText(Q_("Display device", 0));
        wallpaperMode->setText(Q_("Enable wallpaper mode", 0));
        groupBox->setTitle(Q_("Video snapshots", 0));
        snapshotsDirectoryBrowse->setText(Q_("Browse...", 0));
        label->setText(Q_("Directory", 0));
        label_2->setText(Q_("Prefix", 0));
        snapshotsPrefix->setText(Q_("vlc-snap", 0));
        label_3->setText(Q_("Format", 0));
        snapshotsSequentialNumbering->setText(Q_("Sequential numbering", 0));
        Q_UNUSED(SPrefsVideo);
    } // retranslateUi

};

namespace Ui {
    class SPrefsVideo: public Ui_SPrefsVideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_VIDEO_H
