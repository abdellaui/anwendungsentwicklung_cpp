/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "onLoadData"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "filename_test"
QT_MOC_LITERAL(4, 37, 14), // "filename_train"
QT_MOC_LITERAL(5, 52, 7), // "onTrain"
QT_MOC_LITERAL(6, 60, 1), // "c"
QT_MOC_LITERAL(7, 62, 5), // "gamma"
QT_MOC_LITERAL(8, 68, 12), // "onReadedFile"
QT_MOC_LITERAL(9, 81, 7), // "cv::Mat"
QT_MOC_LITERAL(10, 89, 3), // "img"
QT_MOC_LITERAL(11, 93, 8), // "filename"
QT_MOC_LITERAL(12, 102, 6), // "gender"
QT_MOC_LITERAL(13, 109, 12), // "cvCountFaces"
QT_MOC_LITERAL(14, 122, 6), // "onTest"
QT_MOC_LITERAL(15, 129, 13), // "onTestOnImage"
QT_MOC_LITERAL(16, 143, 16), // "onLoadClassifier"
QT_MOC_LITERAL(17, 160, 16) // "onSaveClassifier"

    },
    "MainWindow\0onLoadData\0\0filename_test\0"
    "filename_train\0onTrain\0c\0gamma\0"
    "onReadedFile\0cv::Mat\0img\0filename\0"
    "gender\0cvCountFaces\0onTest\0onTestOnImage\0"
    "onLoadClassifier\0onSaveClassifier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       5,    2,   54,    2, 0x0a /* Public */,
       8,    4,   59,    2, 0x0a /* Public */,
      14,    0,   68,    2, 0x0a /* Public */,
      15,    0,   69,    2, 0x0a /* Public */,
      16,    0,   70,    2, 0x0a /* Public */,
      17,    0,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QString, QMetaType::Int,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLoadData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onTrain((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 2: _t->onReadedFile((*reinterpret_cast< cv::Mat(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 3: _t->onTest(); break;
        case 4: _t->onTestOnImage(); break;
        case 5: _t->onLoadClassifier(); break;
        case 6: _t->onSaveClassifier(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
