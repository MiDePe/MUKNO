/****************************************************************************
** Meta object code from reading C++ file 'AlgItemHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/AlgItemHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlgItemHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__AlgItemHandler_t {
    QByteArrayData data[15];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__AlgItemHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__AlgItemHandler_t qt_meta_stringdata_gris__muk__AlgItemHandler = {
    {
QT_MOC_LITERAL(0, 0, 25), // "gris::muk::AlgItemHandler"
QT_MOC_LITERAL(1, 26, 12), // "blockClicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 2), // "id"
QT_MOC_LITERAL(4, 43, 11), // "portClicked"
QT_MOC_LITERAL(5, 55, 5), // "idAlg"
QT_MOC_LITERAL(6, 61, 8), // "isOutput"
QT_MOC_LITERAL(7, 70, 6), // "idPort"
QT_MOC_LITERAL(8, 77, 11), // "deleteBlock"
QT_MOC_LITERAL(9, 89, 15), // "connectionAdded"
QT_MOC_LITERAL(10, 105, 8), // "AlgPort*"
QT_MOC_LITERAL(11, 114, 5), // "port1"
QT_MOC_LITERAL(12, 120, 5), // "port2"
QT_MOC_LITERAL(13, 126, 17), // "connectionDeleted"
QT_MOC_LITERAL(14, 144, 17) // "backgroundClicked"

    },
    "gris::muk::AlgItemHandler\0blockClicked\0"
    "\0id\0portClicked\0idAlg\0isOutput\0idPort\0"
    "deleteBlock\0connectionAdded\0AlgPort*\0"
    "port1\0port2\0connectionDeleted\0"
    "backgroundClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__AlgItemHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    3,   47,    2, 0x06 /* Public */,
       8,    1,   54,    2, 0x06 /* Public */,
       9,    2,   57,    2, 0x06 /* Public */,
      13,    2,   62,    2, 0x06 /* Public */,
      14,    0,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void,

       0        // eod
};

void gris::muk::AlgItemHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlgItemHandler *_t = static_cast<AlgItemHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blockClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->portClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->deleteBlock((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->connectionAdded((*reinterpret_cast< AlgPort*(*)>(_a[1])),(*reinterpret_cast< AlgPort*(*)>(_a[2]))); break;
        case 4: _t->connectionDeleted((*reinterpret_cast< AlgPort*(*)>(_a[1])),(*reinterpret_cast< AlgPort*(*)>(_a[2]))); break;
        case 5: _t->backgroundClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlgItemHandler::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlgItemHandler::blockClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AlgItemHandler::*_t)(int , bool , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlgItemHandler::portClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AlgItemHandler::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlgItemHandler::deleteBlock)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AlgItemHandler::*_t)(AlgPort * , AlgPort * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlgItemHandler::connectionAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AlgItemHandler::*_t)(AlgPort * , AlgPort * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlgItemHandler::connectionDeleted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AlgItemHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlgItemHandler::backgroundClicked)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::AlgItemHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__AlgItemHandler.data,
      qt_meta_data_gris__muk__AlgItemHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::AlgItemHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::AlgItemHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__AlgItemHandler.stringdata0))
        return static_cast<void*>(const_cast< AlgItemHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::AlgItemHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::AlgItemHandler::blockClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::AlgItemHandler::portClicked(int _t1, bool _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::AlgItemHandler::deleteBlock(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gris::muk::AlgItemHandler::connectionAdded(AlgPort * _t1, AlgPort * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gris::muk::AlgItemHandler::connectionDeleted(AlgPort * _t1, AlgPort * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gris::muk::AlgItemHandler::backgroundClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
