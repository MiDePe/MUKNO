/****************************************************************************
** Meta object code from reading C++ file 'SurgeonViewSegmentation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/SurgeonViewSegmentation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurgeonViewSegmentation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SurgeonViewSegmentation_t {
    QByteArrayData data[12];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SurgeonViewSegmentation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SurgeonViewSegmentation_t qt_meta_stringdata_gris__muk__SurgeonViewSegmentation = {
    {
QT_MOC_LITERAL(0, 0, 34), // "gris::muk::SurgeonViewSegment..."
QT_MOC_LITERAL(1, 35, 27), // "obstacleVisibilityRequested"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 12), // "obstacleName"
QT_MOC_LITERAL(4, 77, 7), // "visible"
QT_MOC_LITERAL(5, 85, 24), // "obstacleOpacityRequested"
QT_MOC_LITERAL(6, 110, 7), // "opacity"
QT_MOC_LITERAL(7, 118, 24), // "focusOnObstacleRequested"
QT_MOC_LITERAL(8, 143, 18), // "showPropertyWidget"
QT_MOC_LITERAL(9, 162, 18), // "setObstacleVisible"
QT_MOC_LITERAL(10, 181, 18), // "setObstacleOpacity"
QT_MOC_LITERAL(11, 200, 15) // "focusOnObstacle"

    },
    "gris::muk::SurgeonViewSegmentation\0"
    "obstacleVisibilityRequested\0\0obstacleName\0"
    "visible\0obstacleOpacityRequested\0"
    "opacity\0focusOnObstacleRequested\0"
    "showPropertyWidget\0setObstacleVisible\0"
    "setObstacleOpacity\0focusOnObstacle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SurgeonViewSegmentation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,
       7,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   62,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    6,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void gris::muk::SurgeonViewSegmentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurgeonViewSegmentation *_t = static_cast<SurgeonViewSegmentation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->obstacleVisibilityRequested((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->obstacleOpacityRequested((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->focusOnObstacleRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->showPropertyWidget(); break;
        case 4: _t->setObstacleVisible((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setObstacleOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->focusOnObstacle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurgeonViewSegmentation::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSegmentation::obstacleVisibilityRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurgeonViewSegmentation::*_t)(QString , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSegmentation::obstacleOpacityRequested)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SurgeonViewSegmentation::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSegmentation::focusOnObstacleRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::SurgeonViewSegmentation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__SurgeonViewSegmentation.data,
      qt_meta_data_gris__muk__SurgeonViewSegmentation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SurgeonViewSegmentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SurgeonViewSegmentation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SurgeonViewSegmentation.stringdata0))
        return static_cast<void*>(const_cast< SurgeonViewSegmentation*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::SurgeonViewSegmentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void gris::muk::SurgeonViewSegmentation::obstacleVisibilityRequested(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::SurgeonViewSegmentation::obstacleOpacityRequested(QString _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::SurgeonViewSegmentation::focusOnObstacleRequested(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
