/****************************************************************************
** Meta object code from reading C++ file 'campaign.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../campaign.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'campaign.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_campaign_t {
    uint offsetsAndSizes[20];
    char stringdata0[9];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[18];
    char stringdata5[19];
    char stringdata6[17];
    char stringdata7[19];
    char stringdata8[24];
    char stringdata9[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_campaign_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_campaign_t qt_meta_stringdata_campaign = {
    {
        QT_MOC_LITERAL(0, 8),  // "campaign"
        QT_MOC_LITERAL(9, 23),  // "on_my_details_2_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 23),  // "on_my_details_3_clicked"
        QT_MOC_LITERAL(58, 17),  // "on_home_2_clicked"
        QT_MOC_LITERAL(76, 18),  // "on_about_2_clicked"
        QT_MOC_LITERAL(95, 16),  // "on_why_2_clicked"
        QT_MOC_LITERAL(112, 18),  // "on_login_2_clicked"
        QT_MOC_LITERAL(131, 23),  // "on_my_details_4_clicked"
        QT_MOC_LITERAL(155, 18)   // "on_login_3_clicked"
    },
    "campaign",
    "on_my_details_2_clicked",
    "",
    "on_my_details_3_clicked",
    "on_home_2_clicked",
    "on_about_2_clicked",
    "on_why_2_clicked",
    "on_login_2_clicked",
    "on_my_details_4_clicked",
    "on_login_3_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_campaign[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject campaign::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_campaign.offsetsAndSizes,
    qt_meta_data_campaign,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_campaign_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<campaign, std::true_type>,
        // method 'on_my_details_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_my_details_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_home_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_about_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_why_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_my_details_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void campaign::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<campaign *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_my_details_2_clicked(); break;
        case 1: _t->on_my_details_3_clicked(); break;
        case 2: _t->on_home_2_clicked(); break;
        case 3: _t->on_about_2_clicked(); break;
        case 4: _t->on_why_2_clicked(); break;
        case 5: _t->on_login_2_clicked(); break;
        case 6: _t->on_my_details_4_clicked(); break;
        case 7: _t->on_login_3_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *campaign::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *campaign::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_campaign.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int campaign::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
