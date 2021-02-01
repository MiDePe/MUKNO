/****************************************************************************
** Meta object code from reading C++ file 'SurgeonViewPlanning.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/SurgeonViewPlanning.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurgeonViewPlanning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SurgeonViewPlanning_t {
    QByteArrayData data[15];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SurgeonViewPlanning_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SurgeonViewPlanning_t qt_meta_stringdata_gris__muk__SurgeonViewPlanning = {
    {
QT_MOC_LITERAL(0, 0, 30), // "gris::muk::SurgeonViewPlanning"
QT_MOC_LITERAL(1, 31, 26), // "setupPlanningViewRequested"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 26), // "resetPlanningViewRequested"
QT_MOC_LITERAL(4, 86, 34), // "planningStartRegionSingleRequ..."
QT_MOC_LITERAL(5, 121, 33), // "planningStartRegionMultiReque..."
QT_MOC_LITERAL(6, 155, 33), // "planningGoalRegionSingleReque..."
QT_MOC_LITERAL(7, 189, 32), // "planningGoalRegionMultiRequested"
QT_MOC_LITERAL(8, 222, 28), // "planningCreatePathsRequested"
QT_MOC_LITERAL(9, 251, 15), // "actionSetupView"
QT_MOC_LITERAL(10, 267, 17), // "actionStartSingle"
QT_MOC_LITERAL(11, 285, 16), // "actionStartMulti"
QT_MOC_LITERAL(12, 302, 16), // "actionGoalSingle"
QT_MOC_LITERAL(13, 319, 15), // "actionGoalMulti"
QT_MOC_LITERAL(14, 335, 17) // "actionCreatePaths"

    },
    "gris::muk::SurgeonViewPlanning\0"
    "setupPlanningViewRequested\0\0"
    "resetPlanningViewRequested\0"
    "planningStartRegionSingleRequested\0"
    "planningStartRegionMultiRequested\0"
    "planningGoalRegionSingleRequested\0"
    "planningGoalRegionMultiRequested\0"
    "planningCreatePathsRequested\0"
    "actionSetupView\0actionStartSingle\0"
    "actionStartMulti\0actionGoalSingle\0"
    "actionGoalMulti\0actionCreatePaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SurgeonViewPlanning[] = {

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
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::SurgeonViewPlanning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurgeonViewPlanning *_t = static_cast<SurgeonViewPlanning *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setupPlanningViewRequested(); break;
        case 1: _t->resetPlanningViewRequested(); break;
        case 2: _t->planningStartRegionSingleRequested(); break;
        case 3: _t->planningStartRegionMultiRequested(); break;
        case 4: _t->planningGoalRegionSingleRequested(); break;
        case 5: _t->planningGoalRegionMultiRequested(); break;
        case 6: _t->planningCreatePathsRequested(); break;
        case 7: _t->actionSetupView(); break;
        case 8: _t->actionStartSingle(); break;
        case 9: _t->actionStartMulti(); break;
        case 10: _t->actionGoalSingle(); break;
        case 11: _t->actionGoalMulti(); break;
        case 12: _t->actionCreatePaths(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurgeonViewPlanning::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewPlanning::setupPlanningViewRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurgeonViewPlanning::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewPlanning::resetPlanningViewRequested)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SurgeonViewPlanning::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewPlanning::planningStartRegionSingleRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SurgeonViewPlanning::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewPlanning::planningStartRegionMultiRequested)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SurgeonViewPlanning::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewPlanning::planningGoalRegionSingleRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SurgeonViewPlanning::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewPlanning::planningGoalRegionMultiRequested)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SurgeonViewPlanning::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewPlanning::planningCreatePathsRequested)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::SurgeonViewPlanning::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__SurgeonViewPlanning.data,
      qt_meta_data_gris__muk__SurgeonViewPlanning,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SurgeonViewPlanning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SurgeonViewPlanning::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SurgeonViewPlanning.stringdata0))
        return static_cast<void*>(const_cast< SurgeonViewPlanning*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::SurgeonViewPlanning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void gris::muk::SurgeonViewPlanning::setupPlanningViewRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void gris::muk::SurgeonViewPlanning::resetPlanningViewRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gris::muk::SurgeonViewPlanning::planningStartRegionSingleRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::SurgeonViewPlanning::planningStartRegionMultiRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::SurgeonViewPlanning::planningGoalRegionSingleRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::SurgeonViewPlanning::planningGoalRegionMultiRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void gris::muk::SurgeonViewPlanning::planningCreatePathsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
