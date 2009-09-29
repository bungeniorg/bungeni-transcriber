/****************************************************************************
** Meta object code from reading C++ file 'gototime.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gototime.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gototime.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GotoTimeDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      24,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GotoTimeDialog[] = {
    "GotoTimeDialog\0\0close()\0cancel()\0"
};

const QMetaObject GotoTimeDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_GotoTimeDialog,
      qt_meta_data_GotoTimeDialog, 0 }
};

const QMetaObject *GotoTimeDialog::metaObject() const
{
    return &staticMetaObject;
}

void *GotoTimeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GotoTimeDialog))
        return static_cast<void*>(const_cast< GotoTimeDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int GotoTimeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: close(); break;
        case 1: cancel(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
