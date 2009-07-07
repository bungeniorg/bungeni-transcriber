#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'open_disk.ui'
**
** Created: Wed May 6 11:27:31 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef OPEN_DISK_H
#define OPEN_DISK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenDisk
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *diskGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QRadioButton *dvdRadioButton;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QCheckBox *dvdsimple;
    QFrame *line;
    QLabel *deviceLabel;
    QComboBox *deviceCombo;
    QToolButton *ejectButton;
    QPushButton *browseDiscButton;
    QRadioButton *audioCDRadioButton;
    QRadioButton *vcdRadioButton;
    QGroupBox *diskOptionBox;
    QGridLayout *gridLayout1;
    QLabel *chapterLabel;
    QSpinBox *chapterSpin;
    QLabel *titleLabel;
    QSpinBox *titleSpin;
    QGroupBox *diskOptionBox_2;
    QGridLayout *gridLayout2;
    QLabel *audioLabel;
    QSpinBox *audioSpin;
    QLabel *subtitlesLabel;
    QSpinBox *subtitlesSpin;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *OpenDisk)
    {
        if (OpenDisk->objectName().isEmpty())
            OpenDisk->setObjectName(QString::fromUtf8("OpenDisk"));
        OpenDisk->resize(537, 423);
        vboxLayout = new QVBoxLayout(OpenDisk);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        diskGroupBox = new QGroupBox(OpenDisk);
        diskGroupBox->setObjectName(QString::fromUtf8("diskGroupBox"));
        gridLayout = new QGridLayout(diskGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(16, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 0, 1, 1);

        dvdRadioButton = new QRadioButton(diskGroupBox);
        dvdRadioButton->setObjectName(QString::fromUtf8("dvdRadioButton"));
        dvdRadioButton->setLayoutDirection(Qt::LeftToRight);
        dvdRadioButton->setChecked(true);

        gridLayout->addWidget(dvdRadioButton, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 2, 1, 2);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 6, 1, 1);

        spacerItem3 = new QSpacerItem(31, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 0, 9, 1, 1);

        dvdsimple = new QCheckBox(diskGroupBox);
        dvdsimple->setObjectName(QString::fromUtf8("dvdsimple"));

        gridLayout->addWidget(dvdsimple, 1, 1, 1, 3);

        line = new QFrame(diskGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 2, 1, 8);

        deviceLabel = new QLabel(diskGroupBox);
        deviceLabel->setObjectName(QString::fromUtf8("deviceLabel"));

        gridLayout->addWidget(deviceLabel, 3, 0, 1, 3);

        deviceCombo = new QComboBox(diskGroupBox);
        deviceCombo->setObjectName(QString::fromUtf8("deviceCombo"));
        deviceCombo->setEditable(true);

        gridLayout->addWidget(deviceCombo, 3, 3, 1, 4);

        ejectButton = new QToolButton(diskGroupBox);
        ejectButton->setObjectName(QString::fromUtf8("ejectButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ejectButton->sizePolicy().hasHeightForWidth());
        ejectButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ejectButton, 3, 7, 1, 1);

        browseDiscButton = new QPushButton(diskGroupBox);
        browseDiscButton->setObjectName(QString::fromUtf8("browseDiscButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(browseDiscButton->sizePolicy().hasHeightForWidth());
        browseDiscButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(browseDiscButton, 3, 8, 1, 2);

        audioCDRadioButton = new QRadioButton(diskGroupBox);
        audioCDRadioButton->setObjectName(QString::fromUtf8("audioCDRadioButton"));

        gridLayout->addWidget(audioCDRadioButton, 0, 4, 1, 1);

        vcdRadioButton = new QRadioButton(diskGroupBox);
        vcdRadioButton->setObjectName(QString::fromUtf8("vcdRadioButton"));

        gridLayout->addWidget(vcdRadioButton, 0, 8, 1, 1);


        vboxLayout->addWidget(diskGroupBox);

        diskOptionBox = new QGroupBox(OpenDisk);
        diskOptionBox->setObjectName(QString::fromUtf8("diskOptionBox"));
        gridLayout1 = new QGridLayout(diskOptionBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        chapterLabel = new QLabel(diskOptionBox);
        chapterLabel->setObjectName(QString::fromUtf8("chapterLabel"));

        gridLayout1->addWidget(chapterLabel, 1, 0, 1, 1);

        chapterSpin = new QSpinBox(diskOptionBox);
        chapterSpin->setObjectName(QString::fromUtf8("chapterSpin"));
        chapterSpin->setAlignment(Qt::AlignRight);
        chapterSpin->setMinimum(0);
        chapterSpin->setValue(0);

        gridLayout1->addWidget(chapterSpin, 1, 1, 1, 1);

        titleLabel = new QLabel(diskOptionBox);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        gridLayout1->addWidget(titleLabel, 0, 0, 1, 1);

        titleSpin = new QSpinBox(diskOptionBox);
        titleSpin->setObjectName(QString::fromUtf8("titleSpin"));
        titleSpin->setAutoFillBackground(false);
        titleSpin->setAlignment(Qt::AlignRight);
        titleSpin->setMinimum(0);
        titleSpin->setValue(0);

        gridLayout1->addWidget(titleSpin, 0, 1, 1, 1);


        vboxLayout->addWidget(diskOptionBox);

        diskOptionBox_2 = new QGroupBox(OpenDisk);
        diskOptionBox_2->setObjectName(QString::fromUtf8("diskOptionBox_2"));
        gridLayout2 = new QGridLayout(diskOptionBox_2);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        audioLabel = new QLabel(diskOptionBox_2);
        audioLabel->setObjectName(QString::fromUtf8("audioLabel"));

        gridLayout2->addWidget(audioLabel, 1, 0, 1, 1);

        audioSpin = new QSpinBox(diskOptionBox_2);
        audioSpin->setObjectName(QString::fromUtf8("audioSpin"));
        audioSpin->setAlignment(Qt::AlignRight);
        audioSpin->setMinimum(-1);
        audioSpin->setMaximum(7);
        audioSpin->setValue(-1);

        gridLayout2->addWidget(audioSpin, 1, 1, 1, 1);

        subtitlesLabel = new QLabel(diskOptionBox_2);
        subtitlesLabel->setObjectName(QString::fromUtf8("subtitlesLabel"));

        gridLayout2->addWidget(subtitlesLabel, 0, 0, 1, 1);

        subtitlesSpin = new QSpinBox(diskOptionBox_2);
        subtitlesSpin->setObjectName(QString::fromUtf8("subtitlesSpin"));
        subtitlesSpin->setAutoFillBackground(false);
        subtitlesSpin->setAlignment(Qt::AlignRight);
        subtitlesSpin->setMinimum(-1);
        subtitlesSpin->setMaximum(31);
        subtitlesSpin->setValue(-1);

        gridLayout2->addWidget(subtitlesSpin, 0, 1, 1, 1);


        vboxLayout->addWidget(diskOptionBox_2);

        spacerItem4 = new QSpacerItem(181, 22, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout->addItem(spacerItem4);

#ifndef QT_NO_SHORTCUT
        deviceLabel->setBuddy(deviceCombo);
        chapterLabel->setBuddy(chapterSpin);
        titleLabel->setBuddy(titleSpin);
        audioLabel->setBuddy(audioSpin);
        subtitlesLabel->setBuddy(subtitlesSpin);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(dvdRadioButton, dvdsimple);
        QWidget::setTabOrder(dvdsimple, deviceCombo);
        QWidget::setTabOrder(deviceCombo, ejectButton);
        QWidget::setTabOrder(ejectButton, browseDiscButton);
        QWidget::setTabOrder(browseDiscButton, titleSpin);
        QWidget::setTabOrder(titleSpin, chapterSpin);
        QWidget::setTabOrder(chapterSpin, subtitlesSpin);
        QWidget::setTabOrder(subtitlesSpin, audioSpin);

        retranslateUi(OpenDisk);

        QMetaObject::connectSlotsByName(OpenDisk);
    } // setupUi

    void retranslateUi(QWidget *OpenDisk)
    {
        OpenDisk->setWindowTitle(Q_("Form", 0));
        diskGroupBox->setTitle(Q_("Disc Selection", 0));
        dvdRadioButton->setText(Q_("DVD", 0));
#ifndef QT_NO_TOOLTIP
        dvdsimple->setToolTip(Q_("Disable DVD Menus (for compatibility)", 0));
#endif // QT_NO_TOOLTIP
        dvdsimple->setText(Q_("No DVD menus", 0));
        deviceLabel->setText(Q_("Disc device", 0));
        browseDiscButton->setText(Q_("Browse...", 0));
        audioCDRadioButton->setText(Q_("Audio CD", 0));
        vcdRadioButton->setText(Q_("SVCD/VCD", 0));
        diskOptionBox->setTitle(Q_("Starting Position", 0));
        chapterLabel->setText(Q_("Chapter", 0));
        chapterSpin->setSuffix(QString());
        chapterSpin->setPrefix(QString());
        titleLabel->setText(Q_("Title", 0));
        titleSpin->setSuffix(QString());
        diskOptionBox_2->setTitle(Q_("Audio and Subtitles", 0));
        audioLabel->setText(Q_("Audio track", 0));
        audioSpin->setSuffix(QString());
        audioSpin->setPrefix(QString());
        subtitlesLabel->setText(Q_("Subtitles track", 0));
        subtitlesSpin->setSuffix(QString());
        Q_UNUSED(OpenDisk);
    } // retranslateUi

};

namespace Ui {
    class OpenDisk: public Ui_OpenDisk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_DISK_H
