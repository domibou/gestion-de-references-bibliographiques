/****************************************************************************
** Meta object code from reading C++ file 'BibliographieInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BibliographieInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BibliographieInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BibliographieInterface_t {
    QByteArrayData data[7];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BibliographieInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BibliographieInterface_t qt_meta_stringdata_BibliographieInterface = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BibliographieInterface"
QT_MOC_LITERAL(1, 23, 20), // "dialogAjouterJournal"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 20), // "dialogAjouterOuvrage"
QT_MOC_LITERAL(4, 66, 24), // "dialogSupprimerReference"
QT_MOC_LITERAL(5, 91, 9), // "affichage"
QT_MOC_LITERAL(6, 101, 11) // "std::string"

    },
    "BibliographieInterface\0dialogAjouterJournal\0"
    "\0dialogAjouterOuvrage\0dialogSupprimerReference\0"
    "affichage\0std::string"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BibliographieInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6,

       0        // eod
};

void BibliographieInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BibliographieInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dialogAjouterJournal(); break;
        case 1: _t->dialogAjouterOuvrage(); break;
        case 2: _t->dialogSupprimerReference(); break;
        case 3: { std::string _r = _t->affichage();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BibliographieInterface::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_BibliographieInterface.data,
    qt_meta_data_BibliographieInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BibliographieInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BibliographieInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BibliographieInterface.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BibliographieInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
