/****************************************************************************
** Meta object code from reading C++ file 'ToolbarSurgeonModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/ToolbarSurgeonModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToolbarSurgeonModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__ToolbarSurgeonModel_t {
    QByteArrayData data[14];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__ToolbarSurgeonModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__ToolbarSurgeonModel_t qt_meta_stringdata_gris__muk__ToolbarSurgeonModel = {
    {
QT_MOC_LITERAL(0, 0, 30), // "gris::muk::ToolbarSurgeonModel"
QT_MOC_LITERAL(1, 31, 15), // "showInputWidget"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 22), // "showSegmentationWidget"
QT_MOC_LITERAL(4, 71, 18), // "showPlanningWidget"
QT_MOC_LITERAL(5, 90, 19), // "showSelectionWidget"
QT_MOC_LITERAL(6, 110, 20), // "showNavigationWidget"
QT_MOC_LITERAL(7, 131, 28), // "switchToDeveloperViewClicked"
QT_MOC_LITERAL(8, 160, 15), // "actionShowInput"
QT_MOC_LITERAL(9, 176, 22), // "actionShowSegmentation"
QT_MOC_LITERAL(10, 199, 18), // "actionShowPlanning"
QT_MOC_LITERAL(11, 218, 19), // "actionShowSelection"
QT_MOC_LITERAL(12, 238, 20), // "actionShowNavigation"
QT_MOC_LITERAL(13, 259, 27) // "actionSwitchToDeveloperView"

    },
    "gris::muk::ToolbarSurgeonModel\0"
    "showInputWidget\0\0showSegmentationWidget\0"
    "showPlanningWidget\0showSelectionWidget\0"
    "showNavigationWidget\0switchToDeveloperViewClicked\0"
    "actionShowInput\0actionShowSegmentation\0"
    "actionShowPlanning\0actionShowSelection\0"
    "actionShowNavigation\0actionSwitchToDeveloperView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__ToolbarSurgeonModel[] = {

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
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
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

void gris::muk::ToolbarSurgeonModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolbarSurgeonModel *_t = static_cast<ToolbarSurgeonModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showInputWidget(); break;
        case 1: _t->showSegmentationWidget(); break;
        case 2: _t->showPlanningWidget(); break;
        case 3: _t->showSelectionWidget(); break;
        case 4: _t->showNavigationWidget(); break;
        case 5: _t->switchToDeveloperViewClicked(); break;
        case 6: _t->actionShowInput(); break;
        case 7: _t->actionShowSegmentation(); break;
        case 8: _t->actionShowPlanning(); break;
        case 9: _t->actionShowSelection(); break;
        case 10: _t->actionShowNavigation(); break;
        case 11: _t->actionSwitchToDeveloperView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToolbarSurgeonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolbarSurgeonModel::showInputWidget)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ToolbarSurgeonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolbarSurgeonModel::showSegmentationWidget)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ToolbarSurgeonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolbarSurgeonModel::showPlanningWidget)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ToolbarSurgeonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolbarSurgeonModel::showSelectionWidget)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ToolbarSurgeonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolbarSurgeonModel::showNavigationWidget)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ToolbarSurgeonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolbarSurgeonModel::switchToDeveloperViewClicked)) {
                *result = 5;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::ToolbarSurgeonModel::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_gris__muk__ToolbarSurgeonModel.data,
      qt_meta_data_gris__muk__ToolbarSurgeonModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::ToolbarSurgeonModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::ToolbarSurgeonModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__ToolbarSurgeonModel.stringdata0))
        return static_cast<void*>(const_cast< ToolbarSurgeonModel*>(this));
    return QToolBar::qt_metacast(_clname);
}

int gris::muk::ToolbarSurgeonModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
void gris::muk::ToolbarSurgeonModel::showInputWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void gris::muk::ToolbarSurgeonModel::showSegmentationWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gris::muk::ToolbarSurgeonModel::showPlanningWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::ToolbarSurgeonModel::showSelectionWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gris::muk::ToolbarSurgeonModel::showNavigationWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void gris::muk::ToolbarSurgeonModel::switchToDeveloperViewClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
