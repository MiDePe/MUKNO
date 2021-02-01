/****************************************************************************
** Meta object code from reading C++ file 'SafeProperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukApplications/MuknoPlanner/SafeProperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SafeProperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SafePropertySender_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SafePropertySender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SafePropertySender_t qt_meta_stringdata_gris__muk__SafePropertySender = {
    {
QT_MOC_LITERAL(0, 0, 29), // "gris::muk::SafePropertySender"
QT_MOC_LITERAL(1, 30, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "std::string"
QT_MOC_LITERAL(4, 59, 3), // "key"
QT_MOC_LITERAL(5, 63, 5), // "value"
QT_MOC_LITERAL(6, 69, 17) // "propertyRequested"

    },
    "gris::muk::SafePropertySender\0"
    "propertyChanged\0\0std::string\0key\0value\0"
    "propertyRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SafePropertySender[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void gris::muk::SafePropertySender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SafePropertySender *_t = static_cast<SafePropertySender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->propertyRequested((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SafePropertySender::*_t)(const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SafePropertySender::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SafePropertySender::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SafePropertySender::propertyRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::SafePropertySender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__SafePropertySender.data,
      qt_meta_data_gris__muk__SafePropertySender,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SafePropertySender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SafePropertySender::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SafePropertySender.stringdata0))
        return static_cast<void*>(const_cast< SafePropertySender*>(this));
    if (!strcmp(_clname, "NavigatorProperty"))
        return static_cast< NavigatorProperty*>(const_cast< SafePropertySender*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::SafePropertySender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::SafePropertySender::propertyChanged(const std::string & _t1, const std::string & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::SafePropertySender::propertyRequested(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_gris__muk__SafePropertyReceiver_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SafePropertyReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SafePropertyReceiver_t qt_meta_stringdata_gris__muk__SafePropertyReceiver = {
    {
QT_MOC_LITERAL(0, 0, 31), // "gris::muk::SafePropertyReceiver"
QT_MOC_LITERAL(1, 32, 11), // "setProperty"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "std::string"
QT_MOC_LITERAL(4, 57, 3), // "key"
QT_MOC_LITERAL(5, 61, 5), // "value"
QT_MOC_LITERAL(6, 67, 15) // "requestProperty"

    },
    "gris::muk::SafePropertyReceiver\0"
    "setProperty\0\0std::string\0key\0value\0"
    "requestProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SafePropertyReceiver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       6,    1,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void gris::muk::SafePropertyReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SafePropertyReceiver *_t = static_cast<SafePropertyReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setProperty((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->requestProperty((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject gris::muk::SafePropertyReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__SafePropertyReceiver.data,
      qt_meta_data_gris__muk__SafePropertyReceiver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SafePropertyReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SafePropertyReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SafePropertyReceiver.stringdata0))
        return static_cast<void*>(const_cast< SafePropertyReceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::SafePropertyReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
