/****************************************************************************
** Meta object code from reading C++ file 'SurgeonViewInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/SurgeonViewInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurgeonViewInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SurgeonViewInput_t {
    QByteArrayData data[16];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SurgeonViewInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SurgeonViewInput_t qt_meta_stringdata_gris__muk__SurgeonViewInput = {
    {
QT_MOC_LITERAL(0, 0, 27), // "gris::muk::SurgeonViewInput"
QT_MOC_LITERAL(1, 28, 17), // "loadCtDataClicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "std::string"
QT_MOC_LITERAL(4, 59, 8), // "filename"
QT_MOC_LITERAL(5, 68, 27), // "loadSegmentationDataClicked"
QT_MOC_LITERAL(6, 96, 34), // "loadDefaultSegmentationDataCl..."
QT_MOC_LITERAL(7, 131, 24), // "startSegmentationClicked"
QT_MOC_LITERAL(8, 156, 19), // "load3DModelsClicked"
QT_MOC_LITERAL(9, 176, 18), // "startButtonClicked"
QT_MOC_LITERAL(10, 195, 16), // "actionLoadCtData"
QT_MOC_LITERAL(11, 212, 33), // "actionLoadDefaultSegmentation..."
QT_MOC_LITERAL(12, 246, 26), // "actionLoadSegmentationData"
QT_MOC_LITERAL(13, 273, 23), // "actionStartSegmentation"
QT_MOC_LITERAL(14, 297, 18), // "actionLoad3DModels"
QT_MOC_LITERAL(15, 316, 24) // "actionStartButtonClicked"

    },
    "gris::muk::SurgeonViewInput\0"
    "loadCtDataClicked\0\0std::string\0filename\0"
    "loadSegmentationDataClicked\0"
    "loadDefaultSegmentationDataClicked\0"
    "startSegmentationClicked\0load3DModelsClicked\0"
    "startButtonClicked\0actionLoadCtData\0"
    "actionLoadDefaultSegmentationData\0"
    "actionLoadSegmentationData\0"
    "actionStartSegmentation\0actionLoad3DModels\0"
    "actionStartButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SurgeonViewInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,
       8,    1,   82,    2, 0x06 /* Public */,
       9,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   86,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
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

void gris::muk::SurgeonViewInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurgeonViewInput *_t = static_cast<SurgeonViewInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadCtDataClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->loadSegmentationDataClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->loadDefaultSegmentationDataClicked(); break;
        case 3: _t->startSegmentationClicked(); break;
        case 4: _t->load3DModelsClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 5: _t->startButtonClicked(); break;
        case 6: _t->actionLoadCtData(); break;
        case 7: _t->actionLoadDefaultSegmentationData(); break;
        case 8: _t->actionLoadSegmentationData(); break;
        case 9: _t->actionStartSegmentation(); break;
        case 10: _t->actionLoad3DModels(); break;
        case 11: _t->actionStartButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurgeonViewInput::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewInput::loadCtDataClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurgeonViewInput::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewInput::loadSegmentationDataClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SurgeonViewInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewInput::loadDefaultSegmentationDataClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SurgeonViewInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewInput::startSegmentationClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SurgeonViewInput::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewInput::load3DModelsClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SurgeonViewInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewInput::startButtonClicked)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::SurgeonViewInput::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__SurgeonViewInput.data,
      qt_meta_data_gris__muk__SurgeonViewInput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SurgeonViewInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SurgeonViewInput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SurgeonViewInput.stringdata0))
        return static_cast<void*>(const_cast< SurgeonViewInput*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::SurgeonViewInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::SurgeonViewInput::loadCtDataClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::SurgeonViewInput::loadSegmentationDataClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::SurgeonViewInput::loadDefaultSegmentationDataClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::SurgeonViewInput::startSegmentationClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::SurgeonViewInput::load3DModelsClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gris::muk::SurgeonViewInput::startButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
