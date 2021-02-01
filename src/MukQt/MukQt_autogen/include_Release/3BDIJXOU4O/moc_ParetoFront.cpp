/****************************************************************************
** Meta object code from reading C++ file 'ParetoFront.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/private/ParetoFront.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParetoFront.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__ParetoFront_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__ParetoFront_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__ParetoFront_t qt_meta_stringdata_gris__muk__ParetoFront = {
    {
QT_MOC_LITERAL(0, 0, 22), // "gris::muk::ParetoFront"
QT_MOC_LITERAL(1, 23, 11), // "clickedPath"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "size_t"
QT_MOC_LITERAL(4, 43, 5) // "index"

    },
    "gris::muk::ParetoFront\0clickedPath\0\0"
    "size_t\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__ParetoFront[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void gris::muk::ParetoFront::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParetoFront *_t = static_cast<ParetoFront *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickedPath((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParetoFront::*_t)(size_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParetoFront::clickedPath)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::ParetoFront::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_gris__muk__ParetoFront.data,
      qt_meta_data_gris__muk__ParetoFront,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::ParetoFront::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::ParetoFront::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__ParetoFront.stringdata0))
        return static_cast<void*>(const_cast< ParetoFront*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int gris::muk::ParetoFront::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
void gris::muk::ParetoFront::clickedPath(size_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
