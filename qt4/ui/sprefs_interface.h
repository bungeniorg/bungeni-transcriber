#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'sprefs_interface.ui'
**
** Created: Wed May 6 11:27:32 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SPREFS_INTERFACE_H
#define SPREFS_INTERFACE_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsInterface
{
public:
    QGridLayout *gridLayout_3;
    QLabel *languageLabel;
    QComboBox *language;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *qt4;
    QSpacerItem *horizontalSpacer;
    QLabel *defaultLabel;
    QLabel *label;
    QComboBox *displayModeBox;
    QCheckBox *embedVideo;
    QCheckBox *systrayBox;
    QCheckBox *fsController;
    QRadioButton *skins;
    QLabel *skinsLabel;
    QLabel *label_4;
    QLineEdit *fileSkin;
    QPushButton *skinBrowse;
    QFrame *line;
    QGroupBox *OneInterfaceBox;
    QGridLayout *gridLayout_2;
    QCheckBox *OneInterfaceMode;
    QLabel *assoName;
    QCheckBox *EnqueueOneInterfaceMode;
    QPushButton *assoButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *artFetchLabel;
    QComboBox *artFetcher;
    QCheckBox *updatesBox;
    QSpinBox *updatesDays;

    void setupUi(QWidget *SPrefsInterface)
    {
        if (SPrefsInterface->objectName().isEmpty())
            SPrefsInterface->setObjectName(QString::fromUtf8("SPrefsInterface"));
        SPrefsInterface->resize(629, 576);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SPrefsInterface->sizePolicy().hasHeightForWidth());
        SPrefsInterface->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(SPrefsInterface);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        languageLabel = new QLabel(SPrefsInterface);
        languageLabel->setObjectName(QString::fromUtf8("languageLabel"));

        gridLayout_3->addWidget(languageLabel, 0, 0, 1, 1);

        language = new QComboBox(SPrefsInterface);
        language->setObjectName(QString::fromUtf8("language"));

        gridLayout_3->addWidget(language, 0, 1, 1, 1);

        groupBox = new QGroupBox(SPrefsInterface);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qt4 = new QRadioButton(groupBox);
        qt4->setObjectName(QString::fromUtf8("qt4"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qt4->sizePolicy().hasHeightForWidth());
        qt4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qt4, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        defaultLabel = new QLabel(groupBox);
        defaultLabel->setObjectName(QString::fromUtf8("defaultLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(defaultLabel->sizePolicy().hasHeightForWidth());
        defaultLabel->setSizePolicy(sizePolicy2);
        defaultLabel->setFrameShape(QFrame::NoFrame);
        defaultLabel->setTextFormat(Qt::RichText);
        defaultLabel->setWordWrap(true);
        defaultLabel->setMargin(10);

        gridLayout->addWidget(defaultLabel, 0, 2, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label, 1, 2, 1, 1);

        displayModeBox = new QComboBox(groupBox);
        displayModeBox->setObjectName(QString::fromUtf8("displayModeBox"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(displayModeBox->sizePolicy().hasHeightForWidth());
        displayModeBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(displayModeBox, 1, 3, 1, 3);

        embedVideo = new QCheckBox(groupBox);
        embedVideo->setObjectName(QString::fromUtf8("embedVideo"));

        gridLayout->addWidget(embedVideo, 2, 2, 1, 2);

        systrayBox = new QCheckBox(groupBox);
        systrayBox->setObjectName(QString::fromUtf8("systrayBox"));

        gridLayout->addWidget(systrayBox, 2, 4, 1, 2);

        fsController = new QCheckBox(groupBox);
        fsController->setObjectName(QString::fromUtf8("fsController"));

        gridLayout->addWidget(fsController, 3, 2, 1, 4);

        skins = new QRadioButton(groupBox);
        skins->setObjectName(QString::fromUtf8("skins"));

        gridLayout->addWidget(skins, 5, 0, 1, 1);

        skinsLabel = new QLabel(groupBox);
        skinsLabel->setObjectName(QString::fromUtf8("skinsLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(skinsLabel->sizePolicy().hasHeightForWidth());
        skinsLabel->setSizePolicy(sizePolicy5);
        skinsLabel->setFrameShape(QFrame::NoFrame);
        skinsLabel->setTextFormat(Qt::RichText);
        skinsLabel->setScaledContents(false);
        skinsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        skinsLabel->setWordWrap(true);
        skinsLabel->setMargin(5);
        skinsLabel->setOpenExternalLinks(true);

        gridLayout->addWidget(skinsLabel, 5, 2, 1, 4);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 6, 0, 1, 2);

        fileSkin = new QLineEdit(groupBox);
        fileSkin->setObjectName(QString::fromUtf8("fileSkin"));
        sizePolicy4.setHeightForWidth(fileSkin->sizePolicy().hasHeightForWidth());
        fileSkin->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(fileSkin, 6, 2, 1, 3);

        skinBrowse = new QPushButton(groupBox);
        skinBrowse->setObjectName(QString::fromUtf8("skinBrowse"));
        sizePolicy1.setHeightForWidth(skinBrowse->sizePolicy().hasHeightForWidth());
        skinBrowse->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(skinBrowse, 6, 5, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 6);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 2);

        OneInterfaceBox = new QGroupBox(SPrefsInterface);
        OneInterfaceBox->setObjectName(QString::fromUtf8("OneInterfaceBox"));
        gridLayout_2 = new QGridLayout(OneInterfaceBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        OneInterfaceMode = new QCheckBox(OneInterfaceBox);
        OneInterfaceMode->setObjectName(QString::fromUtf8("OneInterfaceMode"));

        gridLayout_2->addWidget(OneInterfaceMode, 0, 0, 1, 1);

        assoName = new QLabel(OneInterfaceBox);
        assoName->setObjectName(QString::fromUtf8("assoName"));

        gridLayout_2->addWidget(assoName, 1, 0, 1, 1);

        EnqueueOneInterfaceMode = new QCheckBox(OneInterfaceBox);
        EnqueueOneInterfaceMode->setObjectName(QString::fromUtf8("EnqueueOneInterfaceMode"));

        gridLayout_2->addWidget(EnqueueOneInterfaceMode, 0, 1, 1, 2);

        assoButton = new QPushButton(OneInterfaceBox);
        assoButton->setObjectName(QString::fromUtf8("assoButton"));
        sizePolicy1.setHeightForWidth(assoButton->sizePolicy().hasHeightForWidth());
        assoButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(assoButton, 1, 2, 1, 1);


        gridLayout_3->addWidget(OneInterfaceBox, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(SPrefsInterface);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        artFetchLabel = new QLabel(groupBox_2);
        artFetchLabel->setObjectName(QString::fromUtf8("artFetchLabel"));

        gridLayout1->addWidget(artFetchLabel, 0, 0, 1, 1);

        artFetcher = new QComboBox(groupBox_2);
        artFetcher->setObjectName(QString::fromUtf8("artFetcher"));

        gridLayout1->addWidget(artFetcher, 0, 1, 1, 2);

        updatesBox = new QCheckBox(groupBox_2);
        updatesBox->setObjectName(QString::fromUtf8("updatesBox"));

        gridLayout1->addWidget(updatesBox, 1, 0, 1, 1);

        updatesDays = new QSpinBox(groupBox_2);
        updatesDays->setObjectName(QString::fromUtf8("updatesDays"));
        updatesDays->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(updatesDays, 1, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 3, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(fileSkin);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(language, qt4);
        QWidget::setTabOrder(qt4, displayModeBox);
        QWidget::setTabOrder(displayModeBox, OneInterfaceMode);
        QWidget::setTabOrder(OneInterfaceMode, assoButton);
        QWidget::setTabOrder(assoButton, artFetcher);
        QWidget::setTabOrder(artFetcher, updatesBox);
        QWidget::setTabOrder(updatesBox, updatesDays);

        retranslateUi(SPrefsInterface);

        QMetaObject::connectSlotsByName(SPrefsInterface);
    } // setupUi

    void retranslateUi(QWidget *SPrefsInterface)
    {
        SPrefsInterface->setWindowTitle(Q_("Form", 0));
        languageLabel->setText(Q_("Language", 0));
        groupBox->setTitle(Q_("Interface Type", 0));
        qt4->setText(Q_("Native", 0));
        defaultLabel->setText(Q_("This is VLC's default interface, with a native look and feel.", 0));
        label->setText(Q_("Display mode", 0));
        embedVideo->setText(Q_("Integrate video in interface", 0));
        systrayBox->setText(Q_("Systray icon", 0));
        fsController->setText(Q_("Show a controller in fullscreen", 0));
        skins->setText(Q_("Skins", 0));
        skinsLabel->setText(Q_("This is VLC's skinnable interface. You can download skins at <a href=\"http://www.videolan.org/vlc/skins.php\">http://www.videolan.org/vlc/skins.php</a> to customize your player.", 0));
        label_4->setText(Q_("Skin file", 0));
        skinBrowse->setText(Q_("Browse...", 0));
        OneInterfaceBox->setTitle(Q_("Instances", 0));
        OneInterfaceMode->setText(Q_("Allow only one instance", 0));
        assoName->setText(Q_("File associations:", 0));
        EnqueueOneInterfaceMode->setText(Q_("Enqueue files in playlist when in one instance mode", 0));
        assoButton->setText(Q_("Association Setup", 0));
        groupBox_2->setTitle(Q_("Privacy / Network Interaction", 0));
        artFetchLabel->setText(Q_("Album art download policy", 0));
        updatesBox->setText(Q_("Activate update notifier", 0));
        updatesDays->setSuffix(Q_(" days", 0));
        Q_UNUSED(SPrefsInterface);
    } // retranslateUi

};

namespace Ui {
    class SPrefsInterface: public Ui_SPrefsInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_INTERFACE_H
