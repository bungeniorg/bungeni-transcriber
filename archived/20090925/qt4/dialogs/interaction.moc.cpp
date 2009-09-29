/****************************************************************************
** Meta object code from reading C++ file 'interaction.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interaction.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interaction.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InteractionDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      30,   18,   18,   18, 0x08,
      37,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InteractionDialog[] = {
    "InteractionDialog\0\0defaultB()\0altB()\0"
    "otherB()\0"
};

const QMetaObject InteractionDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InteractionDialog,
      qt_meta_data_InteractionDialog, 0 }
};

const QMetaObject *InteractionDialog::metaObject() const
{
    return &staticMetaObject;
}

void *InteractionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InteractionDialog))
        return static_cast<void*>(const_cast< InteractionDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int InteractionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: defaultB(); break;
        case 1: altB(); break;
        case 2: otherB(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
