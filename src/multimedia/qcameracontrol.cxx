//  header block begin
// /usr/include/qt/QtMultimedia/qcameracontrol.h
#ifndef protected
#define protected public
#endif
#include <qcameracontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraControl is pure virtual: true
// QCameraControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraControl : public QCameraControl {
public:
  virtual ~MyQCameraControl() {}
// void QCameraControl(QObject *)
MyQCameraControl(QObject * parent) : QCameraControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QCameraControl10metaObjectEv(void *this_) {
  return (void*)((QCameraControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:66
// [-2] void ~QCameraControl()
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControlD2Ev(void *this_) {
  delete (QCameraControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:68
// [4] QCamera::State state()
extern "C" Q_DECL_EXPORT
QCamera::State C_ZNK14QCameraControl5stateEv(void *this_) {
  return (QCamera::State)((QCameraControl*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:69
// [-2] void setState(QCamera::State)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl8setStateEN7QCamera5StateE(void *this_, QCamera::State state) {
  ((QCameraControl*)this_)->setState(state);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:71
// [4] QCamera::Status status()
extern "C" Q_DECL_EXPORT
QCamera::Status C_ZNK14QCameraControl6statusEv(void *this_) {
  return (QCamera::Status)((QCameraControl*)this_)->status();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:73
// [4] QCamera::CaptureModes captureMode()
extern "C" Q_DECL_EXPORT
QCamera::CaptureModes C_ZNK14QCameraControl11captureModeEv(void *this_) {
  return (QCamera::CaptureModes)((QCameraControl*)this_)->captureMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:74
// [-2] void setCaptureMode(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl14setCaptureModeE6QFlagsIN7QCamera11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> arg0) {
  ((QCameraControl*)this_)->setCaptureMode(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:75
// [1] bool isCaptureModeSupported(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QCameraControl22isCaptureModeSupportedE6QFlagsIN7QCamera11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> mode) {
  return (bool)((QCameraControl*)this_)->isCaptureModeSupported(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:77
// [1] bool canChangeProperty(QCameraControl::PropertyChangeType, QCamera::Status)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QCameraControl17canChangePropertyENS_18PropertyChangeTypeEN7QCamera6StatusE(void *this_, QCameraControl::PropertyChangeType changeType, QCamera::Status status) {
  return (bool)((QCameraControl*)this_)->canChangeProperty(changeType, status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:80
// [-2] void stateChanged(QCamera::State)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl12stateChangedEN7QCamera5StateE(void *this_, QCamera::State arg0) {
  ((QCameraControl*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:81
// [-2] void statusChanged(QCamera::Status)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl13statusChangedEN7QCamera6StatusE(void *this_, QCamera::Status arg0) {
  ((QCameraControl*)this_)->statusChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:82
// [-2] void error(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl5errorEiRK7QString(void *this_, int error, QString* errorString) {
  ((QCameraControl*)this_)->error(error, *errorString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracontrol.h:83
// [-2] void captureModeChanged(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
void C_ZN14QCameraControl18captureModeChangedE6QFlagsIN7QCamera11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> arg0) {
  ((QCameraControl*)this_)->captureModeChanged(arg0);
}

//  main block end
