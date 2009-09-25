/****************************************************************************
** Meta object code from reading C++ file 'speech_widget.hpp'
**
** Created: Tue Jun 16 10:47:42 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "speech_widget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'speech_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpeechWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      37,   13,   13,   13, 0x0a,
      58,   13,   13,   13, 0x0a,
      79,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SpeechWidget[] = {
    "SpeechWidget\0\0updateStartTime(QTime)\0"
    "updateEndTime(QTime)\0updateStartTime(int)\0"
    "updateEndTime(int)\0"
};

const QMetaObject SpeechWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpeechWidget,
      qt_meta_data_SpeechWidget, 0 }
};

const QMetaObject *SpeechWidget::metaObject() const
{
    return &staticMetaObject;
}

void *SpeechWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpeechWidget))
        return static_cast<void*>(const_cast< SpeechWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpeechWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateStartTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 1: updateEndTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 2: updateStartTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: updateEndTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
