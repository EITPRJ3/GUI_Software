/****************************************************************************
** Meta object code from reading C++ file 'spicontroller.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUI_Nikolai/spicontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spicontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpiController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      32,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SpiController[] = {
    "SpiController\0\0orderCoffee(int)\0done()\0"
    "handleResults()\0"
};

void SpiController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpiController *_t = static_cast<SpiController *>(_o);
        switch (_id) {
        case 0: _t->orderCoffee((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->done(); break;
        case 2: _t->handleResults(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpiController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpiController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpiController,
      qt_meta_data_SpiController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpiController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpiController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpiController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpiController))
        return static_cast<void*>(const_cast< SpiController*>(this));
    return QObject::qt_metacast(_clname);
}

int SpiController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SpiController::orderCoffee(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpiController::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
