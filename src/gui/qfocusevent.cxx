//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QFocusEvent is pure virtual: false
// QFocusEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFocusEvent : public QFocusEvent {
public:
  virtual ~MyQFocusEvent() {}
// void QFocusEvent(QEvent::Type, Qt::FocusReason)
MyQFocusEvent(QEvent::Type type_, Qt::FocusReason reason) : QFocusEvent(type_, reason) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:389
// [-2] void QFocusEvent(QEvent::Type, Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusEventC2EN6QEvent4TypeEN2Qt11FocusReasonE(QEvent::Type type_, Qt::FocusReason reason) {
  return  new QFocusEvent(type_, reason);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:390
// [-2] void ~QFocusEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QFocusEventD2Ev(void *this_) {
  delete (QFocusEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:392
// [1] bool gotFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFocusEvent8gotFocusEv(void *this_) {
  return (bool)((QFocusEvent*)this_)->gotFocus();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:393
// [1] bool lostFocus()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFocusEvent9lostFocusEv(void *this_) {
  return (bool)((QFocusEvent*)this_)->lostFocus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:395
// [4] Qt::FocusReason reason()
extern "C" Q_DECL_EXPORT
Qt::FocusReason C_ZNK11QFocusEvent6reasonEv(void *this_) {
  return (Qt::FocusReason)((QFocusEvent*)this_)->reason();
}

//  main block end
