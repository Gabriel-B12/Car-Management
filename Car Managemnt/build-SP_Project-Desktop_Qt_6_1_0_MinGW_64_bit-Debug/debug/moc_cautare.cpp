/****************************************************************************
** Meta object code from reading C++ file 'cautare.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SP_Project/cautare.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cautare.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cautare_t {
    const uint offsetsAndSize[28];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_cautare_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_cautare_t qt_meta_stringdata_cautare = {
    {
QT_MOC_LITERAL(0, 7), // "cautare"
QT_MOC_LITERAL(8, 21), // "on_marca_stateChanged"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 4), // "arg1"
QT_MOC_LITERAL(36, 21), // "on_model_stateChanged"
QT_MOC_LITERAL(58, 23), // "on_culoare_stateChanged"
QT_MOC_LITERAL(82, 20), // "on_anul_stateChanged"
QT_MOC_LITERAL(103, 22), // "on_nr_loc_stateChanged"
QT_MOC_LITERAL(126, 26), // "on_capacitate_stateChanged"
QT_MOC_LITERAL(153, 22), // "on_putere_stateChanged"
QT_MOC_LITERAL(176, 27), // "on_combustibil_stateChanged"
QT_MOC_LITERAL(204, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(226, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(250, 22) // "on_nr_inm_stateChanged"

    },
    "cautare\0on_marca_stateChanged\0\0arg1\0"
    "on_model_stateChanged\0on_culoare_stateChanged\0"
    "on_anul_stateChanged\0on_nr_loc_stateChanged\0"
    "on_capacitate_stateChanged\0"
    "on_putere_stateChanged\0"
    "on_combustibil_stateChanged\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_nr_inm_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cautare[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x08,    0 /* Private */,
       4,    1,   83,    2, 0x08,    2 /* Private */,
       5,    1,   86,    2, 0x08,    4 /* Private */,
       6,    1,   89,    2, 0x08,    6 /* Private */,
       7,    1,   92,    2, 0x08,    8 /* Private */,
       8,    1,   95,    2, 0x08,   10 /* Private */,
       9,    1,   98,    2, 0x08,   12 /* Private */,
      10,    1,  101,    2, 0x08,   14 /* Private */,
      11,    0,  104,    2, 0x08,   16 /* Private */,
      12,    0,  105,    2, 0x08,   17 /* Private */,
      13,    1,  106,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void cautare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cautare *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_marca_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_model_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_culoare_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_anul_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_nr_loc_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_capacitate_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_putere_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_combustibil_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_nr_inm_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cautare::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_cautare.offsetsAndSize,
    qt_meta_data_cautare,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_cautare_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *cautare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cautare::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cautare.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int cautare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
