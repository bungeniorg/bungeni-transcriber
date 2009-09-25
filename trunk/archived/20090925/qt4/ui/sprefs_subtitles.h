#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'sprefs_subtitles.ui'
**
** Created: Wed May 6 11:27:32 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SPREFS_SUBTITLES_H
#define SPREFS_SUBTITLES_H

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
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsSubtitles
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout1;
    QCheckBox *OSDBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *encoding;
    QLineEdit *preferredLanguage;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QComboBox *effect;
    QLabel *label_6;
    QComboBox *fontColor;
    QLabel *label_4;
    QComboBox *fontSize;
    QLabel *label_3;
    QPushButton *fontBrowse;
    QLineEdit *font;
    QLabel *label_5;
    QSpinBox *subsPosition;
    QLabel *label_7;

    void setupUi(QWidget *SPrefsSubtitles)
    {
        if (SPrefsSubtitles->objectName().isEmpty())
            SPrefsSubtitles->setObjectName(QString::fromUtf8("SPrefsSubtitles"));
        SPrefsSubtitles->resize(434, 410);
        vboxLayout = new QVBoxLayout(SPrefsSubtitles);
        vboxLayout->setSpacing(10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox_3 = new QGroupBox(SPrefsSubtitles);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout1 = new QVBoxLayout(groupBox_3);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        OSDBox = new QCheckBox(groupBox_3);
        OSDBox->setObjectName(QString::fromUtf8("OSDBox"));
        OSDBox->setChecked(true);
        OSDBox->setTristate(false);

        vboxLayout1->addWidget(OSDBox);


        vboxLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(SPrefsSubtitles);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        encoding = new QComboBox(groupBox_2);
        encoding->setObjectName(QString::fromUtf8("encoding"));
        encoding->setMaxVisibleItems(12);

        gridLayout->addWidget(encoding, 1, 1, 1, 1);

        preferredLanguage = new QLineEdit(groupBox_2);
        preferredLanguage->setObjectName(QString::fromUtf8("preferredLanguage"));

        gridLayout->addWidget(preferredLanguage, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(SPrefsSubtitles);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        effect = new QComboBox(groupBox);
        effect->setObjectName(QString::fromUtf8("effect"));

        gridLayout1->addWidget(effect, 3, 1, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout1->addWidget(label_6, 3, 0, 1, 1);

        fontColor = new QComboBox(groupBox);
        fontColor->setObjectName(QString::fromUtf8("fontColor"));

        gridLayout1->addWidget(fontColor, 2, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        fontSize = new QComboBox(groupBox);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));

        gridLayout1->addWidget(fontSize, 1, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        fontBrowse = new QPushButton(groupBox);
        fontBrowse->setObjectName(QString::fromUtf8("fontBrowse"));

        gridLayout1->addWidget(fontBrowse, 0, 2, 1, 1);

        font = new QLineEdit(groupBox);
        font->setObjectName(QString::fromUtf8("font"));

        gridLayout1->addWidget(font, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 0, 0, 1, 1);

        subsPosition = new QSpinBox(groupBox);
        subsPosition->setObjectName(QString::fromUtf8("subsPosition"));
        subsPosition->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        subsPosition->setMinimum(-1024);
        subsPosition->setMaximum(1024);

        gridLayout1->addWidget(subsPosition, 4, 1, 1, 2);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 4, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(preferredLanguage);
        label_2->setBuddy(encoding);
        label_6->setBuddy(effect);
        label_4->setBuddy(fontColor);
        label_3->setBuddy(fontSize);
        label_5->setBuddy(font);
        label_7->setBuddy(subsPosition);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(OSDBox, preferredLanguage);
        QWidget::setTabOrder(preferredLanguage, encoding);
        QWidget::setTabOrder(encoding, font);
        QWidget::setTabOrder(font, fontBrowse);
        QWidget::setTabOrder(fontBrowse, fontSize);
        QWidget::setTabOrder(fontSize, fontColor);
        QWidget::setTabOrder(fontColor, effect);

        retranslateUi(SPrefsSubtitles);

        QMetaObject::connectSlotsByName(SPrefsSubtitles);
    } // setupUi

    void retranslateUi(QWidget *SPrefsSubtitles)
    {
        SPrefsSubtitles->setWindowTitle(Q_("Form", 0));
        groupBox_3->setTitle(Q_("On Screen Display", 0));
        OSDBox->setText(Q_("Enable OSD", 0));
        groupBox_2->setTitle(Q_("Subtitles Language", 0));
        label->setText(Q_("Preferred subtitles language", 0));
        label_2->setText(Q_("Default encoding", 0));
        groupBox->setTitle(Q_("Display Settings", 0));
        label_6->setText(Q_("Effect", 0));
        label_4->setText(Q_("Font color", 0));
        label_3->setText(Q_("Font size", 0));
        fontBrowse->setText(Q_("Browse...", 0));
        label_5->setText(Q_("Font", 0));
        subsPosition->setSuffix(Q_(" px", 0));
        label_7->setText(Q_("Force subtitle position", 0));
        Q_UNUSED(SPrefsSubtitles);
    } // retranslateUi

};

namespace Ui {
    class SPrefsSubtitles: public Ui_SPrefsSubtitles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_SUBTITLES_H
