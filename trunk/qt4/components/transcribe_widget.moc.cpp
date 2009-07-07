/****************************************************************************
** Meta object code from reading C++ file 'transcribe_widget.hpp'
**
** Created: Fri Jul 3 18:02:53 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "transcribe_widget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transcribe_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TranscribeWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      30,   17,   17,   17, 0x0a,
      45,   17,   17,   17, 0x0a,
      68,   63,   17,   17, 0x0a,
      89,   63,   17,   17, 0x0a,
     108,   63,   17,   17, 0x0a,
     131,   63,   17,   17, 0x0a,
     152,   17,   17,   17, 0x0a,
     170,  165,   17,   17, 0x0a,
     192,   17,   17,   17, 0x0a,
     199,   17,   17,   17, 0x0a,
     209,   17,   17,   17, 0x0a,
     221,   17,   17,   17, 0x0a,
     245,  239,   17,   17, 0x0a,
     265,   17,   17,   17, 0x0a,
     295,   17,   17,   17, 0x0a,
     308,   17,   17,   17, 0x0a,
     319,   17,   17,   17, 0x0a,
     330,   17,   17,   17, 0x0a,
     340,   17,   17,   17, 0x0a,
     379,   17,   17,   17, 0x0a,
     397,  395,   17,   17, 0x0a,
     421,   17,   17,   17, 0x0a,
     440,  434,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TranscribeWidget[] = {
    "TranscribeWidget\0\0addSpeech()\0"
    "removeSpeech()\0edit(QModelIndex)\0time\0"
    "updateStartTime(int)\0updateEndTime(int)\0"
    "updateStartTime(QTime)\0updateEndTime(QTime)\0"
    "updateText()\0text\0updatePerson(QString)\0"
    "bold()\0italics()\0underline()\0"
    "play(QModelIndex)\0state\0updateComplete(int)\0"
    "replyFinished(QNetworkReply*)\0"
    "saveFileAs()\0saveFile()\0openFile()\0"
    "newFile()\0slotError(QNetworkReply::NetworkError)\0"
    "slotReadyRead()\0,\0progress(qint64,qint64)\0"
    "takesReply()\0reply\0takesDownload(QNetworkReply*)\0"
};

const QMetaObject TranscribeWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_TranscribeWidget,
      qt_meta_data_TranscribeWidget, 0 }
};

const QMetaObject *TranscribeWidget::metaObject() const
{
    return &staticMetaObject;
}

void *TranscribeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TranscribeWidget))
        return static_cast<void*>(const_cast< TranscribeWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int TranscribeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addSpeech(); break;
        case 1: removeSpeech(); break;
        case 2: edit((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: updateStartTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: updateEndTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: updateStartTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 6: updateEndTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 7: updateText(); break;
        case 8: updatePerson((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: bold(); break;
        case 10: italics(); break;
        case 11: underline(); break;
        case 12: play((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 13: updateComplete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 15: saveFileAs(); break;
        case 16: saveFile(); break;
        case 17: openFile(); break;
        case 18: newFile(); break;
        case 19: slotError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 20: slotReadyRead(); break;
        case 21: progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 22: takesReply(); break;
        case 23: takesDownload((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
