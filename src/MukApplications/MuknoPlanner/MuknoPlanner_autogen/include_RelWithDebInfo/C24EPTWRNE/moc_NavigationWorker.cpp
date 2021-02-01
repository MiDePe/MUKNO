/****************************************************************************
** Meta object code from reading C++ file 'NavigationWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukApplications/MuknoPlanner/NavigationWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavigationWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__NavigationWorkerPrivateSignals_t {
    QByteArrayData data[6];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__NavigationWorkerPrivateSignals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__NavigationWorkerPrivateSignals_t qt_meta_stringdata_gris__muk__NavigationWorkerPrivateSignals = {
    {
QT_MOC_LITERAL(0, 0, 41), // "gris::muk::NavigationWorkerPr..."
QT_MOC_LITERAL(1, 42, 20), // "postponeSetNavigator"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 11), // "std::string"
QT_MOC_LITERAL(4, 76, 4), // "name"
QT_MOC_LITERAL(5, 81, 16) // "requestTerminate"

    },
    "gris::muk::NavigationWorkerPrivateSignals\0"
    "postponeSetNavigator\0\0std::string\0"
    "name\0requestTerminate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__NavigationWorkerPrivateSignals[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void gris::muk::NavigationWorkerPrivateSignals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavigationWorkerPrivateSignals *_t = static_cast<NavigationWorkerPrivateSignals *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->postponeSetNavigator((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->requestTerminate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NavigationWorkerPrivateSignals::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorkerPrivateSignals::postponeSetNavigator)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NavigationWorkerPrivateSignals::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorkerPrivateSignals::requestTerminate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::NavigationWorkerPrivateSignals::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__NavigationWorkerPrivateSignals.data,
      qt_meta_data_gris__muk__NavigationWorkerPrivateSignals,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::NavigationWorkerPrivateSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::NavigationWorkerPrivateSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__NavigationWorkerPrivateSignals.stringdata0))
        return static_cast<void*>(const_cast< NavigationWorkerPrivateSignals*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::NavigationWorkerPrivateSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void gris::muk::NavigationWorkerPrivateSignals::postponeSetNavigator(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::NavigationWorkerPrivateSignals::requestTerminate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_gris__muk__NavigationWorker_t {
    QByteArrayData data[52];
    char stringdata0[822];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__NavigationWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__NavigationWorker_t qt_meta_stringdata_gris__muk__NavigationWorker = {
    {
QT_MOC_LITERAL(0, 0, 27), // "gris::muk::NavigationWorker"
QT_MOC_LITERAL(1, 28, 24), // "requestShowMessageDialog"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 11), // "std::string"
QT_MOC_LITERAL(4, 66, 3), // "msg"
QT_MOC_LITERAL(5, 70, 11), // "waitProceed"
QT_MOC_LITERAL(6, 82, 24), // "requestShowStatusMessage"
QT_MOC_LITERAL(7, 107, 17), // "requestLogMessage"
QT_MOC_LITERAL(8, 125, 21), // "robotTransformUpdated"
QT_MOC_LITERAL(9, 147, 23), // "gris::muk::MukTransform"
QT_MOC_LITERAL(10, 171, 9), // "transform"
QT_MOC_LITERAL(11, 181, 17), // "requestReplanning"
QT_MOC_LITERAL(12, 199, 19), // "gris::muk::MukState"
QT_MOC_LITERAL(13, 219, 8), // "position"
QT_MOC_LITERAL(14, 228, 18), // "gris::muk::MukPath"
QT_MOC_LITERAL(15, 247, 4), // "path"
QT_MOC_LITERAL(16, 252, 21), // "navigatorStateUpdated"
QT_MOC_LITERAL(17, 274, 27), // "gris::muk::enNavigatorState"
QT_MOC_LITERAL(18, 302, 8), // "newState"
QT_MOC_LITERAL(19, 311, 20), // "consumerStateUpdated"
QT_MOC_LITERAL(20, 332, 26), // "gris::muk::enConsumerState"
QT_MOC_LITERAL(21, 359, 18), // "adaptedPathUpdated"
QT_MOC_LITERAL(22, 378, 31), // "currentTargetOrientationUpdated"
QT_MOC_LITERAL(23, 410, 11), // "gris::Vec3d"
QT_MOC_LITERAL(24, 422, 11), // "orientation"
QT_MOC_LITERAL(25, 434, 23), // "coordinateSystemUpdated"
QT_MOC_LITERAL(26, 458, 16), // "exceptionOccured"
QT_MOC_LITERAL(27, 475, 23), // "gris::muk::MukException"
QT_MOC_LITERAL(28, 499, 1), // "e"
QT_MOC_LITERAL(29, 501, 14), // "std::exception"
QT_MOC_LITERAL(30, 516, 16), // "navigatorChanged"
QT_MOC_LITERAL(31, 533, 22), // "navigatorPropertyReset"
QT_MOC_LITERAL(32, 556, 19), // "SafePropertySender*"
QT_MOC_LITERAL(33, 576, 6), // "sender"
QT_MOC_LITERAL(34, 583, 17), // "calibratorChanged"
QT_MOC_LITERAL(35, 601, 23), // "calibratorPropertyReset"
QT_MOC_LITERAL(36, 625, 4), // "init"
QT_MOC_LITERAL(37, 630, 12), // "interpolator"
QT_MOC_LITERAL(38, 643, 12), // "StringVector"
QT_MOC_LITERAL(39, 656, 22), // "interpolatorProperties"
QT_MOC_LITERAL(40, 679, 10), // "updatePath"
QT_MOC_LITERAL(41, 690, 7), // "MukPath"
QT_MOC_LITERAL(42, 698, 9), // "calibrate"
QT_MOC_LITERAL(43, 708, 5), // "start"
QT_MOC_LITERAL(44, 714, 4), // "stop"
QT_MOC_LITERAL(45, 719, 7), // "proceed"
QT_MOC_LITERAL(46, 727, 12), // "setNavigator"
QT_MOC_LITERAL(47, 740, 4), // "name"
QT_MOC_LITERAL(48, 745, 13), // "setCalibrator"
QT_MOC_LITERAL(49, 759, 9), // "terminate"
QT_MOC_LITERAL(50, 769, 25), // "setNavigator_IntervalMode"
QT_MOC_LITERAL(51, 795, 26) // "setCalibrator_IntervalMode"

    },
    "gris::muk::NavigationWorker\0"
    "requestShowMessageDialog\0\0std::string\0"
    "msg\0waitProceed\0requestShowStatusMessage\0"
    "requestLogMessage\0robotTransformUpdated\0"
    "gris::muk::MukTransform\0transform\0"
    "requestReplanning\0gris::muk::MukState\0"
    "position\0gris::muk::MukPath\0path\0"
    "navigatorStateUpdated\0gris::muk::enNavigatorState\0"
    "newState\0consumerStateUpdated\0"
    "gris::muk::enConsumerState\0"
    "adaptedPathUpdated\0currentTargetOrientationUpdated\0"
    "gris::Vec3d\0orientation\0coordinateSystemUpdated\0"
    "exceptionOccured\0gris::muk::MukException\0"
    "e\0std::exception\0navigatorChanged\0"
    "navigatorPropertyReset\0SafePropertySender*\0"
    "sender\0calibratorChanged\0"
    "calibratorPropertyReset\0init\0interpolator\0"
    "StringVector\0interpolatorProperties\0"
    "updatePath\0MukPath\0calibrate\0start\0"
    "stop\0proceed\0setNavigator\0name\0"
    "setCalibrator\0terminate\0"
    "setNavigator_IntervalMode\0"
    "setCalibrator_IntervalMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__NavigationWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  149,    2, 0x06 /* Public */,
       6,    1,  154,    2, 0x06 /* Public */,
       7,    1,  157,    2, 0x06 /* Public */,
       8,    1,  160,    2, 0x06 /* Public */,
      11,    2,  163,    2, 0x06 /* Public */,
      16,    1,  168,    2, 0x06 /* Public */,
      19,    1,  171,    2, 0x06 /* Public */,
      21,    1,  174,    2, 0x06 /* Public */,
      22,    1,  177,    2, 0x06 /* Public */,
      25,    1,  180,    2, 0x06 /* Public */,
      26,    1,  183,    2, 0x06 /* Public */,
      26,    1,  186,    2, 0x06 /* Public */,
      30,    0,  189,    2, 0x06 /* Public */,
      31,    1,  190,    2, 0x06 /* Public */,
      34,    0,  193,    2, 0x06 /* Public */,
      35,    1,  194,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      36,    2,  197,    2, 0x0a /* Public */,
      40,    1,  202,    2, 0x0a /* Public */,
      42,    0,  205,    2, 0x0a /* Public */,
      43,    0,  206,    2, 0x0a /* Public */,
      44,    0,  207,    2, 0x0a /* Public */,
      45,    0,  208,    2, 0x0a /* Public */,
      46,    1,  209,    2, 0x0a /* Public */,
      48,    1,  212,    2, 0x0a /* Public */,
      49,    0,  215,    2, 0x0a /* Public */,
      50,    1,  216,    2, 0x08 /* Private */,
      51,    1,  219,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   18,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 29,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 38,   37,   39,
    QMetaType::Void, 0x80000000 | 41,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   47,
    QMetaType::Void, 0x80000000 | 3,   47,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   47,
    QMetaType::Void, 0x80000000 | 3,   47,

       0        // eod
};

void gris::muk::NavigationWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NavigationWorker *_t = static_cast<NavigationWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestShowMessageDialog((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 1: _t->requestShowStatusMessage((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->requestLogMessage((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->robotTransformUpdated((*reinterpret_cast< const gris::muk::MukTransform(*)>(_a[1]))); break;
        case 4: _t->requestReplanning((*reinterpret_cast< const gris::muk::MukState(*)>(_a[1])),(*reinterpret_cast< const gris::muk::MukPath(*)>(_a[2]))); break;
        case 5: _t->navigatorStateUpdated((*reinterpret_cast< const gris::muk::enNavigatorState(*)>(_a[1]))); break;
        case 6: _t->consumerStateUpdated((*reinterpret_cast< const gris::muk::enConsumerState(*)>(_a[1]))); break;
        case 7: _t->adaptedPathUpdated((*reinterpret_cast< const gris::muk::MukPath(*)>(_a[1]))); break;
        case 8: _t->currentTargetOrientationUpdated((*reinterpret_cast< const gris::Vec3d(*)>(_a[1]))); break;
        case 9: _t->coordinateSystemUpdated((*reinterpret_cast< const gris::muk::MukTransform(*)>(_a[1]))); break;
        case 10: _t->exceptionOccured((*reinterpret_cast< const gris::muk::MukException(*)>(_a[1]))); break;
        case 11: _t->exceptionOccured((*reinterpret_cast< const std::exception(*)>(_a[1]))); break;
        case 12: _t->navigatorChanged(); break;
        case 13: _t->navigatorPropertyReset((*reinterpret_cast< SafePropertySender*(*)>(_a[1]))); break;
        case 14: _t->calibratorChanged(); break;
        case 15: _t->calibratorPropertyReset((*reinterpret_cast< SafePropertySender*(*)>(_a[1]))); break;
        case 16: _t->init((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const StringVector(*)>(_a[2]))); break;
        case 17: _t->updatePath((*reinterpret_cast< const MukPath(*)>(_a[1]))); break;
        case 18: _t->calibrate(); break;
        case 19: _t->start(); break;
        case 20: _t->stop(); break;
        case 21: _t->proceed(); break;
        case 22: _t->setNavigator((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 23: _t->setCalibrator((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 24: _t->terminate(); break;
        case 25: _t->setNavigator_IntervalMode((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 26: _t->setCalibrator_IntervalMode((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SafePropertySender* >(); break;
            }
            break;
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
            typedef void (NavigationWorker::*_t)(const std::string & , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::requestShowMessageDialog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::requestShowStatusMessage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::requestLogMessage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const gris::muk::MukTransform & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::robotTransformUpdated)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const gris::muk::MukState & , const gris::muk::MukPath & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::requestReplanning)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const gris::muk::enNavigatorState & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::navigatorStateUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const gris::muk::enConsumerState & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::consumerStateUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const gris::muk::MukPath & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::adaptedPathUpdated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const gris::Vec3d & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::currentTargetOrientationUpdated)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const gris::muk::MukTransform & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::coordinateSystemUpdated)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const gris::muk::MukException & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::exceptionOccured)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(const std::exception & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::exceptionOccured)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::navigatorChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(SafePropertySender * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::navigatorPropertyReset)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::calibratorChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (NavigationWorker::*_t)(SafePropertySender * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NavigationWorker::calibratorPropertyReset)) {
                *result = 15;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::NavigationWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__NavigationWorker.data,
      qt_meta_data_gris__muk__NavigationWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::NavigationWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::NavigationWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__NavigationWorker.stringdata0))
        return static_cast<void*>(const_cast< NavigationWorker*>(this));
    if (!strcmp(_clname, "INavigationSupervisor"))
        return static_cast< INavigationSupervisor*>(const_cast< NavigationWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::NavigationWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::NavigationWorker::requestShowMessageDialog(const std::string & _t1, const bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::NavigationWorker::requestShowStatusMessage(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::NavigationWorker::requestLogMessage(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gris::muk::NavigationWorker::robotTransformUpdated(const gris::muk::MukTransform & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gris::muk::NavigationWorker::requestReplanning(const gris::muk::MukState & _t1, const gris::muk::MukPath & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gris::muk::NavigationWorker::navigatorStateUpdated(const gris::muk::enNavigatorState & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void gris::muk::NavigationWorker::consumerStateUpdated(const gris::muk::enConsumerState & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void gris::muk::NavigationWorker::adaptedPathUpdated(const gris::muk::MukPath & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void gris::muk::NavigationWorker::currentTargetOrientationUpdated(const gris::Vec3d & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void gris::muk::NavigationWorker::coordinateSystemUpdated(const gris::muk::MukTransform & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void gris::muk::NavigationWorker::exceptionOccured(const gris::muk::MukException & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void gris::muk::NavigationWorker::exceptionOccured(const std::exception & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void gris::muk::NavigationWorker::navigatorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void gris::muk::NavigationWorker::navigatorPropertyReset(SafePropertySender * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void gris::muk::NavigationWorker::calibratorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void gris::muk::NavigationWorker::calibratorPropertyReset(SafePropertySender * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
struct qt_meta_stringdata_gris__muk__QtProtectedNavigator_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__QtProtectedNavigator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__QtProtectedNavigator_t qt_meta_stringdata_gris__muk__QtProtectedNavigator = {
    {
QT_MOC_LITERAL(0, 0, 31), // "gris::muk::QtProtectedNavigator"
QT_MOC_LITERAL(1, 32, 15), // "updateNavigator"
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "gris::muk::QtProtectedNavigator\0"
    "updateNavigator\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__QtProtectedNavigator[] = {

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

void gris::muk::QtProtectedNavigator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtProtectedNavigator *_t = static_cast<QtProtectedNavigator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateNavigator(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::QtProtectedNavigator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gris__muk__QtProtectedNavigator.data,
      qt_meta_data_gris__muk__QtProtectedNavigator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::QtProtectedNavigator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::QtProtectedNavigator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__QtProtectedNavigator.stringdata0))
        return static_cast<void*>(const_cast< QtProtectedNavigator*>(this));
    if (!strcmp(_clname, "ProtectedNavigator"))
        return static_cast< ProtectedNavigator*>(const_cast< QtProtectedNavigator*>(this));
    return QObject::qt_metacast(_clname);
}

int gris::muk::QtProtectedNavigator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
