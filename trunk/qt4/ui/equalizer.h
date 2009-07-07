#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'equalizer.ui'
**
** Created: Wed May 6 11:27:31 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef EQUALIZER_H
#define EQUALIZER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EqualizerWidget
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QCheckBox *enableCheck;
    QCheckBox *eq2PassCheck;
    QSpacerItem *spacerItem;
    QLabel *presetLabel;
    QComboBox *presetsCombo;
    QGridLayout *gridLayout;
    QLabel *preampLabel;
    QSlider *preampSlider;
    QFrame *frame;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *EqualizerWidget)
    {
        if (EqualizerWidget->objectName().isEmpty())
            EqualizerWidget->setObjectName(QString::fromUtf8("EqualizerWidget"));
        EqualizerWidget->resize(524, 290);
        vboxLayout = new QVBoxLayout(EqualizerWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setMargin(0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        enableCheck = new QCheckBox(EqualizerWidget);
        enableCheck->setObjectName(QString::fromUtf8("enableCheck"));

        hboxLayout->addWidget(enableCheck);

        eq2PassCheck = new QCheckBox(EqualizerWidget);
        eq2PassCheck->setObjectName(QString::fromUtf8("eq2PassCheck"));

        hboxLayout->addWidget(eq2PassCheck);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        presetLabel = new QLabel(EqualizerWidget);
        presetLabel->setObjectName(QString::fromUtf8("presetLabel"));

        hboxLayout->addWidget(presetLabel);

        presetsCombo = new QComboBox(EqualizerWidget);
        presetsCombo->setObjectName(QString::fromUtf8("presetsCombo"));
        presetsCombo->setMinimumSize(QSize(110, 0));

        hboxLayout->addWidget(presetsCombo);


        vboxLayout->addLayout(hboxLayout);

        gridLayout = new QGridLayout();
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        preampLabel = new QLabel(EqualizerWidget);
        preampLabel->setObjectName(QString::fromUtf8("preampLabel"));

        gridLayout->addWidget(preampLabel, 1, 0, 1, 2);

        preampSlider = new QSlider(EqualizerWidget);
        preampSlider->setObjectName(QString::fromUtf8("preampSlider"));
        preampSlider->setMaximum(400);
        preampSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(preampSlider, 0, 0, 1, 1);

        frame = new QFrame(EqualizerWidget);
        frame->setObjectName(QString::fromUtf8("frame"));

        gridLayout->addWidget(frame, 0, 2, 2, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);


        retranslateUi(EqualizerWidget);

        QMetaObject::connectSlotsByName(EqualizerWidget);
    } // setupUi

    void retranslateUi(QWidget *EqualizerWidget)
    {
        EqualizerWidget->setWindowTitle(Q_("Form", 0));
        enableCheck->setText(Q_("Enable", 0));
        eq2PassCheck->setText(Q_("2 Pass", 0));
        presetLabel->setText(Q_("Preset", 0));
        preampLabel->setText(Q_("Preamp", 0));
        Q_UNUSED(EqualizerWidget);
    } // retranslateUi

};

namespace Ui {
    class EqualizerWidget: public Ui_EqualizerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EQUALIZER_H
