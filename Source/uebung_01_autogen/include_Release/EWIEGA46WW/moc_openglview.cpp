/****************************************************************************
** Meta object code from reading C++ file 'openglview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Framework_OpenGL_OFF_LSA_Qt6_Legacy_Window/openglview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openglview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
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
struct qt_meta_stringdata_CLASSOpenGLViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOpenGLViewENDCLASS = QtMocHelpers::stringData(
    "OpenGLView",
    "fpsCountChanged",
    "",
    "newFps",
    "triangleCountChanged",
    "newTriangles",
    "setDefaults",
    "reInitializeObjects",
    "objectAmount",
    "refreshFpsCounter",
    "recalcNormals",
    "weightByAngle",
    "triggerLightMovement",
    "shouldMove",
    "triggerNormalRendering",
    "shouldRender",
    "triggerRenderOverClock",
    "shouldOverclock",
    "cameraMoves",
    "deltaX",
    "deltaY",
    "deltaZ",
    "cameraRotates"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOpenGLViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,
       4,    1,  113,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  116,    2, 0x0a,    5 /* Public */,
       7,    1,  117,    2, 0x0a,    6 /* Public */,
       7,    0,  120,    2, 0x2a,    8 /* Public | MethodCloned */,
       9,    0,  121,    2, 0x0a,    9 /* Public */,
      10,    1,  122,    2, 0x0a,   10 /* Public */,
      10,    0,  125,    2, 0x2a,   12 /* Public | MethodCloned */,
      12,    1,  126,    2, 0x0a,   13 /* Public */,
      12,    0,  129,    2, 0x2a,   15 /* Public | MethodCloned */,
      14,    1,  130,    2, 0x0a,   16 /* Public */,
      14,    0,  133,    2, 0x2a,   18 /* Public | MethodCloned */,
      16,    1,  134,    2, 0x0a,   19 /* Public */,
      16,    0,  137,    2, 0x2a,   21 /* Public | MethodCloned */,
      18,    3,  138,    2, 0x0a,   22 /* Public */,
      22,    2,  145,    2, 0x0a,   26 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   19,   20,   21,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   19,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject OpenGLView::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSOpenGLViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOpenGLViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOpenGLViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OpenGLView, std::true_type>,
        // method 'fpsCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'triangleCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reInitializeObjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'reInitializeObjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshFpsCounter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recalcNormals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'recalcNormals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggerLightMovement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'triggerLightMovement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggerNormalRendering'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'triggerNormalRendering'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggerRenderOverClock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'triggerRenderOverClock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cameraMoves'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'cameraRotates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>
    >,
    nullptr
} };

void OpenGLView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenGLView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fpsCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->triangleCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setDefaults(); break;
        case 3: _t->reInitializeObjects((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->reInitializeObjects(); break;
        case 5: _t->refreshFpsCounter(); break;
        case 6: _t->recalcNormals((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->recalcNormals(); break;
        case 8: _t->triggerLightMovement((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->triggerLightMovement(); break;
        case 10: _t->triggerNormalRendering((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->triggerNormalRendering(); break;
        case 12: _t->triggerRenderOverClock((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->triggerRenderOverClock(); break;
        case 14: _t->cameraMoves((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 15: _t->cameraRotates((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpenGLView::*)(int );
            if (_t _q_method = &OpenGLView::fpsCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpenGLView::*)(int );
            if (_t _q_method = &OpenGLView::triangleCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OpenGLView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenGLView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOpenGLViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int OpenGLView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void OpenGLView::fpsCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenGLView::triangleCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
