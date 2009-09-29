/****************************************************************************
** Meta object code from reading C++ file 'playlist_model.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist_model.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist_model.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PLModel[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   27,    8,    8, 0x0a,
      66,   59,    8,    8, 0x0a,
      97,    8,    8,    8, 0x0a,
     113,    8,    8,    8, 0x0a,
     127,    8,    8,    8, 0x0a,
     143,    8,    8,    8, 0x08,
     155,    8,    8,    8, 0x08,
     166,    8,    8,    8, 0x08,
     178,    8,    8,    8, 0x08,
     192,    8,    8,    8, 0x08,
     204,    8,    8,    8, 0x08,
     219,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PLModel[] = {
    "PLModel\0\0shouldRemove(int)\0index\0"
    "activateItem(QModelIndex)\0p_item\0"
    "activateItem(playlist_item_t*)\0"
    "setRandom(bool)\0setLoop(bool)\0"
    "setRepeat(bool)\0popupPlay()\0popupDel()\0"
    "popupInfo()\0popupStream()\0popupSave()\0"
    "popupExplore()\0viewchanged(int)\0"
};

const QMetaObject PLModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_PLModel,
      qt_meta_data_PLModel, 0 }
};

const QMetaObject *PLModel::metaObject() const
{
    return &staticMetaObject;
}

void *PLModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLModel))
        return static_cast<void*>(const_cast< PLModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int PLModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: shouldRemove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: activateItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: activateItem((*reinterpret_cast< playlist_item_t*(*)>(_a[1]))); break;
        case 3: setRandom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: setLoop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: setRepeat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: popupPlay(); break;
        case 7: popupDel(); break;
        case 8: popupInfo(); break;
        case 9: popupStream(); break;
        case 10: popupSave(); break;
        case 11: popupExplore(); break;
        case 12: viewchanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PLModel::shouldRemove(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
