/****************************************************************************
** Meta object code from reading C++ file 'spi_worker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUI/spi_worker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spi_worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SPI_worker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      30,   23,   11,   11, 0x05,
      53,   43,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   74,   11,   11, 0x0a,
      96,   74,   11,   11, 0x0a,
     112,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SPI_worker[] = {
    "SPI_worker\0\0finished()\0status\0"
    "succes(bool)\0conStatus\0containerStatus(int)\0"
    "choice\0setChoice(int)\0sendChoice(int)\0"
    "containerStatus()\0"
};

void SPI_worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SPI_worker *_t = static_cast<SPI_worker *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->succes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->containerStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setChoice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendChoice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->containerStatus(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SPI_worker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SPI_worker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SPI_worker,
      qt_meta_data_SPI_worker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SPI_worker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SPI_worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SPI_worker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SPI_worker))
        return static_cast<void*>(const_cast< SPI_worker*>(this));
    return QObject::qt_metacast(_clname);
}

int SPI_worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SPI_worker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SPI_worker::succes(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SPI_worker::containerStatus(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
