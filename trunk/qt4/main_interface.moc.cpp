/****************************************************************************
** Meta object code from reading C++ file 'main_interface.hpp'
**
** Created: Tue Jun 2 18:53:28 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main_interface.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_interface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      40,   38,   14,   14, 0x05,
      68,   14,   14,   14, 0x05,
      87,   14,   14,   14, 0x05,
     109,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     121,   14,   14,   14, 0x0a,
     144,  138,   14,   14, 0x0a,
     168,   14,   14,   14, 0x2a,
     183,   14,   14,   14, 0x0a,
     203,   14,   14,   14, 0x0a,
     220,   14,   14,   14, 0x0a,
     246,   14,   14,   14, 0x0a,
     263,   14,   14,   14, 0x0a,
     282,   14,   14,   14, 0x0a,
     294,   14,   14,   14, 0x0a,
     318,   14,   14,   14, 0x08,
     326,   14,   14,   14, 0x08,
     342,   14,   14,   14, 0x08,
     363,   14,   14,   14, 0x08,
     378,   14,   14,   14, 0x08,
     391,   14,   14,   14, 0x08,
     414,  408,   14,   14, 0x08,
     442,   14,   14,   14, 0x28,
     463,   14,   14,   14, 0x08,
     517,   14,   14,   14, 0x08,
     551,   14,   14,   14, 0x08,
     583,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainInterface[] = {
    "MainInterface\0\0askReleaseVideo(void*)\0"
    ",\0askVideoToResize(uint,uint)\0"
    "askVideoToToggle()\0askBgWidgetToToggle()\0"
    "askUpdate()\0undockPlaylist()\0i_pos\0"
    "dockPlaylist(pl_dock_e)\0dockPlaylist()\0"
    "toggleMinimalView()\0togglePlaylist()\0"
    "toggleUpdateSystrayMenu()\0toggleAdvanced()\0"
    "toggleFullScreen()\0toggleFSC()\0"
    "releaseVideoSlot(void*)\0debug()\0"
    "updateOnTimer()\0doComponentsUpdate()\0"
    "setStatus(int)\0setRate(int)\0"
    "setName(QString)\0title\0"
    "setVLCWindowsTitle(QString)\0"
    "setVLCWindowsTitle()\0"
    "handleSystrayClick(QSystemTrayIcon::ActivationReason)\0"
    "updateSystrayTooltipName(QString)\0"
    "updateSystrayTooltipStatus(int)\0"
    "showSpeedMenu(QPoint)\0"
};

const QMetaObject MainInterface::staticMetaObject = {
    { &QVLCMW::staticMetaObject, qt_meta_stringdata_MainInterface,
      qt_meta_data_MainInterface, 0 }
};

const QMetaObject *MainInterface::metaObject() const
{
    return &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainInterface))
        return static_cast<void*>(const_cast< MainInterface*>(this));
    return QVLCMW::qt_metacast(_clname);
}

int MainInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCMW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: askReleaseVideo((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 1: askVideoToResize((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: askVideoToToggle(); break;
        case 3: askBgWidgetToToggle(); break;
        case 4: askUpdate(); break;
        case 5: undockPlaylist(); break;
        case 6: dockPlaylist((*reinterpret_cast< pl_dock_e(*)>(_a[1]))); break;
        case 7: dockPlaylist(); break;
        case 8: toggleMinimalView(); break;
        case 9: togglePlaylist(); break;
        case 10: toggleUpdateSystrayMenu(); break;
        case 11: toggleAdvanced(); break;
        case 12: toggleFullScreen(); break;
        case 13: toggleFSC(); break;
        case 14: releaseVideoSlot((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 15: debug(); break;
        case 16: updateOnTimer(); break;
        case 17: doComponentsUpdate(); break;
        case 18: setStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: setRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: setVLCWindowsTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: setVLCWindowsTitle(); break;
        case 23: handleSystrayClick((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 24: updateSystrayTooltipName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: updateSystrayTooltipStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: showSpeedMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void MainInterface::askReleaseVideo(void * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainInterface::askVideoToResize(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainInterface::askVideoToToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MainInterface::askBgWidgetToToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MainInterface::askUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
