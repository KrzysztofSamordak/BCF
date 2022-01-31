/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../BCF/FolderStats/dialog.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    const uint offsetsAndSize[44];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 6), // "Dialog"
QT_MOC_LITERAL(7, 11), // "PathChanged"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 11), // "std::string"
QT_MOC_LITERAL(32, 8), // "newValue"
QT_MOC_LITERAL(41, 15), // "CountSubFolders"
QT_MOC_LITERAL(57, 6), // "option"
QT_MOC_LITERAL(64, 19), // "on_treeView_clicked"
QT_MOC_LITERAL(84, 11), // "QModelIndex"
QT_MOC_LITERAL(96, 5), // "index"
QT_MOC_LITERAL(102, 36), // "on_CountSubFolderspushButton_..."
QT_MOC_LITERAL(139, 32), // "on_CountFolderpushButton_clicked"
QT_MOC_LITERAL(172, 29), // "handleViewListOfFilesInFolder"
QT_MOC_LITERAL(202, 22), // "std::list<std::string>"
QT_MOC_LITERAL(225, 19), // "ListOfFilesInFolder"
QT_MOC_LITERAL(245, 20), // "handleViewRowsNumber"
QT_MOC_LITERAL(266, 33), // "std::map<std::string,std::str..."
QT_MOC_LITERAL(300, 13), // "RowsNumberMap"
QT_MOC_LITERAL(314, 13), // "NumberOfLines"
QT_MOC_LITERAL(328, 15), // "DoneCountingAll"
QT_MOC_LITERAL(344, 6), // "number"
QT_MOC_LITERAL(351, 5) // "files"

    },
    "Dialog\0PathChanged\0\0std::string\0"
    "newValue\0CountSubFolders\0option\0"
    "on_treeView_clicked\0QModelIndex\0index\0"
    "on_CountSubFolderspushButton_clicked\0"
    "on_CountFolderpushButton_clicked\0"
    "handleViewListOfFilesInFolder\0"
    "std::list<std::string>\0ListOfFilesInFolder\0"
    "handleViewRowsNumber\0"
    "std::map<std::string,std::string>\0"
    "RowsNumberMap\0NumberOfLines\0DoneCountingAll\0"
    "number\0files"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    1,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    2, 0x08,    5 /* Private */,
      10,    0,   71,    2, 0x08,    7 /* Private */,
      11,    0,   72,    2, 0x08,    8 /* Private */,
      12,    1,   73,    2, 0x0a,    9 /* Public */,
      15,    2,   76,    2, 0x0a,   11 /* Public */,
      19,    2,   81,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PathChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 1: _t->CountSubFolders((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_treeView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_CountSubFolderspushButton_clicked(); break;
        case 4: _t->on_CountFolderpushButton_clicked(); break;
        case 5: _t->handleViewListOfFilesInFolder((*reinterpret_cast< std::list<std::string>(*)>(_a[1]))); break;
        case 6: _t->handleViewRowsNumber((*reinterpret_cast< std::map<std::string,std::string>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->DoneCountingAll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dialog::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::PathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::CountSubFolders)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog.offsetsAndSize,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Dialog_t
, QtPrivate::TypeAndForceComplete<Dialog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::list<std::string>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::map<std::string,std::string>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Dialog::PathChanged(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::CountSubFolders(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
