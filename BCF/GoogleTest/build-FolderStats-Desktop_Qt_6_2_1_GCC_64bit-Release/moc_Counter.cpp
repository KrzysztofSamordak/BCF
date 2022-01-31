/****************************************************************************
** Meta object code from reading C++ file 'Counter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../GoogleTest/FolderStats/Counter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Counter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Counter_t {
    const uint offsetsAndSize[34];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Counter_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Counter_t qt_meta_stringdata_Counter = {
    {
QT_MOC_LITERAL(0, 7), // "Counter"
QT_MOC_LITERAL(8, 4), // "Done"
QT_MOC_LITERAL(13, 0), // ""
QT_MOC_LITERAL(14, 22), // "std::list<std::string>"
QT_MOC_LITERAL(37, 13), // "FilesInFolder"
QT_MOC_LITERAL(51, 5), // "Done2"
QT_MOC_LITERAL(57, 33), // "std::map<std::string,std::str..."
QT_MOC_LITERAL(91, 13), // "FilesAndLines"
QT_MOC_LITERAL(105, 13), // "NumberOfLines"
QT_MOC_LITERAL(119, 15), // "DoneCountingAll"
QT_MOC_LITERAL(135, 6), // "number"
QT_MOC_LITERAL(142, 16), // "NumberOfAllFiles"
QT_MOC_LITERAL(159, 29), // "handleMakeListOfFilesInFolder"
QT_MOC_LITERAL(189, 11), // "std::string"
QT_MOC_LITERAL(201, 18), // "TargetLocation_tmp"
QT_MOC_LITERAL(220, 15), // "CountSubFolders"
QT_MOC_LITERAL(236, 6) // "option"

    },
    "Counter\0Done\0\0std::list<std::string>\0"
    "FilesInFolder\0Done2\0"
    "std::map<std::string,std::string>\0"
    "FilesAndLines\0NumberOfLines\0DoneCountingAll\0"
    "number\0NumberOfAllFiles\0"
    "handleMakeListOfFilesInFolder\0std::string\0"
    "TargetLocation_tmp\0CountSubFolders\0"
    "option"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Counter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    2,   47,    2, 0x06,    3 /* Public */,
       9,    2,   52,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   57,    2, 0x0a,    9 /* Public */,
      15,    1,   60,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void Counter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Counter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Done((*reinterpret_cast< std::list<std::string>(*)>(_a[1]))); break;
        case 1: _t->Done2((*reinterpret_cast< std::map<std::string,std::string>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->DoneCountingAll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->handleMakeListOfFilesInFolder((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 4: _t->CountSubFolders((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Counter::*)(std::list<std::string> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Counter::Done)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Counter::*)(std::map<std::string,std::string> , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Counter::Done2)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Counter::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Counter::DoneCountingAll)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Counter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Counter.offsetsAndSize,
    qt_meta_data_Counter,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Counter_t
, QtPrivate::TypeAndForceComplete<Counter, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::list<std::string>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::map<std::string,std::string>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Counter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Counter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Counter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Counter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Counter::Done(std::list<std::string> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Counter::Done2(std::map<std::string,std::string> _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Counter::DoneCountingAll(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
