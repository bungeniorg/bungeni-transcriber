/****************************************************************************
** Meta object code from reading C++ file 'qxtspanslider.h'
**
** Created: Wed May 20 16:53:36 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qxtspanslider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxtspanslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QxtSpanSlider[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   12, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      27,   15,   14,   14, 0x05,
      54,   48,   14,   14, 0x05,
      83,   77,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,   48,   14,   14, 0x0a,
     125,   77,   14,   14, 0x0a,
     144,   15,   14,   14, 0x0a,

 // properties: name, type, flags
     165,  161, 0x02095103,
     176,  161, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QxtSpanSlider[] = {
    "QxtSpanSlider\0\0lower,upper\0"
    "spanChanged(int,int)\0lower\0"
    "lowerValueChanged(int)\0upper\0"
    "upperValueChanged(int)\0setLowerValue(int)\0"
    "setUpperValue(int)\0setSpan(int,int)\0"
    "int\0lowerValue\0upperValue\0"
};

const QMetaObject QxtSpanSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_QxtSpanSlider,
      qt_meta_data_QxtSpanSlider, 0 }
};

const QMetaObject *QxtSpanSlider::metaObject() const
{
    return &staticMetaObject;
}

void *QxtSpanSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QxtSpanSlider))
        return static_cast<void*>(const_cast< QxtSpanSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int QxtSpanSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: spanChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: lowerValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: upperValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setLowerValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setUpperValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setSpan((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = lowerValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = upperValue(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLowerValue(*reinterpret_cast< int*>(_v)); break;
        case 1: setUpperValue(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QxtSpanSlider::spanChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QxtSpanSlider::lowerValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QxtSpanSlider::upperValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
