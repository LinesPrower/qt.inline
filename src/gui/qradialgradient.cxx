//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>

// QRadialGradient is pure virtual: false
// QRadialGradient has virtual projected: false
//  header block end

//  main block begin

class MyQRadialGradient : public QRadialGradient {
public:
  virtual ~MyQRadialGradient() {}
// void QRadialGradient()
MyQRadialGradient() : QRadialGradient() {}
// void QRadialGradient(const class QPointF &, qreal, const class QPointF &)
MyQRadialGradient(const QPointF & center, qreal radius, const QPointF & focalPoint) : QRadialGradient(center, radius, focalPoint) {}
// void QRadialGradient(qreal, qreal, qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal radius, qreal fx, qreal fy) : QRadialGradient(cx, cy, radius, fx, fy) {}
// void QRadialGradient(const class QPointF &, qreal)
MyQRadialGradient(const QPointF & center, qreal radius) : QRadialGradient(center, radius) {}
// void QRadialGradient(qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal radius) : QRadialGradient(cx, cy, radius) {}
// void QRadialGradient(const class QPointF &, qreal, const class QPointF &, qreal)
MyQRadialGradient(const QPointF & center, qreal centerRadius, const QPointF & focalPoint, qreal focalRadius) : QRadialGradient(center, centerRadius, focalPoint, focalRadius) {}
// void QRadialGradient(qreal, qreal, qreal, qreal, qreal, qreal)
MyQRadialGradient(qreal cx, qreal cy, qreal centerRadius, qreal fx, qreal fy, qreal focalRadius) : QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:274
// [-2] void QRadialGradient()
extern "C"
void* C_ZN15QRadialGradientC2Ev() {
  return  new QRadialGradient();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:275
// [-2] void QRadialGradient(const class QPointF &, qreal, const class QPointF &)
extern "C"
void* C_ZN15QRadialGradientC2ERK7QPointFdS2_(QPointF* center, qreal radius, QPointF* focalPoint) {
  return  new QRadialGradient(*center, radius, *focalPoint);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:276
// [-2] void QRadialGradient(qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN15QRadialGradientC2Eddddd(qreal cx, qreal cy, qreal radius, qreal fx, qreal fy) {
  return  new QRadialGradient(cx, cy, radius, fx, fy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:278
// [-2] void QRadialGradient(const class QPointF &, qreal)
extern "C"
void* C_ZN15QRadialGradientC2ERK7QPointFd(QPointF* center, qreal radius) {
  return  new QRadialGradient(*center, radius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:279
// [-2] void QRadialGradient(qreal, qreal, qreal)
extern "C"
void* C_ZN15QRadialGradientC2Eddd(qreal cx, qreal cy, qreal radius) {
  return  new QRadialGradient(cx, cy, radius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:281
// [-2] void QRadialGradient(const class QPointF &, qreal, const class QPointF &, qreal)
extern "C"
void* C_ZN15QRadialGradientC2ERK7QPointFdS2_d(QPointF* center, qreal centerRadius, QPointF* focalPoint, qreal focalRadius) {
  return  new QRadialGradient(*center, centerRadius, *focalPoint, focalRadius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:282
// [-2] void QRadialGradient(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN15QRadialGradientC2Edddddd(qreal cx, qreal cy, qreal centerRadius, qreal fx, qreal fy, qreal focalRadius) {
  return  new QRadialGradient(cx, cy, centerRadius, fx, fy, focalRadius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:284
// [16] QPointF center()
extern "C"
void* C_ZNK15QRadialGradient6centerEv(void *this_) {
  auto rv = ((QRadialGradient*)this_)->center();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:285
// [-2] void setCenter(const class QPointF &)
extern "C"
void C_ZN15QRadialGradient9setCenterERK7QPointF(void *this_, QPointF* center) {
  ((QRadialGradient*)this_)->setCenter(*center);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:286
// [-2] void setCenter(qreal, qreal)
extern "C"
void C_ZN15QRadialGradient9setCenterEdd(void *this_, qreal x, qreal y) {
  ((QRadialGradient*)this_)->setCenter(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:288
// [16] QPointF focalPoint()
extern "C"
void* C_ZNK15QRadialGradient10focalPointEv(void *this_) {
  auto rv = ((QRadialGradient*)this_)->focalPoint();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:289
// [-2] void setFocalPoint(const class QPointF &)
extern "C"
void C_ZN15QRadialGradient13setFocalPointERK7QPointF(void *this_, QPointF* focalPoint) {
  ((QRadialGradient*)this_)->setFocalPoint(*focalPoint);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:290
// [-2] void setFocalPoint(qreal, qreal)
extern "C"
void C_ZN15QRadialGradient13setFocalPointEdd(void *this_, qreal x, qreal y) {
  ((QRadialGradient*)this_)->setFocalPoint(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:292
// [8] qreal radius()
extern "C"
qreal C_ZNK15QRadialGradient6radiusEv(void *this_) {
  return (qreal)((QRadialGradient*)this_)->radius();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:293
// [-2] void setRadius(qreal)
extern "C"
void C_ZN15QRadialGradient9setRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setRadius(radius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:295
// [8] qreal centerRadius()
extern "C"
qreal C_ZNK15QRadialGradient12centerRadiusEv(void *this_) {
  return (qreal)((QRadialGradient*)this_)->centerRadius();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:296
// [-2] void setCenterRadius(qreal)
extern "C"
void C_ZN15QRadialGradient15setCenterRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setCenterRadius(radius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:298
// [8] qreal focalRadius()
extern "C"
qreal C_ZNK15QRadialGradient11focalRadiusEv(void *this_) {
  return (qreal)((QRadialGradient*)this_)->focalRadius();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:299
// [-2] void setFocalRadius(qreal)
extern "C"
void C_ZN15QRadialGradient14setFocalRadiusEd(void *this_, qreal radius) {
  ((QRadialGradient*)this_)->setFocalRadius(radius);
}

extern "C"
void C_ZN15QRadialGradientD2Ev(void *this_) {
  delete (QRadialGradient*)(this_);
}
//  main block end
