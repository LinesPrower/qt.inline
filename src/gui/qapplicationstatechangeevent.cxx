//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QApplicationStateChangeEvent is pure virtual: false
// QApplicationStateChangeEvent has virtual projected: false
//  header block end

//  main block begin

class MyQApplicationStateChangeEvent : public QApplicationStateChangeEvent {
public:
  virtual ~MyQApplicationStateChangeEvent() {}
// void QApplicationStateChangeEvent(Qt::ApplicationState)
MyQApplicationStateChangeEvent(Qt::ApplicationState state) : QApplicationStateChangeEvent(state) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1052
// [-2] void QApplicationStateChangeEvent(Qt::ApplicationState)
extern "C"
void* C_ZN28QApplicationStateChangeEventC2EN2Qt16ApplicationStateE(Qt::ApplicationState state) {
  return  new QApplicationStateChangeEvent(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1053
// [4] Qt::ApplicationState applicationState()
extern "C"
Qt::ApplicationState C_ZNK28QApplicationStateChangeEvent16applicationStateEv(void *this_) {
  return (Qt::ApplicationState)((QApplicationStateChangeEvent*)this_)->applicationState();
}
//  main block end