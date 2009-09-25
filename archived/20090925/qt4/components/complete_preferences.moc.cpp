/****************************************************************************
** Meta object code from reading C++ file 'complete_preferences.hpp'
**
** Created: Wed May 6 11:27:31 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "complete_preferences.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'complete_preferences.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrefsTree[] = {

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

static const char qt_meta_stringdata_PrefsTree[] = {
    "PrefsTree\0"
};

const QMetaObject PrefsTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_PrefsTree,
      qt_meta_data_PrefsTree, 0 }
};

const QMetaObject *PrefsTree::metaObject() const
{
    return &staticMetaObject;
}

void *PrefsTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsTree))
        return static_cast<void*>(const_cast< PrefsTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int PrefsTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_AdvPrefsPanel[] = {

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

static const char qt_meta_stringdata_AdvPrefsPanel[] = {
    "AdvPrefsPanel\0"
};

const QMetaObject AdvPrefsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdvPrefsPanel,
      qt_meta_data_AdvPrefsPanel, 0 }
};

const QMetaObject *AdvPrefsPanel::metaObject() const
{
    return &staticMetaObject;
}

void *AdvPrefsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvPrefsPanel))
        return static_cast<void*>(const_cast< AdvPrefsPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdvPrefsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
