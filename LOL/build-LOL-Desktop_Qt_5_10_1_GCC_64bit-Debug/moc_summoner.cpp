/****************************************************************************
** Meta object code from reading C++ file 'summoner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LOL/summoner.h"
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
    QByteArrayData data[34];
    char stringdata0[417];
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
QT_MOC_LITERAL(8, 150, 20), // "summonerSpellhandler"
QT_MOC_LITERAL(9, 171, 3), // "key"
QT_MOC_LITERAL(10, 175, 6), // "new_id"
QT_MOC_LITERAL(11, 182, 8), // "cooldown"
QT_MOC_LITERAL(12, 191, 11), // "description"
QT_MOC_LITERAL(13, 203, 5), // "image"
QT_MOC_LITERAL(14, 209, 6), // "remove"
QT_MOC_LITERAL(15, 216, 7), // "getRune"
QT_MOC_LITERAL(16, 224, 9), // "parent_id"
QT_MOC_LITERAL(17, 234, 11), // "itemHandler"
QT_MOC_LITERAL(18, 246, 8), // "item_key"
QT_MOC_LITERAL(19, 255, 4), // "name"
QT_MOC_LITERAL(20, 260, 9), // "plaintext"
QT_MOC_LITERAL(21, 270, 10), // "itemSelect"
QT_MOC_LITERAL(22, 281, 3), // "tag"
QT_MOC_LITERAL(23, 285, 3), // "add"
QT_MOC_LITERAL(24, 289, 14), // "championSelect"
QT_MOC_LITERAL(25, 304, 9), // "userLogin"
QT_MOC_LITERAL(26, 314, 8), // "password"
QT_MOC_LITERAL(27, 323, 7), // "isLogin"
QT_MOC_LITERAL(28, 331, 9), // "listModel"
QT_MOC_LITERAL(29, 341, 17), // "baseRuneListModel"
QT_MOC_LITERAL(30, 359, 13), // "itemListModel"
QT_MOC_LITERAL(31, 373, 12), // "itemTagModel"
QT_MOC_LITERAL(32, 386, 13), // "championModel"
QT_MOC_LITERAL(33, 400, 16) // "championTagModel"

    },
    "Summoner\0itemTagModelChanged\0\0"
    "listModelChanged\0itemListModelChanged\0"
    "baseRuneListModelChanged\0"
    "onChampionListModelChanged\0"
    "onChampionTagListModelChanged\0"
    "summonerSpellhandler\0key\0new_id\0"
    "cooldown\0description\0image\0remove\0"
    "getRune\0parent_id\0itemHandler\0item_key\0"
    "name\0plaintext\0itemSelect\0tag\0add\0"
    "championSelect\0userLogin\0password\0"
    "isLogin\0listModel\0baseRuneListModel\0"
    "itemListModel\0itemTagModel\0championModel\0"
    "championTagModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Summoner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    6,   80,    2, 0x0a /* Public */,
      15,    1,   93,    2, 0x0a /* Public */,
      17,    5,   96,    2, 0x0a /* Public */,
      21,    2,  107,    2, 0x0a /* Public */,
      24,    2,  112,    2, 0x0a /* Public */,
      25,    3,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    9,   10,   11,   12,   13,   14,
    QMetaType::QVariant, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   18,   13,   19,   20,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   19,   26,   27,

 // properties: name, type, flags
      28, QMetaType::QVariant, 0x00495001,
      29, QMetaType::QVariant, 0x00495001,
      30, QMetaType::QVariant, 0x00495001,
      31, QMetaType::QVariant, 0x00495001,
      32, QMetaType::QVariant, 0x00495001,
      33, QMetaType::QVariant, 0x00495001,

 // properties: notify_signal_id
       1,
       3,
       2,
       0,
       4,
       5,

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
        case 6: _t->summonerSpellhandler((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const bool(*)>(_a[6]))); break;
        case 7: { QVariant _r = _t->getRune((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->itemHandler((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 9: _t->itemSelect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->championSelect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->userLogin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
