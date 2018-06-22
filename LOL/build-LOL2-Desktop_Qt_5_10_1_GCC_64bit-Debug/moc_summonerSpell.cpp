/****************************************************************************
** Meta object code from reading C++ file 'summonerSpell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LOL2/summonerSpell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'summonerSpell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SummonerSpell_t {
    QByteArrayData data[12];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SummonerSpell_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SummonerSpell_t qt_meta_stringdata_SummonerSpell = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SummonerSpell"
QT_MOC_LITERAL(1, 14, 15), // "spellKeyChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "nameChanged"
QT_MOC_LITERAL(4, 43, 12), // "imageChanged"
QT_MOC_LITERAL(5, 56, 18), // "descriptionChanged"
QT_MOC_LITERAL(6, 75, 15), // "cooldownChanged"
QT_MOC_LITERAL(7, 91, 8), // "spellKey"
QT_MOC_LITERAL(8, 100, 4), // "name"
QT_MOC_LITERAL(9, 105, 5), // "image"
QT_MOC_LITERAL(10, 111, 11), // "description"
QT_MOC_LITERAL(11, 123, 8) // "cooldown"

    },
    "SummonerSpell\0spellKeyChanged\0\0"
    "nameChanged\0imageChanged\0descriptionChanged\0"
    "cooldownChanged\0spellKey\0name\0image\0"
    "description\0cooldown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SummonerSpell[] = {

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
       8, QMetaType::QString, 0x00495001,
       9, QMetaType::QString, 0x00495001,
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void SummonerSpell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SummonerSpell *_t = static_cast<SummonerSpell *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->spellKeyChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->imageChanged(); break;
        case 3: _t->descriptionChanged(); break;
        case 4: _t->cooldownChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SummonerSpell::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SummonerSpell::spellKeyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SummonerSpell::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SummonerSpell::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SummonerSpell::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SummonerSpell::imageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SummonerSpell::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SummonerSpell::descriptionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SummonerSpell::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SummonerSpell::cooldownChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SummonerSpell *_t = static_cast<SummonerSpell *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getSpellKey(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getImage(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getDescription(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getCooldown(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SummonerSpell::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SummonerSpell.data,
      qt_meta_data_SummonerSpell,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SummonerSpell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SummonerSpell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SummonerSpell.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SummonerSpell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SummonerSpell::spellKeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SummonerSpell::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SummonerSpell::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SummonerSpell::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SummonerSpell::cooldownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
