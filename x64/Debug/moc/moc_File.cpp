/****************************************************************************
** Meta object code from reading C++ file 'File.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../File.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'File.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_File_t {
    uint offsetsAndSizes[16];
    char stringdata0[5];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[26];
    char stringdata5[30];
    char stringdata6[28];
    char stringdata7[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_File_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_File_t qt_meta_stringdata_File = {
    {
        QT_MOC_LITERAL(0, 4),  // "File"
        QT_MOC_LITERAL(5, 25),  // "OKPath_pushButton_clicked"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 26),  // "LogPath_pushButton_clicked"
        QT_MOC_LITERAL(59, 25),  // "NGPath_pushButton_clicked"
        QT_MOC_LITERAL(85, 29),  // "INSIDEPath_pushButton_clicked"
        QT_MOC_LITERAL(115, 27),  // "RFIDPath_pushButton_clicked"
        QT_MOC_LITERAL(143, 24)   // "SaveTime_lineEdit_Change"
    },
    "File",
    "OKPath_pushButton_clicked",
    "",
    "LogPath_pushButton_clicked",
    "NGPath_pushButton_clicked",
    "INSIDEPath_pushButton_clicked",
    "RFIDPath_pushButton_clicked",
    "SaveTime_lineEdit_Change"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_File[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,

       0        // eod
};

Q_CONSTINIT const QMetaObject File::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_File.offsetsAndSizes,
    qt_meta_data_File,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_File_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<File, std::true_type>,
        // method 'OKPath_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LogPath_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NGPath_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'INSIDEPath_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RFIDPath_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveTime_lineEdit_Change'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void File::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<File *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OKPath_pushButton_clicked(); break;
        case 1: _t->LogPath_pushButton_clicked(); break;
        case 2: _t->NGPath_pushButton_clicked(); break;
        case 3: _t->INSIDEPath_pushButton_clicked(); break;
        case 4: _t->RFIDPath_pushButton_clicked(); break;
        case 5: { int _r = _t->SaveTime_lineEdit_Change();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *File::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *File::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_File.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int File::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
