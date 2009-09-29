/****************************************************************************
** Meta object code from reading C++ file 'transcribe_widget2.hpp'
**
** Created: Mon Aug 3 11:44:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "components/transcribe_widget2.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transcribe_widget2.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TranscribeWidget2[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      31,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TranscribeWidget2[] = {
    "TranscribeWidget2\0\0addSpeech()\0"
    "removeSpeech()\0"
};

const QMetaObject TranscribeWidget2::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_TranscribeWidget2,
      qt_meta_data_TranscribeWidget2, 0 }
};

const QMetaObject *TranscribeWidget2::metaObject() const
{
    return &staticMetaObject;
}

void *TranscribeWidget2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TranscribeWidget2))
        return static_cast<void*>(const_cast< TranscribeWidget2*>(this));
    return QFrame::qt_metacast(_clname);
}

int TranscribeWidget2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addSpeech(); break;
        case 1: removeSpeech(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
