/****************************************************************************
** Meta object code from reading C++ file 'NavigationThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukApplications/MuknoPlanner/NavigationThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavigationThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__WorkerInterface_t {
    QByteArrayData data[16];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__WorkerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__WorkerInterface_t qt_meta_stringdata_gris__muk__WorkerInterface = {
    {
QT_MOC_LITERAL(0, 0, 26), // "gris::muk::WorkerInterface"
QT_MOC_LITERAL(1, 27, 11), // "requestInit"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "std::string"
QT_MOC_LITERAL(4, 52, 23), // "gris::muk::StringVector"
QT_MOC_LITERAL(5, 76, 18), // "requestCalibration"
QT_MOC_LITERAL(6, 95, 12), // "requestStart"
QT_MOC_LITERAL(7, 108, 11), // "requestStop"
QT_MOC_LITERAL(8, 120, 14), // "requestProceed"
QT_MOC_LITERAL(9, 135, 19), // "requestSetNavigator"
QT_MOC_LITERAL(10, 155, 4), // "name"
QT_MOC_LITERAL(11, 160, 20), // "requestSetCalibrator"
QT_MOC_LITERAL(12, 181, 16), // "requestTerminate"
QT_MOC_LITERAL(13, 198, 17), // "requestUpdatePath"
QT_MOC_LITERAL(14, 216, 18), // "gris::muk::MukPath"
QT_MOC_LITERAL(15, 235, 4) // "path"

    },
    "gris::muk::WorkerInterface\0requestInit\0"
    "\0std::string\0gris::muk::StringVector\0"
    "requestCalibration\0requestStart\0"
    "requestStop\0requestProceed\0"
    "requestSetNavigator\0name\0requestSetCalibrator\0"
    "requestTerminate\0requestUpdatePath\0"
    "gris::muk::MukPath\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__WorkerInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    0,   64,    2, 0x06 /* Public */,
       6,    0,   65,    2, 0x06 /* Public */,
       7,    0,   66,    2, 0x06 /* Public */,
       8,    0,   67,    2, 0x06 /* Public */,
       9,    1,   68,    2, 0x06 /* Public */,
      11,    1,   71,    2, 0x06 /* Public */,
      12,    0,   74,    2, 0x06 /* Public */,
      13,    1,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void gris::muk::WorkerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WorkerInterface *_t = static_cast<WorkerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestInit((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const gris::muk::StringVector(*)>(_a[2]))); break;
        case 1: _t->requestCalibration(); break;
        case 2: _t->requestStart(); break;
        case 3: _t->requestStop(); break;
        case 4: _t->requestProceed(); break;
        case 5: _t->requestSetNavigator((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 6: _t->requestSetCalibrator((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 7: _t->requestTerminate(); break;
        case 8: _t->requestUpdatePath((*reinterpret_cast< const gris::muk::MukPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WorkerInterface::*_t)(const std::string & , const gris::muk::StringVector & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestInit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WorkerInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestCalibration)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WorkerInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestStart)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WorkerInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestStop)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WorkerInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestProceed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WorkerInterface::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestSetNavigator)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WorkerInterface::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestSetCalibrator)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WorkerInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestTerminate)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WorkerInterface::*_t)(const gris::muk::MukPath & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WorkerInterface::requestUpdatePath)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::WorkerInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__WorkerInterface.data,
      qt_meta_data_gris__muk__WorkerInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::WorkerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::WorkerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__WorkerInterface.stringdata0))
        return static_cast<void*>(const_cast< WorkerInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::WorkerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::WorkerInterface::requestInit(const std::string & _t1, const gris::muk::StringVector & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::WorkerInterface::requestCalibration()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gris::muk::WorkerInterface::requestStart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::WorkerInterface::requestStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::WorkerInterface::requestProceed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::WorkerInterface::requestSetNavigator(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void gris::muk::WorkerInterface::requestSetCalibrator(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void gris::muk::WorkerInterface::requestTerminate()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void gris::muk::WorkerInterface::requestUpdatePath(const gris::muk::MukPath & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_gris__muk__NavigationThread_t {
    QByteArrayData data[39];
    char stringdata0[666];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__NavigationThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__NavigationThread_t qt_meta_stringdata_gris__muk__NavigationThread = {
    {
QT_MOC_LITERAL(0, 0, 27), // "gris::muk::NavigationThread"
QT_MOC_LITERAL(1, 28, 24), // "requestShowMessageDialog"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 11), // "std::string"
QT_MOC_LITERAL(4, 66, 3), // "msg"
QT_MOC_LITERAL(5, 70, 11), // "waitProceed"
QT_MOC_LITERAL(6, 82, 24), // "requestShowStatusMessage"
QT_MOC_LITERAL(7, 107, 17), // "requestLogMessage"
QT_MOC_LITERAL(8, 125, 22), // "navigatorPropertyReset"
QT_MOC_LITERAL(9, 148, 16), // "navigatorChanged"
QT_MOC_LITERAL(10, 165, 20), // "updateNavigatorState"
QT_MOC_LITERAL(11, 186, 27), // "gris::muk::enNavigatorState"
QT_MOC_LITERAL(12, 214, 8), // "newState"
QT_MOC_LITERAL(13, 223, 19), // "updateConsumerState"
QT_MOC_LITERAL(14, 243, 26), // "gris::muk::enConsumerState"
QT_MOC_LITERAL(15, 270, 20), // "updateRobotTransform"
QT_MOC_LITERAL(16, 291, 23), // "gris::muk::MukTransform"
QT_MOC_LITERAL(17, 315, 9), // "transform"
QT_MOC_LITERAL(18, 325, 17), // "updateAdaptedPath"
QT_MOC_LITERAL(19, 343, 18), // "gris::muk::MukPath"
QT_MOC_LITERAL(20, 362, 4), // "path"
QT_MOC_LITERAL(21, 367, 31), // "updatedCurrentTargetOrientation"
QT_MOC_LITERAL(22, 399, 11), // "gris::Vec3d"
QT_MOC_LITERAL(23, 411, 11), // "orientation"
QT_MOC_LITERAL(24, 423, 22), // "updateCoordinateSystem"
QT_MOC_LITERAL(25, 446, 13), // "changeFeature"
QT_MOC_LITERAL(26, 460, 39), // "gris::muk::INavigator::Naviga..."
QT_MOC_LITERAL(27, 500, 7), // "feature"
QT_MOC_LITERAL(28, 508, 5), // "state"
QT_MOC_LITERAL(29, 514, 17), // "triggerReplanning"
QT_MOC_LITERAL(30, 532, 19), // "gris::muk::MukState"
QT_MOC_LITERAL(31, 552, 8), // "position"
QT_MOC_LITERAL(32, 561, 15), // "handleException"
QT_MOC_LITERAL(33, 577, 23), // "gris::muk::MukException"
QT_MOC_LITERAL(34, 601, 1), // "e"
QT_MOC_LITERAL(35, 603, 14), // "std::exception"
QT_MOC_LITERAL(36, 618, 23), // "updateNavigatorProperty"
QT_MOC_LITERAL(37, 642, 19), // "SafePropertySender*"
QT_MOC_LITERAL(38, 662, 3) // "obj"

    },
    "gris::muk::NavigationThread\0"
    "requestShowMessageDialog\0\0std::string\0"
    "msg\0waitProceed\0requestShowStatusMessage\0"
    "requestLogMessage\0navigatorPropertyReset\0"
    "navigatorChanged\0updateNavigatorState\0"
    "gris::muk::enNavigatorState\0newState\0"
    "updateConsumerState\0gris::muk::enConsumerState\0"
    "updateRobotTransform\0gris::muk::MukTransform\0"
    "transform\0updateAdaptedPath\0"
    "gris::muk::MukPath\0path\0"
    "updatedCurrentTargetOrientation\0"
    "gris::Vec3d\0orientation\0updateCoordinateSystem\0"
    "changeFeature\0gris::muk::INavigator::NavigatorFeature\0"
    "feature\0state\0triggerReplanning\0"
    "gris::muk::MukState\0position\0"
    "handleException\0gris::muk::MukException\0"
    "e\0std::exception\0updateNavigatorProperty\0"
    "SafePropertySender*\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__NavigationThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       6,    1,   99,    2, 0x06 /* Public */,
       7,    1,  102,    2, 0x06 /* Public */,
       8,    0,  105,    2, 0x06 /* Public */,
       9,    0,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  107,    2, 0x0a /* Public */,
      13,    1,  110,    2, 0x0a /* Public */,
      15,    1,  113,    2, 0x0a /* Public */,
      18,    1,  116,    2, 0x0a /* Public */,
      21,    1,  119,    2, 0x0a /* Public */,
      24,    1,  122,    2, 0x0a /* Public */,
      25,    2,  125,    2, 0x0a /* Public */,
      29,    2,  130,    2, 0x0a /* Public */,
      32,    1,  135,    2, 0x0a /* Public */,
      32,    1,  138,    2, 0x0a /* Public */,
      36,    1,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   12,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 26, QMetaType::Bool,   27,   28,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 19,   31,   20,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 35,   34,
    QMetaType::Void, 0x80000000 | 37,   38,

       0        // eod
};

void gris::muk::NavigationThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavigationThread *_t = static_cast<NavigationThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestShowMessageDialog((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 1: _t->requestShowStatusMessage((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->requestLogMessage((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->navigatorPropertyReset(); break;
        case 4: _t->navigatorChanged(); break;
        case 5: _t->updateNavigatorState((*reinterpret_cast< const gris::muk::enNavigatorState(*)>(_a[1]))); break;
        case 6: _t->updateConsumerState((*reinterpret_cast< const gris::muk::enConsumerState(*)>(_a[1]))); break;
        case 7: _t->updateRobotTransform((*reinterpret_cast< const gris::muk::MukTransform(*)>(_a[1]))); break;
        case 8: _t->updateAdaptedPath((*reinterpret_cast< const gris::muk::MukPath(*)>(_a[1]))); break;
        case 9: _t->updatedCurrentTargetOrientation((*reinterpret_cast< const gris::Vec3d(*)>(_a[1]))); break;
        case 10: _t->updateCoordinateSystem((*reinterpret_cast< const gris::muk::MukTransform(*)>(_a[1]))); break;
        case 11: _t->changeFeature((*reinterpret_cast< const gris::muk::INavigator::NavigatorFeature(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 12: _t->triggerReplanning((*reinterpret_cast< const gris::muk::MukState(*)>(_a[1])),(*reinterpret_cast< const gris::muk::MukPath(*)>(_a[2]))); break;
        case 13: _t->handleException((*reinterpret_cast< const gris::muk::MukException(*)>(_a[1]))); break;
        case 14: _t->handleException((*reinterpret_cast< const std::exception(*)>(_a[1]))); break;
        case 15: _t->updateNavigatorProperty((*reinterpret_cast< SafePropertySender*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SafePropertySender* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NavigationThread::*_t)(const std::string & , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationThread::requestShowMessageDialog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NavigationThread::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationThread::requestShowStatusMessage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NavigationThread::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationThread::requestLogMessage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NavigationThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationThread::navigatorPropertyReset)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NavigationThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationThread::navigatorChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::NavigationThread::staticMetaObject = {
    { &ThreadedController::staticMetaObject, qt_meta_stringdata_gris__muk__NavigationThread.data,
      qt_meta_data_gris__muk__NavigationThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::NavigationThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::NavigationThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__NavigationThread.stringdata0))
        return static_cast<void*>(const_cast< NavigationThread*>(this));
    if (!strcmp(_clname, "INavigationContainer"))
        return static_cast< INavigationContainer*>(const_cast< NavigationThread*>(this));
    return ThreadedController::qt_metacast(_clname);
}

int gris::muk::NavigationThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThreadedController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::NavigationThread::requestShowMessageDialog(const std::string & _t1, const bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::NavigationThread::requestShowStatusMessage(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::NavigationThread::requestLogMessage(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gris::muk::NavigationThread::navigatorPropertyReset()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::NavigationThread::navigatorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
