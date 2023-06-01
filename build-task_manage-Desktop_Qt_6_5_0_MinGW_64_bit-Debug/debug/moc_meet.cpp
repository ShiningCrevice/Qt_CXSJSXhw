/****************************************************************************
** Meta object code from reading C++ file 'meet.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../task_manage/meet.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meet.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMeetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMeetENDCLASS = QtMocHelpers::stringData(
    "Meet",
    "showMain",
    "",
    "on_pushButton_2_clicked",
    "on_pushButton_clicked",
    "on_lineEdit_5_editingFinished",
    "on_lineEdit_4_editingFinished",
    "on_dateEdit_userDateChanged",
    "date",
    "on_timeEdit_userTimeChanged",
    "time",
    "on_timeEdit_2_userTimeChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMeetENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[5];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[22];
    char stringdata5[30];
    char stringdata6[30];
    char stringdata7[28];
    char stringdata8[5];
    char stringdata9[28];
    char stringdata10[5];
    char stringdata11[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMeetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMeetENDCLASS_t qt_meta_stringdata_CLASSMeetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Meet"
        QT_MOC_LITERAL(5, 8),  // "showMain"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(39, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(61, 29),  // "on_lineEdit_5_editingFinished"
        QT_MOC_LITERAL(91, 29),  // "on_lineEdit_4_editingFinished"
        QT_MOC_LITERAL(121, 27),  // "on_dateEdit_userDateChanged"
        QT_MOC_LITERAL(149, 4),  // "date"
        QT_MOC_LITERAL(154, 27),  // "on_timeEdit_userTimeChanged"
        QT_MOC_LITERAL(182, 4),  // "time"
        QT_MOC_LITERAL(187, 29)   // "on_timeEdit_2_userTimeChanged"
    },
    "Meet",
    "showMain",
    "",
    "on_pushButton_2_clicked",
    "on_pushButton_clicked",
    "on_lineEdit_5_editingFinished",
    "on_lineEdit_4_editingFinished",
    "on_dateEdit_userDateChanged",
    "date",
    "on_timeEdit_userTimeChanged",
    "time",
    "on_timeEdit_2_userTimeChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMeetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    1,   67,    2, 0x08,    6 /* Private */,
       9,    1,   70,    2, 0x08,    8 /* Private */,
      11,    1,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    8,
    QMetaType::Void, QMetaType::QTime,   10,
    QMetaType::Void, QMetaType::QTime,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject Meet::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMeetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMeetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMeetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Meet, std::true_type>,
        // method 'showMain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_5_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_4_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dateEdit_userDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'on_timeEdit_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'on_timeEdit_2_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>
    >,
    nullptr
} };

void Meet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Meet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showMain(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_lineEdit_5_editingFinished(); break;
        case 4: _t->on_lineEdit_4_editingFinished(); break;
        case 5: _t->on_dateEdit_userDateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 6: _t->on_timeEdit_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 7: _t->on_timeEdit_2_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Meet::*)();
            if (_t _q_method = &Meet::showMain; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Meet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Meet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMeetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Meet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Meet::showMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
