/****************************************************************************
** Meta object code from reading C++ file 'donate_blood.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../donate_blood.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'donate_blood.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_donate_blood_t {
    uint offsetsAndSizes[22];
    char stringdata0[13];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[22];
    char stringdata5[17];
    char stringdata6[18];
    char stringdata7[17];
    char stringdata8[15];
    char stringdata9[16];
    char stringdata10[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_donate_blood_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_donate_blood_t qt_meta_stringdata_donate_blood = {
    {
        QT_MOC_LITERAL(0, 12),  // "donate_blood"
        QT_MOC_LITERAL(13, 23),  // "on_my_details_3_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 23),  // "on_my_details_2_clicked"
        QT_MOC_LITERAL(62, 21),  // "on_my_details_clicked"
        QT_MOC_LITERAL(84, 16),  // "on_login_clicked"
        QT_MOC_LITERAL(101, 17),  // "on_donate_clicked"
        QT_MOC_LITERAL(119, 16),  // "on_about_clicked"
        QT_MOC_LITERAL(136, 14),  // "on_why_clicked"
        QT_MOC_LITERAL(151, 15),  // "on_home_clicked"
        QT_MOC_LITERAL(167, 18)   // "on_login_2_clicked"
    },
    "donate_blood",
    "on_my_details_3_clicked",
    "",
    "on_my_details_2_clicked",
    "on_my_details_clicked",
    "on_login_clicked",
    "on_donate_clicked",
    "on_about_clicked",
    "on_why_clicked",
    "on_home_clicked",
    "on_login_2_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_donate_blood[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

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

Q_CONSTINIT const QMetaObject donate_blood::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_donate_blood.offsetsAndSizes,
    qt_meta_data_donate_blood,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_donate_blood_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<donate_blood, std::true_type>,
        // method 'on_my_details_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_my_details_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_my_details_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_donate_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_about_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_why_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_home_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void donate_blood::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<donate_blood *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_my_details_3_clicked(); break;
        case 1: _t->on_my_details_2_clicked(); break;
        case 2: _t->on_my_details_clicked(); break;
        case 3: _t->on_login_clicked(); break;
        case 4: _t->on_donate_clicked(); break;
        case 5: _t->on_about_clicked(); break;
        case 6: _t->on_why_clicked(); break;
        case 7: _t->on_home_clicked(); break;
        case 8: _t->on_login_2_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *donate_blood::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *donate_blood::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_donate_blood.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int donate_blood::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE