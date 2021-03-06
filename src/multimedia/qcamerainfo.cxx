//  header block begin
// since 0x050300
// /usr/include/qt/QtMultimedia/qcamerainfo.h
#ifndef protected
#define protected public
#endif
#include <qcamerainfo.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraInfo is pure virtual: false
// QCameraInfo has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraInfo : public QCameraInfo {
public:
  virtual ~MyQCameraInfo() {}
// void QCameraInfo(const QByteArray &)
MyQCameraInfo(const QByteArray & name) : QCameraInfo(name) {}
// void QCameraInfo(const QCamera &)
MyQCameraInfo(const QCamera & camera) : QCameraInfo(camera) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:53
// [-2] void QCameraInfo(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QCameraInfoC2ERK10QByteArray(QByteArray* name) {
  return  new QCameraInfo(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:54
// [-2] void QCameraInfo(const QCamera &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QCameraInfoC2ERK7QCamera(QCamera* camera) {
  return  new QCameraInfo(*camera);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:56
// [-2] void ~QCameraInfo()
extern "C" Q_DECL_EXPORT
void C_ZN11QCameraInfoD2Ev(void *this_) {
  delete (QCameraInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:58
// [16] QCameraInfo & operator=(const QCameraInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QCameraInfoaSERKS_(void *this_, QCameraInfo* other) {
  auto& rv = ((QCameraInfo*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:59
// [1] bool operator==(const QCameraInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QCameraInfoeqERKS_(void *this_, QCameraInfo* other) {
  return (bool)((QCameraInfo*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:60
// [1] bool operator!=(const QCameraInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QCameraInfoneERKS_(void *this_, QCameraInfo* other) {
  return (bool)((QCameraInfo*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:62
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QCameraInfo6isNullEv(void *this_) {
  return (bool)((QCameraInfo*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:64
// [8] QString deviceName()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QCameraInfo10deviceNameEv(void *this_) {
  auto rv = ((QCameraInfo*)this_)->deviceName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:65
// [8] QString description()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QCameraInfo11descriptionEv(void *this_) {
  auto rv = ((QCameraInfo*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:66
// [4] QCamera::Position position()
extern "C" Q_DECL_EXPORT
QCamera::Position C_ZNK11QCameraInfo8positionEv(void *this_) {
  return (QCamera::Position)((QCameraInfo*)this_)->position();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:67
// [4] int orientation()
extern "C" Q_DECL_EXPORT
int C_ZNK11QCameraInfo11orientationEv(void *this_) {
  return (int)((QCameraInfo*)this_)->orientation();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:69
// [16] QCameraInfo defaultCamera()
extern "C" Q_DECL_EXPORT
void* C_ZN11QCameraInfo13defaultCameraEv() {
  auto rv = QCameraInfo::defaultCamera();
return new QCameraInfo(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerainfo.h:70
// [-2] QList<QCameraInfo> availableCameras(QCamera::Position)
extern "C" Q_DECL_EXPORT
QList<QCameraInfo>* C_ZN11QCameraInfo16availableCamerasEN7QCamera8PositionE(QCamera::Position position) {
  auto rv = QCameraInfo::availableCameras(position);
return new QList<QCameraInfo>(rv);
}

//  main block end
