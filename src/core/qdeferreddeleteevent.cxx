//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QDeferredDeleteEvent is pure virtual: false
// QDeferredDeleteEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDeferredDeleteEvent : public QDeferredDeleteEvent {
public:
  virtual ~MyQDeferredDeleteEvent() {}
// void QDeferredDeleteEvent()
MyQDeferredDeleteEvent() : QDeferredDeleteEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:377
// [-2] void QDeferredDeleteEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN20QDeferredDeleteEventC2Ev() {
  return  new QDeferredDeleteEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:378
// [-2] void ~QDeferredDeleteEvent()
extern "C" Q_DECL_EXPORT
void C_ZN20QDeferredDeleteEventD2Ev(void *this_) {
  delete (QDeferredDeleteEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:379
// [4] int loopLevel()
extern "C" Q_DECL_EXPORT
int C_ZNK20QDeferredDeleteEvent9loopLevelEv(void *this_) {
  return (int)((QDeferredDeleteEvent*)this_)->loopLevel();
}

//  main block end
