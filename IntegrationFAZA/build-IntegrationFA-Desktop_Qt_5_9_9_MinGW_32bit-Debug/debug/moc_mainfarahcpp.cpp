/****************************************************************************
** Meta object code from reading C++ file 'mainfarahcpp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IntegrationFA/mainfarahcpp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainfarahcpp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainFarahCpp_t {
    QByteArrayData data[15];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainFarahCpp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainFarahCpp_t qt_meta_stringdata_MainFarahCpp = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MainFarahCpp"
QT_MOC_LITERAL(1, 13, 12), // "update_label"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(4, 49, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(5, 73, 22), // "on_pb_modifier_clicked"
QT_MOC_LITERAL(6, 96, 17), // "on_recher_clicked"
QT_MOC_LITERAL(7, 114, 8), // "sendMail"
QT_MOC_LITERAL(8, 123, 8), // "mailSent"
QT_MOC_LITERAL(9, 132, 6), // "browse"
QT_MOC_LITERAL(10, 139, 18), // "on_pb_code_clicked"
QT_MOC_LITERAL(11, 158, 19), // "on_pb_excel_clicked"
QT_MOC_LITERAL(12, 178, 24), // "on_boutton_login_clicked"
QT_MOC_LITERAL(13, 203, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 225, 16) // "on_trier_clicked"

    },
    "MainFarahCpp\0update_label\0\0"
    "on_pb_ajouter_clicked\0on_pb_supprimer_clicked\0"
    "on_pb_modifier_clicked\0on_recher_clicked\0"
    "sendMail\0mailSent\0browse\0on_pb_code_clicked\0"
    "on_pb_excel_clicked\0on_boutton_login_clicked\0"
    "on_pushButton_clicked\0on_trier_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainFarahCpp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainFarahCpp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainFarahCpp *_t = static_cast<MainFarahCpp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        //case 0: _t->update_label(); break;
        case 1: _t->on_pb_ajouter_clicked(); break;
        case 2: _t->on_pb_supprimer_clicked(); break;
        case 3: _t->on_pb_modifier_clicked(); break;
        case 4: _t->on_recher_clicked(); break;
        case 5: _t->sendMail(); break;
        case 6: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->browse(); break;
        case 8: _t->on_pb_code_clicked(); break;
        case 9: _t->on_pb_excel_clicked(); break;
        //case 10: _t->on_boutton_login_clicked(); break;
        case 11: _t->on_pushButton_clicked(); break;
        case 12: _t->on_trier_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainFarahCpp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainFarahCpp.data,
      qt_meta_data_MainFarahCpp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainFarahCpp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainFarahCpp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainFarahCpp.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MainFarahCpp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
