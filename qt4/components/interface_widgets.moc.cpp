/****************************************************************************
** Meta object code from reading C++ file 'interface_widgets.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interface_widgets.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface_widgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VideoWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   13,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VideoWidget[] = {
    "VideoWidget\0\0,\0askVideoWidgetToShow(uint,uint)\0"
    "SetSizing(uint,uint)\0"
};

const QMetaObject VideoWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_VideoWidget,
      qt_meta_data_VideoWidget, 0 }
};

const QMetaObject *VideoWidget::metaObject() const
{
    return &staticMetaObject;
}

void *VideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWidget))
        return static_cast<void*>(const_cast< VideoWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int VideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: askVideoWidgetToShow((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: SetSizing((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void VideoWidget::askVideoWidgetToShow(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_BackgroundWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      27,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BackgroundWidget[] = {
    "BackgroundWidget\0\0toggle()\0"
    "updateArt(input_item_t*)\0"
};

const QMetaObject BackgroundWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BackgroundWidget,
      qt_meta_data_BackgroundWidget, 0 }
};

const QMetaObject *BackgroundWidget::metaObject() const
{
    return &staticMetaObject;
}

void *BackgroundWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BackgroundWidget))
        return static_cast<void*>(const_cast< BackgroundWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BackgroundWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toggle(); break;
        case 1: updateArt((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_AdvControlsWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   18,   18,   18, 0x08,
      44,   18,   18,   18, 0x08,
      55,   18,   18,   18, 0x08,
      67,   64,   18,   18, 0x08,
      91,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AdvControlsWidget[] = {
    "AdvControlsWidget\0\0timeChanged()\0"
    "snapshot()\0fromAtoB()\0record()\0,,\0"
    "AtoBLoop(float,int,int)\0setIcon()\0"
};

const QMetaObject AdvControlsWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_AdvControlsWidget,
      qt_meta_data_AdvControlsWidget, 0 }
};

const QMetaObject *AdvControlsWidget::metaObject() const
{
    return &staticMetaObject;
}

void *AdvControlsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvControlsWidget))
        return static_cast<void*>(const_cast< AdvControlsWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int AdvControlsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: timeChanged(); break;
        case 1: snapshot(); break;
        case 2: fromAtoB(); break;
        case 3: record(); break;
        case 4: AtoBLoop((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: setIcon(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AdvControlsWidget::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_ControlsWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   15,   15,   15, 0x0a,
      65,   15,   15,   15, 0x09,
      72,   15,   15,   15, 0x09,
      79,   15,   15,   15, 0x09,
      86,   15,   15,   15, 0x09,
      93,   15,   15,   15, 0x09,
     111,   15,   15,   15, 0x09,
     126,   15,   15,   15, 0x09,
     140,   15,   15,   15, 0x09,
     153,   15,   15,   15, 0x09,
     167,   15,   15,   15, 0x09,
     176,   15,   15,   15, 0x09,
     185,   15,   15,   15, 0x09,
     202,   15,   15,   15, 0x09,
     219,   15,   15,   15, 0x09,
     248,   15,   15,   15, 0x09,
     269,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ControlsWidget[] = {
    "ControlsWidget\0\0advancedControlsToggled(bool)\0"
    "setNavigation(int)\0play()\0stop()\0"
    "prev()\0next()\0updateVolume(int)\0"
    "updateVolume()\0updateInput()\0fullscreen()\0"
    "extSettings()\0faster()\0slower()\0"
    "toggleAdvanced()\0toggleTeletext()\0"
    "toggleTeletextTransparency()\0"
    "enableTeletext(bool)\0enableVideo(bool)\0"
};

const QMetaObject ControlsWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ControlsWidget,
      qt_meta_data_ControlsWidget, 0 }
};

const QMetaObject *ControlsWidget::metaObject() const
{
    return &staticMetaObject;
}

void *ControlsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ControlsWidget))
        return static_cast<void*>(const_cast< ControlsWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int ControlsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: advancedControlsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: setNavigation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: play(); break;
        case 3: stop(); break;
        case 4: prev(); break;
        case 5: next(); break;
        case 6: updateVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: updateVolume(); break;
        case 8: updateInput(); break;
        case 9: fullscreen(); break;
        case 10: extSettings(); break;
        case 11: faster(); break;
        case 12: slower(); break;
        case 13: toggleAdvanced(); break;
        case 14: toggleTeletext(); break;
        case 15: toggleTeletextTransparency(); break;
        case 16: enableTeletext((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: enableVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ControlsWidget::advancedControlsToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_FullscreenControllerWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x08,
      38,   27,   27,   27, 0x08,
      52,   27,   27,   27, 0x08,
      62,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FullscreenControllerWidget[] = {
    "FullscreenControllerWidget\0\0showFSC()\0"
    "planHideFSC()\0hideFSC()\0slowHideFSC()\0"
};

const QMetaObject FullscreenControllerWidget::staticMetaObject = {
    { &ControlsWidget::staticMetaObject, qt_meta_stringdata_FullscreenControllerWidget,
      qt_meta_data_FullscreenControllerWidget, 0 }
};

const QMetaObject *FullscreenControllerWidget::metaObject() const
{
    return &staticMetaObject;
}

void *FullscreenControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FullscreenControllerWidget))
        return static_cast<void*>(const_cast< FullscreenControllerWidget*>(this));
    return ControlsWidget::qt_metacast(_clname);
}

int FullscreenControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ControlsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showFSC(); break;
        case 1: planHideFSC(); break;
        case 2: hideFSC(); break;
        case 3: slowHideFSC(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_TimeLabel[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   36,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TimeLabel[] = {
    "TimeLabel\0\0timeLabelDoubleClicked()\0"
    "pos,time,length\0setDisplayPosition(float,int,int)\0"
};

const QMetaObject TimeLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_TimeLabel,
      qt_meta_data_TimeLabel, 0 }
};

const QMetaObject *TimeLabel::metaObject() const
{
    return &staticMetaObject;
}

void *TimeLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeLabel))
        return static_cast<void*>(const_cast< TimeLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int TimeLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: timeLabelDoubleClicked(); break;
        case 1: setDisplayPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TimeLabel::timeLabelDoubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_SpeedLabel[] = {

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

static const char qt_meta_stringdata_SpeedLabel[] = {
    "SpeedLabel\0"
};

const QMetaObject SpeedLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_SpeedLabel,
      qt_meta_data_SpeedLabel, 0 }
};

const QMetaObject *SpeedLabel::metaObject() const
{
    return &staticMetaObject;
}

void *SpeedLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedLabel))
        return static_cast<void*>(const_cast< SpeedLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int SpeedLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SpeedControlWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      36,   19,   19,   19, 0x08,
      52,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpeedControlWidget[] = {
    "SpeedControlWidget\0\0setEnable(bool)\0"
    "updateRate(int)\0resetRate()\0"
};

const QMetaObject SpeedControlWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SpeedControlWidget,
      qt_meta_data_SpeedControlWidget, 0 }
};

const QMetaObject *SpeedControlWidget::metaObject() const
{
    return &staticMetaObject;
}

void *SpeedControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedControlWidget))
        return static_cast<void*>(const_cast< SpeedControlWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int SpeedControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: updateRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: resetRate(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_CoverArtLabel[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   14,   14,   14, 0x0a,
      56,   49,   14,   14, 0x0a,
      78,   14,   14,   14, 0x08,
      89,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CoverArtLabel[] = {
    "CoverArtLabel\0\0updateRequested()\0"
    "requestUpdate()\0p_item\0update(input_item_t*)\0"
    "doUpdate()\0downloadCover()\0"
};

const QMetaObject CoverArtLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CoverArtLabel,
      qt_meta_data_CoverArtLabel, 0 }
};

const QMetaObject *CoverArtLabel::metaObject() const
{
    return &staticMetaObject;
}

void *CoverArtLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CoverArtLabel))
        return static_cast<void*>(const_cast< CoverArtLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int CoverArtLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateRequested(); break;
        case 1: requestUpdate(); break;
        case 2: update((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        case 3: doUpdate(); break;
        case 4: downloadCover(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CoverArtLabel::updateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
