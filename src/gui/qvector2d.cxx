//  header block begin
// since 0x040600
// /usr/include/qt/QtGui/qvector2d.h
#ifndef protected
#define protected public
#endif
#include <qvector2d.h>
#include <QtGui>
#include "callback_inherit.h"

// QVector2D is pure virtual: false
// QVector2D has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVector2D : public QVector2D {
public:
  virtual ~MyQVector2D() {}
// void QVector2D()
MyQVector2D() : QVector2D() {}
// void QVector2D(Qt::Initialization)
MyQVector2D(Qt::Initialization arg0) : QVector2D(arg0) {}
// void QVector2D(float, float)
MyQVector2D(float xpos, float ypos) : QVector2D(xpos, ypos) {}
// void QVector2D(const QPoint &)
MyQVector2D(const QPoint & point) : QVector2D(point) {}
// void QVector2D(const QPointF &)
MyQVector2D(const QPointF & point) : QVector2D(point) {}
// void QVector2D(const QVector3D &)
MyQVector2D(const QVector3D & vector) : QVector2D(vector) {}
// void QVector2D(const QVector4D &)
MyQVector2D(const QVector4D & vector) : QVector2D(vector) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:59
// [-2] void QVector2D()
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DC2Ev() {
  return  new QVector2D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:60
// [-2] void QVector2D(Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DC2EN2Qt14InitializationE(Qt::Initialization arg0) {
  return  new QVector2D(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:61
// [-2] void QVector2D(float, float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DC2Eff(float xpos, float ypos) {
  return  new QVector2D(xpos, ypos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:62
// [-2] void QVector2D(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DC2ERK6QPoint(QPoint* point) {
  return  new QVector2D(*point);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:63
// [-2] void QVector2D(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DC2ERK7QPointF(QPointF* point) {
  return  new QVector2D(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:65
// [-2] void QVector2D(const QVector3D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DC2ERK9QVector3D(QVector3D* vector) {
  return  new QVector2D(*vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:68
// [-2] void QVector2D(const QVector4D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DC2ERK9QVector4D(QVector4D* vector) {
  return  new QVector2D(*vector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:71
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QVector2D6isNullEv(void *this_) {
  return (bool)((QVector2D*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:73
// [4] float x()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector2D1xEv(void *this_) {
  return (float)((QVector2D*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:74
// [4] float y()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector2D1yEv(void *this_) {
  return (float)((QVector2D*)this_)->y();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:76
// [-2] void setX(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector2D4setXEf(void *this_, float x) {
  ((QVector2D*)this_)->setX(x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:77
// [-2] void setY(float)
extern "C" Q_DECL_EXPORT
void C_ZN9QVector2D4setYEf(void *this_, float y) {
  ((QVector2D*)this_)->setY(y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:79
// [4] float & operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DixEi(void *this_, int i) {
  auto& rv = ((QVector2D*)this_)->operator[](i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:80
// [4] float operator[](int)
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector2DixEi(void *this_, int i) {
  return (float)((QVector2D*)this_)->operator[](i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:82
// [4] float length()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector2D6lengthEv(void *this_) {
  return (float)((QVector2D*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:83
// [4] float lengthSquared()
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector2D13lengthSquaredEv(void *this_) {
  return (float)((QVector2D*)this_)->lengthSquared();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:85
// [8] QVector2D normalized()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector2D10normalizedEv(void *this_) {
  auto rv = ((QVector2D*)this_)->normalized();
return new QVector2D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:86
// [-2] void normalize()
extern "C" Q_DECL_EXPORT
void C_ZN9QVector2D9normalizeEv(void *this_) {
  ((QVector2D*)this_)->normalize();
}

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtGui/qvector2d.h:88
// [4] float distanceToPoint(const QVector2D &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector2D15distanceToPointERKS_(void *this_, QVector2D* point) {
  return (float)((QVector2D*)this_)->distanceToPoint(*point);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtGui/qvector2d.h:89
// [4] float distanceToLine(const QVector2D &, const QVector2D &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
float C_ZNK9QVector2D14distanceToLineERKS_S1_(void *this_, QVector2D* point, QVector2D* direction) {
  return (float)((QVector2D*)this_)->distanceToLine(*point, *direction);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:91
// [8] QVector2D & operator+=(const QVector2D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DpLERKS_(void *this_, QVector2D* vector) {
  auto& rv = ((QVector2D*)this_)->operator+=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:92
// [8] QVector2D & operator-=(const QVector2D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DmIERKS_(void *this_, QVector2D* vector) {
  auto& rv = ((QVector2D*)this_)->operator-=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:93
// [8] QVector2D & operator*=(float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DmLEf(void *this_, float factor) {
  auto& rv = ((QVector2D*)this_)->operator*=(factor);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:94
// [8] QVector2D & operator*=(const QVector2D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DmLERKS_(void *this_, QVector2D* vector) {
  auto& rv = ((QVector2D*)this_)->operator*=(*vector);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:95
// [8] QVector2D & operator/=(float)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DdVEf(void *this_, float divisor) {
  auto& rv = ((QVector2D*)this_)->operator/=(divisor);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:96
// [8] QVector2D & operator/=(const QVector2D &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QVector2DdVERKS_(void *this_, QVector2D* vector) {
  auto& rv = ((QVector2D*)this_)->operator/=(*vector);
return &rv;
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:98
// [4] float dotProduct(const QVector2D &, const QVector2D &)
extern "C" Q_DECL_EXPORT
float C_ZN9QVector2D10dotProductERKS_S1_(QVector2D* v1, QVector2D* v2) {
  return (float)QVector2D::dotProduct(*v1, *v2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:114
// [12] QVector3D toVector3D()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector2D10toVector3DEv(void *this_) {
  auto rv = ((QVector2D*)this_)->toVector3D();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:117
// [16] QVector4D toVector4D()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector2D10toVector4DEv(void *this_) {
  auto rv = ((QVector2D*)this_)->toVector4D();
return new QVector4D(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:120
// [8] QPoint toPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector2D7toPointEv(void *this_) {
  auto rv = ((QVector2D*)this_)->toPoint();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:121
// [16] QPointF toPointF()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QVector2D8toPointFEv(void *this_) {
  auto rv = ((QVector2D*)this_)->toPointF();
return new QPointF(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QVector2DD2Ev(void *this_) {
  delete (QVector2D*)(this_);
}
//  main block end
