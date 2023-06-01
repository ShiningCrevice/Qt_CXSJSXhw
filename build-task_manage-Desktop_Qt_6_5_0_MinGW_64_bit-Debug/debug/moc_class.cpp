/****************************************************************************
** Meta object code from reading C++ file 'class.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../task_manage/class.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'class.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSClassENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClassENDCLASS = QtMocHelpers::stringData(
    "Class",
    "showMain",
    "",
    "on_pushButton_clicked",
    "on_pushButton_2_clicked",
    "on_lineEdit_3_editingFinished",
    "on_lineEdit_4_editingFinished",
    "on_lineEdit_5_editingFinished",
    "on_timeEdit_userTimeChanged",
    "time",
    "on_timeEdit_2_userTimeChanged",
    "on_comboBox_activated",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClassENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[6];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[24];
    char stringdata5[30];
    char stringdata6[30];
    char stringdata7[30];
    char stringdata8[28];
    char stringdata9[5];
    char stringdata10[30];
    char stringdata11[22];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClassENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClassENDCLASS_t qt_meta_stringdata_CLASSClassENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Class"
        QT_MOC_LITERAL(6, 8),  // "showMain"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(38, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(62, 29),  // "on_lineEdit_3_editingFinished"
        QT_MOC_LITERAL(92, 29),  // "on_lineEdit_4_editingFinished"
        QT_MOC_LITERAL(122, 29),  // "on_lineEdit_5_editingFinished"
        QT_MOC_LITERAL(152, 27),  // "on_timeEdit_userTimeChanged"
        QT_MOC_LITERAL(180, 4),  // "time"
        QT_MOC_LITERAL(185, 29),  // "on_timeEdit_2_userTimeChanged"
        QT_MOC_LITERAL(215, 21),  // "on_comboBox_activated"
        QT_MOC_LITERAL(237, 5)   // "index"
    },
    "Class",
    "showMain",
    "",
    "on_pushButton_clicked",
    "on_pushButton_2_clicked",
    "on_lineEdit_3_editingFinished",
    "on_lineEdit_4_editingFinished",
    "on_lineEdit_5_editingFinished",
    "on_timeEdit_userTimeChanged",
    "time",
    "on_timeEdit_2_userTimeChanged",
    "on_comboBox_activated",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClassENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    1,   74,    2, 0x08,    7 /* Private */,
      10,    1,   77,    2, 0x08,    9 /* Private */,
      11,    1,   80,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,    9,
    QMetaType::Void, QMetaType::QTime,    9,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject Class::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSClassENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClassENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClassENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Class, std::true_type>,
        // method 'showMain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_3_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_4_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_5_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_timeEdit_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'on_timeEdit_2_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'on_comboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Class::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Class *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showMain(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_lineEdit_3_editingFinished(); break;
        case 4: _t->on_lineEdit_4_editingFinished(); break;
        case 5: _t->on_lineEdit_5_editingFinished(); break;
        case 6: _t->on_timeEdit_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 7: _t->on_timeEdit_2_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 8: _t->on_comboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Class::*)();
            if (_t _q_method = &Class::showMain; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Class::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Class::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClassENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Class::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Class::showMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
