/****************************************************************************
** Meta object code from reading C++ file 'input_manager.hpp'
**
** Created: Wed Jun 3 12:35:28 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "input_manager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'input_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputManager[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      17,   14,   13,   13, 0x05,
      48,   13,   13,   13, 0x05,
      65,   13,   13,   13, 0x05,
      86,   13,   13,   13, 0x05,
     109,   13,   13,   13, 0x05,
     128,   13,   13,   13, 0x05,
     154,   13,   13,   13, 0x05,
     176,   13,   13,   13, 0x05,
     197,   13,   13,   13, 0x05,
     223,   13,   13,   13, 0x05,
     244,   13,   13,   13, 0x05,
     265,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     283,   13,   13,   13, 0x0a,
     309,   13,   13,   13, 0x0a,
     329,   13,   13,   13, 0x0a,
     347,   13,   13,   13, 0x0a,
     365,   13,   13,   13, 0x0a,
     374,   13,   13,   13, 0x0a,
     383,   13,   13,   13, 0x0a,
     396,   13,   13,   13, 0x0a,
     409,   13,   13,   13, 0x0a,
     423,   13,   13,   13, 0x0a,
     437,   13,   13,   13, 0x0a,
     451,   13,   13,   13, 0x0a,
     470,   13,   13,   13, 0x0a,
     488,   13,   13,   13, 0x0a,
     509,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InputManager[] = {
    "InputManager\0\0,,\0positionUpdated(float,int,int)\0"
    "rateChanged(int)\0nameChanged(QString)\0"
    "navigationChanged(int)\0statusChanged(int)\0"
    "artChanged(input_item_t*)\0"
    "teletextEnabled(bool)\0toggleTelexButtons()\0"
    "toggleTelexTransparency()\0"
    "setNewTelexPage(int)\0advControlsSetIcon()\0"
    "voutChanged(bool)\0setInput(input_thread_t*)\0"
    "sliderUpdate(float)\0sliderUpdate(int)\0"
    "togglePlayPause()\0slower()\0faster()\0"
    "normalRate()\0setRate(int)\0sectionNext()\0"
    "sectionPrev()\0sectionMenu()\0"
    "telexGotoPage(int)\0telexToggle(bool)\0"
    "telexToggleButtons()\0telexSetTransparency()\0"
};

const QMetaObject InputManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputManager,
      qt_meta_data_InputManager, 0 }
};

const QMetaObject *InputManager::metaObject() const
{
    return &staticMetaObject;
}

void *InputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputManager))
        return static_cast<void*>(const_cast< InputManager*>(this));
    return QObject::qt_metacast(_clname);
}

int InputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: positionUpdated((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: rateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: navigationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: statusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: artChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 6: teletextEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: toggleTelexButtons(); break;
        case 8: toggleTelexTransparency(); break;
        case 9: setNewTelexPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: advControlsSetIcon(); break;
        case 11: voutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: setInput((*reinterpret_cast< input_thread_t*(*)>(_a[1]))); break;
        case 13: sliderUpdate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: sliderUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: togglePlayPause(); break;
        case 16: slower(); break;
        case 17: faster(); break;
        case 18: normalRate(); break;
        case 19: setRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: sectionNext(); break;
        case 21: sectionPrev(); break;
        case 22: sectionMenu(); break;
        case 23: telexGotoPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: telexToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: telexToggleButtons(); break;
        case 26: telexSetTransparency(); break;
        default: ;
        }
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void InputManager::positionUpdated(float _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputManager::rateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputManager::nameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InputManager::navigationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InputManager::statusChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InputManager::artChanged(input_item_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void InputManager::teletextEnabled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void InputManager::toggleTelexButtons()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void InputManager::toggleTelexTransparency()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void InputManager::setNewTelexPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void InputManager::advControlsSetIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void InputManager::voutChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
static const uint qt_meta_data_MainInputManager[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      48,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   17,   64,   17, 0x0a,
      85,   17,   17,   17, 0x0a,
     103,   17,   17,   17, 0x0a,
     110,   17,   17,   17, 0x0a,
     117,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainInputManager[] = {
    "MainInputManager\0\0inputChanged(input_thread_t*)\0"
    "volumeChanged()\0bool\0teletextState()\0"
    "togglePlayPause()\0stop()\0next()\0prev()\0"
};

const QMetaObject MainInputManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MainInputManager,
      qt_meta_data_MainInputManager, 0 }
};

const QMetaObject *MainInputManager::metaObject() const
{
    return &staticMetaObject;
}

void *MainInputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainInputManager))
        return static_cast<void*>(const_cast< MainInputManager*>(this));
    return QObject::qt_metacast(_clname);
}

int MainInputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: inputChanged((*reinterpret_cast< input_thread_t*(*)>(_a[1]))); break;
        case 1: volumeChanged(); break;
        case 2: { bool _r = teletextState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: togglePlayPause(); break;
        case 4: stop(); break;
        case 5: next(); break;
        case 6: prev(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MainInputManager::inputChanged(input_thread_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainInputManager::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
