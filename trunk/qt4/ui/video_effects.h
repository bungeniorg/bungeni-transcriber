#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'video_effects.ui'
**
** Created: Wed May 6 11:27:31 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef VIDEO_EFFECTS_H
#define VIDEO_EFFECTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDial>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtVideoWidget
{
public:
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *transformEnable;
    QGridLayout *gridLayout1;
    QComboBox *transformTypeCombo;
    QGroupBox *sharpenEnable;
    QGridLayout *gridLayout2;
    QLabel *label_29;
    QSlider *sharpenSigmaSlider;
    QGroupBox *adjustEnable;
    QGridLayout *gridLayout3;
    QSlider *hueSlider;
    QSlider *gammaSlider;
    QSlider *saturationSlider;
    QSlider *brightnessSlider;
    QSlider *contrastSlider;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QCheckBox *brightnessThresholdCheck;
    QWidget *tab_2;
    QGridLayout *gridLayout4;
    QGroupBox *extractEnable;
    QGridLayout *gridLayout5;
    QLabel *label_6;
    QLineEdit *extractComponentText;
    QCheckBox *invertEnable;
    QGroupBox *colorthresEnable;
    QGridLayout *gridLayout6;
    QLabel *label_14;
    QSlider *colorthresSimilaritythresSlider;
    QSlider *colorthresSaturationthresSlider;
    QLabel *label_13;
    QLabel *label_8;
    QLineEdit *colorthresColorText;
    QWidget *tab_3;
    QGridLayout *gridLayout7;
    QLabel *label_10;
    QSpinBox *cropTopPx;
    QLabel *label_11;
    QSpinBox *cropLeftPx;
    QLabel *label_12;
    QSpinBox *cropRightPx;
    QLabel *label_7;
    QSpinBox *cropBotPx;
    QCheckBox *topBotCropSync;
    QCheckBox *leftRightCropSync;
    QSpacerItem *spacerItem;
    QWidget *tab_5;
    QGridLayout *gridLayout8;
    QCheckBox *magnifyEnable;
    QGroupBox *puzzleEnable;
    QGridLayout *gridLayout9;
    QSpinBox *puzzleRowsSpin;
    QSpinBox *puzzleColsSpin;
    QCheckBox *puzzleBlackSlotCheck;
    QLabel *label_26;
    QLabel *label_27;
    QGroupBox *rotateEnable;
    QGridLayout *gridLayout10;
    QDial *rotateAngleDial;
    QLabel *label_28;
    QWidget *tab_7;
    QGridLayout *gridLayout11;
    QCheckBox *waveEnable;
    QCheckBox *rippleEnable;
    QCheckBox *psychedelicEnable;
    QCheckBox *noiseEnable;
    QCheckBox *motiondetectEnable;
    QGroupBox *motionblurEnable;
    QGridLayout *gridLayout12;
    QLabel *label_25;
    QSlider *blurFactorSlider;
    QGroupBox *gradientEnable;
    QGridLayout *gridLayout13;
    QLabel *label_18;
    QCheckBox *gradientTypeCheck;
    QCheckBox *gradientCartoonCheck;
    QComboBox *gradientModeCombo;
    QWidget *tab_9;
    QGridLayout *gridLayout14;
    QGroupBox *wallEnable;
    QGridLayout *gridLayout15;
    QLabel *label_31;
    QLabel *label_30;
    QSpinBox *wallColsSpin;
    QSpinBox *wallRowsSpin;
    QGroupBox *marqEnable;
    QGridLayout *gridLayout16;
    QLabel *label_24;
    QLabel *label_23;
    QLineEdit *marqMarqueeText;
    QComboBox *marqPositionCombo;
    QGroupBox *panoramixEnable;
    QGridLayout *gridLayout17;
    QLabel *label_36;
    QSpinBox *panoramixRowsSpin;
    QLabel *label_35;
    QSpinBox *panoramixColsSpin;
    QGroupBox *cloneEnable;
    QGridLayout *gridLayout18;
    QLabel *label_9;
    QSpinBox *cloneCountSpin;
    QWidget *tab_8;
    QGridLayout *gridLayout19;
    QGroupBox *logoEnable;
    QGridLayout *gridLayout20;
    QLabel *label_22;
    QLabel *label_21;
    QLabel *label_20;
    QSlider *logoTransparencySlider;
    QSpinBox *logoXSpin;
    QSpinBox *logoYSpin;
    QLabel *label_19;
    QLineEdit *logoFileText;
    QGroupBox *eraseEnable;
    QGridLayout *gridLayout21;
    QLabel *label_16;
    QLabel *label_17;
    QSpinBox *eraseXSpin;
    QSpinBox *eraseYSpin;
    QLineEdit *eraseMaskText;
    QLabel *label_15;
    QWidget *tab_6;
    QGridLayout *gridLayout22;
    QLineEdit *subpictureFilterText;
    QLabel *label_34;
    QLineEdit *videoFilterText;
    QLabel *label_33;
    QLabel *label_32;
    QLineEdit *voutFilterText;

    void setupUi(QTabWidget *ExtVideoWidget)
    {
        if (ExtVideoWidget->objectName().isEmpty())
            ExtVideoWidget->setObjectName(QString::fromUtf8("ExtVideoWidget"));
        ExtVideoWidget->resize(472, 290);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(0, 0, 468, 262));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        transformEnable = new QGroupBox(tab);
        transformEnable->setObjectName(QString::fromUtf8("transformEnable"));
        transformEnable->setCheckable(true);
        transformEnable->setChecked(false);
        gridLayout1 = new QGridLayout(transformEnable);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        transformTypeCombo = new QComboBox(transformEnable);
        transformTypeCombo->setObjectName(QString::fromUtf8("transformTypeCombo"));

        gridLayout1->addWidget(transformTypeCombo, 0, 0, 1, 1);


        gridLayout->addWidget(transformEnable, 1, 1, 1, 1);

        sharpenEnable = new QGroupBox(tab);
        sharpenEnable->setObjectName(QString::fromUtf8("sharpenEnable"));
        sharpenEnable->setCheckable(true);
        sharpenEnable->setChecked(false);
        gridLayout2 = new QGridLayout(sharpenEnable);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_29 = new QLabel(sharpenEnable);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout2->addWidget(label_29, 0, 0, 1, 1);

        sharpenSigmaSlider = new QSlider(sharpenEnable);
        sharpenSigmaSlider->setObjectName(QString::fromUtf8("sharpenSigmaSlider"));
        sharpenSigmaSlider->setMaximum(200);
        sharpenSigmaSlider->setSingleStep(1);
        sharpenSigmaSlider->setPageStep(10);
        sharpenSigmaSlider->setOrientation(Qt::Horizontal);
        sharpenSigmaSlider->setTickPosition(QSlider::TicksBothSides);
        sharpenSigmaSlider->setTickInterval(100);

        gridLayout2->addWidget(sharpenSigmaSlider, 0, 1, 1, 1);


        gridLayout->addWidget(sharpenEnable, 0, 1, 1, 1);

        adjustEnable = new QGroupBox(tab);
        adjustEnable->setObjectName(QString::fromUtf8("adjustEnable"));
        adjustEnable->setEnabled(true);
        adjustEnable->setCheckable(true);
        adjustEnable->setChecked(false);
        gridLayout3 = new QGridLayout(adjustEnable);
        gridLayout3->setSpacing(0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        hueSlider = new QSlider(adjustEnable);
        hueSlider->setObjectName(QString::fromUtf8("hueSlider"));
        hueSlider->setMaximum(360);
        hueSlider->setOrientation(Qt::Horizontal);
        hueSlider->setTickPosition(QSlider::TicksBothSides);
        hueSlider->setTickInterval(60);

        gridLayout3->addWidget(hueSlider, 0, 1, 1, 1);

        gammaSlider = new QSlider(adjustEnable);
        gammaSlider->setObjectName(QString::fromUtf8("gammaSlider"));
        gammaSlider->setMaximum(500);
        gammaSlider->setOrientation(Qt::Horizontal);
        gammaSlider->setTickPosition(QSlider::TicksBothSides);
        gammaSlider->setTickInterval(50);

        gridLayout3->addWidget(gammaSlider, 4, 1, 1, 1);

        saturationSlider = new QSlider(adjustEnable);
        saturationSlider->setObjectName(QString::fromUtf8("saturationSlider"));
        saturationSlider->setMaximum(300);
        saturationSlider->setOrientation(Qt::Horizontal);
        saturationSlider->setTickPosition(QSlider::TicksBothSides);
        saturationSlider->setTickInterval(100);

        gridLayout3->addWidget(saturationSlider, 3, 1, 1, 1);

        brightnessSlider = new QSlider(adjustEnable);
        brightnessSlider->setObjectName(QString::fromUtf8("brightnessSlider"));
        brightnessSlider->setMaximum(200);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setTickPosition(QSlider::TicksBothSides);
        brightnessSlider->setTickInterval(100);

        gridLayout3->addWidget(brightnessSlider, 2, 1, 1, 1);

        contrastSlider = new QSlider(adjustEnable);
        contrastSlider->setObjectName(QString::fromUtf8("contrastSlider"));
        contrastSlider->setMaximum(200);
        contrastSlider->setOrientation(Qt::Horizontal);
        contrastSlider->setTickPosition(QSlider::TicksBothSides);
        contrastSlider->setTickInterval(100);

        gridLayout3->addWidget(contrastSlider, 1, 1, 1, 1);

        label_5 = new QLabel(adjustEnable);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout3->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(adjustEnable);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout3->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(adjustEnable);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout3->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(adjustEnable);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout3->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(adjustEnable);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout3->addWidget(label, 0, 0, 1, 1);

        brightnessThresholdCheck = new QCheckBox(adjustEnable);
        brightnessThresholdCheck->setObjectName(QString::fromUtf8("brightnessThresholdCheck"));

        gridLayout3->addWidget(brightnessThresholdCheck, 5, 1, 1, 1);


        gridLayout->addWidget(adjustEnable, 0, 0, 2, 1);

        ExtVideoWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setGeometry(QRect(0, 0, 100, 30));
        gridLayout4 = new QGridLayout(tab_2);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        extractEnable = new QGroupBox(tab_2);
        extractEnable->setObjectName(QString::fromUtf8("extractEnable"));
        extractEnable->setCheckable(true);
        extractEnable->setChecked(false);
        gridLayout5 = new QGridLayout(extractEnable);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        label_6 = new QLabel(extractEnable);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout5->addWidget(label_6, 0, 0, 1, 1);

        extractComponentText = new QLineEdit(extractEnable);
        extractComponentText->setObjectName(QString::fromUtf8("extractComponentText"));

        gridLayout5->addWidget(extractComponentText, 0, 1, 1, 1);


        gridLayout4->addWidget(extractEnable, 1, 1, 1, 1);

        invertEnable = new QCheckBox(tab_2);
        invertEnable->setObjectName(QString::fromUtf8("invertEnable"));

        gridLayout4->addWidget(invertEnable, 0, 1, 1, 1);

        colorthresEnable = new QGroupBox(tab_2);
        colorthresEnable->setObjectName(QString::fromUtf8("colorthresEnable"));
        colorthresEnable->setCheckable(true);
        colorthresEnable->setChecked(false);
        gridLayout6 = new QGridLayout(colorthresEnable);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        label_14 = new QLabel(colorthresEnable);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout6->addWidget(label_14, 2, 0, 1, 1);

        colorthresSimilaritythresSlider = new QSlider(colorthresEnable);
        colorthresSimilaritythresSlider->setObjectName(QString::fromUtf8("colorthresSimilaritythresSlider"));
        colorthresSimilaritythresSlider->setOrientation(Qt::Horizontal);

        gridLayout6->addWidget(colorthresSimilaritythresSlider, 2, 1, 1, 1);

        colorthresSaturationthresSlider = new QSlider(colorthresEnable);
        colorthresSaturationthresSlider->setObjectName(QString::fromUtf8("colorthresSaturationthresSlider"));
        colorthresSaturationthresSlider->setOrientation(Qt::Horizontal);

        gridLayout6->addWidget(colorthresSaturationthresSlider, 1, 1, 1, 1);

        label_13 = new QLabel(colorthresEnable);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout6->addWidget(label_13, 1, 0, 1, 1);

        label_8 = new QLabel(colorthresEnable);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout6->addWidget(label_8, 0, 0, 1, 1);

        colorthresColorText = new QLineEdit(colorthresEnable);
        colorthresColorText->setObjectName(QString::fromUtf8("colorthresColorText"));

        gridLayout6->addWidget(colorthresColorText, 0, 1, 1, 1);


        gridLayout4->addWidget(colorthresEnable, 0, 0, 2, 1);

        ExtVideoWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setGeometry(QRect(0, 0, 100, 30));
        gridLayout7 = new QGridLayout(tab_3);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout7->addWidget(label_10, 0, 2, 1, 1);

        cropTopPx = new QSpinBox(tab_3);
        cropTopPx->setObjectName(QString::fromUtf8("cropTopPx"));
        cropTopPx->setMaximum(4095);

        gridLayout7->addWidget(cropTopPx, 0, 3, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout7->addWidget(label_11, 1, 0, 1, 1);

        cropLeftPx = new QSpinBox(tab_3);
        cropLeftPx->setObjectName(QString::fromUtf8("cropLeftPx"));
        cropLeftPx->setMaximum(4095);

        gridLayout7->addWidget(cropLeftPx, 1, 1, 1, 1);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout7->addWidget(label_12, 1, 4, 1, 1);

        cropRightPx = new QSpinBox(tab_3);
        cropRightPx->setObjectName(QString::fromUtf8("cropRightPx"));
        cropRightPx->setMaximum(4095);

        gridLayout7->addWidget(cropRightPx, 1, 5, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout7->addWidget(label_7, 2, 2, 1, 1);

        cropBotPx = new QSpinBox(tab_3);
        cropBotPx->setObjectName(QString::fromUtf8("cropBotPx"));
        cropBotPx->setMaximum(4095);

        gridLayout7->addWidget(cropBotPx, 2, 3, 1, 1);

        topBotCropSync = new QCheckBox(tab_3);
        topBotCropSync->setObjectName(QString::fromUtf8("topBotCropSync"));

        gridLayout7->addWidget(topBotCropSync, 3, 0, 1, 6);

        leftRightCropSync = new QCheckBox(tab_3);
        leftRightCropSync->setObjectName(QString::fromUtf8("leftRightCropSync"));

        gridLayout7->addWidget(leftRightCropSync, 4, 0, 1, 6);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout7->addItem(spacerItem, 1, 3, 1, 1);

        ExtVideoWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab_5->setGeometry(QRect(0, 0, 100, 30));
        gridLayout8 = new QGridLayout(tab_5);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        magnifyEnable = new QCheckBox(tab_5);
        magnifyEnable->setObjectName(QString::fromUtf8("magnifyEnable"));

        gridLayout8->addWidget(magnifyEnable, 0, 0, 1, 1);

        puzzleEnable = new QGroupBox(tab_5);
        puzzleEnable->setObjectName(QString::fromUtf8("puzzleEnable"));
        puzzleEnable->setCheckable(true);
        puzzleEnable->setChecked(false);
        gridLayout9 = new QGridLayout(puzzleEnable);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        puzzleRowsSpin = new QSpinBox(puzzleEnable);
        puzzleRowsSpin->setObjectName(QString::fromUtf8("puzzleRowsSpin"));
        puzzleRowsSpin->setMinimum(2);
        puzzleRowsSpin->setMaximum(16);
        puzzleRowsSpin->setValue(3);

        gridLayout9->addWidget(puzzleRowsSpin, 0, 1, 1, 1);

        puzzleColsSpin = new QSpinBox(puzzleEnable);
        puzzleColsSpin->setObjectName(QString::fromUtf8("puzzleColsSpin"));
        puzzleColsSpin->setMinimum(2);
        puzzleColsSpin->setMaximum(16);
        puzzleColsSpin->setValue(3);

        gridLayout9->addWidget(puzzleColsSpin, 1, 1, 1, 1);

        puzzleBlackSlotCheck = new QCheckBox(puzzleEnable);
        puzzleBlackSlotCheck->setObjectName(QString::fromUtf8("puzzleBlackSlotCheck"));

        gridLayout9->addWidget(puzzleBlackSlotCheck, 2, 0, 1, 2);

        label_26 = new QLabel(puzzleEnable);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout9->addWidget(label_26, 1, 0, 1, 1);

        label_27 = new QLabel(puzzleEnable);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout9->addWidget(label_27, 0, 0, 1, 1);


        gridLayout8->addWidget(puzzleEnable, 0, 1, 2, 1);

        rotateEnable = new QGroupBox(tab_5);
        rotateEnable->setObjectName(QString::fromUtf8("rotateEnable"));
        rotateEnable->setCheckable(true);
        rotateEnable->setChecked(false);
        gridLayout10 = new QGridLayout(rotateEnable);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        rotateAngleDial = new QDial(rotateEnable);
        rotateAngleDial->setObjectName(QString::fromUtf8("rotateAngleDial"));
        rotateAngleDial->setMaximum(359);
        rotateAngleDial->setValue(180);
        rotateAngleDial->setSliderPosition(180);

        gridLayout10->addWidget(rotateAngleDial, 0, 1, 1, 1);

        label_28 = new QLabel(rotateEnable);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout10->addWidget(label_28, 0, 0, 1, 1);


        gridLayout8->addWidget(rotateEnable, 1, 0, 1, 1);

        ExtVideoWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tab_7->setGeometry(QRect(0, 0, 100, 30));
        gridLayout11 = new QGridLayout(tab_7);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        waveEnable = new QCheckBox(tab_7);
        waveEnable->setObjectName(QString::fromUtf8("waveEnable"));

        gridLayout11->addWidget(waveEnable, 2, 0, 1, 1);

        rippleEnable = new QCheckBox(tab_7);
        rippleEnable->setObjectName(QString::fromUtf8("rippleEnable"));

        gridLayout11->addWidget(rippleEnable, 3, 0, 1, 1);

        psychedelicEnable = new QCheckBox(tab_7);
        psychedelicEnable->setObjectName(QString::fromUtf8("psychedelicEnable"));

        gridLayout11->addWidget(psychedelicEnable, 3, 1, 1, 1);

        noiseEnable = new QCheckBox(tab_7);
        noiseEnable->setObjectName(QString::fromUtf8("noiseEnable"));

        gridLayout11->addWidget(noiseEnable, 2, 1, 1, 1);

        motiondetectEnable = new QCheckBox(tab_7);
        motiondetectEnable->setObjectName(QString::fromUtf8("motiondetectEnable"));

        gridLayout11->addWidget(motiondetectEnable, 1, 1, 1, 1);

        motionblurEnable = new QGroupBox(tab_7);
        motionblurEnable->setObjectName(QString::fromUtf8("motionblurEnable"));
        motionblurEnable->setCheckable(true);
        motionblurEnable->setChecked(false);
        gridLayout12 = new QGridLayout(motionblurEnable);
        gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
        label_25 = new QLabel(motionblurEnable);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout12->addWidget(label_25, 0, 0, 1, 1);

        blurFactorSlider = new QSlider(motionblurEnable);
        blurFactorSlider->setObjectName(QString::fromUtf8("blurFactorSlider"));
        blurFactorSlider->setMinimum(1);
        blurFactorSlider->setMaximum(127);
        blurFactorSlider->setValue(80);
        blurFactorSlider->setOrientation(Qt::Horizontal);
        blurFactorSlider->setTickPosition(QSlider::TicksBothSides);
        blurFactorSlider->setTickInterval(16);

        gridLayout12->addWidget(blurFactorSlider, 0, 1, 1, 1);


        gridLayout11->addWidget(motionblurEnable, 0, 1, 1, 1);

        gradientEnable = new QGroupBox(tab_7);
        gradientEnable->setObjectName(QString::fromUtf8("gradientEnable"));
        gradientEnable->setCheckable(true);
        gradientEnable->setChecked(false);
        gridLayout13 = new QGridLayout(gradientEnable);
        gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
        label_18 = new QLabel(gradientEnable);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout13->addWidget(label_18, 0, 0, 1, 1);

        gradientTypeCheck = new QCheckBox(gradientEnable);
        gradientTypeCheck->setObjectName(QString::fromUtf8("gradientTypeCheck"));

        gridLayout13->addWidget(gradientTypeCheck, 1, 0, 1, 2);

        gradientCartoonCheck = new QCheckBox(gradientEnable);
        gradientCartoonCheck->setObjectName(QString::fromUtf8("gradientCartoonCheck"));

        gridLayout13->addWidget(gradientCartoonCheck, 2, 0, 1, 2);

        gradientModeCombo = new QComboBox(gradientEnable);
        gradientModeCombo->setObjectName(QString::fromUtf8("gradientModeCombo"));

        gridLayout13->addWidget(gradientModeCombo, 0, 1, 1, 1);


        gridLayout11->addWidget(gradientEnable, 0, 0, 2, 1);

        ExtVideoWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tab_9->setGeometry(QRect(0, 0, 100, 30));
        gridLayout14 = new QGridLayout(tab_9);
        gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
        wallEnable = new QGroupBox(tab_9);
        wallEnable->setObjectName(QString::fromUtf8("wallEnable"));
        wallEnable->setCheckable(true);
        wallEnable->setChecked(false);
        gridLayout15 = new QGridLayout(wallEnable);
        gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
        label_31 = new QLabel(wallEnable);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout15->addWidget(label_31, 0, 0, 1, 1);

        label_30 = new QLabel(wallEnable);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout15->addWidget(label_30, 1, 0, 1, 1);

        wallColsSpin = new QSpinBox(wallEnable);
        wallColsSpin->setObjectName(QString::fromUtf8("wallColsSpin"));
        wallColsSpin->setMinimum(1);
        wallColsSpin->setValue(3);

        gridLayout15->addWidget(wallColsSpin, 1, 1, 1, 1);

        wallRowsSpin = new QSpinBox(wallEnable);
        wallRowsSpin->setObjectName(QString::fromUtf8("wallRowsSpin"));
        wallRowsSpin->setMinimum(1);
        wallRowsSpin->setValue(3);

        gridLayout15->addWidget(wallRowsSpin, 0, 1, 1, 1);


        gridLayout14->addWidget(wallEnable, 0, 0, 1, 1);

        marqEnable = new QGroupBox(tab_9);
        marqEnable->setObjectName(QString::fromUtf8("marqEnable"));
        marqEnable->setCheckable(true);
        marqEnable->setChecked(false);
        gridLayout16 = new QGridLayout(marqEnable);
        gridLayout16->setObjectName(QString::fromUtf8("gridLayout16"));
        label_24 = new QLabel(marqEnable);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout16->addWidget(label_24, 1, 0, 1, 1);

        label_23 = new QLabel(marqEnable);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout16->addWidget(label_23, 0, 0, 1, 1);

        marqMarqueeText = new QLineEdit(marqEnable);
        marqMarqueeText->setObjectName(QString::fromUtf8("marqMarqueeText"));

        gridLayout16->addWidget(marqMarqueeText, 0, 1, 1, 1);

        marqPositionCombo = new QComboBox(marqEnable);
        marqPositionCombo->setObjectName(QString::fromUtf8("marqPositionCombo"));

        gridLayout16->addWidget(marqPositionCombo, 1, 1, 1, 1);


        gridLayout14->addWidget(marqEnable, 0, 1, 1, 1);

        panoramixEnable = new QGroupBox(tab_9);
        panoramixEnable->setObjectName(QString::fromUtf8("panoramixEnable"));
        panoramixEnable->setCheckable(true);
        panoramixEnable->setChecked(false);
        gridLayout17 = new QGridLayout(panoramixEnable);
        gridLayout17->setObjectName(QString::fromUtf8("gridLayout17"));
        label_36 = new QLabel(panoramixEnable);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout17->addWidget(label_36, 0, 0, 1, 1);

        panoramixRowsSpin = new QSpinBox(panoramixEnable);
        panoramixRowsSpin->setObjectName(QString::fromUtf8("panoramixRowsSpin"));
        panoramixRowsSpin->setMinimum(1);
        panoramixRowsSpin->setValue(3);

        gridLayout17->addWidget(panoramixRowsSpin, 0, 1, 1, 1);

        label_35 = new QLabel(panoramixEnable);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout17->addWidget(label_35, 1, 0, 1, 1);

        panoramixColsSpin = new QSpinBox(panoramixEnable);
        panoramixColsSpin->setObjectName(QString::fromUtf8("panoramixColsSpin"));
        panoramixColsSpin->setMinimum(1);
        panoramixColsSpin->setValue(3);

        gridLayout17->addWidget(panoramixColsSpin, 1, 1, 1, 1);


        gridLayout14->addWidget(panoramixEnable, 1, 0, 1, 1);

        cloneEnable = new QGroupBox(tab_9);
        cloneEnable->setObjectName(QString::fromUtf8("cloneEnable"));
        cloneEnable->setCheckable(true);
        cloneEnable->setChecked(false);
        gridLayout18 = new QGridLayout(cloneEnable);
        gridLayout18->setObjectName(QString::fromUtf8("gridLayout18"));
        label_9 = new QLabel(cloneEnable);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout18->addWidget(label_9, 0, 0, 1, 1);

        cloneCountSpin = new QSpinBox(cloneEnable);
        cloneCountSpin->setObjectName(QString::fromUtf8("cloneCountSpin"));
        cloneCountSpin->setMinimum(1);
        cloneCountSpin->setValue(2);

        gridLayout18->addWidget(cloneCountSpin, 0, 1, 1, 1);


        gridLayout14->addWidget(cloneEnable, 1, 1, 1, 1);

        ExtVideoWidget->addTab(tab_9, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tab_8->setGeometry(QRect(0, 0, 100, 30));
        gridLayout19 = new QGridLayout(tab_8);
        gridLayout19->setObjectName(QString::fromUtf8("gridLayout19"));
        logoEnable = new QGroupBox(tab_8);
        logoEnable->setObjectName(QString::fromUtf8("logoEnable"));
        logoEnable->setCheckable(true);
        logoEnable->setChecked(false);
        gridLayout20 = new QGridLayout(logoEnable);
        gridLayout20->setObjectName(QString::fromUtf8("gridLayout20"));
        label_22 = new QLabel(logoEnable);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout20->addWidget(label_22, 3, 0, 1, 1);

        label_21 = new QLabel(logoEnable);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout20->addWidget(label_21, 2, 0, 1, 2);

        label_20 = new QLabel(logoEnable);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout20->addWidget(label_20, 1, 0, 1, 2);

        logoTransparencySlider = new QSlider(logoEnable);
        logoTransparencySlider->setObjectName(QString::fromUtf8("logoTransparencySlider"));
        logoTransparencySlider->setMaximum(255);
        logoTransparencySlider->setOrientation(Qt::Horizontal);
        logoTransparencySlider->setTickPosition(QSlider::TicksBothSides);
        logoTransparencySlider->setTickInterval(32);

        gridLayout20->addWidget(logoTransparencySlider, 3, 1, 1, 2);

        logoXSpin = new QSpinBox(logoEnable);
        logoXSpin->setObjectName(QString::fromUtf8("logoXSpin"));

        gridLayout20->addWidget(logoXSpin, 2, 2, 1, 1);

        logoYSpin = new QSpinBox(logoEnable);
        logoYSpin->setObjectName(QString::fromUtf8("logoYSpin"));

        gridLayout20->addWidget(logoYSpin, 1, 2, 1, 1);

        label_19 = new QLabel(logoEnable);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout20->addWidget(label_19, 0, 0, 1, 1);

        logoFileText = new QLineEdit(logoEnable);
        logoFileText->setObjectName(QString::fromUtf8("logoFileText"));

        gridLayout20->addWidget(logoFileText, 0, 2, 1, 1);


        gridLayout19->addWidget(logoEnable, 0, 0, 1, 1);

        eraseEnable = new QGroupBox(tab_8);
        eraseEnable->setObjectName(QString::fromUtf8("eraseEnable"));
        eraseEnable->setCheckable(true);
        eraseEnable->setChecked(false);
        gridLayout21 = new QGridLayout(eraseEnable);
        gridLayout21->setObjectName(QString::fromUtf8("gridLayout21"));
        label_16 = new QLabel(eraseEnable);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout21->addWidget(label_16, 1, 0, 1, 1);

        label_17 = new QLabel(eraseEnable);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout21->addWidget(label_17, 2, 0, 1, 1);

        eraseXSpin = new QSpinBox(eraseEnable);
        eraseXSpin->setObjectName(QString::fromUtf8("eraseXSpin"));

        gridLayout21->addWidget(eraseXSpin, 2, 1, 1, 1);

        eraseYSpin = new QSpinBox(eraseEnable);
        eraseYSpin->setObjectName(QString::fromUtf8("eraseYSpin"));

        gridLayout21->addWidget(eraseYSpin, 1, 1, 1, 1);

        eraseMaskText = new QLineEdit(eraseEnable);
        eraseMaskText->setObjectName(QString::fromUtf8("eraseMaskText"));

        gridLayout21->addWidget(eraseMaskText, 0, 1, 1, 1);

        label_15 = new QLabel(eraseEnable);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout21->addWidget(label_15, 0, 0, 1, 1);


        gridLayout19->addWidget(eraseEnable, 0, 1, 1, 1);

        ExtVideoWidget->addTab(tab_8, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tab_6->setGeometry(QRect(0, 0, 468, 262));
        gridLayout22 = new QGridLayout(tab_6);
        gridLayout22->setObjectName(QString::fromUtf8("gridLayout22"));
        subpictureFilterText = new QLineEdit(tab_6);
        subpictureFilterText->setObjectName(QString::fromUtf8("subpictureFilterText"));

        gridLayout22->addWidget(subpictureFilterText, 2, 1, 1, 2);

        label_34 = new QLabel(tab_6);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout22->addWidget(label_34, 2, 0, 1, 1);

        videoFilterText = new QLineEdit(tab_6);
        videoFilterText->setObjectName(QString::fromUtf8("videoFilterText"));

        gridLayout22->addWidget(videoFilterText, 1, 1, 1, 2);

        label_33 = new QLabel(tab_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout22->addWidget(label_33, 1, 0, 1, 1);

        label_32 = new QLabel(tab_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout22->addWidget(label_32, 0, 0, 1, 1);

        voutFilterText = new QLineEdit(tab_6);
        voutFilterText->setObjectName(QString::fromUtf8("voutFilterText"));

        gridLayout22->addWidget(voutFilterText, 0, 1, 1, 2);

        ExtVideoWidget->addTab(tab_6, QString());

        retranslateUi(ExtVideoWidget);

        ExtVideoWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExtVideoWidget);
    } // setupUi

    void retranslateUi(QTabWidget *ExtVideoWidget)
    {
        transformEnable->setTitle(Q_("Transform", 0));
        sharpenEnable->setTitle(Q_("Sharpen", 0));
        label_29->setText(Q_("Sigma", 0));
        adjustEnable->setTitle(Q_("Image adjust", 0));
        label_5->setText(Q_("Gamma", 0));
        label_2->setText(Q_("Contrast", 0));
        label_3->setText(Q_("Brightness", 0));
        label_4->setText(Q_("Saturation", 0));
        label->setText(Q_("Hue", 0));
        brightnessThresholdCheck->setText(Q_("Brightness threshold", 0));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab), Q_("Basic", 0));
        extractEnable->setTitle(Q_("Color extraction", 0));
        label_6->setText(Q_("Color", 0));
        extractComponentText->setInputMask(Q_(">HHHHHH;#", 0));
        invertEnable->setText(Q_("Invert colors", 0));
        colorthresEnable->setTitle(Q_("Color threshold", 0));
        label_14->setText(Q_("Similarity", 0));
        label_13->setText(Q_("Saturation", 0));
        label_8->setText(Q_("Color", 0));
        colorthresColorText->setInputMask(Q_(">HHHHHH;#", 0));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_2), Q_("Color fun", 0));
        label_10->setText(Q_("Top", 0));
        cropTopPx->setSuffix(Q_(" px", 0));
        label_11->setText(Q_("Left", 0));
        cropLeftPx->setSuffix(Q_(" px", 0));
        label_12->setText(Q_("Right", 0));
        cropRightPx->setSuffix(Q_(" px", 0));
        label_7->setText(Q_("Bottom", 0));
        cropBotPx->setSuffix(Q_(" px", 0));
        topBotCropSync->setText(Q_("Synchronize top and bottom", 0));
        leftRightCropSync->setText(Q_("Synchronize left and right", 0));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_3), Q_("Crop", 0));
        magnifyEnable->setText(Q_("Magnification", 0));
        puzzleEnable->setTitle(Q_("Puzzle game", 0));
        puzzleBlackSlotCheck->setText(Q_("Black slot", 0));
        label_26->setText(Q_("Columns", 0));
        label_27->setText(Q_("Rows", 0));
        rotateEnable->setTitle(Q_("Rotate", 0));
        label_28->setText(Q_("Angle", 0));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_5), Q_("Geometry", 0));
        waveEnable->setText(Q_("Waves", 0));
        rippleEnable->setText(Q_("Water effect", 0));
        psychedelicEnable->setText(Q_("Psychedelic", 0));
        noiseEnable->setText(Q_("Noise", 0));
        motiondetectEnable->setText(Q_("Motion detect", 0));
        motionblurEnable->setTitle(Q_("Motion blur", 0));
        label_25->setText(Q_("Factor", 0));
        gradientEnable->setTitle(Q_("Gradient", 0));
        label_18->setText(Q_("Mode", 0));
        gradientTypeCheck->setText(Q_("Color", 0));
        gradientCartoonCheck->setText(Q_("Cartoon", 0));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_7), Q_("Image modification", 0));
        wallEnable->setTitle(Q_("Wall", 0));
        label_31->setText(Q_("Rows", 0));
        label_30->setText(Q_("Columns", 0));
        marqEnable->setTitle(Q_("Add text", 0));
        label_24->setText(Q_("Position", 0));
        label_23->setText(Q_("Text", 0));
        panoramixEnable->setTitle(Q_("Panoramix", 0));
        label_36->setText(Q_("Rows", 0));
        label_35->setText(Q_("Columns", 0));
        cloneEnable->setTitle(Q_("Clone", 0));
        label_9->setText(Q_("Number of clones", 0));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_9), Q_("Vout/Overlay", 0));
        logoEnable->setTitle(Q_("Add logo", 0));
        label_22->setText(Q_("Transparency", 0));
        label_21->setText(Q_("Left", 0));
        label_20->setText(Q_("Top", 0));
        label_19->setText(Q_("Logo", 0));
        eraseEnable->setTitle(Q_("Logo erase", 0));
        label_16->setText(Q_("Top", 0));
        label_17->setText(Q_("Left", 0));
        label_15->setText(Q_("Mask", 0));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_8), Q_("Logo", 0));
        label_34->setText(Q_("Subpicture filters", 0));
        label_33->setText(Q_("Video filters", 0));
        label_32->setText(Q_("Vout filters", 0));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_6), Q_("Advanced video filter controls", 0));
        Q_UNUSED(ExtVideoWidget);
    } // retranslateUi

};

namespace Ui {
    class ExtVideoWidget: public Ui_ExtVideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VIDEO_EFFECTS_H
