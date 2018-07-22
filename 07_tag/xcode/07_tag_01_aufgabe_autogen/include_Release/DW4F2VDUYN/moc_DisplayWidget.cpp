/****************************************************************************
** Meta object code from reading C++ file 'DisplayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/DisplayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DisplayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisplayWidget_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayWidget_t qt_meta_stringdata_DisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DisplayWidget"
QT_MOC_LITERAL(1, 14, 12), // "on_new_Image"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 36, 17), // "on_toggled_record"
QT_MOC_LITERAL(5, 54, 6), // "record"
QT_MOC_LITERAL(6, 61, 19), // "on_toggled_preserve"
QT_MOC_LITERAL(7, 81, 8), // "preserve"
QT_MOC_LITERAL(8, 90, 16), // "on_input_clicked"
QT_MOC_LITERAL(9, 107, 4) // "togl"

    },
    "DisplayWidget\0on_new_Image\0\0cv::Mat\0"
    "on_toggled_record\0record\0on_toggled_preserve\0"
    "preserve\0on_input_clicked\0togl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void DisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DisplayWidget *_t = static_cast<DisplayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_new_Image((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->on_toggled_record((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_toggled_preserve((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_input_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DisplayWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DisplayWidget.data,
      qt_meta_data_DisplayWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
