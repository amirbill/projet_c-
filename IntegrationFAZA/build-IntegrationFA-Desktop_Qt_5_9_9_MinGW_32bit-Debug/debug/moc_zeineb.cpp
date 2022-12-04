/****************************************************************************
** Meta object code from reading C++ file 'zeineb.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IntegrationFA/zeineb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zeineb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zeineb_t {
    QByteArrayData data[11];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zeineb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zeineb_t qt_meta_stringdata_zeineb = {
    {
QT_MOC_LITERAL(0, 0, 6), // "zeineb"
QT_MOC_LITERAL(1, 7, 29), // "on_pushButton_ajouter_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 31), // "on_pushButton_supprimer_clicked"
QT_MOC_LITERAL(4, 70, 30), // "on_pushButton_modifier_clicked"
QT_MOC_LITERAL(5, 101, 16), // "on_trier_clicked"
QT_MOC_LITERAL(6, 118, 24), // "on_ajouter_conge_clicked"
QT_MOC_LITERAL(7, 143, 32), // "on_pushButton_chercher_2_clicked"
QT_MOC_LITERAL(8, 176, 19), // "on_imprimer_clicked"
QT_MOC_LITERAL(9, 196, 32), // "on_pushButton_chercher_3_clicked"
QT_MOC_LITERAL(10, 229, 32) // "on_pushButton_chercher_4_clicked"

    },
    "zeineb\0on_pushButton_ajouter_clicked\0"
    "\0on_pushButton_supprimer_clicked\0"
    "on_pushButton_modifier_clicked\0"
    "on_trier_clicked\0on_ajouter_conge_clicked\0"
    "on_pushButton_chercher_2_clicked\0"
    "on_imprimer_clicked\0"
    "on_pushButton_chercher_3_clicked\0"
    "on_pushButton_chercher_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zeineb[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
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

void zeineb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        zeineb *_t = static_cast<zeineb *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_ajouter_clicked(); break;
        case 1: _t->on_pushButton_supprimer_clicked(); break;
        case 2: _t->on_pushButton_modifier_clicked(); break;
        case 3: _t->on_trier_clicked(); break;
        case 4: _t->on_ajouter_conge_clicked(); break;
        case 5: _t->on_pushButton_chercher_2_clicked(); break;
        case 6: _t->on_imprimer_clicked(); break;
        case 7: _t->on_pushButton_chercher_3_clicked(); break;
        case 8: _t->on_pushButton_chercher_4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject zeineb::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_zeineb.data,
      qt_meta_data_zeineb,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *zeineb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zeineb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zeineb.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int zeineb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
