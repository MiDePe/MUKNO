/****************************************************************************
** Meta object code from reading C++ file 'SurgeonViewInputController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukApplications/MuknoPlanner/SurgeonViewInputController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurgeonViewInputController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SurgeonViewInputController_t {
    QByteArrayData data[3];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SurgeonViewInputController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SurgeonViewInputController_t qt_meta_stringdata_gris__muk__SurgeonViewInputController = {
    {
QT_MOC_LITERAL(0, 0, 37), // "gris::muk::SurgeonViewInputCo..."
QT_MOC_LITERAL(1, 38, 19), // "segmentationStarted"
QT_MOC_LITERAL(2, 58, 0) // ""

    },
    "gris::muk::SurgeonViewInputController\0"
    "segmentationStarted\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SurgeonViewInputController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void gris::muk::SurgeonViewInputController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurgeonViewInputController *_t = static_cast<SurgeonViewInputController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->segmentationStarted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurgeonViewInputController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewInputController::segmentationStarted)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::SurgeonViewInputController::staticMetaObject = {
    { &BaseController::staticMetaObject, qt_meta_stringdata_gris__muk__SurgeonViewInputController.data,
      qt_meta_data_gris__muk__SurgeonViewInputController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SurgeonViewInputController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SurgeonViewInputController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SurgeonViewInputController.stringdata0))
        return static_cast<void*>(const_cast< SurgeonViewInputController*>(this));
    return BaseController::qt_metacast(_clname);
}

int gris::muk::SurgeonViewInputController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseController::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void gris::muk::SurgeonViewInputController::segmentationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
