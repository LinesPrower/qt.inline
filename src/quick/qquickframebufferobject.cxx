//  header block begin
// since 0x050200
// /usr/include/qt/QtQuick/qquickframebufferobject.h
#ifndef protected
#define protected public
#endif
#include <qquickframebufferobject.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickFramebufferObject is pure virtual: true
// QQuickFramebufferObject has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickFramebufferObject : public QQuickFramebufferObject {
public:
  virtual ~MyQQuickFramebufferObject() {}
// void QQuickFramebufferObject(QQuickItem *)
MyQQuickFramebufferObject(QQuickItem * parent) : QQuickFramebufferObject(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void geometryChanged(const QRectF &, const QRectF &)
  virtual void geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"geometryChanged", &handled, 2, (uint64_t)&newGeometry, (uint64_t)&oldGeometry, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQuickFramebufferObject::geometryChanged(newGeometry, oldGeometry);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:93
// [-2] void geometryChanged(const QRectF &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject15geometryChangedERK6QRectFS2_(void *this_, QRectF* newGeometry, QRectF* oldGeometry) {
  ((QQuickFramebufferObject*)this_)->QQuickFramebufferObject::geometryChanged(*newGeometry, *oldGeometry);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QQuickFramebufferObject10metaObjectEv(void *this_) {
  return (void*)((QQuickFramebufferObject*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:78
// [-2] void QQuickFramebufferObject(QQuickItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QQuickFramebufferObjectC2EP10QQuickItem(QQuickItem * parent) {
  auto _nilp = (MyQQuickFramebufferObject*)(0);
  return 0; // new MyQQuickFramebufferObject(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:80
// [1] bool textureFollowsItemSize()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QQuickFramebufferObject22textureFollowsItemSizeEv(void *this_) {
  return (bool)((QQuickFramebufferObject*)this_)->textureFollowsItemSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:81
// [-2] void setTextureFollowsItemSize(bool)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject25setTextureFollowsItemSizeEb(void *this_, bool follows) {
  ((QQuickFramebufferObject*)this_)->setTextureFollowsItemSize(follows);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:83
// [1] bool mirrorVertically()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QQuickFramebufferObject16mirrorVerticallyEv(void *this_) {
  return (bool)((QQuickFramebufferObject*)this_)->mirrorVertically();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:84
// [-2] void setMirrorVertically(bool)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject19setMirrorVerticallyEb(void *this_, bool enable) {
  ((QQuickFramebufferObject*)this_)->setMirrorVertically(enable);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:86
// [8] QQuickFramebufferObject::Renderer * createRenderer()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QQuickFramebufferObject14createRendererEv(void *this_) {
  return (void*)((QQuickFramebufferObject*)this_)->createRenderer();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:88
// [1] bool isTextureProvider()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QQuickFramebufferObject17isTextureProviderEv(void *this_) {
  return (bool)((QQuickFramebufferObject*)this_)->isTextureProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:89
// [8] QSGTextureProvider * textureProvider()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QQuickFramebufferObject15textureProviderEv(void *this_) {
  return (void*)((QQuickFramebufferObject*)this_)->textureProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:90
// [-2] void releaseResources()
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject16releaseResourcesEv(void *this_) {
  ((QQuickFramebufferObject*)this_)->releaseResources();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:99
// [-2] void textureFollowsItemSizeChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject29textureFollowsItemSizeChangedEb(void *this_, bool arg0) {
  ((QQuickFramebufferObject*)this_)->textureFollowsItemSizeChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickframebufferobject.h:100
// [-2] void mirrorVerticallyChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObject23mirrorVerticallyChangedEb(void *this_, bool arg0) {
  ((QQuickFramebufferObject*)this_)->mirrorVerticallyChanged(arg0);
}


extern "C" Q_DECL_EXPORT
void C_ZN23QQuickFramebufferObjectD2Ev(void *this_) {
  delete (QQuickFramebufferObject*)(this_);
}
//  main block end
