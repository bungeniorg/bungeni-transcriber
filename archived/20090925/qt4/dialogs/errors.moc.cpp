/****************************************************************************
** Meta object code from reading C++ file 'errors.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "errors.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'errors.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ErrorsDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      22,   13,   13,   13, 0x08,
      30,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ErrorsDialog[] = {
    "ErrorsDialog\0\0close()\0clear()\0dontShow()\0"
};

const QMetaObject ErrorsDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_ErrorsDialog,
      qt_meta_data_ErrorsDialog, 0 }
};

const QMetaObject *ErrorsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *ErrorsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ErrorsDialog))
        return static_cast<void*>(const_cast< ErrorsDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int ErrorsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: close(); break;
        case 1: clear(); break;
        case 2: dontShow(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
