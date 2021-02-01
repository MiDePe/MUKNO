/****************************************************************************
** Meta object code from reading C++ file 'HandlerTextEditLog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukApplications/MuknoPlanner/private/HandlerTextEditLog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HandlerTextEditLog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__QtLogWrapper_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__QtLogWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__QtLogWrapper_t qt_meta_stringdata_gris__muk__QtLogWrapper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "gris::muk::QtLogWrapper"
QT_MOC_LITERAL(1, 24, 15), // "incomingMessage"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "gris::muk::QtLogWrapper\0incomingMessage\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__QtLogWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void gris::muk::QtLogWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtLogWrapper *_t = static_cast<QtLogWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->incomingMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtLogWrapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtLogWrapper::incomingMessage)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::QtLogWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__QtLogWrapper.data,
      qt_meta_data_gris__muk__QtLogWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::QtLogWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::QtLogWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__QtLogWrapper.stringdata0))
        return static_cast<void*>(const_cast< QtLogWrapper*>(this));
    if (!strcmp(_clname, "LoggerCallback"))
        return static_cast< LoggerCallback*>(const_cast< QtLogWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::QtLogWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::QtLogWrapper::incomingMessage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_gris__muk__HandlerTextEditLog_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__HandlerTextEditLog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__HandlerTextEditLog_t qt_meta_stringdata_gris__muk__HandlerTextEditLog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "gris::muk::HandlerTextEditLog"
QT_MOC_LITERAL(1, 30, 15), // "incomingMessage"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "gris::muk::HandlerTextEditLog\0"
    "incomingMessage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__HandlerTextEditLog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void gris::muk::HandlerTextEditLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HandlerTextEditLog *_t = static_cast<HandlerTextEditLog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->incomingMessage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::HandlerTextEditLog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__HandlerTextEditLog.data,
      qt_meta_data_gris__muk__HandlerTextEditLog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::HandlerTextEditLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::HandlerTextEditLog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__HandlerTextEditLog.stringdata0))
        return static_cast<void*>(const_cast< HandlerTextEditLog*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::HandlerTextEditLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
