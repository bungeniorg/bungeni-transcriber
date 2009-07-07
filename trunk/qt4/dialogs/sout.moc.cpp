/****************************************************************************
** Meta object code from reading C++ file 'sout.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sout.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sout.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SoutDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      24,   11,   11,   11, 0x08,
      29,   11,   11,   11, 0x08,
      38,   11,   11,   11, 0x08,
      51,   11,   11,   11, 0x08,
      64,   11,   11,   11, 0x08,
      77,   11,   11,   11, 0x08,
     104,   11,   11,   11, 0x08,
     131,   11,   11,   11, 0x08,
     158,   11,   11,   11, 0x08,
     178,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SoutDialog[] = {
    "SoutDialog\0\0updateMRL()\0ok()\0cancel()\0"
    "toggleSout()\0setOptions()\0fileBrowse()\0"
    "setVTranscodeOptions(bool)\0"
    "setATranscodeOptions(bool)\0"
    "setSTranscodeOptions(bool)\0"
    "setRawOptions(bool)\0changeUDPandRTPmess(bool)\0"
    "RTPtoggled(bool)\0"
};

const QMetaObject SoutDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_SoutDialog,
      qt_meta_data_SoutDialog, 0 }
};

const QMetaObject *SoutDialog::metaObject() const
{
    return &staticMetaObject;
}

void *SoutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoutDialog))
        return static_cast<void*>(const_cast< SoutDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int SoutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateMRL(); break;
        case 1: ok(); break;
        case 2: cancel(); break;
        case 3: toggleSout(); break;
        case 4: setOptions(); break;
        case 5: fileBrowse(); break;
        case 6: setVTranscodeOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: setATranscodeOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: setSTranscodeOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: setRawOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: changeUDPandRTPmess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: RTPtoggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
