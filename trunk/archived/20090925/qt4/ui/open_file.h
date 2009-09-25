#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'open_file.ui'
**
** Created: Wed May 6 11:27:31 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef OPEN_FILE_H
#define OPEN_FILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenFile
{
public:
    QGridLayout *gridLayout;
    QWidget *tempWidget;
    QSpacerItem *spacerItem;
    QCheckBox *subCheckBox;
    QFrame *subFrame;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem1;
    QLabel *sizeSubLabel;
    QComboBox *sizeSubComboBox;
    QSpacerItem *spacerItem2;
    QLabel *alignSubLabel;
    QComboBox *alignSubComboBox;
    QSpacerItem *spacerItem3;
    QLineEdit *subInput;
    QPushButton *subBrowseButton;

    void setupUi(QWidget *OpenFile)
    {
        if (OpenFile->objectName().isEmpty())
            OpenFile->setObjectName(QString::fromUtf8("OpenFile"));
        OpenFile->resize(530, 216);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OpenFile->sizePolicy().hasHeightForWidth());
        OpenFile->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(OpenFile);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tempWidget = new QWidget(OpenFile);
        tempWidget->setObjectName(QString::fromUtf8("tempWidget"));

        gridLayout->addWidget(tempWidget, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(273, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        subCheckBox = new QCheckBox(OpenFile);
        subCheckBox->setObjectName(QString::fromUtf8("subCheckBox"));

        gridLayout->addWidget(subCheckBox, 2, 0, 1, 1);

        subFrame = new QFrame(OpenFile);
        subFrame->setObjectName(QString::fromUtf8("subFrame"));
        sizePolicy.setHeightForWidth(subFrame->sizePolicy().hasHeightForWidth());
        subFrame->setSizePolicy(sizePolicy);
        subFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout1 = new QGridLayout(subFrame);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 0, 1, 1);

        sizeSubLabel = new QLabel(subFrame);
        sizeSubLabel->setObjectName(QString::fromUtf8("sizeSubLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sizeSubLabel->sizePolicy().hasHeightForWidth());
        sizeSubLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(sizeSubLabel, 1, 1, 1, 1);

        sizeSubComboBox = new QComboBox(subFrame);
        sizeSubComboBox->setObjectName(QString::fromUtf8("sizeSubComboBox"));
        sizeSubComboBox->setMinimumSize(QSize(100, 0));

        gridLayout1->addWidget(sizeSubComboBox, 1, 2, 1, 1);

        spacerItem2 = new QSpacerItem(30, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 1, 3, 1, 1);

        alignSubLabel = new QLabel(subFrame);
        alignSubLabel->setObjectName(QString::fromUtf8("alignSubLabel"));
        sizePolicy1.setHeightForWidth(alignSubLabel->sizePolicy().hasHeightForWidth());
        alignSubLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(alignSubLabel, 1, 4, 1, 1);

        alignSubComboBox = new QComboBox(subFrame);
        alignSubComboBox->setObjectName(QString::fromUtf8("alignSubComboBox"));
        alignSubComboBox->setMinimumSize(QSize(100, 0));

        gridLayout1->addWidget(alignSubComboBox, 1, 5, 1, 1);

        spacerItem3 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 1, 6, 1, 2);

        subInput = new QLineEdit(subFrame);
        subInput->setObjectName(QString::fromUtf8("subInput"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(subInput->sizePolicy().hasHeightForWidth());
        subInput->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(subInput, 0, 0, 1, 6);

        subBrowseButton = new QPushButton(subFrame);
        subBrowseButton->setObjectName(QString::fromUtf8("subBrowseButton"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(subBrowseButton->sizePolicy().hasHeightForWidth());
        subBrowseButton->setSizePolicy(sizePolicy3);
        subBrowseButton->setMinimumSize(QSize(100, 0));

        gridLayout1->addWidget(subBrowseButton, 0, 6, 1, 2);


        gridLayout->addWidget(subFrame, 3, 0, 1, 1);

        QWidget::setTabOrder(subCheckBox, subInput);
        QWidget::setTabOrder(subInput, subBrowseButton);
        QWidget::setTabOrder(subBrowseButton, sizeSubComboBox);
        QWidget::setTabOrder(sizeSubComboBox, alignSubComboBox);

        retranslateUi(OpenFile);

        QMetaObject::connectSlotsByName(OpenFile);
    } // setupUi

    void retranslateUi(QWidget *OpenFile)
    {
        OpenFile->setWindowTitle(Q_("Open File", 0));
#ifndef QT_NO_TOOLTIP
        tempWidget->setToolTip(Q_("Choose one or more media file to open", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        subCheckBox->setToolTip(Q_("Add a subtitles file", 0));
#endif // QT_NO_TOOLTIP
        subCheckBox->setText(Q_("Use a sub&titles file", 0));
        sizeSubLabel->setText(Q_("Size:", 0));
        alignSubLabel->setText(Q_("Alignment:", 0));
#ifndef QT_NO_TOOLTIP
        subBrowseButton->setToolTip(Q_("Select the subtitles file", 0));
#endif // QT_NO_TOOLTIP
        subBrowseButton->setText(Q_("Browse...", 0));
        Q_UNUSED(OpenFile);
    } // retranslateUi

};

namespace Ui {
    class OpenFile: public Ui_OpenFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_FILE_H
