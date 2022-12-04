/****************************************************************************
** Meta object code from reading C++ file 'avocat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IntegrationFA/avocat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avocat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_avocat_t {
    QByteArrayData data[22];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_avocat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_avocat_t qt_meta_stringdata_avocat = {
    {
QT_MOC_LITERAL(0, 0, 6), // "avocat"
QT_MOC_LITERAL(1, 7, 9), // "setCenter"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 29), // "on_pushButton_valider_clicked"
QT_MOC_LITERAL(4, 48, 19), // "on_suprimer_clicked"
QT_MOC_LITERAL(5, 68, 30), // "on_pushButton_modifier_clicked"
QT_MOC_LITERAL(6, 99, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 123, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 145, 19), // "on_imprimer_clicked"
QT_MOC_LITERAL(9, 165, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 189, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(11, 213, 5), // "total"
QT_MOC_LITERAL(12, 219, 1), // "a"
QT_MOC_LITERAL(13, 221, 1), // "b"
QT_MOC_LITERAL(14, 223, 1), // "c"
QT_MOC_LITERAL(15, 225, 1), // "d"
QT_MOC_LITERAL(16, 227, 1), // "e"
QT_MOC_LITERAL(17, 229, 1), // "f"
QT_MOC_LITERAL(18, 231, 1), // "g"
QT_MOC_LITERAL(19, 233, 1), // "h"
QT_MOC_LITERAL(20, 235, 10), // "readserial"
QT_MOC_LITERAL(21, 246, 9) // "updatelcd"

    },
    "avocat\0setCenter\0\0on_pushButton_valider_clicked\0"
    "on_suprimer_clicked\0on_pushButton_modifier_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_clicked\0"
    "on_imprimer_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_5_clicked\0total\0a\0b\0c\0"
    "d\0e\0f\0g\0h\0readserial\0updatelcd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_avocat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   79,    2, 0x08 /* Private */,
       4,    0,   80,    2, 0x08 /* Private */,
       5,    0,   81,    2, 0x08 /* Private */,
       6,    0,   82,    2, 0x08 /* Private */,
       7,    0,   83,    2, 0x08 /* Private */,
       8,    0,   84,    2, 0x08 /* Private */,
       9,    0,   85,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    8,   87,    2, 0x08 /* Private */,
      20,    0,  104,    2, 0x08 /* Private */,
      21,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,   16,   17,   18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void avocat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        avocat *_t = static_cast<avocat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCenter((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->on_pushButton_valider_clicked(); break;
        case 2: _t->on_suprimer_clicked(); break;
        case 3: _t->on_pushButton_modifier_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_imprimer_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->total((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 10: _t->readserial(); break;
        case 11: _t->updatelcd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (avocat::*_t)(QVariant , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&avocat::setCenter)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject avocat::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_avocat.data,
      qt_meta_data_avocat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *avocat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *avocat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_avocat.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int avocat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void avocat::setCenter(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
