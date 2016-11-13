/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUI/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   11,   11,   11, 0x08,
      56,   11,   11,   11, 0x08,
      79,   11,   11,   11, 0x08,
     105,   11,   11,   11, 0x08,
     130,   11,   11,   11, 0x08,
     154,   11,   11,   11, 0x08,
     187,  180,   11,   11, 0x08,
     203,   11,   11,   11, 0x08,
     231,   11,   11,   11, 0x08,
     261,   11,  257,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0choice\0sendChoice(int)\0"
    "on_tmpExit_clicked()\0on_statistik_clicked()\0"
    "on_normalCoffee_clicked()\0"
    "on_waterButton_clicked()\0"
    "on_weakCoffee_clicked()\0"
    "on_strongCoffee_clicked()\0status\0"
    "setSucces(bool)\0on_favoriteCoffee_clicked()\0"
    "on_admin_Button_clicked()\0int\0"
    "mostPopularCoffee()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->sendChoice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_tmpExit_clicked(); break;
        case 2: _t->on_statistik_clicked(); break;
        case 3: _t->on_normalCoffee_clicked(); break;
        case 4: _t->on_waterButton_clicked(); break;
        case 5: _t->on_weakCoffee_clicked(); break;
        case 6: _t->on_strongCoffee_clicked(); break;
        case 7: _t->setSucces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_favoriteCoffee_clicked(); break;
        case 9: _t->on_admin_Button_clicked(); break;
        case 10: { int _r = _t->mostPopularCoffee();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendChoice(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
