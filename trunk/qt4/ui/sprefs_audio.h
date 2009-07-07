#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'sprefs_audio.ui'
**
** Created: Wed May 6 11:27:31 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SPREFS_AUDIO_H
#define SPREFS_AUDIO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsAudio
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *enableAudio;
    QGroupBox *audioBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *defaultVolume;
    QSpinBox *volumeValue;
    QCheckBox *spdifBox;
    QCheckBox *saveVolBox;
    QLabel *label_8;
    QComboBox *detectionDolby;
    QLabel *label;
    QLineEdit *preferredAudioLanguage;
    QSpacerItem *horizontalSpacer;
    QGroupBox *outputAudioBox;
    QGridLayout *outputAudioLayout;
    QLabel *label_3;
    QComboBox *outputModule;
    QWidget *fileControl;
    QHBoxLayout *hboxLayout;
    QLabel *fileLabel;
    QLineEdit *fileName;
    QPushButton *fileBrowseButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QComboBox *visualisation;
    QCheckBox *headphoneEffect;
    QCheckBox *volNormBox;
    QLabel *label_5;
    QDoubleSpinBox *volNormSpin;
    QGroupBox *lastFMBox;
    QGridLayout *gridLayout2;
    QCheckBox *lastfm;
    QLineEdit *lastfm_user_edit;
    QLabel *lastfm_user_label;
    QLabel *lastfm_pass_label;
    QLineEdit *lastfm_pass_edit;

    void setupUi(QWidget *SPrefsAudio)
    {
        if (SPrefsAudio->objectName().isEmpty())
            SPrefsAudio->setObjectName(QString::fromUtf8("SPrefsAudio"));
        SPrefsAudio->resize(541, 609);
        vboxLayout = new QVBoxLayout(SPrefsAudio);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        enableAudio = new QCheckBox(SPrefsAudio);
        enableAudio->setObjectName(QString::fromUtf8("enableAudio"));
        enableAudio->setChecked(true);

        vboxLayout->addWidget(enableAudio);

        audioBox = new QGroupBox(SPrefsAudio);
        audioBox->setObjectName(QString::fromUtf8("audioBox"));
        gridLayout = new QGridLayout(audioBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(audioBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        defaultVolume = new QSlider(audioBox);
        defaultVolume->setObjectName(QString::fromUtf8("defaultVolume"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(defaultVolume->sizePolicy().hasHeightForWidth());
        defaultVolume->setSizePolicy(sizePolicy);
        defaultVolume->setMinimumSize(QSize(140, 0));
        defaultVolume->setMaximumSize(QSize(200, 16777215));
        defaultVolume->setLayoutDirection(Qt::LeftToRight);
        defaultVolume->setMaximum(400);
        defaultVolume->setValue(100);
        defaultVolume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(defaultVolume, 0, 2, 1, 2);

        volumeValue = new QSpinBox(audioBox);
        volumeValue->setObjectName(QString::fromUtf8("volumeValue"));
        volumeValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        volumeValue->setReadOnly(true);
        volumeValue->setMaximum(400);
        volumeValue->setValue(100);

        gridLayout->addWidget(volumeValue, 0, 4, 1, 1);

        spdifBox = new QCheckBox(audioBox);
        spdifBox->setObjectName(QString::fromUtf8("spdifBox"));

        gridLayout->addWidget(spdifBox, 1, 0, 1, 1);

        saveVolBox = new QCheckBox(audioBox);
        saveVolBox->setObjectName(QString::fromUtf8("saveVolBox"));

        gridLayout->addWidget(saveVolBox, 1, 2, 1, 3);

        label_8 = new QLabel(audioBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        detectionDolby = new QComboBox(audioBox);
        detectionDolby->setObjectName(QString::fromUtf8("detectionDolby"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(detectionDolby->sizePolicy().hasHeightForWidth());
        detectionDolby->setSizePolicy(sizePolicy1);
        detectionDolby->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(detectionDolby, 2, 2, 1, 3);

        label = new QLabel(audioBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        preferredAudioLanguage = new QLineEdit(audioBox);
        preferredAudioLanguage->setObjectName(QString::fromUtf8("preferredAudioLanguage"));

        gridLayout->addWidget(preferredAudioLanguage, 3, 2, 1, 3);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);


        vboxLayout->addWidget(audioBox);

        outputAudioBox = new QGroupBox(SPrefsAudio);
        outputAudioBox->setObjectName(QString::fromUtf8("outputAudioBox"));
        outputAudioLayout = new QGridLayout(outputAudioBox);
        outputAudioLayout->setObjectName(QString::fromUtf8("outputAudioLayout"));
        label_3 = new QLabel(outputAudioBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));

        outputAudioLayout->addWidget(label_3, 0, 0, 1, 1);

        outputModule = new QComboBox(outputAudioBox);
        outputModule->setObjectName(QString::fromUtf8("outputModule"));
        outputModule->setEnabled(true);
        sizePolicy1.setHeightForWidth(outputModule->sizePolicy().hasHeightForWidth());
        outputModule->setSizePolicy(sizePolicy1);

        outputAudioLayout->addWidget(outputModule, 0, 1, 1, 1);

        fileControl = new QWidget(outputAudioBox);
        fileControl->setObjectName(QString::fromUtf8("fileControl"));
        hboxLayout = new QHBoxLayout(fileControl);
        hboxLayout->setSpacing(0);
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        fileLabel = new QLabel(fileControl);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));
        fileLabel->setMinimumSize(QSize(100, 0));

        hboxLayout->addWidget(fileLabel);

        fileName = new QLineEdit(fileControl);
        fileName->setObjectName(QString::fromUtf8("fileName"));

        hboxLayout->addWidget(fileName);

        fileBrowseButton = new QPushButton(fileControl);
        fileBrowseButton->setObjectName(QString::fromUtf8("fileBrowseButton"));

        hboxLayout->addWidget(fileBrowseButton);


        outputAudioLayout->addWidget(fileControl, 1, 0, 1, 2);


        vboxLayout->addWidget(outputAudioBox);

        groupBox = new QGroupBox(SPrefsAudio);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        visualisation = new QComboBox(groupBox);
        visualisation->setObjectName(QString::fromUtf8("visualisation"));

        gridLayout1->addWidget(visualisation, 2, 1, 1, 1);

        headphoneEffect = new QCheckBox(groupBox);
        headphoneEffect->setObjectName(QString::fromUtf8("headphoneEffect"));

        gridLayout1->addWidget(headphoneEffect, 0, 0, 1, 1);

        volNormBox = new QCheckBox(groupBox);
        volNormBox->setObjectName(QString::fromUtf8("volNormBox"));

        gridLayout1->addWidget(volNormBox, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 2, 0, 1, 1);

        volNormSpin = new QDoubleSpinBox(groupBox);
        volNormSpin->setObjectName(QString::fromUtf8("volNormSpin"));
        volNormSpin->setAlignment(Qt::AlignRight);

        gridLayout1->addWidget(volNormSpin, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        lastFMBox = new QGroupBox(SPrefsAudio);
        lastFMBox->setObjectName(QString::fromUtf8("lastFMBox"));
        gridLayout2 = new QGridLayout(lastFMBox);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        lastfm = new QCheckBox(lastFMBox);
        lastfm->setObjectName(QString::fromUtf8("lastfm"));

        gridLayout2->addWidget(lastfm, 0, 0, 1, 2);

        lastfm_user_edit = new QLineEdit(lastFMBox);
        lastfm_user_edit->setObjectName(QString::fromUtf8("lastfm_user_edit"));

        gridLayout2->addWidget(lastfm_user_edit, 1, 1, 1, 2);

        lastfm_user_label = new QLabel(lastFMBox);
        lastfm_user_label->setObjectName(QString::fromUtf8("lastfm_user_label"));

        gridLayout2->addWidget(lastfm_user_label, 1, 0, 1, 1);

        lastfm_pass_label = new QLabel(lastFMBox);
        lastfm_pass_label->setObjectName(QString::fromUtf8("lastfm_pass_label"));

        gridLayout2->addWidget(lastfm_pass_label, 2, 0, 1, 1);

        lastfm_pass_edit = new QLineEdit(lastFMBox);
        lastfm_pass_edit->setObjectName(QString::fromUtf8("lastfm_pass_edit"));
        lastfm_pass_edit->setEchoMode(QLineEdit::Password);

        gridLayout2->addWidget(lastfm_pass_edit, 2, 1, 1, 2);


        vboxLayout->addWidget(lastFMBox);

#ifndef QT_NO_SHORTCUT
        label_8->setBuddy(detectionDolby);
        label->setBuddy(preferredAudioLanguage);
        label_3->setBuddy(outputModule);
        fileLabel->setBuddy(fileName);
        label_5->setBuddy(visualisation);
        lastfm_user_label->setBuddy(lastfm_user_edit);
        lastfm_pass_label->setBuddy(lastfm_pass_edit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(enableAudio, defaultVolume);
        QWidget::setTabOrder(defaultVolume, volumeValue);
        QWidget::setTabOrder(volumeValue, spdifBox);
        QWidget::setTabOrder(spdifBox, saveVolBox);
        QWidget::setTabOrder(saveVolBox, detectionDolby);
        QWidget::setTabOrder(detectionDolby, preferredAudioLanguage);
        QWidget::setTabOrder(preferredAudioLanguage, outputModule);
        QWidget::setTabOrder(outputModule, fileName);
        QWidget::setTabOrder(fileName, fileBrowseButton);
        QWidget::setTabOrder(fileBrowseButton, headphoneEffect);
        QWidget::setTabOrder(headphoneEffect, volNormBox);
        QWidget::setTabOrder(volNormBox, volNormSpin);
        QWidget::setTabOrder(volNormSpin, visualisation);
        QWidget::setTabOrder(visualisation, lastfm);
        QWidget::setTabOrder(lastfm, lastfm_user_edit);
        QWidget::setTabOrder(lastfm_user_edit, lastfm_pass_edit);

        retranslateUi(SPrefsAudio);
        QObject::connect(lastfm, SIGNAL(toggled(bool)), lastfm_pass_edit, SLOT(setVisible(bool)));
        QObject::connect(lastfm, SIGNAL(toggled(bool)), lastfm_pass_label, SLOT(setVisible(bool)));
        QObject::connect(lastfm, SIGNAL(toggled(bool)), lastfm_user_edit, SLOT(setVisible(bool)));
        QObject::connect(lastfm, SIGNAL(toggled(bool)), lastfm_user_label, SLOT(setVisible(bool)));

        detectionDolby->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SPrefsAudio);
    } // setupUi

    void retranslateUi(QWidget *SPrefsAudio)
    {
        SPrefsAudio->setWindowTitle(Q_("Form", 0));
        enableAudio->setText(Q_("Enable audio", 0));
        audioBox->setTitle(Q_("General Audio", 0));
        label_2->setText(Q_("Default volume", 0));
#ifndef QT_NO_TOOLTIP
        volumeValue->setToolTip(Q_("256 corresponds to 100%, 1024 to 400%", 0));
#endif // QT_NO_TOOLTIP
        volumeValue->setSuffix(Q_(" %", 0));
        spdifBox->setText(Q_("Use S/PDIF when available", 0));
        saveVolBox->setText(Q_("Save volume on exit", 0));
        label_8->setText(Q_("Force detection of Dolby Surround", 0));
        label->setText(Q_("Preferred audio language", 0));
        outputAudioBox->setTitle(Q_("Output", 0));
        label_3->setText(Q_("Type", 0));
        fileLabel->setText(Q_("File", 0));
        fileBrowseButton->setText(Q_("Browse...", 0));
        groupBox->setTitle(Q_("Effects", 0));
        headphoneEffect->setText(Q_("Headphone surround effect", 0));
        volNormBox->setText(Q_("Volume normalizer", 0));
        label_5->setText(Q_("Visualization", 0));
        lastFMBox->setTitle(Q_("last.fm", 0));
        lastfm->setText(Q_("Enable last.fm submission", 0));
        lastfm_user_label->setText(Q_("Username", 0));
        lastfm_pass_label->setText(Q_("Password", 0));
        Q_UNUSED(SPrefsAudio);
    } // retranslateUi

};

namespace Ui {
    class SPrefsAudio: public Ui_SPrefsAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_AUDIO_H
