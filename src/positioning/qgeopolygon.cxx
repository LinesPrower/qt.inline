//  header block begin
// since 0x050a00
// /usr/include/qt/QtPositioning/qgeopolygon.h
#ifndef protected
#define protected public
#endif
#include <qgeopolygon.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPolygon is pure virtual: false
// QGeoPolygon has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGeoPolygon : public QGeoPolygon {
public:
  virtual ~MyQGeoPolygon() {}
// void QGeoPolygon()
MyQGeoPolygon() : QGeoPolygon() {}
// void QGeoPolygon(const QGeoShape &)
MyQGeoPolygon(const QGeoShape & other) : QGeoPolygon(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:56
// [-2] void QGeoPolygon()
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoPolygonC2Ev() {
  return  new QGeoPolygon();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:59
// [-2] void QGeoPolygon(const QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoPolygonC2ERK9QGeoShape(QGeoShape* other) {
  return  new QGeoPolygon(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:61
// [-2] void ~QGeoPolygon()
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygonD2Ev(void *this_) {
  delete (QGeoPolygon*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:63
// [8] QGeoPolygon & operator=(const QGeoPolygon &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoPolygonaSERKS_(void *this_, QGeoPolygon* other) {
  auto& rv = ((QGeoPolygon*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:66
// [1] bool operator==(const QGeoPolygon &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoPolygoneqERKS_(void *this_, QGeoPolygon* other) {
  return (bool)((QGeoPolygon*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:69
// [1] bool operator!=(const QGeoPolygon &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoPolygonneERKS_(void *this_, QGeoPolygon* other) {
  return (bool)((QGeoPolygon*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:74
// [-2] void translate(double, double)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon9translateEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  ((QGeoPolygon*)this_)->translate(degreesLatitude, degreesLongitude);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:75
// [8] QGeoPolygon translated(double, double)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoPolygon10translatedEdd(void *this_, double degreesLatitude, double degreesLongitude) {
  auto rv = ((QGeoPolygon*)this_)->translated(degreesLatitude, degreesLongitude);
return new QGeoPolygon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:76
// [8] double length(int, int)
extern "C" Q_DECL_EXPORT
double C_ZNK11QGeoPolygon6lengthEii(void *this_, int indexFrom, int indexTo) {
  return (double)((QGeoPolygon*)this_)->length(indexFrom, indexTo);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtPositioning/qgeopolygon.h:77
// [4] int size()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
int C_ZNK11QGeoPolygon4sizeEv(void *this_) {
  return (int)((QGeoPolygon*)this_)->size();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:78
// [-2] void addCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon13addCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoPolygon*)this_)->addCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:79
// [-2] void insertCoordinate(int, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon16insertCoordinateEiRK14QGeoCoordinate(void *this_, int index, QGeoCoordinate* coordinate) {
  ((QGeoPolygon*)this_)->insertCoordinate(index, *coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:80
// [-2] void replaceCoordinate(int, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon17replaceCoordinateEiRK14QGeoCoordinate(void *this_, int index, QGeoCoordinate* coordinate) {
  ((QGeoPolygon*)this_)->replaceCoordinate(index, *coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:81
// [8] QGeoCoordinate coordinateAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoPolygon12coordinateAtEi(void *this_, int index) {
  auto rv = ((QGeoPolygon*)this_)->coordinateAt(index);
return new QGeoCoordinate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:82
// [1] bool containsCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoPolygon18containsCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  return (bool)((QGeoPolygon*)this_)->containsCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:83
// [-2] void removeCoordinate(const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon16removeCoordinateERK14QGeoCoordinate(void *this_, QGeoCoordinate* coordinate) {
  ((QGeoPolygon*)this_)->removeCoordinate(*coordinate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:84
// [-2] void removeCoordinate(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoPolygon16removeCoordinateEi(void *this_, int index) {
  ((QGeoPolygon*)this_)->removeCoordinate(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopolygon.h:86
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoPolygon8toStringEv(void *this_) {
  auto rv = ((QGeoPolygon*)this_)->toString();
return new QString(rv);
}

//  main block end
