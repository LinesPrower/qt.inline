//  header block begin
// /usr/include/qt/QtGui/qpolygon.h
#ifndef protected
#define protected public
#endif
#include <qpolygon.h>
#include <QtGui>
#include "callback_inherit.h"

// QPolygonF is pure virtual: false
// QPolygonF has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPolygonF : public QPolygonF {
public:
  virtual ~MyQPolygonF() {}
// void QPolygonF()
MyQPolygonF() : QPolygonF() {}
// void QPolygonF(int)
MyQPolygonF(int size) : QPolygonF(size) {}
// void QPolygonF(const QRectF &)
MyQPolygonF(const QRectF & r) : QPolygonF(r) {}
// void QPolygonF(const QPolygon &)
MyQPolygonF(const QPolygon & a) : QPolygonF(a) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:144
// [-2] void QPolygonF()
extern "C" Q_DECL_EXPORT
void* C_ZN9QPolygonFC2Ev() {
  return  new QPolygonF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:145
// [-2] void ~QPolygonF()
extern "C" Q_DECL_EXPORT
void C_ZN9QPolygonFD2Ev(void *this_) {
  delete (QPolygonF*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:146
// [-2] void QPolygonF(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPolygonFC2Ei(int size) {
  return  new QPolygonF(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:151
// [-2] void QPolygonF(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPolygonFC2ERK6QRectF(QRectF* r) {
  return  new QPolygonF(*r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:152
// [-2] void QPolygonF(const QPolygon &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPolygonFC2ERK8QPolygon(QPolygon* a) {
  return  new QPolygonF(*a);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:156
// [8] QPolygonF & operator=(QPolygonF &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPolygonFaSEOS_(void *this_, QPolygonF && other) {
  auto& rv = ((QPolygonF*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:158
// [8] QPolygonF & operator=(const QPolygonF &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QPolygonFaSERKS_(void *this_, QPolygonF* other) {
  auto& rv = ((QPolygonF*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qpolygon.h:159
// [-2] void swap(QPolygonF &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN9QPolygonF4swapERS_(void *this_, QPolygonF* other) {
  ((QPolygonF*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:163
// [-2] void translate(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN9QPolygonF9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPolygonF*)this_)->translate(dx, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:164
// [-2] void translate(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN9QPolygonF9translateERK7QPointF(void *this_, QPointF* offset) {
  ((QPolygonF*)this_)->translate(*offset);
}

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpolygon.h:166
// [8] QPolygonF translated(qreal, qreal)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPolygonF10translatedEdd(void *this_, qreal dx, qreal dy) {
  auto rv = ((QPolygonF*)this_)->translated(dx, dy);
return new QPolygonF(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpolygon.h:167
// [8] QPolygonF translated(const QPointF &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPolygonF10translatedERK7QPointF(void *this_, QPointF* offset) {
  auto rv = ((QPolygonF*)this_)->translated(*offset);
return new QPolygonF(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:169
// [8] QPolygon toPolygon()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPolygonF9toPolygonEv(void *this_) {
  auto rv = ((QPolygonF*)this_)->toPolygon();
return new QPolygon(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:171
// [1] bool isClosed()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QPolygonF8isClosedEv(void *this_) {
  return (bool)((QPolygonF*)this_)->isClosed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:173
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPolygonF12boundingRectEv(void *this_) {
  auto rv = ((QPolygonF*)this_)->boundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpolygon.h:175
// [1] bool containsPoint(const QPointF &, Qt::FillRule)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK9QPolygonF13containsPointERK7QPointFN2Qt8FillRuleE(void *this_, QPointF* pt, Qt::FillRule fillRule) {
  return (bool)((QPolygonF*)this_)->containsPoint(*pt, fillRule);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpolygon.h:177
// [8] QPolygonF united(const QPolygonF &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPolygonF6unitedERKS_(void *this_, QPolygonF* r) {
  auto rv = ((QPolygonF*)this_)->united(*r);
return new QPolygonF(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpolygon.h:178
// [8] QPolygonF intersected(const QPolygonF &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPolygonF11intersectedERKS_(void *this_, QPolygonF* r) {
  auto rv = ((QPolygonF*)this_)->intersected(*r);
return new QPolygonF(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpolygon.h:179
// [8] QPolygonF subtracted(const QPolygonF &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK9QPolygonF10subtractedERKS_(void *this_, QPolygonF* r) {
  auto rv = ((QPolygonF*)this_)->subtracted(*r);
return new QPolygonF(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qpolygon.h:181
// [1] bool intersects(const QPolygonF &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK9QPolygonF10intersectsERKS_(void *this_, QPolygonF* r) {
  return (bool)((QPolygonF*)this_)->intersects(*r);
}
#endif // QT_VERSION >= 0x050a00

//  main block end
