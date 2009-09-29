/****************************************************************************
** Meta object code from reading C++ file 'input_slider.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "input_slider.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'input_slider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputSlider[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   34,   12,   12, 0x0a,
      64,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InputSlider[] = {
    "InputSlider\0\0sliderDragged(float)\0,,\0"
    "setPosition(float,int,int)\0userDrag(int)\0"
};

const QMetaObject InputSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_InputSlider,
      qt_meta_data_InputSlider, 0 }
};

const QMetaObject *InputSlider::metaObject() const
{
    return &staticMetaObject;
}

void *InputSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputSlider))
        return static_cast<void*>(const_cast< InputSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int InputSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sliderDragged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: setPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: userDrag((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void InputSlider::sliderDragged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SoundSlider[] = {

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

static const char qt_meta_stringdata_SoundSlider[] = {
    "SoundSlider\0"
};

const QMetaObject SoundSlider::staticMetaObject = {
    { &QAbstractSlider::staticMetaObject, qt_meta_stringdata_SoundSlider,
      qt_meta_data_SoundSlider, 0 }
};

const QMetaObject *SoundSlider::metaObject() const
{
    return &staticMetaObject;
}

void *SoundSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoundSlider))
        return static_cast<void*>(const_cast< SoundSlider*>(this));
    return QAbstractSlider::qt_metacast(_clname);
}

int SoundSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
