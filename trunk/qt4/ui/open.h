#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'open.ui'
**
** Created: Wed May 6 11:27:31 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef OPEN_H
#define OPEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Open
{
public:
    QGridLayout *gridLayout;
    QTabWidget *Tab;
    QCheckBox *advancedCheckBox;
    QGroupBox *advancedFrame;
    QGridLayout *gridLayout_2;
    QLabel *cacheLabel;
    QSpinBox *cacheSpinBox;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QSpinBox *startTimeSpinBox;
    QSpacerItem *spacerItem1;
    QFrame *line;
    QCheckBox *slaveCheckbox;
    QLabel *slaveLabel;
    QLineEdit *slaveText;
    QPushButton *slaveBrowseButton;
    QFrame *line1;
    QLabel *advancedLabel;
    QLineEdit *advancedLineInput;
    QSpacerItem *spacerItem2;
    QPushButton *menuButton;
    QPushButton *playButton;
    QDialogButtonBox *buttonsBox;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *Open)
    {
        if (Open->objectName().isEmpty())
            Open->setObjectName(QString::fromUtf8("Open"));
        Open->setEnabled(true);
        Open->resize(586, 532);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Open->sizePolicy().hasHeightForWidth());
        Open->setSizePolicy(sizePolicy);
        Open->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(Open);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Tab = new QTabWidget(Open);
        Tab->setObjectName(QString::fromUtf8("Tab"));

        gridLayout->addWidget(Tab, 0, 0, 1, 4);

        advancedCheckBox = new QCheckBox(Open);
        advancedCheckBox->setObjectName(QString::fromUtf8("advancedCheckBox"));

        gridLayout->addWidget(advancedCheckBox, 1, 0, 1, 4);

        advancedFrame = new QGroupBox(Open);
        advancedFrame->setObjectName(QString::fromUtf8("advancedFrame"));
        gridLayout_2 = new QGridLayout(advancedFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cacheLabel = new QLabel(advancedFrame);
        cacheLabel->setObjectName(QString::fromUtf8("cacheLabel"));

        gridLayout_2->addWidget(cacheLabel, 0, 0, 1, 1);

        cacheSpinBox = new QSpinBox(advancedFrame);
        cacheSpinBox->setObjectName(QString::fromUtf8("cacheSpinBox"));
        cacheSpinBox->setAlignment(Qt::AlignRight);
        cacheSpinBox->setMaximum(65535);

        gridLayout_2->addWidget(cacheSpinBox, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(16, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem, 0, 2, 1, 1);

        label_3 = new QLabel(advancedFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 3, 1, 1);

        startTimeSpinBox = new QSpinBox(advancedFrame);
        startTimeSpinBox->setObjectName(QString::fromUtf8("startTimeSpinBox"));
        startTimeSpinBox->setAlignment(Qt::AlignRight);
        startTimeSpinBox->setMaximum(65535);

        gridLayout_2->addWidget(startTimeSpinBox, 0, 4, 1, 2);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerItem1, 0, 6, 1, 1);

        line = new QFrame(advancedFrame);
        line->setObjectName(QString::fromUtf8("line"));

        gridLayout_2->addWidget(line, 1, 1, 1, 6);

        slaveCheckbox = new QCheckBox(advancedFrame);
        slaveCheckbox->setObjectName(QString::fromUtf8("slaveCheckbox"));

        gridLayout_2->addWidget(slaveCheckbox, 2, 0, 1, 7);

        slaveLabel = new QLabel(advancedFrame);
        slaveLabel->setObjectName(QString::fromUtf8("slaveLabel"));

        gridLayout_2->addWidget(slaveLabel, 3, 0, 1, 1);

        slaveText = new QLineEdit(advancedFrame);
        slaveText->setObjectName(QString::fromUtf8("slaveText"));

        gridLayout_2->addWidget(slaveText, 3, 1, 1, 4);

        slaveBrowseButton = new QPushButton(advancedFrame);
        slaveBrowseButton->setObjectName(QString::fromUtf8("slaveBrowseButton"));

        gridLayout_2->addWidget(slaveBrowseButton, 3, 5, 1, 2);

        line1 = new QFrame(advancedFrame);
        line1->setObjectName(QString::fromUtf8("line1"));

        gridLayout_2->addWidget(line1, 4, 1, 1, 6);

        advancedLabel = new QLabel(advancedFrame);
        advancedLabel->setObjectName(QString::fromUtf8("advancedLabel"));

        gridLayout_2->addWidget(advancedLabel, 5, 0, 1, 1);

        advancedLineInput = new QLineEdit(advancedFrame);
        advancedLineInput->setObjectName(QString::fromUtf8("advancedLineInput"));

        gridLayout_2->addWidget(advancedLineInput, 5, 1, 1, 6);


        gridLayout->addWidget(advancedFrame, 2, 0, 1, 4);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 3, 0, 1, 1);

        menuButton = new QPushButton(Open);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menuButton->sizePolicy().hasHeightForWidth());
        menuButton->setSizePolicy(sizePolicy1);
        menuButton->setMaximumSize(QSize(20, 16777215));
        menuButton->setFocusPolicy(Qt::ClickFocus);
        menuButton->setContextMenuPolicy(Qt::NoContextMenu);

        gridLayout->addWidget(menuButton, 3, 1, 1, 1);

        playButton = new QPushButton(Open);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(playButton->sizePolicy().hasHeightForWidth());
        playButton->setSizePolicy(sizePolicy2);
        playButton->setMinimumSize(QSize(0, 0));
        playButton->setDefault(true);

        gridLayout->addWidget(playButton, 3, 2, 1, 1);

        buttonsBox = new QDialogButtonBox(Open);
        buttonsBox->setObjectName(QString::fromUtf8("buttonsBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonsBox->sizePolicy().hasHeightForWidth());
        buttonsBox->setSizePolicy(sizePolicy3);
        buttonsBox->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout->addWidget(buttonsBox, 3, 3, 1, 1);

        spacerItem3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(spacerItem3, 4, 0, 1, 4);

#ifndef QT_NO_SHORTCUT
        cacheLabel->setBuddy(cacheSpinBox);
        label_3->setBuddy(startTimeSpinBox);
        slaveLabel->setBuddy(slaveText);
        advancedLabel->setBuddy(advancedLineInput);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(Tab, advancedCheckBox);
        QWidget::setTabOrder(advancedCheckBox, cacheSpinBox);
        QWidget::setTabOrder(cacheSpinBox, startTimeSpinBox);
        QWidget::setTabOrder(startTimeSpinBox, slaveCheckbox);
        QWidget::setTabOrder(slaveCheckbox, slaveText);
        QWidget::setTabOrder(slaveText, slaveBrowseButton);
        QWidget::setTabOrder(slaveBrowseButton, advancedLineInput);
        QWidget::setTabOrder(advancedLineInput, playButton);
        QWidget::setTabOrder(playButton, menuButton);
        QWidget::setTabOrder(menuButton, buttonsBox);

        retranslateUi(Open);
        QObject::connect(slaveCheckbox, SIGNAL(clicked(bool)), slaveLabel, SLOT(setVisible(bool)));
        QObject::connect(slaveCheckbox, SIGNAL(clicked(bool)), slaveText, SLOT(setVisible(bool)));
        QObject::connect(slaveCheckbox, SIGNAL(clicked(bool)), slaveBrowseButton, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Open);
    } // setupUi

    void retranslateUi(QWidget *Open)
    {
        Open->setWindowTitle(Q_("Dialog", 0));
#ifndef QT_NO_TOOLTIP
        advancedCheckBox->setToolTip(Q_("Show extended options", 0));
#endif // QT_NO_TOOLTIP
        advancedCheckBox->setText(Q_("Show &more options", 0));
        cacheLabel->setText(Q_("Caching", 0));
#ifndef QT_NO_TOOLTIP
        cacheSpinBox->setToolTip(Q_("Change the caching for the media", 0));
#endif // QT_NO_TOOLTIP
        cacheSpinBox->setSuffix(Q_(" ms", 0));
        label_3->setText(Q_("Start Time", 0));
#ifndef QT_NO_TOOLTIP
        startTimeSpinBox->setToolTip(Q_("Change the start time for the media", 0));
#endif // QT_NO_TOOLTIP
        startTimeSpinBox->setSuffix(Q_(" s", 0));
        slaveCheckbox->setText(Q_("Play another media synchronously (extra audio file, ...)", 0));
        slaveLabel->setText(Q_("Extra media", 0));
#ifndef QT_NO_TOOLTIP
        slaveBrowseButton->setToolTip(Q_("Select the file", 0));
#endif // QT_NO_TOOLTIP
        slaveBrowseButton->setText(Q_("Browse...", 0));
        advancedLabel->setText(Q_("Customize", 0));
#ifndef QT_NO_TOOLTIP
        advancedLineInput->setToolTip(Q_("Complete MRL for VLC internal", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        menuButton->setToolTip(Q_("Select play mode", 0));
#endif // QT_NO_TOOLTIP
        playButton->setText(Q_("Play", 0));
        Q_UNUSED(Open);
    } // retranslateUi

};

namespace Ui {
    class Open: public Ui_Open {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_H
