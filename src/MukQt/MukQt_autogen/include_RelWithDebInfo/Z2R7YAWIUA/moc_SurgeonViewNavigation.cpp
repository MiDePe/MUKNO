/****************************************************************************
** Meta object code from reading C++ file 'SurgeonViewNavigation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/SurgeonViewNavigation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurgeonViewNavigation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SurgeonViewNavigation_t {
    QByteArrayData data[12];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SurgeonViewNavigation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SurgeonViewNavigation_t qt_meta_stringdata_gris__muk__SurgeonViewNavigation = {
    {
QT_MOC_LITERAL(0, 0, 32), // "gris::muk::SurgeonViewNavigation"
QT_MOC_LITERAL(1, 33, 13), // "initRequested"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 17), // "dummyRunRequested"
QT_MOC_LITERAL(4, 66, 18), // "dummyStopRequested"
QT_MOC_LITERAL(5, 85, 25), // "dummyStepForwardRequested"
QT_MOC_LITERAL(6, 111, 27), // "dummyStepBackwardsRequested"
QT_MOC_LITERAL(7, 139, 23), // "dummyCalibrateRequested"
QT_MOC_LITERAL(8, 163, 20), // "actionToggleRunDummy"
QT_MOC_LITERAL(9, 184, 22), // "actionStepForwardDummy"
QT_MOC_LITERAL(10, 207, 24), // "actionStepBackwardsDummy"
QT_MOC_LITERAL(11, 232, 20) // "actionCalibrateDummy"

    },
    "gris::muk::SurgeonViewNavigation\0"
    "initRequested\0\0dummyRunRequested\0"
    "dummyStopRequested\0dummyStepForwardRequested\0"
    "dummyStepBackwardsRequested\0"
    "dummyCalibrateRequested\0actionToggleRunDummy\0"
    "actionStepForwardDummy\0actionStepBackwardsDummy\0"
    "actionCalibrateDummy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SurgeonViewNavigation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::SurgeonViewNavigation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurgeonViewNavigation *_t = static_cast<SurgeonViewNavigation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initRequested(); break;
        case 1: _t->dummyRunRequested(); break;
        case 2: _t->dummyStopRequested(); break;
        case 3: _t->dummyStepForwardRequested(); break;
        case 4: _t->dummyStepBackwardsRequested(); break;
        case 5: _t->dummyCalibrateRequested(); break;
        case 6: _t->actionToggleRunDummy(); break;
        case 7: _t->actionStepForwardDummy(); break;
        case 8: _t->actionStepBackwardsDummy(); break;
        case 9: _t->actionCalibrateDummy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurgeonViewNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigation::initRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigation::dummyRunRequested)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigation::dummyStopRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigation::dummyStepForwardRequested)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigation::dummyStepBackwardsRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SurgeonViewNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewNavigation::dummyCalibrateRequested)) {
                *result = 5;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::SurgeonViewNavigation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__SurgeonViewNavigation.data,
      qt_meta_data_gris__muk__SurgeonViewNavigation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SurgeonViewNavigation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SurgeonViewNavigation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SurgeonViewNavigation.stringdata0))
        return static_cast<void*>(const_cast< SurgeonViewNavigation*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::SurgeonViewNavigation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::SurgeonViewNavigation::initRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void gris::muk::SurgeonViewNavigation::dummyRunRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gris::muk::SurgeonViewNavigation::dummyStopRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::SurgeonViewNavigation::dummyStepForwardRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::SurgeonViewNavigation::dummyStepBackwardsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::SurgeonViewNavigation::dummyCalibrateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
