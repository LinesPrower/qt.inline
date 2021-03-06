//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsTransform is pure virtual: true
// QGraphicsTransform has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsTransform : public QGraphicsTransform {
public:
  virtual ~MyQGraphicsTransform() {}
// void QGraphicsTransform(QObject *)
MyQGraphicsTransform(QObject * parent) : QGraphicsTransform(parent) {}
// Protected Visibility=Default Availability=Available
// void update()
  virtual void update() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"update", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTransform::update();
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:66
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsTransform6updateEv(void *this_) {
  ((QGraphicsTransform*)this_)->QGraphicsTransform::update();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QGraphicsTransform10metaObjectEv(void *this_) {
  return (void*)((QGraphicsTransform*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:60
// [-2] void QGraphicsTransform(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsTransformC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsTransform*)(0);
  return 0; // new MyQGraphicsTransform(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:61
// [-2] void ~QGraphicsTransform()
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsTransformD2Ev(void *this_) {
  delete (QGraphicsTransform*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:63
// [-2] void applyTo(QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZNK18QGraphicsTransform7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsTransform*)this_)->applyTo(matrix);
}

//  main block end
