/****************************************************************************
** Meta object code from reading C++ file 'playlist.hpp'
**
** Created: Wed May 6 11:27:30 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_PlaylistDialog[] = {
    "PlaylistDialog\0"
};

const QMetaObject PlaylistDialog::staticMetaObject = {
    { &QVLCMW::staticMetaObject, qt_meta_stringdata_PlaylistDialog,
      qt_meta_data_PlaylistDialog, 0 }
};

const QMetaObject *PlaylistDialog::metaObject() const
{
    return &staticMetaObject;
}

void *PlaylistDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistDialog))
        return static_cast<void*>(const_cast< PlaylistDialog*>(this));
    return QVLCMW::qt_metacast(_clname);
}

int PlaylistDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCMW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
