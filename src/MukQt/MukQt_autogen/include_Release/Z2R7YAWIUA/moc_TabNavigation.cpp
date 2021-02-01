/****************************************************************************
** Meta object code from reading C++ file 'TabNavigation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/TabNavigation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabNavigation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__TabNavigation_t {
    QByteArrayData data[19];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__TabNavigation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__TabNavigation_t qt_meta_stringdata_gris__muk__TabNavigation = {
    {
QT_MOC_LITERAL(0, 0, 24), // "gris::muk::TabNavigation"
QT_MOC_LITERAL(1, 25, 17), // "calibratorChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "std::string"
QT_MOC_LITERAL(4, 56, 16), // "navigatorChanged"
QT_MOC_LITERAL(5, 73, 20), // "calibrationRequested"
QT_MOC_LITERAL(6, 94, 13), // "initRequested"
QT_MOC_LITERAL(7, 108, 14), // "startRequested"
QT_MOC_LITERAL(8, 123, 13), // "stopRequested"
QT_MOC_LITERAL(9, 137, 16), // "proceedRequested"
QT_MOC_LITERAL(10, 154, 17), // "showMessageDialog"
QT_MOC_LITERAL(11, 172, 3), // "msg"
QT_MOC_LITERAL(12, 176, 11), // "waitProceed"
QT_MOC_LITERAL(13, 188, 17), // "showStatusMessage"
QT_MOC_LITERAL(14, 206, 10), // "logMessage"
QT_MOC_LITERAL(15, 217, 30), // "toggleActivationInitialization"
QT_MOC_LITERAL(16, 248, 5), // "state"
QT_MOC_LITERAL(17, 254, 23), // "toggleActivationRunning"
QT_MOC_LITERAL(18, 278, 31) // "toggleActivationCalibratorValid"

    },
    "gris::muk::TabNavigation\0calibratorChanged\0"
    "\0std::string\0navigatorChanged\0"
    "calibrationRequested\0initRequested\0"
    "startRequested\0stopRequested\0"
    "proceedRequested\0showMessageDialog\0"
    "msg\0waitProceed\0showStatusMessage\0"
    "logMessage\0toggleActivationInitialization\0"
    "state\0toggleActivationRunning\0"
    "toggleActivationCalibratorValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__TabNavigation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    0,   85,    2, 0x06 /* Public */,
       6,    0,   86,    2, 0x06 /* Public */,
       7,    0,   87,    2, 0x06 /* Public */,
       8,    0,   88,    2, 0x06 /* Public */,
       9,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   90,    2, 0x0a /* Public */,
      13,    1,   95,    2, 0x0a /* Public */,
      14,    1,   98,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      18,    1,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   11,   12,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void gris::muk::TabNavigation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabNavigation *_t = static_cast<TabNavigation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calibratorChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->navigatorChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->calibrationRequested(); break;
        case 3: _t->initRequested(); break;
        case 4: _t->startRequested(); break;
        case 5: _t->stopRequested(); break;
        case 6: _t->proceedRequested(); break;
        case 7: _t->showMessageDialog((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 8: _t->showStatusMessage((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 9: _t->logMessage((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 10: _t->toggleActivationInitialization((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 11: _t->toggleActivationRunning((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->toggleActivationCalibratorValid((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TabNavigation::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabNavigation::calibratorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TabNavigation::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabNavigation::navigatorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TabNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabNavigation::calibrationRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TabNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabNavigation::initRequested)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TabNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabNavigation::startRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TabNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabNavigation::stopRequested)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TabNavigation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabNavigation::proceedRequested)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::TabNavigation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__TabNavigation.data,
      qt_meta_data_gris__muk__TabNavigation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::TabNavigation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::TabNavigation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__TabNavigation.stringdata0))
        return static_cast<void*>(const_cast< TabNavigation*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::TabNavigation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::TabNavigation::calibratorChanged(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::TabNavigation::navigatorChanged(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::TabNavigation::calibrationRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::TabNavigation::initRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::TabNavigation::startRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::TabNavigation::stopRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void gris::muk::TabNavigation::proceedRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
