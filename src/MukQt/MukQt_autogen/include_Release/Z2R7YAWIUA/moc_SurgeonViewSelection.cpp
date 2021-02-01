/****************************************************************************
** Meta object code from reading C++ file 'SurgeonViewSelection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/SurgeonViewSelection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurgeonViewSelection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SurgeonViewSelection_t {
    QByteArrayData data[18];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SurgeonViewSelection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SurgeonViewSelection_t qt_meta_stringdata_gris__muk__SurgeonViewSelection = {
    {
QT_MOC_LITERAL(0, 0, 31), // "gris::muk::SurgeonViewSelection"
QT_MOC_LITERAL(1, 32, 23), // "autofillCanalsRequested"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 24), // "toggleCtOverlayRequested"
QT_MOC_LITERAL(4, 82, 29), // "obstaclePathAnalysisRequested"
QT_MOC_LITERAL(5, 112, 30), // "displayPathPropertiesRequested"
QT_MOC_LITERAL(6, 143, 28), // "showOnlyCurrentPathRequested"
QT_MOC_LITERAL(7, 172, 21), // "showAllPathsRequested"
QT_MOC_LITERAL(8, 194, 16), // "fillOutRequested"
QT_MOC_LITERAL(9, 211, 18), // "actionShowAllPaths"
QT_MOC_LITERAL(10, 230, 14), // "actionShowPath"
QT_MOC_LITERAL(11, 245, 27), // "actionDisplayPathProperties"
QT_MOC_LITERAL(12, 273, 5), // "index"
QT_MOC_LITERAL(13, 279, 14), // "actionAutofill"
QT_MOC_LITERAL(14, 294, 21), // "actionToggleCtOverlay"
QT_MOC_LITERAL(15, 316, 5), // "state"
QT_MOC_LITERAL(16, 322, 27), // "actionShowObstacleDistances"
QT_MOC_LITERAL(17, 350, 13) // "actionFillOut"

    },
    "gris::muk::SurgeonViewSelection\0"
    "autofillCanalsRequested\0\0"
    "toggleCtOverlayRequested\0"
    "obstaclePathAnalysisRequested\0"
    "displayPathPropertiesRequested\0"
    "showOnlyCurrentPathRequested\0"
    "showAllPathsRequested\0fillOutRequested\0"
    "actionShowAllPaths\0actionShowPath\0"
    "actionDisplayPathProperties\0index\0"
    "actionAutofill\0actionToggleCtOverlay\0"
    "state\0actionShowObstacleDistances\0"
    "actionFillOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SurgeonViewSelection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::SurgeonViewSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurgeonViewSelection *_t = static_cast<SurgeonViewSelection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->autofillCanalsRequested(); break;
        case 1: _t->toggleCtOverlayRequested(); break;
        case 2: _t->obstaclePathAnalysisRequested(); break;
        case 3: _t->displayPathPropertiesRequested(); break;
        case 4: _t->showOnlyCurrentPathRequested(); break;
        case 5: _t->showAllPathsRequested(); break;
        case 6: _t->fillOutRequested(); break;
        case 7: _t->actionShowAllPaths(); break;
        case 8: _t->actionShowPath(); break;
        case 9: _t->actionDisplayPathProperties((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->actionAutofill(); break;
        case 11: _t->actionToggleCtOverlay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->actionShowObstacleDistances(); break;
        case 13: _t->actionFillOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurgeonViewSelection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSelection::autofillCanalsRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurgeonViewSelection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSelection::toggleCtOverlayRequested)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SurgeonViewSelection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSelection::obstaclePathAnalysisRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SurgeonViewSelection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSelection::displayPathPropertiesRequested)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SurgeonViewSelection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSelection::showOnlyCurrentPathRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SurgeonViewSelection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSelection::showAllPathsRequested)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SurgeonViewSelection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonViewSelection::fillOutRequested)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::SurgeonViewSelection::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__SurgeonViewSelection.data,
      qt_meta_data_gris__muk__SurgeonViewSelection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SurgeonViewSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SurgeonViewSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SurgeonViewSelection.stringdata0))
        return static_cast<void*>(const_cast< SurgeonViewSelection*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::SurgeonViewSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::SurgeonViewSelection::autofillCanalsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void gris::muk::SurgeonViewSelection::toggleCtOverlayRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gris::muk::SurgeonViewSelection::obstaclePathAnalysisRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::SurgeonViewSelection::displayPathPropertiesRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::SurgeonViewSelection::showOnlyCurrentPathRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::SurgeonViewSelection::showAllPathsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void gris::muk::SurgeonViewSelection::fillOutRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
