//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qstatemachine.h
#ifndef protected
#define protected public
#endif
#include <qstatemachine.h>
#include <QtCore>
#include "callback_inherit.h"

// QStateMachine is pure virtual: false
// QStateMachine has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStateMachine : public QStateMachine {
public:
  virtual ~MyQStateMachine() {}
// void QStateMachine(QObject *)
MyQStateMachine(QObject * parent) : QStateMachine(parent) {}
// void QStateMachine(QState::ChildMode, QObject *)
MyQStateMachine(QState::ChildMode childMode, QObject * parent) : QStateMachine(childMode, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void onEntry(QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStateMachine::onEntry(event);
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
    QStateMachine::onExit(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void beginSelectTransitions(QEvent *)
  virtual void beginSelectTransitions(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginSelectTransitions", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStateMachine::beginSelectTransitions(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void endSelectTransitions(QEvent *)
  virtual void endSelectTransitions(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endSelectTransitions", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStateMachine::endSelectTransitions(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void beginMicrostep(QEvent *)
  virtual void beginMicrostep(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginMicrostep", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStateMachine::beginMicrostep(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void endMicrostep(QEvent *)
  virtual void endMicrostep(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endMicrostep", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStateMachine::endMicrostep(event);
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
    return QStateMachine::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:159
// [-2] void onEntry(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine7onEntryEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::onEntry(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:160
// [-2] void onExit(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine6onExitEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::onExit(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:162
// [-2] void beginSelectTransitions(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine22beginSelectTransitionsEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::beginSelectTransitions(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:163
// [-2] void endSelectTransitions(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine20endSelectTransitionsEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::endSelectTransitions(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:165
// [-2] void beginMicrostep(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine14beginMicrostepEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::beginMicrostep(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:166
// [-2] void endMicrostep(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine12endMicrostepEP6QEvent(void *this_, QEvent * event) {
  ((QStateMachine*)this_)->QStateMachine::endMicrostep(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:168
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QStateMachine5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QStateMachine*)this_)->QStateMachine::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStateMachine10metaObjectEv(void *this_) {
  return (void*)((QStateMachine*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:112
// [-2] void QStateMachine(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStateMachineC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQStateMachine*)(0);
  return  new MyQStateMachine(parent);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstatemachine.h:113
// [-2] void QStateMachine(QState::ChildMode, QObject *)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN13QStateMachineC2EN6QState9ChildModeEP7QObject(QState::ChildMode childMode, QObject * parent) {
  auto _nilp = (MyQStateMachine*)(0);
  return  new MyQStateMachine(childMode, parent);
}
#endif // QT_VERSION >= 0x050000

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:114
// [-2] void ~QStateMachine()
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachineD2Ev(void *this_) {
  delete (QStateMachine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:116
// [-2] void addState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine8addStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QStateMachine*)this_)->addState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:117
// [-2] void removeState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine11removeStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QStateMachine*)this_)->removeState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:119
// [4] QStateMachine::Error error()
extern "C" Q_DECL_EXPORT
QStateMachine::Error C_ZNK13QStateMachine5errorEv(void *this_) {
  return (QStateMachine::Error)((QStateMachine*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:120
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStateMachine11errorStringEv(void *this_) {
  auto rv = ((QStateMachine*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:121
// [-2] void clearError()
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine10clearErrorEv(void *this_) {
  ((QStateMachine*)this_)->clearError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:123
// [1] bool isRunning()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStateMachine9isRunningEv(void *this_) {
  return (bool)((QStateMachine*)this_)->isRunning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:126
// [1] bool isAnimated()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStateMachine10isAnimatedEv(void *this_) {
  return (bool)((QStateMachine*)this_)->isAnimated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:127
// [-2] void setAnimated(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine11setAnimatedEb(void *this_, bool enabled) {
  ((QStateMachine*)this_)->setAnimated(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:129
// [-2] void addDefaultAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine19addDefaultAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QStateMachine*)this_)->addDefaultAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:131
// [-2] void removeDefaultAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine22removeDefaultAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QStateMachine*)this_)->removeDefaultAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:134
// [4] QState::RestorePolicy globalRestorePolicy()
extern "C" Q_DECL_EXPORT
QState::RestorePolicy C_ZNK13QStateMachine19globalRestorePolicyEv(void *this_) {
  return (QState::RestorePolicy)((QStateMachine*)this_)->globalRestorePolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:135
// [-2] void setGlobalRestorePolicy(QState::RestorePolicy)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine22setGlobalRestorePolicyEN6QState13RestorePolicyE(void *this_, QState::RestorePolicy restorePolicy) {
  ((QStateMachine*)this_)->setGlobalRestorePolicy(restorePolicy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:137
// [-2] void postEvent(QEvent *, QStateMachine::EventPriority)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine9postEventEP6QEventNS_13EventPriorityE(void *this_, QEvent * event, QStateMachine::EventPriority priority) {
  ((QStateMachine*)this_)->postEvent(event, priority);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:138
// [4] int postDelayedEvent(QEvent *, int)
extern "C" Q_DECL_EXPORT
int C_ZN13QStateMachine16postDelayedEventEP6QEventi(void *this_, QEvent * event, int delay) {
  return (int)((QStateMachine*)this_)->postDelayedEvent(event, delay);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:139
// [1] bool cancelDelayedEvent(int)
extern "C" Q_DECL_EXPORT
bool C_ZN13QStateMachine18cancelDelayedEventEi(void *this_, int id) {
  return (bool)((QStateMachine*)this_)->cancelDelayedEvent(id);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:144
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QStateMachine11eventFilterEP7QObjectP6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QStateMachine*)this_)->eventFilter(watched, event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:148
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine5startEv(void *this_) {
  ((QStateMachine*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:149
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine4stopEv(void *this_) {
  ((QStateMachine*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstatemachine.h:150
// [-2] void setRunning(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine10setRunningEb(void *this_, bool running) {
  ((QStateMachine*)this_)->setRunning(running);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstatemachine.h:155
// [-2] void runningChanged(bool)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN13QStateMachine14runningChangedEb(void *this_, bool running) {
  ((QStateMachine*)this_)->runningChanged(running);
}
#endif // QT_VERSION >= 0x050400

//  main block end
