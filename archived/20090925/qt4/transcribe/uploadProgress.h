#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading ui file 'uploadProgress.ui'
**
** Created: Wed Jul 1 12:03:41 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UPLOADPROGRESS_H
#define UPLOADPROGRESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uploadProgress
{
public:
    QProgressBar *progressBar;

    void setupUi(QWidget *uploadProgress)
    {
        if (uploadProgress->objectName().isEmpty())
            uploadProgress->setObjectName(QString::fromUtf8("uploadProgress"));
        uploadProgress->resize(422, 37);
        progressBar = new QProgressBar(uploadProgress);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 10, 421, 23));
        progressBar->setValue(24);

        retranslateUi(uploadProgress);

        QMetaObject::connectSlotsByName(uploadProgress);
    } // setupUi

    void retranslateUi(QWidget *uploadProgress)
    {
        uploadProgress->setWindowTitle(Q_("Upload Progress", 0));
        Q_UNUSED(uploadProgress);
    } // retranslateUi

};

namespace Ui {
    class uploadProgress: public Ui_uploadProgress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UPLOADPROGRESS_H
