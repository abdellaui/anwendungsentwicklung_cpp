/****************************************************************************
** Meta object code from reading C++ file 'Adresseingabe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/Adresseingabe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Adresseingabe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Adresseingabe_t {
    QByteArrayData data[12];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Adresseingabe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Adresseingabe_t qt_meta_stringdata_Adresseingabe = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Adresseingabe"
QT_MOC_LITERAL(1, 14, 14), // "generateOutput"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "name"
QT_MOC_LITERAL(4, 35, 7), // "vorname"
QT_MOC_LITERAL(5, 43, 6), // "anrede"
QT_MOC_LITERAL(6, 50, 7), // "strasse"
QT_MOC_LITERAL(7, 58, 10), // "hausnummer"
QT_MOC_LITERAL(8, 69, 3), // "PLZ"
QT_MOC_LITERAL(9, 73, 5), // "stadt"
QT_MOC_LITERAL(10, 79, 4), // "land"
QT_MOC_LITERAL(11, 84, 19) // "btn_eingabe_clicked"

    },
    "Adresseingabe\0generateOutput\0\0name\0"
    "vorname\0anrede\0strasse\0hausnummer\0PLZ\0"
    "stadt\0land\0btn_eingabe_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Adresseingabe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    8,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,    9,   10,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Adresseingabe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Adresseingabe *_t = static_cast<Adresseingabe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->generateOutput((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 1: _t->btn_eingabe_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Adresseingabe::*_t)(QString , QString , QString , QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Adresseingabe::generateOutput)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Adresseingabe::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Adresseingabe.data,
      qt_meta_data_Adresseingabe,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Adresseingabe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Adresseingabe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Adresseingabe.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Adresseingabe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Adresseingabe::generateOutput(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, QString _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
