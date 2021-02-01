/****************************************************************************
** Meta object code from reading C++ file 'AlgGraphicsView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/AlgGraphicsView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlgGraphicsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__AlgGraphicsView_t {
    QByteArrayData data[7];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__AlgGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__AlgGraphicsView_t qt_meta_stringdata_gris__muk__AlgGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 26), // "gris::muk::AlgGraphicsView"
QT_MOC_LITERAL(1, 27, 13), // "filterDropped"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "text"
QT_MOC_LITERAL(4, 47, 8), // "position"
QT_MOC_LITERAL(5, 56, 11), // "textDropped"
QT_MOC_LITERAL(6, 68, 3) // "str"

    },
    "gris::muk::AlgGraphicsView\0filterDropped\0"
    "\0text\0position\0textDropped\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__AlgGraphicsView[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       5,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QPointF,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QPointF,    6,    4,

       0        // eod
};

void gris::muk::AlgGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlgGraphicsView *_t = static_cast<AlgGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 1: _t->textDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlgGraphicsView::*_t)(const QString & , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlgGraphicsView::filterDropped)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AlgGraphicsView::*_t)(const QString & , QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlgGraphicsView::textDropped)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::AlgGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_gris__muk__AlgGraphicsView.data,
      qt_meta_data_gris__muk__AlgGraphicsView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::AlgGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::AlgGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__AlgGraphicsView.stringdata0))
        return static_cast<void*>(const_cast< AlgGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int gris::muk::AlgGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void gris::muk::AlgGraphicsView::filterDropped(const QString & _t1, const QPointF & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::AlgGraphicsView::textDropped(const QString & _t1, QPointF _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
