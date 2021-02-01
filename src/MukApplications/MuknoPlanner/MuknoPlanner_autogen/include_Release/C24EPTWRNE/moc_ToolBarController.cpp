/****************************************************************************
** Meta object code from reading C++ file 'ToolBarController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukApplications/MuknoPlanner/ToolBarController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToolBarController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__ToolBarController_t {
    QByteArrayData data[13];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__ToolBarController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__ToolBarController_t qt_meta_stringdata_gris__muk__ToolBarController = {
    {
QT_MOC_LITERAL(0, 0, 28), // "gris::muk::ToolBarController"
QT_MOC_LITERAL(1, 29, 22), // "activePathIndexChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 9), // "pathAdded"
QT_MOC_LITERAL(4, 63, 11), // "std::string"
QT_MOC_LITERAL(5, 75, 3), // "key"
QT_MOC_LITERAL(6, 79, 6), // "size_t"
QT_MOC_LITERAL(7, 86, 3), // "idx"
QT_MOC_LITERAL(8, 90, 11), // "pathChanged"
QT_MOC_LITERAL(9, 102, 12), // "interpolated"
QT_MOC_LITERAL(10, 115, 14), // "extractRoadMap"
QT_MOC_LITERAL(11, 130, 12), // "ctFileLoaded"
QT_MOC_LITERAL(12, 143, 12) // "sceneCleared"

    },
    "gris::muk::ToolBarController\0"
    "activePathIndexChanged\0\0pathAdded\0"
    "std::string\0key\0size_t\0idx\0pathChanged\0"
    "interpolated\0extractRoadMap\0ctFileLoaded\0"
    "sceneCleared"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__ToolBarController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,
       8,    2,   55,    2, 0x06 /* Public */,
       9,    1,   60,    2, 0x06 /* Public */,
      10,    0,   63,    2, 0x06 /* Public */,
      11,    0,   64,    2, 0x06 /* Public */,
      12,    0,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::ToolBarController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolBarController *_t = static_cast<ToolBarController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activePathIndexChanged(); break;
        case 1: _t->pathAdded((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 2: _t->pathChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 3: _t->interpolated((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 4: _t->extractRoadMap(); break;
        case 5: _t->ctFileLoaded(); break;
        case 6: _t->sceneCleared(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToolBarController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBarController::activePathIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ToolBarController::*_t)(const std::string & , size_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBarController::pathAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ToolBarController::*_t)(const std::string & , size_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBarController::pathChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ToolBarController::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBarController::interpolated)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ToolBarController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBarController::extractRoadMap)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ToolBarController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBarController::ctFileLoaded)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ToolBarController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolBarController::sceneCleared)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::ToolBarController::staticMetaObject = {
    { &BaseController::staticMetaObject, qt_meta_stringdata_gris__muk__ToolBarController.data,
      qt_meta_data_gris__muk__ToolBarController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::ToolBarController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::ToolBarController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__ToolBarController.stringdata0))
        return static_cast<void*>(const_cast< ToolBarController*>(this));
    return BaseController::qt_metacast(_clname);
}

int gris::muk::ToolBarController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::ToolBarController::activePathIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void gris::muk::ToolBarController::pathAdded(const std::string & _t1, size_t _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::ToolBarController::pathChanged(const std::string & _t1, size_t _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gris::muk::ToolBarController::interpolated(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gris::muk::ToolBarController::extractRoadMap()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::ToolBarController::ctFileLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void gris::muk::ToolBarController::sceneCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
