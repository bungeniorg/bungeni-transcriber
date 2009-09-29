#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'sout.ui'
**
** Created: Wed May 6 11:27:32 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SOUT_H
#define SOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sout
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout1;
    QCheckBox *localOutput;
    QCheckBox *fileOutput;
    QLabel *fileLabel;
    QLineEdit *fileEdit;
    QPushButton *fileSelectButton;
    QCheckBox *rawInput;
    QCheckBox *HTTPOutput;
    QLabel *HTTPLabel;
    QLineEdit *HTTPEdit;
    QLabel *HTTPPortLabel;
    QSpinBox *HTTPPort;
    QCheckBox *MMSHOutput;
    QLabel *MMSHLabel;
    QLineEdit *MMSHEdit;
    QLabel *MMSHPortLabel;
    QSpinBox *MMSHPort;
    QCheckBox *RTPOutput;
    QLabel *RTPLabel;
    QLineEdit *RTPEdit;
    QLabel *RTPPortLabel;
    QSpinBox *RTPPort;
    QLabel *UDPLabel;
    QLineEdit *UDPEdit;
    QLabel *UDPPortLabel;
    QSpinBox *UDPPort;
    QLabel *RTPPortLabel2;
    QSpinBox *RTPPort2;
    QCheckBox *IcecastOutput;
    QLabel *IcecastLabel;
    QLineEdit *IcecastEdit;
    QLabel *IcecastPortLabel;
    QSpinBox *IcecastPort;
    QLabel *IcecastMountpointLabel;
    QLineEdit *IcecastMountpointEdit;
    QLabel *IcecastNameLabel;
    QLineEdit *IcecastNamePassEdit;
    QLabel *UDPRTPLabel;
    QCheckBox *UDPOutput;
    QFrame *line;
    QLabel *label_3;
    QComboBox *profileBox;
    QTabWidget *tabWidget;
    QWidget *muxer;
    QGridLayout *gridLayout2;
    QRadioButton *TSMux;
    QRadioButton *OggMux;
    QRadioButton *MOVMux;
    QRadioButton *FLVMux;
    QRadioButton *PSMux;
    QRadioButton *ASFMux;
    QRadioButton *WAVMux;
    QRadioButton *MPEG1Mux;
    QRadioButton *MP4Mux;
    QRadioButton *RAWMux;
    QRadioButton *MKVMux;
    QWidget *videoCodec;
    QGridLayout *gridLayout3;
    QCheckBox *transcodeVideo;
    QComboBox *vCodecBox;
    QLabel *vCodecLabel;
    QLabel *vBitrateLabel;
    QSpinBox *vBitrateSpin;
    QLabel *vScaleLabel;
    QComboBox *vScaleBox;
    QWidget *audioCodec;
    QGridLayout *gridLayout4;
    QCheckBox *transcodeAudio;
    QLabel *aCodecLabel;
    QComboBox *aCodecBox;
    QLabel *aBitrateLabel;
    QSpinBox *aBitrateSpin;
    QLabel *aChannelsLabel;
    QSpinBox *aChannelsSpin;
    QWidget *subtitles;
    QGridLayout *gridLayout5;
    QCheckBox *transcodeSubs;
    QComboBox *subsCodecBox;
    QCheckBox *subsOverlay;
    QFrame *line_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout6;
    QCheckBox *sap;
    QLabel *sapGroupLabel;
    QLineEdit *sapGroup;
    QSpinBox *ttl;
    QLineEdit *sapName;
    QCheckBox *soutAll;
    QLabel *ttlLabel;
    QCheckBox *soutKeep;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout2;
    QLineEdit *mrlEdit;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem;
    QDialogButtonBox *acceptButtonBox;

    void setupUi(QWidget *Sout)
    {
        if (Sout->objectName().isEmpty())
            Sout->setObjectName(QString::fromUtf8("Sout"));
        Sout->resize(644, 843);
        gridLayout = new QGridLayout(Sout);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Sout);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        localOutput = new QCheckBox(groupBox);
        localOutput->setObjectName(QString::fromUtf8("localOutput"));

        gridLayout1->addWidget(localOutput, 0, 1, 1, 2);

        fileOutput = new QCheckBox(groupBox);
        fileOutput->setObjectName(QString::fromUtf8("fileOutput"));
        fileOutput->setContextMenuPolicy(Qt::NoContextMenu);

        gridLayout1->addWidget(fileOutput, 1, 1, 1, 2);

        fileLabel = new QLabel(groupBox);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));
        fileLabel->setEnabled(false);

        gridLayout1->addWidget(fileLabel, 1, 3, 1, 1);

        fileEdit = new QLineEdit(groupBox);
        fileEdit->setObjectName(QString::fromUtf8("fileEdit"));
        fileEdit->setEnabled(false);

        gridLayout1->addWidget(fileEdit, 1, 4, 1, 1);

        fileSelectButton = new QPushButton(groupBox);
        fileSelectButton->setObjectName(QString::fromUtf8("fileSelectButton"));
        fileSelectButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileSelectButton->sizePolicy().hasHeightForWidth());
        fileSelectButton->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(fileSelectButton, 1, 5, 1, 1);

        rawInput = new QCheckBox(groupBox);
        rawInput->setObjectName(QString::fromUtf8("rawInput"));
        rawInput->setEnabled(false);

        gridLayout1->addWidget(rawInput, 1, 6, 1, 1);

        HTTPOutput = new QCheckBox(groupBox);
        HTTPOutput->setObjectName(QString::fromUtf8("HTTPOutput"));

        gridLayout1->addWidget(HTTPOutput, 2, 1, 1, 2);

        HTTPLabel = new QLabel(groupBox);
        HTTPLabel->setObjectName(QString::fromUtf8("HTTPLabel"));
        HTTPLabel->setEnabled(false);

        gridLayout1->addWidget(HTTPLabel, 2, 3, 1, 1);

        HTTPEdit = new QLineEdit(groupBox);
        HTTPEdit->setObjectName(QString::fromUtf8("HTTPEdit"));
        HTTPEdit->setEnabled(false);

        gridLayout1->addWidget(HTTPEdit, 2, 4, 1, 1);

        HTTPPortLabel = new QLabel(groupBox);
        HTTPPortLabel->setObjectName(QString::fromUtf8("HTTPPortLabel"));
        HTTPPortLabel->setEnabled(false);
        HTTPPortLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(HTTPPortLabel, 2, 5, 1, 1);

        HTTPPort = new QSpinBox(groupBox);
        HTTPPort->setObjectName(QString::fromUtf8("HTTPPort"));
        HTTPPort->setEnabled(false);
        HTTPPort->setMaximumSize(QSize(90, 16777215));
        HTTPPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HTTPPort->setMinimum(1);
        HTTPPort->setMaximum(65535);
        HTTPPort->setSingleStep(1);
        HTTPPort->setValue(8080);

        gridLayout1->addWidget(HTTPPort, 2, 6, 1, 1);

        MMSHOutput = new QCheckBox(groupBox);
        MMSHOutput->setObjectName(QString::fromUtf8("MMSHOutput"));

        gridLayout1->addWidget(MMSHOutput, 3, 1, 1, 2);

        MMSHLabel = new QLabel(groupBox);
        MMSHLabel->setObjectName(QString::fromUtf8("MMSHLabel"));
        MMSHLabel->setEnabled(false);

        gridLayout1->addWidget(MMSHLabel, 3, 3, 1, 1);

        MMSHEdit = new QLineEdit(groupBox);
        MMSHEdit->setObjectName(QString::fromUtf8("MMSHEdit"));
        MMSHEdit->setEnabled(false);

        gridLayout1->addWidget(MMSHEdit, 3, 4, 1, 1);

        MMSHPortLabel = new QLabel(groupBox);
        MMSHPortLabel->setObjectName(QString::fromUtf8("MMSHPortLabel"));
        MMSHPortLabel->setEnabled(false);
        MMSHPortLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(MMSHPortLabel, 3, 5, 1, 1);

        MMSHPort = new QSpinBox(groupBox);
        MMSHPort->setObjectName(QString::fromUtf8("MMSHPort"));
        MMSHPort->setEnabled(false);
        MMSHPort->setMaximumSize(QSize(90, 16777215));
        MMSHPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MMSHPort->setMinimum(1);
        MMSHPort->setMaximum(65535);
        MMSHPort->setValue(1234);

        gridLayout1->addWidget(MMSHPort, 3, 6, 1, 1);

        RTPOutput = new QCheckBox(groupBox);
        RTPOutput->setObjectName(QString::fromUtf8("RTPOutput"));

        gridLayout1->addWidget(RTPOutput, 4, 1, 1, 2);

        RTPLabel = new QLabel(groupBox);
        RTPLabel->setObjectName(QString::fromUtf8("RTPLabel"));
        RTPLabel->setEnabled(false);

        gridLayout1->addWidget(RTPLabel, 4, 3, 1, 1);

        RTPEdit = new QLineEdit(groupBox);
        RTPEdit->setObjectName(QString::fromUtf8("RTPEdit"));
        RTPEdit->setEnabled(false);

        gridLayout1->addWidget(RTPEdit, 4, 4, 1, 1);

        RTPPortLabel = new QLabel(groupBox);
        RTPPortLabel->setObjectName(QString::fromUtf8("RTPPortLabel"));
        RTPPortLabel->setEnabled(false);
        RTPPortLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(RTPPortLabel, 4, 5, 1, 1);

        RTPPort = new QSpinBox(groupBox);
        RTPPort->setObjectName(QString::fromUtf8("RTPPort"));
        RTPPort->setEnabled(false);
        RTPPort->setMaximumSize(QSize(90, 16777215));
        RTPPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RTPPort->setMinimum(1);
        RTPPort->setMaximum(65535);
        RTPPort->setValue(1234);

        gridLayout1->addWidget(RTPPort, 4, 6, 1, 1);

        UDPLabel = new QLabel(groupBox);
        UDPLabel->setObjectName(QString::fromUtf8("UDPLabel"));
        UDPLabel->setEnabled(true);

        gridLayout1->addWidget(UDPLabel, 5, 3, 1, 1);

        UDPEdit = new QLineEdit(groupBox);
        UDPEdit->setObjectName(QString::fromUtf8("UDPEdit"));
        UDPEdit->setEnabled(false);

        gridLayout1->addWidget(UDPEdit, 5, 4, 1, 1);

        UDPPortLabel = new QLabel(groupBox);
        UDPPortLabel->setObjectName(QString::fromUtf8("UDPPortLabel"));
        UDPPortLabel->setEnabled(false);
        UDPPortLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(UDPPortLabel, 5, 5, 1, 1);

        UDPPort = new QSpinBox(groupBox);
        UDPPort->setObjectName(QString::fromUtf8("UDPPort"));
        UDPPort->setEnabled(false);
        UDPPort->setMaximumSize(QSize(90, 16777215));
        UDPPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        UDPPort->setAccelerated(true);
        UDPPort->setMinimum(1);
        UDPPort->setMaximum(65535);
        UDPPort->setValue(1234);

        gridLayout1->addWidget(UDPPort, 5, 6, 1, 1);

        RTPPortLabel2 = new QLabel(groupBox);
        RTPPortLabel2->setObjectName(QString::fromUtf8("RTPPortLabel2"));
        RTPPortLabel2->setEnabled(false);
        RTPPortLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(RTPPortLabel2, 6, 5, 1, 1);

        RTPPort2 = new QSpinBox(groupBox);
        RTPPort2->setObjectName(QString::fromUtf8("RTPPort2"));
        RTPPort2->setEnabled(false);
        RTPPort2->setMaximumSize(QSize(90, 16777215));
        RTPPort2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RTPPort2->setAccelerated(true);
        RTPPort2->setMaximum(65355);
        RTPPort2->setValue(1234);

        gridLayout1->addWidget(RTPPort2, 6, 6, 1, 1);

        IcecastOutput = new QCheckBox(groupBox);
        IcecastOutput->setObjectName(QString::fromUtf8("IcecastOutput"));

        gridLayout1->addWidget(IcecastOutput, 7, 1, 1, 2);

        IcecastLabel = new QLabel(groupBox);
        IcecastLabel->setObjectName(QString::fromUtf8("IcecastLabel"));
        IcecastLabel->setEnabled(false);

        gridLayout1->addWidget(IcecastLabel, 7, 3, 1, 1);

        IcecastEdit = new QLineEdit(groupBox);
        IcecastEdit->setObjectName(QString::fromUtf8("IcecastEdit"));
        IcecastEdit->setEnabled(false);

        gridLayout1->addWidget(IcecastEdit, 7, 4, 1, 1);

        IcecastPortLabel = new QLabel(groupBox);
        IcecastPortLabel->setObjectName(QString::fromUtf8("IcecastPortLabel"));
        IcecastPortLabel->setEnabled(false);
        IcecastPortLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(IcecastPortLabel, 7, 5, 1, 1);

        IcecastPort = new QSpinBox(groupBox);
        IcecastPort->setObjectName(QString::fromUtf8("IcecastPort"));
        IcecastPort->setEnabled(false);
        IcecastPort->setMaximumSize(QSize(90, 16777215));
        IcecastPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        IcecastPort->setMaximum(65535);
        IcecastPort->setValue(1024);

        gridLayout1->addWidget(IcecastPort, 7, 6, 1, 1);

        IcecastMountpointLabel = new QLabel(groupBox);
        IcecastMountpointLabel->setObjectName(QString::fromUtf8("IcecastMountpointLabel"));
        IcecastMountpointLabel->setEnabled(false);

        gridLayout1->addWidget(IcecastMountpointLabel, 8, 3, 1, 1);

        IcecastMountpointEdit = new QLineEdit(groupBox);
        IcecastMountpointEdit->setObjectName(QString::fromUtf8("IcecastMountpointEdit"));
        IcecastMountpointEdit->setEnabled(false);

        gridLayout1->addWidget(IcecastMountpointEdit, 8, 4, 1, 1);

        IcecastNameLabel = new QLabel(groupBox);
        IcecastNameLabel->setObjectName(QString::fromUtf8("IcecastNameLabel"));
        IcecastNameLabel->setEnabled(false);
        IcecastNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(IcecastNameLabel, 8, 5, 1, 1);

        IcecastNamePassEdit = new QLineEdit(groupBox);
        IcecastNamePassEdit->setObjectName(QString::fromUtf8("IcecastNamePassEdit"));
        IcecastNamePassEdit->setEnabled(false);

        gridLayout1->addWidget(IcecastNamePassEdit, 8, 6, 1, 1);

        UDPRTPLabel = new QLabel(groupBox);
        UDPRTPLabel->setObjectName(QString::fromUtf8("UDPRTPLabel"));
        UDPRTPLabel->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(UDPRTPLabel->sizePolicy().hasHeightForWidth());
        UDPRTPLabel->setSizePolicy(sizePolicy1);
        UDPRTPLabel->setMaximumSize(QSize(100, 16777215));
        UDPRTPLabel->setTextFormat(Qt::PlainText);
        UDPRTPLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        UDPRTPLabel->setWordWrap(true);

        gridLayout1->addWidget(UDPRTPLabel, 5, 2, 2, 1);

        UDPOutput = new QCheckBox(groupBox);
        UDPOutput->setObjectName(QString::fromUtf8("UDPOutput"));
        UDPOutput->setEnabled(false);
        sizePolicy.setHeightForWidth(UDPOutput->sizePolicy().hasHeightForWidth());
        UDPOutput->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(UDPOutput, 5, 1, 1, 1);


        hboxLayout->addLayout(gridLayout1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        line = new QFrame(Sout);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        label_3 = new QLabel(Sout);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        profileBox = new QComboBox(Sout);
        profileBox->setObjectName(QString::fromUtf8("profileBox"));

        gridLayout->addWidget(profileBox, 2, 1, 1, 1);

        tabWidget = new QTabWidget(Sout);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        muxer = new QWidget();
        muxer->setObjectName(QString::fromUtf8("muxer"));
        muxer->setGeometry(QRect(0, 0, 622, 151));
        gridLayout2 = new QGridLayout(muxer);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        TSMux = new QRadioButton(muxer);
        TSMux->setObjectName(QString::fromUtf8("TSMux"));

        gridLayout2->addWidget(TSMux, 0, 0, 1, 1);

        OggMux = new QRadioButton(muxer);
        OggMux->setObjectName(QString::fromUtf8("OggMux"));

        gridLayout2->addWidget(OggMux, 0, 1, 1, 1);

        MOVMux = new QRadioButton(muxer);
        MOVMux->setObjectName(QString::fromUtf8("MOVMux"));

        gridLayout2->addWidget(MOVMux, 0, 2, 1, 1);

        FLVMux = new QRadioButton(muxer);
        FLVMux->setObjectName(QString::fromUtf8("FLVMux"));

        gridLayout2->addWidget(FLVMux, 0, 3, 1, 1);

        PSMux = new QRadioButton(muxer);
        PSMux->setObjectName(QString::fromUtf8("PSMux"));

        gridLayout2->addWidget(PSMux, 1, 0, 1, 1);

        ASFMux = new QRadioButton(muxer);
        ASFMux->setObjectName(QString::fromUtf8("ASFMux"));

        gridLayout2->addWidget(ASFMux, 1, 1, 1, 1);

        WAVMux = new QRadioButton(muxer);
        WAVMux->setObjectName(QString::fromUtf8("WAVMux"));

        gridLayout2->addWidget(WAVMux, 1, 2, 1, 1);

        MPEG1Mux = new QRadioButton(muxer);
        MPEG1Mux->setObjectName(QString::fromUtf8("MPEG1Mux"));

        gridLayout2->addWidget(MPEG1Mux, 2, 0, 1, 1);

        MP4Mux = new QRadioButton(muxer);
        MP4Mux->setObjectName(QString::fromUtf8("MP4Mux"));

        gridLayout2->addWidget(MP4Mux, 2, 1, 1, 1);

        RAWMux = new QRadioButton(muxer);
        RAWMux->setObjectName(QString::fromUtf8("RAWMux"));

        gridLayout2->addWidget(RAWMux, 2, 2, 1, 1);

        MKVMux = new QRadioButton(muxer);
        MKVMux->setObjectName(QString::fromUtf8("MKVMux"));

        gridLayout2->addWidget(MKVMux, 1, 3, 1, 1);

        tabWidget->addTab(muxer, QString());
        videoCodec = new QWidget();
        videoCodec->setObjectName(QString::fromUtf8("videoCodec"));
        videoCodec->setEnabled(true);
        videoCodec->setGeometry(QRect(0, 0, 622, 151));
        gridLayout3 = new QGridLayout(videoCodec);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        transcodeVideo = new QCheckBox(videoCodec);
        transcodeVideo->setObjectName(QString::fromUtf8("transcodeVideo"));

        gridLayout3->addWidget(transcodeVideo, 0, 0, 1, 1);

        vCodecBox = new QComboBox(videoCodec);
        vCodecBox->setObjectName(QString::fromUtf8("vCodecBox"));
        vCodecBox->setEnabled(false);
        vCodecBox->setEditable(false);

        gridLayout3->addWidget(vCodecBox, 0, 1, 2, 1);

        vCodecLabel = new QLabel(videoCodec);
        vCodecLabel->setObjectName(QString::fromUtf8("vCodecLabel"));
        vCodecLabel->setEnabled(false);

        gridLayout3->addWidget(vCodecLabel, 1, 0, 1, 1);

        vBitrateLabel = new QLabel(videoCodec);
        vBitrateLabel->setObjectName(QString::fromUtf8("vBitrateLabel"));
        vBitrateLabel->setEnabled(false);

        gridLayout3->addWidget(vBitrateLabel, 2, 0, 1, 1);

        vBitrateSpin = new QSpinBox(videoCodec);
        vBitrateSpin->setObjectName(QString::fromUtf8("vBitrateSpin"));
        vBitrateSpin->setEnabled(false);
        vBitrateSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        vBitrateSpin->setAccelerated(true);
        vBitrateSpin->setMinimum(8);
        vBitrateSpin->setMaximum(8192);
        vBitrateSpin->setValue(800);

        gridLayout3->addWidget(vBitrateSpin, 2, 1, 1, 1);

        vScaleLabel = new QLabel(videoCodec);
        vScaleLabel->setObjectName(QString::fromUtf8("vScaleLabel"));
        vScaleLabel->setEnabled(false);

        gridLayout3->addWidget(vScaleLabel, 3, 0, 1, 1);

        vScaleBox = new QComboBox(videoCodec);
        vScaleBox->setObjectName(QString::fromUtf8("vScaleBox"));
        vScaleBox->setEnabled(false);
        vScaleBox->setEditable(true);

        gridLayout3->addWidget(vScaleBox, 3, 1, 1, 1);

        tabWidget->addTab(videoCodec, QString());
        audioCodec = new QWidget();
        audioCodec->setObjectName(QString::fromUtf8("audioCodec"));
        audioCodec->setGeometry(QRect(0, 0, 622, 151));
        gridLayout4 = new QGridLayout(audioCodec);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        transcodeAudio = new QCheckBox(audioCodec);
        transcodeAudio->setObjectName(QString::fromUtf8("transcodeAudio"));

        gridLayout4->addWidget(transcodeAudio, 0, 0, 1, 1);

        aCodecLabel = new QLabel(audioCodec);
        aCodecLabel->setObjectName(QString::fromUtf8("aCodecLabel"));
        aCodecLabel->setEnabled(false);

        gridLayout4->addWidget(aCodecLabel, 1, 0, 1, 1);

        aCodecBox = new QComboBox(audioCodec);
        aCodecBox->setObjectName(QString::fromUtf8("aCodecBox"));
        aCodecBox->setEnabled(false);

        gridLayout4->addWidget(aCodecBox, 1, 1, 1, 1);

        aBitrateLabel = new QLabel(audioCodec);
        aBitrateLabel->setObjectName(QString::fromUtf8("aBitrateLabel"));
        aBitrateLabel->setEnabled(false);

        gridLayout4->addWidget(aBitrateLabel, 2, 0, 1, 1);

        aBitrateSpin = new QSpinBox(audioCodec);
        aBitrateSpin->setObjectName(QString::fromUtf8("aBitrateSpin"));
        aBitrateSpin->setEnabled(false);
        aBitrateSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        aBitrateSpin->setMinimum(8);
        aBitrateSpin->setMaximum(512);
        aBitrateSpin->setValue(128);

        gridLayout4->addWidget(aBitrateSpin, 2, 1, 1, 1);

        aChannelsLabel = new QLabel(audioCodec);
        aChannelsLabel->setObjectName(QString::fromUtf8("aChannelsLabel"));
        aChannelsLabel->setEnabled(false);

        gridLayout4->addWidget(aChannelsLabel, 3, 0, 1, 1);

        aChannelsSpin = new QSpinBox(audioCodec);
        aChannelsSpin->setObjectName(QString::fromUtf8("aChannelsSpin"));
        aChannelsSpin->setEnabled(false);
        aChannelsSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        aChannelsSpin->setMinimum(1);
        aChannelsSpin->setMaximum(10);
        aChannelsSpin->setValue(2);

        gridLayout4->addWidget(aChannelsSpin, 3, 1, 1, 1);

        tabWidget->addTab(audioCodec, QString());
        subtitles = new QWidget();
        subtitles->setObjectName(QString::fromUtf8("subtitles"));
        subtitles->setGeometry(QRect(0, 0, 622, 151));
        gridLayout5 = new QGridLayout(subtitles);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        transcodeSubs = new QCheckBox(subtitles);
        transcodeSubs->setObjectName(QString::fromUtf8("transcodeSubs"));

        gridLayout5->addWidget(transcodeSubs, 0, 0, 1, 1);

        subsCodecBox = new QComboBox(subtitles);
        subsCodecBox->setObjectName(QString::fromUtf8("subsCodecBox"));
        subsCodecBox->setEnabled(false);

        gridLayout5->addWidget(subsCodecBox, 0, 1, 1, 1);

        subsOverlay = new QCheckBox(subtitles);
        subsOverlay->setObjectName(QString::fromUtf8("subsOverlay"));
        subsOverlay->setEnabled(false);

        gridLayout5->addWidget(subsOverlay, 1, 1, 1, 1);

        tabWidget->addTab(subtitles, QString());

        gridLayout->addWidget(tabWidget, 3, 0, 1, 2);

        line_2 = new QFrame(Sout);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 4, 0, 1, 2);

        groupBox_3 = new QGroupBox(Sout);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        hboxLayout1 = new QHBoxLayout(groupBox_3);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        gridLayout6 = new QGridLayout();
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        sap = new QCheckBox(groupBox_3);
        sap->setObjectName(QString::fromUtf8("sap"));
        sap->setEnabled(false);

        gridLayout6->addWidget(sap, 0, 0, 1, 1);

        sapGroupLabel = new QLabel(groupBox_3);
        sapGroupLabel->setObjectName(QString::fromUtf8("sapGroupLabel"));
        sapGroupLabel->setEnabled(false);

        gridLayout6->addWidget(sapGroupLabel, 0, 3, 1, 1);

        sapGroup = new QLineEdit(groupBox_3);
        sapGroup->setObjectName(QString::fromUtf8("sapGroup"));
        sapGroup->setEnabled(false);

        gridLayout6->addWidget(sapGroup, 0, 4, 1, 1);

        ttl = new QSpinBox(groupBox_3);
        ttl->setObjectName(QString::fromUtf8("ttl"));
        ttl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ttl->setMinimum(1);
        ttl->setMaximum(255);

        gridLayout6->addWidget(ttl, 1, 4, 1, 1);

        sapName = new QLineEdit(groupBox_3);
        sapName->setObjectName(QString::fromUtf8("sapName"));
        sapName->setEnabled(false);

        gridLayout6->addWidget(sapName, 0, 1, 1, 2);

        soutAll = new QCheckBox(groupBox_3);
        soutAll->setObjectName(QString::fromUtf8("soutAll"));

        gridLayout6->addWidget(soutAll, 1, 0, 1, 2);

        ttlLabel = new QLabel(groupBox_3);
        ttlLabel->setObjectName(QString::fromUtf8("ttlLabel"));

        gridLayout6->addWidget(ttlLabel, 1, 3, 1, 1);

        soutKeep = new QCheckBox(groupBox_3);
        soutKeep->setObjectName(QString::fromUtf8("soutKeep"));

        gridLayout6->addWidget(soutKeep, 2, 0, 1, 2);


        hboxLayout1->addLayout(gridLayout6);


        gridLayout->addWidget(groupBox_3, 5, 0, 1, 2);

        groupBox_4 = new QGroupBox(Sout);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        hboxLayout2 = new QHBoxLayout(groupBox_4);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        mrlEdit = new QLineEdit(groupBox_4);
        mrlEdit->setObjectName(QString::fromUtf8("mrlEdit"));

        hboxLayout2->addWidget(mrlEdit);


        gridLayout->addWidget(groupBox_4, 6, 0, 1, 2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem);

        acceptButtonBox = new QDialogButtonBox(Sout);
        acceptButtonBox->setObjectName(QString::fromUtf8("acceptButtonBox"));
        acceptButtonBox->setStandardButtons(QDialogButtonBox::NoButton);

        hboxLayout3->addWidget(acceptButtonBox);


        gridLayout->addLayout(hboxLayout3, 7, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        UDPRTPLabel->setBuddy(UDPOutput);
#endif // QT_NO_SHORTCUT

        retranslateUi(Sout);
        QObject::connect(MMSHOutput, SIGNAL(clicked(bool)), MMSHLabel, SLOT(setEnabled(bool)));
        QObject::connect(MMSHOutput, SIGNAL(clicked(bool)), MMSHEdit, SLOT(setEnabled(bool)));
        QObject::connect(MMSHOutput, SIGNAL(clicked(bool)), MMSHPortLabel, SLOT(setEnabled(bool)));
        QObject::connect(RTPOutput, SIGNAL(clicked(bool)), RTPPortLabel, SLOT(setEnabled(bool)));
        QObject::connect(RTPOutput, SIGNAL(clicked(bool)), RTPPort, SLOT(setEnabled(bool)));
        QObject::connect(MMSHOutput, SIGNAL(clicked(bool)), MMSHPort, SLOT(setEnabled(bool)));
        QObject::connect(sap, SIGNAL(clicked(bool)), sapName, SLOT(setEnabled(bool)));
        QObject::connect(sap, SIGNAL(clicked(bool)), sapGroupLabel, SLOT(setEnabled(bool)));
        QObject::connect(sap, SIGNAL(clicked(bool)), sapGroup, SLOT(setEnabled(bool)));
        QObject::connect(HTTPOutput, SIGNAL(clicked(bool)), HTTPLabel, SLOT(setEnabled(bool)));
        QObject::connect(HTTPOutput, SIGNAL(clicked(bool)), HTTPEdit, SLOT(setEnabled(bool)));
        QObject::connect(HTTPOutput, SIGNAL(clicked(bool)), HTTPPortLabel, SLOT(setEnabled(bool)));
        QObject::connect(HTTPOutput, SIGNAL(clicked(bool)), HTTPPort, SLOT(setEnabled(bool)));
        QObject::connect(fileOutput, SIGNAL(clicked(bool)), fileLabel, SLOT(setEnabled(bool)));
        QObject::connect(fileOutput, SIGNAL(clicked(bool)), fileEdit, SLOT(setEnabled(bool)));
        QObject::connect(fileOutput, SIGNAL(clicked(bool)), fileSelectButton, SLOT(setEnabled(bool)));
        QObject::connect(fileOutput, SIGNAL(clicked(bool)), rawInput, SLOT(setEnabled(bool)));
        QObject::connect(rawInput, SIGNAL(clicked(bool)), HTTPOutput, SLOT(setDisabled(bool)));
        QObject::connect(rawInput, SIGNAL(clicked(bool)), groupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(IcecastOutput, SIGNAL(clicked(bool)), IcecastEdit, SLOT(setEnabled(bool)));
        QObject::connect(IcecastOutput, SIGNAL(clicked(bool)), IcecastLabel, SLOT(setEnabled(bool)));
        QObject::connect(IcecastOutput, SIGNAL(clicked(bool)), IcecastPortLabel, SLOT(setEnabled(bool)));
        QObject::connect(IcecastOutput, SIGNAL(clicked(bool)), IcecastPort, SLOT(setEnabled(bool)));
        QObject::connect(IcecastOutput, SIGNAL(clicked(bool)), IcecastMountpointEdit, SLOT(setEnabled(bool)));
        QObject::connect(IcecastOutput, SIGNAL(clicked(bool)), IcecastMountpointLabel, SLOT(setEnabled(bool)));
        QObject::connect(IcecastOutput, SIGNAL(clicked(bool)), IcecastNameLabel, SLOT(setEnabled(bool)));
        QObject::connect(IcecastOutput, SIGNAL(clicked(bool)), IcecastNamePassEdit, SLOT(setEnabled(bool)));
        QObject::connect(RTPOutput, SIGNAL(clicked(bool)), UDPOutput, SLOT(setEnabled(bool)));
        QObject::connect(RTPOutput, SIGNAL(clicked(bool)), UDPPort, SLOT(setEnabled(bool)));
        QObject::connect(RTPOutput, SIGNAL(clicked(bool)), UDPPortLabel, SLOT(setEnabled(bool)));
        QObject::connect(RTPOutput, SIGNAL(clicked(bool)), RTPPort2, SLOT(setEnabled(bool)));
        QObject::connect(RTPOutput, SIGNAL(clicked(bool)), RTPPortLabel2, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Sout);
    } // setupUi

    void retranslateUi(QWidget *Sout)
    {
        Sout->setWindowTitle(Q_("Stream Output", 0));
        groupBox->setTitle(Q_("Outputs", 0));
        localOutput->setText(Q_("Play locally", 0));
        fileOutput->setText(Q_("File", 0));
        fileLabel->setText(Q_("Filename", 0));
        fileSelectButton->setText(Q_("Browse...", 0));
        rawInput->setText(Q_("Dump raw input", 0));
        HTTPOutput->setText(Q_("HTTP", 0));
        HTTPLabel->setText(Q_("Address", 0));
        HTTPPortLabel->setText(Q_("Port:", 0));
        MMSHOutput->setText(Q_("MMSH", 0));
        MMSHLabel->setText(Q_("Address", 0));
        MMSHPortLabel->setText(Q_("Port:", 0));
        RTPOutput->setText(Q_("RTP", 0));
        RTPLabel->setText(Q_("Address", 0));
        RTPPortLabel->setText(Q_("Port:", 0));
        UDPLabel->setText(Q_("Address", 0));
        UDPPortLabel->setText(Q_("Port", 0));
        RTPPortLabel2->setText(Q_("Video Port", 0));
        IcecastOutput->setText(Q_("IceCast", 0));
        IcecastLabel->setText(Q_("Address", 0));
        IcecastPortLabel->setText(Q_("Port:", 0));
        IcecastMountpointLabel->setText(Q_("Mount Point", 0));
        IcecastNameLabel->setText(Q_("Login:pass:", 0));
        UDPRTPLabel->setText(Q_("Prefer UDP over RTP", 0));
#ifndef QT_NO_TOOLTIP
        UDPOutput->setToolTip(Q_("Using this option is not recommended in most of the cases.", 0));
#endif // QT_NO_TOOLTIP
        UDPOutput->setText(QString());
        label_3->setText(Q_("Profile", 0));
        TSMux->setText(Q_("MPEG-TS", 0));
        OggMux->setText(Q_("Ogg/Ogm", 0));
        MOVMux->setText(Q_("MOV", 0));
        FLVMux->setText(Q_("FLV", 0));
        PSMux->setText(Q_("MPEG-PS", 0));
        ASFMux->setText(Q_("ASF/WMV", 0));
        WAVMux->setText(Q_("WAV", 0));
        MPEG1Mux->setText(Q_("MPEG 1", 0));
        MP4Mux->setText(Q_("MP4", 0));
        RAWMux->setText(Q_("RAW", 0));
        MKVMux->setText(Q_("MKV", 0));
        tabWidget->setTabText(tabWidget->indexOf(muxer), Q_("Encapsulation", 0));
        transcodeVideo->setText(Q_("Video", 0));
        vCodecLabel->setText(Q_("Codec", 0));
        vBitrateLabel->setText(Q_("Bitrate (kb/s)", 0));
        vBitrateSpin->setSuffix(Q_(" kb/s", 0));
        vScaleLabel->setText(Q_("Scale", 0));
        tabWidget->setTabText(tabWidget->indexOf(videoCodec), Q_("Video codec", 0));
        transcodeAudio->setText(Q_("Audio", 0));
        aCodecLabel->setText(Q_("Codec", 0));
        aBitrateLabel->setText(Q_("Bitrate (kb/s)", 0));
        aBitrateSpin->setSuffix(Q_(" kb/s", 0));
        aChannelsLabel->setText(Q_("Channels", 0));
        tabWidget->setTabText(tabWidget->indexOf(audioCodec), Q_("Audio codec", 0));
        transcodeSubs->setText(Q_("Subtitles", 0));
        subsOverlay->setText(Q_("Overlay subtitles on the video", 0));
        tabWidget->setTabText(tabWidget->indexOf(subtitles), Q_("Subtitles", 0));
        groupBox_3->setTitle(Q_("Miscellaneous", 0));
        sap->setText(Q_("SAP announce", 0));
        sapGroupLabel->setText(Q_("Group name", 0));
        soutAll->setText(Q_("Stream all elementary streams", 0));
        ttlLabel->setText(Q_("Time-To-Live (TTL)", 0));
        soutKeep->setText(Q_("Keep stream output open", 0));
        groupBox_4->setTitle(Q_("Generated stream output string", 0));
        Q_UNUSED(Sout);
    } // retranslateUi

};

namespace Ui {
    class Sout: public Ui_Sout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SOUT_H
