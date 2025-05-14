/****************************************************************************
** Meta object code from reading C++ file 'customqwidget_colourstobinarize.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/ui/personalizedWidgets/qWidget/coloursToBinarize/customqwidget_colourstobinarize.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customqwidget_colourstobinarize.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS = QtMocHelpers::stringData(
    "CustomQWidget_ColoursToBinarize",
    "openColorDialog",
    "",
    "deleteWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[32];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS_t qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "CustomQWidget_ColoursToBinarize"
        QT_MOC_LITERAL(32, 15),  // "openColorDialog"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 12)   // "deleteWidget"
    },
    "CustomQWidget_ColoursToBinarize",
    "openColorDialog",
    "",
    "deleteWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCustomQWidget_ColoursToBinarizeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CustomQWidget_ColoursToBinarize::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCustomQWidget_ColoursToBinarizeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CustomQWidget_ColoursToBinarize, std::true_type>,
        // method 'openColorDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CustomQWidget_ColoursToBinarize::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomQWidget_ColoursToBinarize *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openColorDialog(); break;
        case 1: _t->deleteWidget(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CustomQWidget_ColoursToBinarize::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomQWidget_ColoursToBinarize::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCustomQWidget_ColoursToBinarizeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CustomQWidget_ColoursToBinarize::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
