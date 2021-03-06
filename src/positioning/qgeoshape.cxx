//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeoshape.h
#ifndef protected
#define protected public
#endif
#include <qgeoshape.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoShape is pure virtual: false
// QGeoShape has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGeoShape : public QGeoShape {
public:
  virtual ~MyQGeoShape() {}
// void QGeoShape()
MyQGeoShape() : QGeoShape() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:61
// [-2] void QGeoShape()
extern "C" Q_DECL_EXPORT
void* C_ZN9QGeoShapeC2Ev() {
  return  new QGeoShape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:63
// [-2] void ~QGeoShape()
extern "C" Q_DECL_EXPORT
void C_ZN9QGeoShapeD2Ev(void *this_) {
  delete (QGeoShape*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:73
// [4] QGeoShape::ShapeType type()
extern "C" Q_DECL_EXPORT
QGeoShape::ShapeType C_ZNK9QGeoShape4typeEv(void *this_) {
  return (QGeoShape::ShapeType)((QGeoShape*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:75
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGeoShape7isValidEv(void *this_) {
  return (bool)((QGeoShape*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:76
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGeoShape7isEmptyEv(void *this_) {
  return (bool)((QGeoShape*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:77
// [1] bool contains(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGeoShape8containsERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  return (bool)((QGeoShape*)this_)->contains(*coordinate);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtPositioning/qgeoshape.h:78
// [8] QGeoRectangle boundingGeoRectangle()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK9QGeoShape20boundingGeoRectangleEv(void *this_) {
  auto rv = ((QGeoShape*)this_)->boundingGeoRectangle();
return new QGeoRectangle(rv);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtPositioning/qgeoshape.h:79
// [8] QGeoCoordinate center()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK9QGeoShape6centerEv(void *this_) {
  auto rv = ((QGeoShape*)this_)->center();
return new QGeoCoordinate(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:81
// [-2] void extendShape(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN9QGeoShape11extendShapeERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoShape*)this_)->extendShape(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:83
// [1] bool operator==(const QGeoShape &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGeoShapeeqERKS_(void *this_, QGeoShape* other) {
  return (bool)((QGeoShape*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:84
// [1] bool operator!=(const QGeoShape &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGeoShapeneERKS_(void *this_, QGeoShape* other) {
  return (bool)((QGeoShape*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:86
// [8] QGeoShape & operator=(const QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QGeoShapeaSERKS_(void *this_, QGeoShape* other) {
  auto& rv = ((QGeoShape*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtPositioning/qgeoshape.h:88
// [8] QString toString()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK9QGeoShape8toStringEv(void *this_) {
  auto rv = ((QGeoShape*)this_)->toString();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050500

//  main block end
