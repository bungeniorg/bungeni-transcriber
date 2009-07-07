/****************************************************************************
** Meta object code from reading C++ file 'panels.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "panels.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panels.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PLPanel[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PLPanel[] = {
    "PLPanel\0\0setRoot(int)\0"
};

const QMetaObject PLPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PLPanel,
      qt_meta_data_PLPanel, 0 }
};

const QMetaObject *PLPanel::metaObject() const
{
    return &staticMetaObject;
}

void *PLPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PLPanel))
        return static_cast<void*>(const_cast< PLPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int PLPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setRoot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_StandardPLPanel[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      33,   16,   16,   16, 0x0a,
      46,   16,   16,   16, 0x08,
      64,   16,   16,   16, 0x08,
      93,   16,   16,   16, 0x08,
     108,   16,   16,   16, 0x08,
     123,   16,   16,   16, 0x08,
     153,  141,   16,   16, 0x08,
     188,  181,   16,   16, 0x08,
     204,   16,   16,   16, 0x08,
     218,   16,   16,   16, 0x08,
     240,   16,   16,   16, 0x08,
     251,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StandardPLPanel[] = {
    "StandardPLPanel\0\0removeItem(int)\0"
    "setRoot(int)\0deleteSelection()\0"
    "handleExpansion(QModelIndex)\0"
    "toggleRandom()\0toggleRepeat()\0"
    "gotoPlayingItem()\0index,point\0"
    "doPopup(QModelIndex,QPoint)\0search\0"
    "search(QString)\0clearFilter()\0"
    "setCurrentRootId(int)\0popupAdd()\0"
    "popupSelectColumn(QPoint)\0"
};

const QMetaObject StandardPLPanel::staticMetaObject = {
    { &PLPanel::staticMetaObject, qt_meta_stringdata_StandardPLPanel,
      qt_meta_data_StandardPLPanel, 0 }
};

const QMetaObject *StandardPLPanel::metaObject() const
{
    return &staticMetaObject;
}

void *StandardPLPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StandardPLPanel))
        return static_cast<void*>(const_cast< StandardPLPanel*>(this));
    return PLPanel::qt_metacast(_clname);
}

int StandardPLPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PLPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: removeItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: setRoot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: deleteSelection(); break;
        case 3: handleExpansion((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: toggleRandom(); break;
        case 5: toggleRepeat(); break;
        case 6: gotoPlayingItem(); break;
        case 7: doPopup((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 8: search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: clearFilter(); break;
        case 10: setCurrentRootId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: popupAdd(); break;
        case 12: popupSelectColumn((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
