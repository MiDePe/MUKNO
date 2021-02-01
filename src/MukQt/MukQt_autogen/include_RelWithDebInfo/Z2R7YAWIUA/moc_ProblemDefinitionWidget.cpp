/****************************************************************************
** Meta object code from reading C++ file 'ProblemDefinitionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/ProblemDefinitionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProblemDefinitionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__ProblemDefinitionWidget_t {
    QByteArrayData data[6];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__ProblemDefinitionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__ProblemDefinitionWidget_t qt_meta_stringdata_gris__muk__ProblemDefinitionWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "gris::muk::ProblemDefinitionW..."
QT_MOC_LITERAL(1, 35, 21), // "addStartRegionClicked"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 20), // "addGoalRegionClicked"
QT_MOC_LITERAL(4, 79, 19), // "deleteRegionClicked"
QT_MOC_LITERAL(5, 99, 14) // "reverseClicked"

    },
    "gris::muk::ProblemDefinitionWidget\0"
    "addStartRegionClicked\0\0addGoalRegionClicked\0"
    "deleteRegionClicked\0reverseClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__ProblemDefinitionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::ProblemDefinitionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProblemDefinitionWidget *_t = static_cast<ProblemDefinitionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addStartRegionClicked(); break;
        case 1: _t->addGoalRegionClicked(); break;
        case 2: _t->deleteRegionClicked(); break;
        case 3: _t->reverseClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProblemDefinitionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProblemDefinitionWidget::addStartRegionClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProblemDefinitionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProblemDefinitionWidget::addGoalRegionClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProblemDefinitionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProblemDefinitionWidget::deleteRegionClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProblemDefinitionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProblemDefinitionWidget::reverseClicked)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gris::muk::ProblemDefinitionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__ProblemDefinitionWidget.data,
      qt_meta_data_gris__muk__ProblemDefinitionWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::ProblemDefinitionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::ProblemDefinitionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__ProblemDefinitionWidget.stringdata0))
        return static_cast<void*>(const_cast< ProblemDefinitionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::ProblemDefinitionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::ProblemDefinitionWidget::addStartRegionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void gris::muk::ProblemDefinitionWidget::addGoalRegionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gris::muk::ProblemDefinitionWidget::deleteRegionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gris::muk::ProblemDefinitionWidget::reverseClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
