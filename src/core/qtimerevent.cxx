//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#include <qcoreevent.h>
#include <QtCore>

// QTimerEvent is pure virtual: false
// QTimerEvent has virtual projected: false
//  header block end

//  main block begin

class MyQTimerEvent : public QTimerEvent {
public:
  virtual ~MyQTimerEvent() {}
// void QTimerEvent(int)
MyQTimerEvent(int timerId) : QTimerEvent(timerId) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:340
// [-2] void QTimerEvent(int)
extern "C"
void* C_ZN11QTimerEventC2Ei(int timerId) {
  return  new QTimerEvent(timerId);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:341
// [-2] void ~QTimerEvent()
extern "C"
void C_ZN11QTimerEventD2Ev(void *this_) {
  delete (QTimerEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:342
// [4] int timerId()
extern "C"
int C_ZNK11QTimerEvent7timerIdEv(void *this_) {
  return (int)((QTimerEvent*)this_)->timerId();
}
//  main block end