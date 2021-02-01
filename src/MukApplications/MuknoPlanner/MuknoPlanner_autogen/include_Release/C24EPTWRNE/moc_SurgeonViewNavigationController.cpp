/****************************************************************************
** Meta object code from reading C++ file 'SurgeonViewNavigationController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukApplications/MuknoPlanner/SurgeonViewNavigationController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurgeonViewNavigationController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SurgeonViewNavigationController_t {
    QByteArrayData data[7];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SurgeonViewNavigationController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SurgeonViewNavigationController_t qt_meta_stringdata_gris__muk__SurgeonViewNavigationController = {
    {
QT_MOC_LITERAL(0, 0, 42), // "gris::muk::SurgeonViewNavigat..."
QT_MOC_LITERAL(1, 43, 13), // "initRequested"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 17), // "dummyRunRequested"
QT_MOC_LITERAL(4, 76, 18), // "dummyStopRequested"
QT_MOC_LITERAL(5, 95, 25), // "dummyStepForwardRequested"
QT_MOC_LITERAL(6, 121, 23) // "dummyCalibrateRequested"

    },
    "gris::muk::SurgeonViewNavigationController\0"
    "initRequested\0\0dummyRunRequested\0"
    "dummyStopRequested\0dummyStepForwardRequested\0"
    "dummyCalibrateRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SurgeonViewNavigationController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::SurgeonViewNavigationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurgeonViewNavigationController *_t = static_cast<SurgeonViewNavigationController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initRequested(); break;
        case 1: _t->dummyRunRequested(); break;
        case 2: _t->dummyStopRequested(); break;
        case 3: _t->dummyStepForwardRequested(); break;
        case 4: _t->dummyCalibrateRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurgeonViewNavigationController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigationController::initRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigationController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigationController::dummyRunRequested)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigationController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigationController::dummyStopRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigationController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigationController::dummyStepForwardRequested)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigationController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigationController::dummyCalibrateRequested)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::SurgeonViewNavigationController::staticMetaObject = {
    { &BaseController::staticMetaObject, qt_meta_stringdata_gris__muk__SurgeonViewNavigationController.data,
      qt_meta_data_gris__muk__SurgeonViewNavigationController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SurgeonViewNavigationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SurgeonViewNavigationController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SurgeonViewNavigationController.stringdata0))
        return static_cast<void*>(const_cast< SurgeonViewNavigationController*>(this));
    return BaseController::qt_metacast(_clname);
}

int gris::muk::SurgeonViewNavigationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::SurgeonViewNavigationController::initRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void gris::muk::SurgeonViewNavigationController::dummyRunRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gris::muk::SurgeonViewNavigationController::dummyStopRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::SurgeonViewNavigationController::dummyStepForwardRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::SurgeonViewNavigationController::dummyCalibrateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
