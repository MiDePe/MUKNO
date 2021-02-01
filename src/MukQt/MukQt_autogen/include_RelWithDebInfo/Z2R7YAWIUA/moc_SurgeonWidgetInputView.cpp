/****************************************************************************
** Meta object code from reading C++ file 'SurgeonWidgetInputView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MukQt/SurgeonWidgetInputView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurgeonWidgetInputView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gris__muk__SurgeonWidgetInputView_t {
    QByteArrayData data[10];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gris__muk__SurgeonWidgetInputView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gris__muk__SurgeonWidgetInputView_t qt_meta_stringdata_gris__muk__SurgeonWidgetInputView = {
    {
QT_MOC_LITERAL(0, 0, 33), // "gris::muk::SurgeonWidgetInput..."
QT_MOC_LITERAL(1, 34, 17), // "loadCtDataClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 11), // "std::string"
QT_MOC_LITERAL(4, 65, 8), // "filename"
QT_MOC_LITERAL(5, 74, 27), // "loadSegmentationDataClicked"
QT_MOC_LITERAL(6, 102, 24), // "startSegmentationClicked"
QT_MOC_LITERAL(7, 127, 16), // "actionLoadCtData"
QT_MOC_LITERAL(8, 144, 26), // "actionLoadSegmentationData"
QT_MOC_LITERAL(9, 171, 23) // "actionStartSegmentation"

    },
    "gris::muk::SurgeonWidgetInputView\0"
    "loadCtDataClicked\0\0std::string\0filename\0"
    "loadSegmentationDataClicked\0"
    "startSegmentationClicked\0actionLoadCtData\0"
    "actionLoadSegmentationData\0"
    "actionStartSegmentation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gris__muk__SurgeonWidgetInputView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gris::muk::SurgeonWidgetInputView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurgeonWidgetInputView *_t = static_cast<SurgeonWidgetInputView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadCtDataClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->loadSegmentationDataClicked((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->startSegmentationClicked(); break;
        case 3: _t->actionLoadCtData(); break;
        case 4: _t->actionLoadSegmentationData(); break;
        case 5: _t->actionStartSegmentation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurgeonWidgetInputView::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonWidgetInputView::loadCtDataClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurgeonWidgetInputView::*_t)(const std::string & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonWidgetInputView::loadSegmentationDataClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SurgeonWidgetInputView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurgeonWidgetInputView::startSegmentationClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject gris::muk::SurgeonWidgetInputView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gris__muk__SurgeonWidgetInputView.data,
      qt_meta_data_gris__muk__SurgeonWidgetInputView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gris::muk::SurgeonWidgetInputView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gris::muk::SurgeonWidgetInputView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gris__muk__SurgeonWidgetInputView.stringdata0))
        return static_cast<void*>(const_cast< SurgeonWidgetInputView*>(this));
    return QWidget::qt_metacast(_clname);
}

int gris::muk::SurgeonWidgetInputView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void gris::muk::SurgeonWidgetInputView::loadCtDataClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gris::muk::SurgeonWidgetInputView::loadSegmentationDataClicked(const std::string & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gris::muk::SurgeonWidgetInputView::startSegmentationClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
