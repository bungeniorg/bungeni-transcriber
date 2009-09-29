#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'speech.ui'
**
** Created: Mon Jun 15 17:35:52 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SPEECH_H
#define SPEECH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Speech
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *removeButton;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLineEdit *name;
    QTimeEdit *endTime;
    QTimeEdit *startTime;
    QTextEdit *speech;
    QSpacerItem *horizontalSpacer;
    QPushButton *bold;
    QPushButton *italics;
    QPushButton *underline;
    QCheckBox *incomplete;
    QListView *table;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Speech)
    {
        if (Speech->objectName().isEmpty())
            Speech->setObjectName(QString::fromUtf8("Speech"));
        Speech->resize(522, 681);
        gridLayoutWidget = new QWidget(Speech);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 519, 679));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        removeButton = new QPushButton(gridLayoutWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout_2->addWidget(removeButton, 2, 2, 1, 1);

        addButton = new QPushButton(gridLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout_2->addWidget(addButton, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        name = new QLineEdit(gridLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 3, 0, 1, 6);

        endTime = new QTimeEdit(gridLayoutWidget);
        endTime->setObjectName(QString::fromUtf8("endTime"));
        endTime->setTime(QTime(0, 0, 0));

        gridLayout->addWidget(endTime, 2, 5, 1, 1);

        startTime = new QTimeEdit(gridLayoutWidget);
        startTime->setObjectName(QString::fromUtf8("startTime"));

        gridLayout->addWidget(startTime, 2, 0, 1, 3);

        speech = new QTextEdit(gridLayoutWidget);
        speech->setObjectName(QString::fromUtf8("speech"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(speech->sizePolicy().hasHeightForWidth());
        speech->setSizePolicy(sizePolicy);

        gridLayout->addWidget(speech, 6, 0, 1, 6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 3, 1, 3);

        bold = new QPushButton(gridLayoutWidget);
        bold->setObjectName(QString::fromUtf8("bold"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bold->sizePolicy().hasHeightForWidth());
        bold->setSizePolicy(sizePolicy1);
        bold->setMinimumSize(QSize(32, 32));
        bold->setMaximumSize(QSize(32, 32));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        bold->setFont(font);

        gridLayout->addWidget(bold, 5, 0, 1, 1);

        italics = new QPushButton(gridLayoutWidget);
        italics->setObjectName(QString::fromUtf8("italics"));
        sizePolicy1.setHeightForWidth(italics->sizePolicy().hasHeightForWidth());
        italics->setSizePolicy(sizePolicy1);
        italics->setMinimumSize(QSize(32, 32));
        italics->setMaximumSize(QSize(32, 32));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        font1.setKerning(false);
        italics->setFont(font1);

        gridLayout->addWidget(italics, 5, 1, 1, 1);

        underline = new QPushButton(gridLayoutWidget);
        underline->setObjectName(QString::fromUtf8("underline"));
        sizePolicy1.setHeightForWidth(underline->sizePolicy().hasHeightForWidth());
        underline->setSizePolicy(sizePolicy1);
        underline->setMaximumSize(QSize(32, 32));
        QFont font2;
        font2.setUnderline(true);
        underline->setFont(font2);

        gridLayout->addWidget(underline, 5, 2, 1, 1);

        incomplete = new QCheckBox(gridLayoutWidget);
        incomplete->setObjectName(QString::fromUtf8("incomplete"));

        gridLayout->addWidget(incomplete, 7, 0, 1, 4);


        gridLayout_2->addLayout(gridLayout, 6, 0, 1, 3);

        table = new QListView(gridLayoutWidget);
        table->setObjectName(QString::fromUtf8("table"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(table, 1, 0, 1, 3);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setPointSize(12);
        label_2->setFont(font3);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);

        gridLayout_2->addWidget(label, 5, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 2, 1, 1);


        retranslateUi(Speech);

        QMetaObject::connectSlotsByName(Speech);
    } // setupUi

    void retranslateUi(QWidget *Speech)
    {
        Speech->setWindowTitle(Q_("Form", 0));
        removeButton->setText(Q_("- Remove", 0));
        addButton->setText(Q_("+ Add", 0));
        endTime->setDisplayFormat(Q_("hh:mm:ss", 0));
        startTime->setDisplayFormat(Q_("hh:mm:ss", 0));
        bold->setText(Q_("B", 0));
        italics->setText(Q_("i", 0));
        underline->setText(Q_("u", 0));
        incomplete->setText(Q_("Mark transcript as incomplete", 0));
        label_2->setText(Q_("Transcripts", 0));
        label->setText(Q_("Edit Transcript", 0));
        Q_UNUSED(Speech);
    } // retranslateUi

};

namespace Ui {
    class Speech: public Ui_Speech {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPEECH_H
