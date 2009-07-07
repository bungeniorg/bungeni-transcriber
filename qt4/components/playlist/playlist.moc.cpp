/****************************************************************************
** Meta object code from reading C++ file 'playlist.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlist.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistWidget[] = {
    "PlaylistWidget\0\0rootChanged(int)\0"
};

const QMetaObject PlaylistWidget::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_PlaylistWidget,
      qt_meta_data_PlaylistWidget, 0 }
};

const QMetaObject *PlaylistWidget::metaObject() const
{
    return &staticMetaObject;
}

void *PlaylistWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistWidget))
        return static_cast<void*>(const_cast< PlaylistWidget*>(this));
    return QSplitter::qt_metacast(_clname);
}

int PlaylistWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rootChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PlaylistWidget::rootChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ArtLabel[] = {

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

static const char qt_meta_stringdata_ArtLabel[] = {
    "ArtLabel\0"
};

const QMetaObject ArtLabel::staticMetaObject = {
    { &CoverArtLabel::staticMetaObject, qt_meta_stringdata_ArtLabel,
      qt_meta_data_ArtLabel, 0 }
};

const QMetaObject *ArtLabel::metaObject() const
{
    return &staticMetaObject;
}

void *ArtLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArtLabel))
        return static_cast<void*>(const_cast< ArtLabel*>(this));
    return CoverArtLabel::qt_metacast(_clname);
}

int ArtLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CoverArtLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
