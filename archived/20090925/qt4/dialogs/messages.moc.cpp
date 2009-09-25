/****************************************************************************
** Meta object code from reading C++ file 'messages.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messages.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messages.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessagesDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      31,   15,   15,   15, 0x08,
      43,   15,   15,   15, 0x08,
      64,   15,   59,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MessagesDialog[] = {
    "MessagesDialog\0\0updateTab(int)\0"
    "updateLog()\0clearOrUpdate()\0bool\0"
    "save()\0"
};

const QMetaObject MessagesDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_MessagesDialog,
      qt_meta_data_MessagesDialog, 0 }
};

const QMetaObject *MessagesDialog::metaObject() const
{
    return &staticMetaObject;
}

void *MessagesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessagesDialog))
        return static_cast<void*>(const_cast< MessagesDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int MessagesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: updateLog(); break;
        case 2: clearOrUpdate(); break;
        case 3: { bool _r = save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
