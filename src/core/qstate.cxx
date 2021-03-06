//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qstate.h
#ifndef protected
#define protected public
#endif
#include <qstate.h>
#include <QtCore>
#include "callback_inherit.h"

// QState is pure virtual: false
// QState has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQState : public QState {
public:
  virtual ~MyQState() {}
// void QState(QState *)
MyQState(QState * parent) : QState(parent) {}
// void QState(QState::ChildMode, QState *)
MyQState(QState::ChildMode childMode, QState * parent) : QState(childMode, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void onEntry(QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QState::onEntry(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void onExit(QEvent *)
  virtual void onExit(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QState::onExit(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QState::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:119
// [-2] void onEntry(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState7onEntryEP6QEvent(void *this_, QEvent * event) {
  ((QState*)this_)->QState::onEntry(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:120
// [-2] void onExit(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState6onExitEP6QEvent(void *this_, QEvent * event) {
  ((QState*)this_)->QState::onExit(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:122
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QState5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QState*)this_)->QState::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QState10metaObjectEv(void *this_) {
  return (void*)((QState*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:74
// [-2] void QState(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QStateC2EPS_(QState * parent) {
  auto _nilp = (MyQState*)(0);
  return  new MyQState(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:75
// [-2] void QState(QState::ChildMode, QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QStateC2ENS_9ChildModeEPS_(QState::ChildMode childMode, QState * parent) {
  auto _nilp = (MyQState*)(0);
  return  new MyQState(childMode, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:76
// [-2] void ~QState()
extern "C" Q_DECL_EXPORT
void C_ZN6QStateD2Ev(void *this_) {
  delete (QState*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:78
// [8] QAbstractState * errorState()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QState10errorStateEv(void *this_) {
  return (void*)((QState*)this_)->errorState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:79
// [-2] void setErrorState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState13setErrorStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setErrorState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:81
// [-2] void addTransition(QAbstractTransition *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState13addTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->addTransition(transition);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:82
// [8] QSignalTransition * addTransition(const QObject *, const char *, QAbstractState *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QState13addTransitionEPK7QObjectPKcP14QAbstractState(void *this_, const QObject * sender, const char * signal, QAbstractState * target) {
  return (void*)((QState*)this_)->addTransition(sender, signal, target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:96
// [8] QAbstractTransition * addTransition(QAbstractState *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QState13addTransitionEP14QAbstractState(void *this_, QAbstractState * target) {
  return (void*)((QState*)this_)->addTransition(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:97
// [-2] void removeTransition(QAbstractTransition *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState16removeTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QState*)this_)->removeTransition(transition);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:100
// [8] QAbstractState * initialState()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QState12initialStateEv(void *this_) {
  return (void*)((QState*)this_)->initialState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:101
// [-2] void setInitialState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN6QState15setInitialStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QState*)this_)->setInitialState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:103
// [4] QState::ChildMode childMode()
extern "C" Q_DECL_EXPORT
QState::ChildMode C_ZNK6QState9childModeEv(void *this_) {
  return (QState::ChildMode)((QState*)this_)->childMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:104
// [-2] void setChildMode(QState::ChildMode)
extern "C" Q_DECL_EXPORT
void C_ZN6QState12setChildModeENS_9ChildModeE(void *this_, QState::ChildMode mode) {
  ((QState*)this_)->setChildMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstate.h:107
// [-2] void assignProperty(QObject *, const char *, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN6QState14assignPropertyEP7QObjectPKcRK8QVariant(void *this_, QObject * object, const char * name, QVariant* value) {
  ((QState*)this_)->assignProperty(object, name, *value);
}

//  main block end
