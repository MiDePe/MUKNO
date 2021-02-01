/****************************************************************************
** Meta object code from reading C++ file 'TabImaging.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/TabImaging.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabImaging.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__TabImaging_t {
    QByteArrayData data[24];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__TabImaging_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__TabImaging_t qt_meta_stringdata_gris__muk__TabImaging = {
    {
QT_MOC_LITERAL(0, 0, 21), // "gris::muk::TabImaging"
QT_MOC_LITERAL(1, 22, 7), // "execute"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "algorithmDeleted"
QT_MOC_LITERAL(4, 48, 2), // "id"
QT_MOC_LITERAL(5, 51, 15), // "connectionAdded"
QT_MOC_LITERAL(6, 67, 8), // "AlgPort*"
QT_MOC_LITERAL(7, 76, 2), // "p1"
QT_MOC_LITERAL(8, 79, 2), // "p2"
QT_MOC_LITERAL(9, 82, 17), // "connectionDeleted"
QT_MOC_LITERAL(10, 100, 17), // "showAlgProperties"
QT_MOC_LITERAL(11, 118, 10), // "showOutput"
QT_MOC_LITERAL(12, 129, 5), // "idAlg"
QT_MOC_LITERAL(13, 135, 8), // "isOutput"
QT_MOC_LITERAL(14, 144, 6), // "idPort"
QT_MOC_LITERAL(15, 151, 20), // "saveAlgorithmClicked"
QT_MOC_LITERAL(16, 172, 11), // "std::string"
QT_MOC_LITERAL(17, 184, 8), // "filename"
QT_MOC_LITERAL(18, 193, 20), // "loadAlgorithmClicked"
QT_MOC_LITERAL(19, 214, 17), // "clearSceneClicked"
QT_MOC_LITERAL(20, 232, 22), // "textDroppedOnAlgorithm"
QT_MOC_LITERAL(21, 255, 4), // "text"
QT_MOC_LITERAL(22, 260, 17), // "textDroppedOnView"
QT_MOC_LITERAL(23, 278, 8) // "position"

    },
    "gris::muk::TabImaging\0execute\0\0"
    "algorithmDeleted\0id\0connectionAdded\0"
    "AlgPort*\0p1\0p2\0connectionDeleted\0"
    "showAlgProperties\0showOutput\0idAlg\0"
    "isOutput\0idPort\0saveAlgorithmClicked\0"
    "std::string\0filename\0loadAlgorithmClicked\0"
    "clearSceneClicked\0textDroppedOnAlgorithm\0"
    "text\0textDroppedOnView\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__TabImaging[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       5,    2,   73,    2, 0x06 /* Public */,
       9,    2,   78,    2, 0x06 /* Public */,
      10,    1,   83,    2, 0x06 /* Public */,
      11,    3,   86,    2, 0x06 /* Public */,
      15,    1,   93,    2, 0x06 /* Public */,
      18,    1,   96,    2, 0x06 /* Public */,
      19,    0,   99,    2, 0x06 /* Public */,
      20,    2,  100,    2, 0x06 /* Public */,
      22,    2,  105,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, QMetaType::UInt,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool, QMetaType::UInt,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, QMetaType::UInt,   21,    2,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QPointF,   21,   23,

       0        // eod
};

void gris::muk::TabImaging::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabImaging *_t = static_cast<TabImaging *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execute(); break;
        case 1: _t->algorithmDeleted((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->connectionAdded((*reinterpret_cast< AlgPort*(*)>(_a[1])),(*reinterpret_cast< AlgPort*(*)>(_a[2]))); break;
        case 3: _t->connectionDeleted((*reinterpret_cast< AlgPort*(*)>(_a[1])),(*reinterpret_cast< AlgPort*(*)>(_a[2]))); break;
        case 4: _t->showAlgProperties((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->showOutput((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 6: _t->saveAlgorithmClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 7: _t->loadAlgorithmClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 8: _t->clearSceneClicked(); break;
        case 9: _t->textDroppedOnAlgorithm((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 10: _t->textDroppedOnView((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TabImaging::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::execute)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::algorithmDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(AlgPort * , AlgPort * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::connectionAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(AlgPort * , AlgPort * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::connectionDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::showAlgProperties)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(unsigned int , bool , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::showOutput)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::saveAlgorithmClicked)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::loadAlgorithmClicked)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::clearSceneClicked)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(const std::string & , unsigned int ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::textDroppedOnAlgorithm)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (TabImaging::*_t)(const std::string & , QPointF ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabImaging::textDroppedOnView)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::TabImaging::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__TabImaging.data,
      qt_meta_data_gris__muk__TabImaging,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::TabImaging::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::TabImaging::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__TabImaging.stringdata0))
        return static_cast<void*>(const_cast< TabImaging*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::TabImaging::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::TabImaging::execute()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void gris::muk::TabImaging::algorithmDeleted(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::TabImaging::connectionAdded(AlgPort * _t1, AlgPort * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gris::muk::TabImaging::connectionDeleted(AlgPort * _t1, AlgPort * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gris::muk::TabImaging::showAlgProperties(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gris::muk::TabImaging::showOutput(unsigned int _t1, bool _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void gris::muk::TabImaging::saveAlgorithmClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void gris::muk::TabImaging::loadAlgorithmClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void gris::muk::TabImaging::clearSceneClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void gris::muk::TabImaging::textDroppedOnAlgorithm(const std::string & _t1, unsigned int _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< gris::muk::TabImaging *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void gris::muk::TabImaging::textDroppedOnView(const std::string & _t1, QPointF _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< gris::muk::TabImaging *>(this), &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
