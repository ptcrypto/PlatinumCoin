/****************************************************************************
** Meta object code from reading C++ file 'sendcoinsentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendcoinsentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcoinsentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendCoinsEntry_t {
    QByteArrayData data[14];
    char stringdata[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SendCoinsEntry_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SendCoinsEntry_t qt_meta_stringdata_SendCoinsEntry = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 11),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 15),
QT_MOC_LITERAL(4, 44, 5),
QT_MOC_LITERAL(5, 50, 16),
QT_MOC_LITERAL(6, 67, 7),
QT_MOC_LITERAL(7, 75, 5),
QT_MOC_LITERAL(8, 81, 23),
QT_MOC_LITERAL(9, 105, 20),
QT_MOC_LITERAL(10, 126, 7),
QT_MOC_LITERAL(11, 134, 28),
QT_MOC_LITERAL(12, 163, 22),
QT_MOC_LITERAL(13, 186, 17)
    },
    "SendCoinsEntry\0removeEntry\0\0SendCoinsEntry*\0"
    "entry\0setRemoveEnabled\0enabled\0clear\0"
    "on_deleteButton_clicked\0on_payTo_textChanged\0"
    "address\0on_addressBookButton_clicked\0"
    "on_pasteButton_clicked\0updateDisplayUnit\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendCoinsEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a,
       7,    0,   60,    2, 0x0a,
       8,    0,   61,    2, 0x08,
       9,    1,   62,    2, 0x08,
      11,    0,   65,    2, 0x08,
      12,    0,   66,    2, 0x08,
      13,    0,   67,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SendCoinsEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendCoinsEntry *_t = static_cast<SendCoinsEntry *>(_o);
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< SendCoinsEntry*(*)>(_a[1]))); break;
        case 1: _t->setRemoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_payTo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_addressBookButton_clicked(); break;
        case 6: _t->on_pasteButton_clicked(); break;
        case 7: _t->updateDisplayUnit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SendCoinsEntry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SendCoinsEntry::*_t)(SendCoinsEntry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendCoinsEntry::removeEntry)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SendCoinsEntry::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SendCoinsEntry.data,
      qt_meta_data_SendCoinsEntry,  qt_static_metacall, 0, 0}
};


const QMetaObject *SendCoinsEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendCoinsEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendCoinsEntry.stringdata))
        return static_cast<void*>(const_cast< SendCoinsEntry*>(this));
    return QFrame::qt_metacast(_clname);
}

int SendCoinsEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SendCoinsEntry::removeEntry(SendCoinsEntry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE