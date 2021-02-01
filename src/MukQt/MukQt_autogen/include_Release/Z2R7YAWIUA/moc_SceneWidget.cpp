/****************************************************************************
** Meta object code from reading C++ file 'SceneWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/SceneWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SceneWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SceneWidget_t {
    QByteArrayData data[22];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SceneWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SceneWidget_t qt_meta_stringdata_gris__muk__SceneWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "gris::muk::SceneWidget"
QT_MOC_LITERAL(1, 23, 11), // "textDropped"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "std::string"
QT_MOC_LITERAL(4, 48, 4), // "text"
QT_MOC_LITERAL(5, 53, 15), // "requestProperty"
QT_MOC_LITERAL(6, 69, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 86, 4), // "item"
QT_MOC_LITERAL(8, 91, 6), // "column"
QT_MOC_LITERAL(9, 98, 17), // "saveObjectClicked"
QT_MOC_LITERAL(10, 116, 21), // "deleteObstacleClicked"
QT_MOC_LITERAL(11, 138, 27), // "deleteAbstractObjectClicked"
QT_MOC_LITERAL(12, 166, 9), // "hidePaths"
QT_MOC_LITERAL(13, 176, 9), // "showPaths"
QT_MOC_LITERAL(14, 186, 8), // "colorize"
QT_MOC_LITERAL(15, 195, 23), // "showPlannerGraphClicked"
QT_MOC_LITERAL(16, 219, 26), // "showOrientationPathClicked"
QT_MOC_LITERAL(17, 246, 31), // "defaultColorizeObstaclesClicked"
QT_MOC_LITERAL(18, 278, 17), // "showBoundsClicked"
QT_MOC_LITERAL(19, 296, 23), // "setDefaultBoundsClicked"
QT_MOC_LITERAL(20, 320, 22), // "addObjectBoundsClicked"
QT_MOC_LITERAL(21, 343, 21) // "minimizeBoundsClicked"

    },
    "gris::muk::SceneWidget\0textDropped\0\0"
    "std::string\0text\0requestProperty\0"
    "QTreeWidgetItem*\0item\0column\0"
    "saveObjectClicked\0deleteObstacleClicked\0"
    "deleteAbstractObjectClicked\0hidePaths\0"
    "showPaths\0colorize\0showPlannerGraphClicked\0"
    "showOrientationPathClicked\0"
    "defaultColorizeObstaclesClicked\0"
    "showBoundsClicked\0setDefaultBoundsClicked\0"
    "addObjectBoundsClicked\0minimizeBoundsClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SceneWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    2,   92,    2, 0x06 /* Public */,
       9,    0,   97,    2, 0x06 /* Public */,
      10,    0,   98,    2, 0x06 /* Public */,
      11,    0,   99,    2, 0x06 /* Public */,
      12,    0,  100,    2, 0x06 /* Public */,
      13,    0,  101,    2, 0x06 /* Public */,
      14,    0,  102,    2, 0x06 /* Public */,
      15,    0,  103,    2, 0x06 /* Public */,
      16,    0,  104,    2, 0x06 /* Public */,
      17,    0,  105,    2, 0x06 /* Public */,
      18,    0,  106,    2, 0x06 /* Public */,
      19,    0,  107,    2, 0x06 /* Public */,
      20,    0,  108,    2, 0x06 /* Public */,
      21,    0,  109,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::SceneWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SceneWidget *_t = static_cast<SceneWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textDropped((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->requestProperty((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->saveObjectClicked(); break;
        case 3: _t->deleteObstacleClicked(); break;
        case 4: _t->deleteAbstractObjectClicked(); break;
        case 5: _t->hidePaths(); break;
        case 6: _t->showPaths(); break;
        case 7: _t->colorize(); break;
        case 8: _t->showPlannerGraphClicked(); break;
        case 9: _t->showOrientationPathClicked(); break;
        case 10: _t->defaultColorizeObstaclesClicked(); break;
        case 11: _t->showBoundsClicked(); break;
        case 12: _t->setDefaultBoundsClicked(); break;
        case 13: _t->addObjectBoundsClicked(); break;
        case 14: _t->minimizeBoundsClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SceneWidget::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::textDropped)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)(QTreeWidgetItem * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::requestProperty)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::saveObjectClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::deleteObstacleClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::deleteAbstractObjectClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::hidePaths)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::showPaths)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::colorize)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::showPlannerGraphClicked)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::showOrientationPathClicked)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::defaultColorizeObstaclesClicked)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::showBoundsClicked)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::setDefaultBoundsClicked)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::addObjectBoundsClicked)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (SceneWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SceneWidget::minimizeBoundsClicked)) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::SceneWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_gris__muk__SceneWidget.data,
      qt_meta_data_gris__muk__SceneWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SceneWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SceneWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SceneWidget.stringdata0))
        return static_cast<void*>(const_cast< SceneWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int gris::muk::SceneWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::SceneWidget::textDropped(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::SceneWidget::requestProperty(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::SceneWidget::saveObjectClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::SceneWidget::deleteObstacleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::SceneWidget::deleteAbstractObjectClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::SceneWidget::hidePaths()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void gris::muk::SceneWidget::showPaths()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void gris::muk::SceneWidget::colorize()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void gris::muk::SceneWidget::showPlannerGraphClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void gris::muk::SceneWidget::showOrientationPathClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void gris::muk::SceneWidget::defaultColorizeObstaclesClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void gris::muk::SceneWidget::showBoundsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void gris::muk::SceneWidget::setDefaultBoundsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void gris::muk::SceneWidget::addObjectBoundsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void gris::muk::SceneWidget::minimizeBoundsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
