/****************************************************************************
** Meta object code from reading C++ file 'selector.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selector.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PLSelector[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PLSelector[] = {
    "PLSelector\0\0activated(int)\0shouldRemove(int)\0"
    "setSource(QModelIndex)\0"
};

const QMetaObject PLSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PLSelector,
      qt_meta_data_PLSelector, 0 }
};

const QMetaObject *PLSelector::metaObject() const
{
    return &staticMetaObject;
}

void *PLSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLSelector))
        return static_cast<void*>(const_cast< PLSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int PLSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: shouldRemove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: setSource((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PLSelector::activated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PLSelector::shouldRemove(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
