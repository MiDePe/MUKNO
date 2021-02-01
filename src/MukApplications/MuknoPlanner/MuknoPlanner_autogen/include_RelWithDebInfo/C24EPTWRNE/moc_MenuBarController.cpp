/****************************************************************************
** Meta object code from reading C++ file 'MenuBarController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukApplications/MuknoPlanner/MenuBarController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MenuBarController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__MenuBarController_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__MenuBarController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__MenuBarController_t qt_meta_stringdata_gris__muk__MenuBarController = {
    {
QT_MOC_LITERAL(0, 0, 28), // "gris::muk::MenuBarController"
QT_MOC_LITERAL(1, 29, 13), // "obstacleAdded"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "std::string"
QT_MOC_LITERAL(4, 56, 4), // "name"
QT_MOC_LITERAL(5, 61, 15), // "obstacleDeleted"
QT_MOC_LITERAL(6, 77, 15), // "propertyChanged"
QT_MOC_LITERAL(7, 93, 11), // "const char*"
QT_MOC_LITERAL(8, 105, 3) // "key"

    },
    "gris::muk::MenuBarController\0obstacleAdded\0"
    "\0std::string\0name\0obstacleDeleted\0"
    "propertyChanged\0const char*\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__MenuBarController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void gris::muk::MenuBarController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MenuBarController *_t = static_cast<MenuBarController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->obstacleAdded((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->obstacleDeleted((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->propertyChanged((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MenuBarController::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MenuBarController::obstacleAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MenuBarController::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MenuBarController::obstacleDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MenuBarController::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MenuBarController::propertyChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::MenuBarController::staticMetaObject = {
    { &BaseController::staticMetaObject, qt_meta_stringdata_gris__muk__MenuBarController.data,
      qt_meta_data_gris__muk__MenuBarController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::MenuBarController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::MenuBarController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__MenuBarController.stringdata0))
        return static_cast<void*>(const_cast< MenuBarController*>(this));
    return BaseController::qt_metacast(_clname);
}

int gris::muk::MenuBarController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::MenuBarController::obstacleAdded(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::MenuBarController::obstacleDeleted(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::MenuBarController::propertyChanged(const char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
