//  header block begin
// since 0x040600
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QTouchEvent is pure virtual: false
// QTouchEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTouchEvent : public QTouchEvent {
public:
  virtual ~MyQTouchEvent() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:947
// [-2] void ~QTouchEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEventD2Ev(void *this_) {
  delete (QTouchEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:949
// [8] QWindow * window()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTouchEvent6windowEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->window();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:950
// [8] QObject * target()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTouchEvent6targetEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->target();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:954
// [4] Qt::TouchPointStates touchPointStates()
extern "C" Q_DECL_EXPORT
Qt::TouchPointStates C_ZNK11QTouchEvent16touchPointStatesEv(void *this_) {
  return (Qt::TouchPointStates)((QTouchEvent*)this_)->touchPointStates();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:956
// [8] QTouchDevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTouchEvent6deviceEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->device();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:959
// [-2] void setWindow(QWindow *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent9setWindowEP7QWindow(void *this_, QWindow * awindow) {
  ((QTouchEvent*)this_)->setWindow(awindow);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:960
// [-2] void setTarget(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent9setTargetEP7QObject(void *this_, QObject * atarget) {
  ((QTouchEvent*)this_)->setTarget(atarget);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:961
// [-2] void setTouchPointStates(Qt::TouchPointStates)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent19setTouchPointStatesE6QFlagsIN2Qt15TouchPointStateEE(void *this_, QFlags<Qt::TouchPointState> aTouchPointStates) {
  ((QTouchEvent*)this_)->setTouchPointStates(aTouchPointStates);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:963
// [-2] void setDevice(QTouchDevice *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent9setDeviceEP12QTouchDevice(void *this_, QTouchDevice * adevice) {
  ((QTouchEvent*)this_)->setDevice(adevice);
}

//  main block end
