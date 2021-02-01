/****************************************************************************
** Meta object code from reading C++ file 'MukQMenuBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/MukQMenuBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MukQMenuBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__MukQMenuBar_t {
    QByteArrayData data[18];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__MukQMenuBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__MukQMenuBar_t qt_meta_stringdata_gris__muk__MukQMenuBar = {
    {
QT_MOC_LITERAL(0, 0, 22), // "gris::muk::MukQMenuBar"
QT_MOC_LITERAL(1, 23, 16), // "loadSceneClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "std::string"
QT_MOC_LITERAL(4, 53, 8), // "filename"
QT_MOC_LITERAL(5, 62, 15), // "savePathClicked"
QT_MOC_LITERAL(6, 78, 15), // "loadPathClicked"
QT_MOC_LITERAL(7, 94, 14), // "loadAsObstacle"
QT_MOC_LITERAL(8, 109, 11), // "const char*"
QT_MOC_LITERAL(9, 121, 28), // "quickPlanningConfigRequested"
QT_MOC_LITERAL(10, 150, 22), // "setDefaultFocusClicked"
QT_MOC_LITERAL(11, 173, 14), // "actionSavePath"
QT_MOC_LITERAL(12, 188, 14), // "actionLoadPath"
QT_MOC_LITERAL(13, 203, 20), // "actionLoadAsObstacle"
QT_MOC_LITERAL(14, 224, 17), // "actionShowConsole"
QT_MOC_LITERAL(15, 242, 21), // "actionSetDefaultFocus"
QT_MOC_LITERAL(16, 264, 18), // "actionComputeKappa"
QT_MOC_LITERAL(17, 283, 11) // "actionAbout"

    },
    "gris::muk::MukQMenuBar\0loadSceneClicked\0"
    "\0std::string\0filename\0savePathClicked\0"
    "loadPathClicked\0loadAsObstacle\0"
    "const char*\0quickPlanningConfigRequested\0"
    "setDefaultFocusClicked\0actionSavePath\0"
    "actionLoadPath\0actionLoadAsObstacle\0"
    "actionShowConsole\0actionSetDefaultFocus\0"
    "actionComputeKappa\0actionAbout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__MukQMenuBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,
       9,    0,   91,    2, 0x06 /* Public */,
      10,    0,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::MukQMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MukQMenuBar *_t = static_cast<MukQMenuBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadSceneClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->savePathClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->loadPathClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->loadAsObstacle((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 4: _t->quickPlanningConfigRequested(); break;
        case 5: _t->setDefaultFocusClicked(); break;
        case 6: _t->actionSavePath(); break;
        case 7: _t->actionLoadPath(); break;
        case 8: _t->actionLoadAsObstacle(); break;
        case 9: _t->actionShowConsole(); break;
        case 10: _t->actionSetDefaultFocus(); break;
        case 11: _t->actionComputeKappa(); break;
        case 12: _t->actionAbout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MukQMenuBar::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MukQMenuBar::loadSceneClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MukQMenuBar::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MukQMenuBar::savePathClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MukQMenuBar::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MukQMenuBar::loadPathClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MukQMenuBar::*_t)(const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MukQMenuBar::loadAsObstacle)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MukQMenuBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MukQMenuBar::quickPlanningConfigRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MukQMenuBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MukQMenuBar::setDefaultFocusClicked)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::MukQMenuBar::staticMetaObject = {
    { &QMenuBar::staticMetaObject, qt_meta_stringdata_gris__muk__MukQMenuBar.data,
      qt_meta_data_gris__muk__MukQMenuBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::MukQMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::MukQMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__MukQMenuBar.stringdata0))
        return static_cast<void*>(const_cast< MukQMenuBar*>(this));
    return QMenuBar::qt_metacast(_clname);
}

int gris::muk::MukQMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenuBar::qt_metacall(_c, _id, _a);
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
void gris::muk::MukQMenuBar::loadSceneClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::MukQMenuBar::savePathClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::MukQMenuBar::loadPathClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gris::muk::MukQMenuBar::loadAsObstacle(const char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gris::muk::MukQMenuBar::quickPlanningConfigRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::MukQMenuBar::setDefaultFocusClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
struct qt_meta_stringdata_gris__muk__MultipleInputDialog_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__MultipleInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__MultipleInputDialog_t qt_meta_stringdata_gris__muk__MultipleInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 30) // "gris::muk::MultipleInputDialog"

    },
    "gris::muk::MultipleInputDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__MultipleInputDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gris::muk::MultipleInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::MultipleInputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gris__muk__MultipleInputDialog.data,
      qt_meta_data_gris__muk__MultipleInputDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::MultipleInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::MultipleInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__MultipleInputDialog.stringdata0))
        return static_cast<void*>(const_cast< MultipleInputDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int gris::muk::MultipleInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
