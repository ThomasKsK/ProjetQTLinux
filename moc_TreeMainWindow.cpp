/****************************************************************************
** Meta object code from reading C++ file 'TreeMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "TreeMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TreeMainWindow_t {
    QByteArrayData data[10];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TreeMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TreeMainWindow_t qt_meta_stringdata_TreeMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TreeMainWindow"
QT_MOC_LITERAL(1, 15, 27), // "slot_Choisir_Dossier_Racine"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 19), // "slot_Statut_Fichier"
QT_MOC_LITERAL(4, 64, 6), // "p_Path"
QT_MOC_LITERAL(5, 71, 30), // "slot_PopupContextMenu_TreeView"
QT_MOC_LITERAL(6, 102, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 119, 6), // "p_item"
QT_MOC_LITERAL(8, 126, 8), // "p_Column"
QT_MOC_LITERAL(9, 135, 9) // "slot_QUIT"

    },
    "TreeMainWindow\0slot_Choisir_Dossier_Racine\0"
    "\0slot_Statut_Fichier\0p_Path\0"
    "slot_PopupContextMenu_TreeView\0"
    "QTreeWidgetItem*\0p_item\0p_Column\0"
    "slot_QUIT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TreeMainWindow[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    2,   38,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void,

       0        // eod
};

void TreeMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TreeMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_Choisir_Dossier_Racine(); break;
        case 1: _t->slot_Statut_Fichier((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slot_PopupContextMenu_TreeView((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slot_QUIT(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TreeMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TreeMainWindow.data,
    qt_meta_data_TreeMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TreeMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TreeMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TreeMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
