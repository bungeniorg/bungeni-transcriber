/****************************************************************************
** Meta object code from reading C++ file 'dialogs_provider.hpp'
**
** Created: Wed Jul 1 12:14:48 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogs_provider.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogs_provider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogsProvider[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      52,   16,   16,   16, 0x0a,
      73,   16,   16,   16, 0x0a,
     100,   16,   16,   16, 0x0a,
     122,   16,   16,   16, 0x0a,
     139,   16,   16,   16, 0x0a,
     157,   16,   16,   16, 0x0a,
     175,   16,   16,   16, 0x0a,
     194,   16,   16,   16, 0x0a,
     208,   16,   16,   16, 0x0a,
     225,   16,   16,   16, 0x0a,
     242,   16,   16,   16, 0x0a,
     254,   16,   16,   16, 0x0a,
     267,   16,   16,   16, 0x0a,
     281,   16,   16,   16, 0x0a,
     298,   16,   16,   16, 0x0a,
     323,   16,   16,   16, 0x0a,
     342,   16,   16,   16, 0x0a,
     365,   16,   16,   16, 0x0a,
     388,   16,   16,   16, 0x0a,
     406,   16,   16,   16, 0x0a,
     424,   16,   16,   16, 0x0a,
     444,   16,   16,   16, 0x0a,
     462,   16,   16,   16, 0x0a,
     478,   16,   16,   16, 0x0a,
     489,   16,   16,   16, 0x0a,
     502,   16,   16,   16, 0x0a,
     518,   16,   16,   16, 0x0a,
     561,   16,   16,   16, 0x0a,
     578,   16,   16,   16, 0x0a,
     595,   16,   16,   16, 0x0a,
     611,   16,   16,   16, 0x0a,
     631,   16,   16,   16, 0x0a,
     648,   16,   16,   16, 0x0a,
     665,   16,   16,   16, 0x0a,
     677,   16,   16,   16, 0x0a,
     691,   16,   16,   16, 0x0a,
     725,  705,   16,   16, 0x0a,
     775,  764,   16,   16, 0x2a,
     816,  809,   16,   16, 0x2a,
     842,   16,   16,   16, 0x0a,
     869,   16,   16,   16, 0x0a,
     898,   16,   16,   16, 0x0a,
     914,   16,   16,   16, 0x0a,
     930,   16,   16,   16, 0x0a,
     950,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogsProvider[] = {
    "DialogsProvider\0\0doInteraction(intf_dialog_args_t*)\0"
    "menuAction(QObject*)\0menuUpdateAction(QObject*)\0"
    "SDMenuAction(QString)\0playlistDialog()\0"
    "bookmarksDialog()\0mediaInfoDialog()\0"
    "mediaCodecDialog()\0prefsDialog()\0"
    "extendedDialog()\0messagesDialog()\0"
    "vlmDialog()\0helpDialog()\0aboutDialog()\0"
    "gotoTimeDialog()\0podcastConfigureDialog()\0"
    "simpleOpenDialog()\0simplePLAppendDialog()\0"
    "simpleMLAppendDialog()\0openTranscripts()\0"
    "saveTranscripts()\0saveAsTranscripts()\0"
    "editPreferences()\0postToBungeni()\0"
    "getTakes()\0openDialog()\0openDialog(int)\0"
    "openFileGenericDialog(intf_dialog_args_t*)\0"
    "openDiscDialog()\0openFileDialog()\0"
    "openNetDialog()\0openCaptureDialog()\0"
    "PLAppendDialog()\0MLAppendDialog()\0"
    "PLOpenDir()\0PLAppendDir()\0MLAppendDir()\0"
    "parent,mrl,b_stream\0"
    "streamingDialog(QWidget*,QString,bool)\0"
    "parent,mrl\0streamingDialog(QWidget*,QString)\0"
    "parent\0streamingDialog(QWidget*)\0"
    "openThenStreamingDialogs()\0"
    "openThenTranscodingDialogs()\0"
    "openAPlaylist()\0saveAPlaylist()\0"
    "loadSubtitlesFile()\0quit()\0"
};

const QMetaObject DialogsProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogsProvider,
      qt_meta_data_DialogsProvider, 0 }
};

const QMetaObject *DialogsProvider::metaObject() const
{
    return &staticMetaObject;
}

void *DialogsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogsProvider))
        return static_cast<void*>(const_cast< DialogsProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: doInteraction((*reinterpret_cast< intf_dialog_args_t*(*)>(_a[1]))); break;
        case 1: menuAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: menuUpdateAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: SDMenuAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: playlistDialog(); break;
        case 5: bookmarksDialog(); break;
        case 6: mediaInfoDialog(); break;
        case 7: mediaCodecDialog(); break;
        case 8: prefsDialog(); break;
        case 9: extendedDialog(); break;
        case 10: messagesDialog(); break;
        case 11: vlmDialog(); break;
        case 12: helpDialog(); break;
        case 13: aboutDialog(); break;
        case 14: gotoTimeDialog(); break;
        case 15: podcastConfigureDialog(); break;
        case 16: simpleOpenDialog(); break;
        case 17: simplePLAppendDialog(); break;
        case 18: simpleMLAppendDialog(); break;
        case 19: openTranscripts(); break;
        case 20: saveTranscripts(); break;
        case 21: saveAsTranscripts(); break;
        case 22: editPreferences(); break;
        case 23: postToBungeni(); break;
        case 24: getTakes(); break;
        case 25: openDialog(); break;
        case 26: openDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: openFileGenericDialog((*reinterpret_cast< intf_dialog_args_t*(*)>(_a[1]))); break;
        case 28: openDiscDialog(); break;
        case 29: openFileDialog(); break;
        case 30: openNetDialog(); break;
        case 31: openCaptureDialog(); break;
        case 32: PLAppendDialog(); break;
        case 33: MLAppendDialog(); break;
        case 34: PLOpenDir(); break;
        case 35: PLAppendDir(); break;
        case 36: MLAppendDir(); break;
        case 37: streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 38: streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 39: streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 40: openThenStreamingDialogs(); break;
        case 41: openThenTranscodingDialogs(); break;
        case 42: openAPlaylist(); break;
        case 43: saveAPlaylist(); break;
        case 44: loadSubtitlesFile(); break;
        case 45: quit(); break;
        default: ;
        }
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
