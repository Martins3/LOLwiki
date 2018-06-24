/****************************************************************************
** Meta object code from reading C++ file 'summoner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LOL2/summoner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'summoner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Summoner_t {
    QByteArrayData data[70];
    char stringdata0[881];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Summoner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Summoner_t qt_meta_stringdata_Summoner = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Summoner"
QT_MOC_LITERAL(1, 9, 19), // "itemTagModelChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "listModelChanged"
QT_MOC_LITERAL(4, 47, 20), // "itemListModelChanged"
QT_MOC_LITERAL(5, 68, 24), // "baseRuneListModelChanged"
QT_MOC_LITERAL(6, 93, 26), // "onChampionListModelChanged"
QT_MOC_LITERAL(7, 120, 29), // "onChampionTagListModelChanged"
QT_MOC_LITERAL(8, 150, 23), // "onMatchListModelChanged"
QT_MOC_LITERAL(9, 174, 20), // "summonerSpellhandler"
QT_MOC_LITERAL(10, 195, 3), // "key"
QT_MOC_LITERAL(11, 199, 6), // "new_id"
QT_MOC_LITERAL(12, 206, 8), // "cooldown"
QT_MOC_LITERAL(13, 215, 11), // "description"
QT_MOC_LITERAL(14, 227, 5), // "image"
QT_MOC_LITERAL(15, 233, 6), // "remove"
QT_MOC_LITERAL(16, 240, 7), // "getRune"
QT_MOC_LITERAL(17, 248, 9), // "parent_id"
QT_MOC_LITERAL(18, 258, 11), // "itemHandler"
QT_MOC_LITERAL(19, 270, 8), // "item_key"
QT_MOC_LITERAL(20, 279, 4), // "name"
QT_MOC_LITERAL(21, 284, 9), // "plaintext"
QT_MOC_LITERAL(22, 294, 10), // "itemSelect"
QT_MOC_LITERAL(23, 305, 3), // "tag"
QT_MOC_LITERAL(24, 309, 3), // "add"
QT_MOC_LITERAL(25, 313, 14), // "championSelect"
QT_MOC_LITERAL(26, 328, 9), // "userLogin"
QT_MOC_LITERAL(27, 338, 8), // "password"
QT_MOC_LITERAL(28, 347, 7), // "isLogin"
QT_MOC_LITERAL(29, 355, 12), // "getMatchData"
QT_MOC_LITERAL(30, 368, 8), // "match_id"
QT_MOC_LITERAL(31, 377, 15), // "getChampionStat"
QT_MOC_LITERAL(32, 393, 12), // "champion_key"
QT_MOC_LITERAL(33, 406, 15), // "getChampionInfo"
QT_MOC_LITERAL(34, 422, 19), // "championStathandler"
QT_MOC_LITERAL(35, 442, 5), // "armor"
QT_MOC_LITERAL(36, 448, 13), // "armorperlevel"
QT_MOC_LITERAL(37, 462, 12), // "attackdamage"
QT_MOC_LITERAL(38, 475, 20), // "attackdamageperlevel"
QT_MOC_LITERAL(39, 496, 11), // "attackrange"
QT_MOC_LITERAL(40, 508, 17), // "attackspeedoffset"
QT_MOC_LITERAL(41, 526, 19), // "attackspeedperlevel"
QT_MOC_LITERAL(42, 546, 4), // "crit"
QT_MOC_LITERAL(43, 551, 12), // "critperlevel"
QT_MOC_LITERAL(44, 564, 2), // "hp"
QT_MOC_LITERAL(45, 567, 10), // "hpperlevel"
QT_MOC_LITERAL(46, 578, 7), // "hpregen"
QT_MOC_LITERAL(47, 586, 15), // "hpregenperlevel"
QT_MOC_LITERAL(48, 602, 9), // "movespeed"
QT_MOC_LITERAL(49, 612, 2), // "mp"
QT_MOC_LITERAL(50, 615, 10), // "mpperlevel"
QT_MOC_LITERAL(51, 626, 7), // "mpregen"
QT_MOC_LITERAL(52, 634, 15), // "mpregenperlevel"
QT_MOC_LITERAL(53, 650, 10), // "spellblock"
QT_MOC_LITERAL(54, 661, 18), // "spellblockperlevel"
QT_MOC_LITERAL(55, 680, 19), // "championInfohandler"
QT_MOC_LITERAL(56, 700, 11), // "info_attack"
QT_MOC_LITERAL(57, 712, 12), // "info_defense"
QT_MOC_LITERAL(58, 725, 15), // "info_difficulty"
QT_MOC_LITERAL(59, 741, 10), // "info_magic"
QT_MOC_LITERAL(60, 752, 15), // "championhandler"
QT_MOC_LITERAL(61, 768, 5), // "blurb"
QT_MOC_LITERAL(62, 774, 5), // "title"
QT_MOC_LITERAL(63, 780, 9), // "listModel"
QT_MOC_LITERAL(64, 790, 17), // "baseRuneListModel"
QT_MOC_LITERAL(65, 808, 13), // "itemListModel"
QT_MOC_LITERAL(66, 822, 12), // "itemTagModel"
QT_MOC_LITERAL(67, 835, 13), // "championModel"
QT_MOC_LITERAL(68, 849, 16), // "championTagModel"
QT_MOC_LITERAL(69, 866, 14) // "matchListModel"

    },
    "Summoner\0itemTagModelChanged\0\0"
    "listModelChanged\0itemListModelChanged\0"
    "baseRuneListModelChanged\0"
    "onChampionListModelChanged\0"
    "onChampionTagListModelChanged\0"
    "onMatchListModelChanged\0summonerSpellhandler\0"
    "key\0new_id\0cooldown\0description\0image\0"
    "remove\0getRune\0parent_id\0itemHandler\0"
    "item_key\0name\0plaintext\0itemSelect\0"
    "tag\0add\0championSelect\0userLogin\0"
    "password\0isLogin\0getMatchData\0match_id\0"
    "getChampionStat\0champion_key\0"
    "getChampionInfo\0championStathandler\0"
    "armor\0armorperlevel\0attackdamage\0"
    "attackdamageperlevel\0attackrange\0"
    "attackspeedoffset\0attackspeedperlevel\0"
    "crit\0critperlevel\0hp\0hpperlevel\0hpregen\0"
    "hpregenperlevel\0movespeed\0mp\0mpperlevel\0"
    "mpregen\0mpregenperlevel\0spellblock\0"
    "spellblockperlevel\0championInfohandler\0"
    "info_attack\0info_defense\0info_difficulty\0"
    "info_magic\0championhandler\0blurb\0title\0"
    "listModel\0baseRuneListModel\0itemListModel\0"
    "itemTagModel\0championModel\0championTagModel\0"
    "matchListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Summoner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       7,  240, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,
       8,    0,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    6,  116,    2, 0x0a /* Public */,
      16,    1,  129,    2, 0x0a /* Public */,
      18,    5,  132,    2, 0x0a /* Public */,
      22,    2,  143,    2, 0x0a /* Public */,
      25,    2,  148,    2, 0x0a /* Public */,
      26,    3,  153,    2, 0x0a /* Public */,
      29,    1,  160,    2, 0x0a /* Public */,
      31,    1,  163,    2, 0x0a /* Public */,
      33,    1,  166,    2, 0x0a /* Public */,
      34,   22,  169,    2, 0x0a /* Public */,
      55,    6,  214,    2, 0x0a /* Public */,
      60,    6,  227,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   10,   11,   12,   13,   14,   15,
    QMetaType::QVariant, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   19,   14,   20,   21,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   27,   28,
    QMetaType::QVariant, QMetaType::Int,   30,
    QMetaType::QVariant, QMetaType::Int,   32,
    QMetaType::QVariant, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Bool,   32,   35,   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,   47,   48,   49,   50,   51,   52,   53,   54,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   32,   56,   57,   58,   59,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   32,   61,   14,   20,   62,   15,

 // properties: name, type, flags
      63, QMetaType::QVariant, 0x00495001,
      64, QMetaType::QVariant, 0x00495001,
      65, QMetaType::QVariant, 0x00495001,
      66, QMetaType::QVariant, 0x00495001,
      67, QMetaType::QVariant, 0x00495001,
      68, QMetaType::QVariant, 0x00495001,
      69, QMetaType::QVariant, 0x00495001,

 // properties: notify_signal_id
       1,
       3,
       2,
       0,
       4,
       5,
       6,

       0        // eod
};

void Summoner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Summoner *_t = static_cast<Summoner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemTagModelChanged(); break;
        case 1: _t->listModelChanged(); break;
        case 2: _t->itemListModelChanged(); break;
        case 3: _t->baseRuneListModelChanged(); break;
        case 4: _t->onChampionListModelChanged(); break;
        case 5: _t->onChampionTagListModelChanged(); break;
        case 6: _t->onMatchListModelChanged(); break;
        case 7: _t->summonerSpellhandler((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6]))); break;
        case 8: { QVariant _r = _t->getRune((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->itemHandler((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 10: _t->itemSelect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->championSelect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->userLogin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 13: { QVariant _r = _t->getMatchData((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 14: { QVariant _r = _t->getChampionStat((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 15: { QVariant _r = _t->getChampionInfo((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->championStathandler((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const double(*)>(_a[5])),(*reinterpret_cast< const int(*)>(_a[6])),(*reinterpret_cast< const double(*)>(_a[7])),(*reinterpret_cast< const double(*)>(_a[8])),(*reinterpret_cast< const double(*)>(_a[9])),(*reinterpret_cast< const double(*)>(_a[10])),(*reinterpret_cast< const int(*)>(_a[11])),(*reinterpret_cast< const int(*)>(_a[12])),(*reinterpret_cast< const double(*)>(_a[13])),(*reinterpret_cast< const double(*)>(_a[14])),(*reinterpret_cast< const int(*)>(_a[15])),(*reinterpret_cast< const int(*)>(_a[16])),(*reinterpret_cast< const int(*)>(_a[17])),(*reinterpret_cast< const int(*)>(_a[18])),(*reinterpret_cast< const int(*)>(_a[19])),(*reinterpret_cast< const double(*)>(_a[20])),(*reinterpret_cast< const double(*)>(_a[21])),(*reinterpret_cast< const bool(*)>(_a[22]))); break;
        case 17: _t->championInfohandler((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6]))); break;
        case 18: _t->championhandler((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Summoner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Summoner::itemTagModelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Summoner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Summoner::listModelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Summoner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Summoner::itemListModelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Summoner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Summoner::baseRuneListModelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Summoner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Summoner::onChampionListModelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Summoner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Summoner::onChampionTagListModelChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Summoner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Summoner::onMatchListModelChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Summoner *_t = static_cast<Summoner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->getListModel(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->getBaseRuneListModel(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->getItemListModel(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->getItemTagModel(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->getChampionListModel(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = _t->getChampionTagListModel(); break;
        case 6: *reinterpret_cast< QVariant*>(_v) = _t->getMatchListModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Summoner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Summoner.data,
      qt_meta_data_Summoner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Summoner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Summoner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Summoner.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Summoner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Summoner::itemTagModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Summoner::listModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Summoner::itemListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Summoner::baseRuneListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Summoner::onChampionListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Summoner::onChampionTagListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Summoner::onMatchListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
