/****************************************************************************
** Meta object code from reading C++ file 'customwidgets.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "customwidgets.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customwidgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClickLineEdit[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   12, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // properties: name, type, flags
      22,   14, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_ClickLineEdit[] = {
    "ClickLineEdit\0QString\0clickMessage\0"
};

const QMetaObject ClickLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_ClickLineEdit,
      qt_meta_data_ClickLineEdit, 0 }
};

const QMetaObject *ClickLineEdit::metaObject() const
{
    return &staticMetaObject;
}

void *ClickLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClickLineEdit))
        return static_cast<void*>(const_cast< ClickLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int ClickLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = clickMessage(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setClickMessage(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QVLCTreeView[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QVLCTreeView[] = {
    "QVLCTreeView\0\0,\0rightClicked(QModelIndex,QPoint)\0"
};

const QMetaObject QVLCTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QVLCTreeView,
      qt_meta_data_QVLCTreeView, 0 }
};

const QMetaObject *QVLCTreeView::metaObject() const
{
    return &staticMetaObject;
}

void *QVLCTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCTreeView))
        return static_cast<void*>(const_cast< QVLCTreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int QVLCTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rightClicked((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QVLCTreeView::rightClicked(QModelIndex _t1, QPoint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
