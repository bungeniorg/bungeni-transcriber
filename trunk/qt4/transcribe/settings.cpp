#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <QString>
#include <QSettings>
#include "transcribe/settings.hpp"

SettingsDialog::SettingsDialog(QWidget * parent ) : QDialog(parent)
{
    QSettings settings("Bungeni", "transcribe");
    ui.setupUi(this);
    QObject::connect(ui.buttonBox, SIGNAL( accepted() ), this, SLOT( saveData() ) );
    QObject::connect(ui.buttonBox, SIGNAL( rejected() ), this, SLOT( close() ) );
    ui.hostname->setText(settings.value("hostname").toString());
    ui.portnumber->setText(settings.value("port").toString());
    ui.username->setText(settings.value("username").toString());
    ui.password->setText(settings.value("password").toString());
}

void SettingsDialog::saveData()
{
        QString hostname = ui.hostname->text();
        QString port = ui.portnumber->text();
        QString username = ui.username->text();
        QString password = ui.password->text();
        QSettings settings("Bungeni", "transcribe");
        QStringList keys = settings.childKeys();
        settings.setValue("hostname", hostname);
        settings.setValue("port", port);
        settings.setValue("username", username);
        settings.setValue("password", password);
        this->hide();
}

SettingsDialog::~SettingsDialog()
{
}

void SettingsDialog::close()
{
    this->hide();
}
