#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'v4l2.ui'
**
** Created: Wed May 6 11:27:31 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef V4L2_H
#define V4L2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtV4l2Widget
{
public:
    QVBoxLayout *vboxLayout;
    QPushButton *refresh;
    QLabel *help;

    void setupUi(QWidget *ExtV4l2Widget)
    {
        if (ExtV4l2Widget->objectName().isEmpty())
            ExtV4l2Widget->setObjectName(QString::fromUtf8("ExtV4l2Widget"));
        ExtV4l2Widget->resize(405, 300);
        vboxLayout = new QVBoxLayout(ExtV4l2Widget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        refresh = new QPushButton(ExtV4l2Widget);
        refresh->setObjectName(QString::fromUtf8("refresh"));

        vboxLayout->addWidget(refresh);

        help = new QLabel(ExtV4l2Widget);
        help->setObjectName(QString::fromUtf8("help"));

        vboxLayout->addWidget(help);


        retranslateUi(ExtV4l2Widget);

        QMetaObject::connectSlotsByName(ExtV4l2Widget);
    } // setupUi

    void retranslateUi(QWidget *ExtV4l2Widget)
    {
        ExtV4l2Widget->setWindowTitle(Q_("Form", 0));
        refresh->setText(Q_("Refresh", 0));
        help->setText(Q_("No v4l2 instance found. Press the refresh button to try again.", 0));
        Q_UNUSED(ExtV4l2Widget);
    } // retranslateUi

};

namespace Ui {
    class ExtV4l2Widget: public Ui_ExtV4l2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // V4L2_H
