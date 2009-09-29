/****************************************************************************
** Meta object code from reading C++ file 'mediainfo.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mediainfo.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediainfo.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MediaInfoDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      44,   41,   16,   16, 0x0a,
      76,   16,   16,   16, 0x08,
      94,   16,   16,   16, 0x08,
     102,   16,   16,   16, 0x08,
     110,   16,   16,   16, 0x08,
     121,   16,   16,   16, 0x08,
     148,  142,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MediaInfoDialog[] = {
    "MediaInfoDialog\0\0update(input_thread_t*)\0"
    ",,\0update(input_item_t*,bool,bool)\0"
    "updateOnTimeOut()\0close()\0clear()\0"
    "saveMeta()\0showMetaSaveButton()\0i_tab\0"
    "updateButtons(int)\0"
};

const QMetaObject MediaInfoDialog::staticMetaObject = {
    { &QVLCFrame::staticMetaObject, qt_meta_stringdata_MediaInfoDialog,
      qt_meta_data_MediaInfoDialog, 0 }
};

const QMetaObject *MediaInfoDialog::metaObject() const
{
    return &staticMetaObject;
}

void *MediaInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MediaInfoDialog))
        return static_cast<void*>(const_cast< MediaInfoDialog*>(this));
    return QVLCFrame::qt_metacast(_clname);
}

int MediaInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update((*reinterpret_cast< input_thread_t*(*)>(_a[1]))); break;
        case 1: update((*reinterpret_cast< input_item_t*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: updateOnTimeOut(); break;
        case 3: close(); break;
        case 4: clear(); break;
        case 5: saveMeta(); break;
        case 6: showMetaSaveButton(); break;
        case 7: updateButtons((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
