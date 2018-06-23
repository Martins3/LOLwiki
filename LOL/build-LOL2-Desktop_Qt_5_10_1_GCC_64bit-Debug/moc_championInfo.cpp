/****************************************************************************
** Meta object code from reading C++ file 'championInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LOL2/championInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'championInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChampionInfo_t {
    QByteArrayData data[12];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChampionInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChampionInfo_t qt_meta_stringdata_ChampionInfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChampionInfo"
QT_MOC_LITERAL(1, 13, 19), // "champion_keyChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "info_attackChanged"
QT_MOC_LITERAL(4, 53, 19), // "info_defenseChanged"
QT_MOC_LITERAL(5, 73, 22), // "info_difficultyChanged"
QT_MOC_LITERAL(6, 96, 17), // "info_magicChanged"
QT_MOC_LITERAL(7, 114, 12), // "champion_key"
QT_MOC_LITERAL(8, 127, 11), // "info_attack"
QT_MOC_LITERAL(9, 139, 12), // "info_defense"
QT_MOC_LITERAL(10, 152, 15), // "info_difficulty"
QT_MOC_LITERAL(11, 168, 10) // "info_magic"

    },
    "ChampionInfo\0champion_keyChanged\0\0"
    "info_attackChanged\0info_defenseChanged\0"
    "info_difficultyChanged\0info_magicChanged\0"
    "champion_key\0info_attack\0info_defense\0"
    "info_difficulty\0info_magic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChampionInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495001,
       8, QMetaType::Int, 0x00495001,
       9, QMetaType::Int, 0x00495001,
      10, QMetaType::Int, 0x00495001,
      11, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void ChampionInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChampionInfo *_t = static_cast<ChampionInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->champion_keyChanged(); break;
        case 1: _t->info_attackChanged(); break;
        case 2: _t->info_defenseChanged(); break;
        case 3: _t->info_difficultyChanged(); break;
        case 4: _t->info_magicChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ChampionInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionInfo::champion_keyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ChampionInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionInfo::info_attackChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ChampionInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionInfo::info_defenseChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ChampionInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionInfo::info_difficultyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ChampionInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionInfo::info_magicChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ChampionInfo *_t = static_cast<ChampionInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getChampion_key(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getInfo_attack(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getInfo_defense(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getInfo_difficulty(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getInfo_magic(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ChampionInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChampionInfo.data,
      qt_meta_data_ChampionInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChampionInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChampionInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChampionInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChampionInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChampionInfo::champion_keyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChampionInfo::info_attackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChampionInfo::info_defenseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ChampionInfo::info_difficultyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ChampionInfo::info_magicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
