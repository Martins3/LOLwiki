/****************************************************************************
** Meta object code from reading C++ file 'championStat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LOL2/championStat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'championStat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChampionStat_t {
    QByteArrayData data[44];
    char stringdata0[663];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChampionStat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChampionStat_t qt_meta_stringdata_ChampionStat = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChampionStat"
QT_MOC_LITERAL(1, 13, 19), // "champion_keyChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "armorChanged"
QT_MOC_LITERAL(4, 47, 20), // "armorperlevelChanged"
QT_MOC_LITERAL(5, 68, 19), // "attackdamageChanged"
QT_MOC_LITERAL(6, 88, 27), // "attackdamageperlevelChanged"
QT_MOC_LITERAL(7, 116, 18), // "attackrangeChanged"
QT_MOC_LITERAL(8, 135, 24), // "attackspeedoffsetChanged"
QT_MOC_LITERAL(9, 160, 26), // "attackspeedperlevelChanged"
QT_MOC_LITERAL(10, 187, 11), // "critChanged"
QT_MOC_LITERAL(11, 199, 19), // "critperlevelChanged"
QT_MOC_LITERAL(12, 219, 9), // "hpChanged"
QT_MOC_LITERAL(13, 229, 17), // "hpperlevelChanged"
QT_MOC_LITERAL(14, 247, 14), // "hpregenChanged"
QT_MOC_LITERAL(15, 262, 22), // "hpregenperlevelChanged"
QT_MOC_LITERAL(16, 285, 16), // "movespeedChanged"
QT_MOC_LITERAL(17, 302, 9), // "mpChanged"
QT_MOC_LITERAL(18, 312, 17), // "mpperlevelChanged"
QT_MOC_LITERAL(19, 330, 14), // "mpregenChanged"
QT_MOC_LITERAL(20, 345, 22), // "mpregenperlevelChanged"
QT_MOC_LITERAL(21, 368, 17), // "spellblockChanged"
QT_MOC_LITERAL(22, 386, 25), // "spellblockperlevelChanged"
QT_MOC_LITERAL(23, 412, 12), // "champion_key"
QT_MOC_LITERAL(24, 425, 5), // "armor"
QT_MOC_LITERAL(25, 431, 13), // "armorperlevel"
QT_MOC_LITERAL(26, 445, 12), // "attackdamage"
QT_MOC_LITERAL(27, 458, 20), // "attackdamageperlevel"
QT_MOC_LITERAL(28, 479, 11), // "attackrange"
QT_MOC_LITERAL(29, 491, 17), // "attackspeedoffset"
QT_MOC_LITERAL(30, 509, 19), // "attackspeedperlevel"
QT_MOC_LITERAL(31, 529, 4), // "crit"
QT_MOC_LITERAL(32, 534, 12), // "critperlevel"
QT_MOC_LITERAL(33, 547, 2), // "hp"
QT_MOC_LITERAL(34, 550, 10), // "hpperlevel"
QT_MOC_LITERAL(35, 561, 7), // "hpregen"
QT_MOC_LITERAL(36, 569, 15), // "hpregenperlevel"
QT_MOC_LITERAL(37, 585, 9), // "movespeed"
QT_MOC_LITERAL(38, 595, 2), // "mp"
QT_MOC_LITERAL(39, 598, 10), // "mpperlevel"
QT_MOC_LITERAL(40, 609, 7), // "mpregen"
QT_MOC_LITERAL(41, 617, 15), // "mpregenperlevel"
QT_MOC_LITERAL(42, 633, 10), // "spellblock"
QT_MOC_LITERAL(43, 644, 18) // "spellblockperlevel"

    },
    "ChampionStat\0champion_keyChanged\0\0"
    "armorChanged\0armorperlevelChanged\0"
    "attackdamageChanged\0attackdamageperlevelChanged\0"
    "attackrangeChanged\0attackspeedoffsetChanged\0"
    "attackspeedperlevelChanged\0critChanged\0"
    "critperlevelChanged\0hpChanged\0"
    "hpperlevelChanged\0hpregenChanged\0"
    "hpregenperlevelChanged\0movespeedChanged\0"
    "mpChanged\0mpperlevelChanged\0mpregenChanged\0"
    "mpregenperlevelChanged\0spellblockChanged\0"
    "spellblockperlevelChanged\0champion_key\0"
    "armor\0armorperlevel\0attackdamage\0"
    "attackdamageperlevel\0attackrange\0"
    "attackspeedoffset\0attackspeedperlevel\0"
    "crit\0critperlevel\0hp\0hpperlevel\0hpregen\0"
    "hpregenperlevel\0movespeed\0mp\0mpperlevel\0"
    "mpregen\0mpregenperlevel\0spellblock\0"
    "spellblockperlevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChampionStat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      21,  140, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    0,  120,    2, 0x06 /* Public */,
       4,    0,  121,    2, 0x06 /* Public */,
       5,    0,  122,    2, 0x06 /* Public */,
       6,    0,  123,    2, 0x06 /* Public */,
       7,    0,  124,    2, 0x06 /* Public */,
       8,    0,  125,    2, 0x06 /* Public */,
       9,    0,  126,    2, 0x06 /* Public */,
      10,    0,  127,    2, 0x06 /* Public */,
      11,    0,  128,    2, 0x06 /* Public */,
      12,    0,  129,    2, 0x06 /* Public */,
      13,    0,  130,    2, 0x06 /* Public */,
      14,    0,  131,    2, 0x06 /* Public */,
      15,    0,  132,    2, 0x06 /* Public */,
      16,    0,  133,    2, 0x06 /* Public */,
      17,    0,  134,    2, 0x06 /* Public */,
      18,    0,  135,    2, 0x06 /* Public */,
      19,    0,  136,    2, 0x06 /* Public */,
      20,    0,  137,    2, 0x06 /* Public */,
      21,    0,  138,    2, 0x06 /* Public */,
      22,    0,  139,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::Int, 0x00495001,
      24, QMetaType::Double, 0x00495001,
      25, QMetaType::Double, 0x00495001,
      26, QMetaType::Double, 0x00495001,
      27, QMetaType::Double, 0x00495001,
      28, QMetaType::Int, 0x00495001,
      29, QMetaType::Double, 0x00495001,
      30, QMetaType::Double, 0x00495001,
      31, QMetaType::Double, 0x00495001,
      32, QMetaType::Double, 0x00495001,
      33, QMetaType::Int, 0x00495001,
      34, QMetaType::Int, 0x00495001,
      35, QMetaType::Double, 0x00495001,
      36, QMetaType::Double, 0x00495001,
      37, QMetaType::Int, 0x00495001,
      38, QMetaType::Int, 0x00495001,
      39, QMetaType::Int, 0x00495001,
      40, QMetaType::Int, 0x00495001,
      41, QMetaType::Int, 0x00495001,
      42, QMetaType::Double, 0x00495001,
      43, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,

       0        // eod
};

void ChampionStat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChampionStat *_t = static_cast<ChampionStat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->champion_keyChanged(); break;
        case 1: _t->armorChanged(); break;
        case 2: _t->armorperlevelChanged(); break;
        case 3: _t->attackdamageChanged(); break;
        case 4: _t->attackdamageperlevelChanged(); break;
        case 5: _t->attackrangeChanged(); break;
        case 6: _t->attackspeedoffsetChanged(); break;
        case 7: _t->attackspeedperlevelChanged(); break;
        case 8: _t->critChanged(); break;
        case 9: _t->critperlevelChanged(); break;
        case 10: _t->hpChanged(); break;
        case 11: _t->hpperlevelChanged(); break;
        case 12: _t->hpregenChanged(); break;
        case 13: _t->hpregenperlevelChanged(); break;
        case 14: _t->movespeedChanged(); break;
        case 15: _t->mpChanged(); break;
        case 16: _t->mpperlevelChanged(); break;
        case 17: _t->mpregenChanged(); break;
        case 18: _t->mpregenperlevelChanged(); break;
        case 19: _t->spellblockChanged(); break;
        case 20: _t->spellblockperlevelChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::champion_keyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::armorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::armorperlevelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::attackdamageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::attackdamageperlevelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::attackrangeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::attackspeedoffsetChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::attackspeedperlevelChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::critChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::critperlevelChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::hpChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::hpperlevelChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::hpregenChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::hpregenperlevelChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::movespeedChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::mpChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::mpperlevelChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::mpregenChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::mpregenperlevelChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::spellblockChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (ChampionStat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChampionStat::spellblockperlevelChanged)) {
                *result = 20;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ChampionStat *_t = static_cast<ChampionStat *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getChampion_key(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getArmor(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getArmorperlevel(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getAttackdamage(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->getAttackdamageperlevel(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getAttackrange(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getAttackspeedoffset(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->getAttackspeedperlevel(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getCrit(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getCritperlevel(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->getHp(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->getHpperlevel(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->getHpregen(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->getHpregenperlevel(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->getMovespeed(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->getMp(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->getMpperlevel(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->getMpregen(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->getMpregenperlevel(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->getSpellblock(); break;
        case 20: *reinterpret_cast< double*>(_v) = _t->getSpellblockperlevel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ChampionStat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChampionStat.data,
      qt_meta_data_ChampionStat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChampionStat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChampionStat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChampionStat.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChampionStat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChampionStat::champion_keyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChampionStat::armorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChampionStat::armorperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ChampionStat::attackdamageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ChampionStat::attackdamageperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ChampionStat::attackrangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ChampionStat::attackspeedoffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ChampionStat::attackspeedperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ChampionStat::critChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ChampionStat::critperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ChampionStat::hpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ChampionStat::hpperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ChampionStat::hpregenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ChampionStat::hpregenperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ChampionStat::movespeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ChampionStat::mpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void ChampionStat::mpperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void ChampionStat::mpregenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void ChampionStat::mpregenperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void ChampionStat::spellblockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void ChampionStat::spellblockperlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
