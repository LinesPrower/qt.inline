//  header block begin
// /usr/include/qt/QtCore/qfuturewatcher.h
#include <qfuturewatcher.h>
#include <QtCore>

// QFutureWatcherBase is pure virtual: true
// QFutureWatcherBase has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:101
// [-2] void connectNotify(const class QMetaMethod &)
extern "C"
void* callback_ZN18QFutureWatcherBase13connectNotifyERK11QMetaMethod = 0;
extern "C" void set_callback_ZN18QFutureWatcherBase13connectNotifyERK11QMetaMethod(void*cbfn)
{ callback_ZN18QFutureWatcherBase13connectNotifyERK11QMetaMethod = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:102
// [-2] void disconnectNotify(const class QMetaMethod &)
extern "C"
void* callback_ZN18QFutureWatcherBase16disconnectNotifyERK11QMetaMethod = 0;
extern "C" void set_callback_ZN18QFutureWatcherBase16disconnectNotifyERK11QMetaMethod(void*cbfn)
{ callback_ZN18QFutureWatcherBase16disconnectNotifyERK11QMetaMethod = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:105
// [-2] void connectOutputInterface()
extern "C"
void* callback_ZN18QFutureWatcherBase22connectOutputInterfaceEv = 0;
extern "C" void set_callback_ZN18QFutureWatcherBase22connectOutputInterfaceEv(void*cbfn)
{ callback_ZN18QFutureWatcherBase22connectOutputInterfaceEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:106
// [-2] void disconnectOutputInterface(_Bool)
extern "C"
void* callback_ZN18QFutureWatcherBase25disconnectOutputInterfaceEb = 0;
extern "C" void set_callback_ZN18QFutureWatcherBase25disconnectOutputInterfaceEb(void*cbfn)
{ callback_ZN18QFutureWatcherBase25disconnectOutputInterfaceEb = cbfn; }

class MyQFutureWatcherBase : public QFutureWatcherBase {
public:
  virtual ~MyQFutureWatcherBase() {}
// void QFutureWatcherBase(class QObject *)
MyQFutureWatcherBase(QObject * parent) : QFutureWatcherBase(parent) {}
// void connectNotify(const class QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & signal) {
    if (callback_ZN18QFutureWatcherBase13connectNotifyERK11QMetaMethod != 0) {
      // callback_ZN18QFutureWatcherBase13connectNotifyERK11QMetaMethod(signal);
    }
    QFutureWatcherBase::connectNotify(signal);
  }
// void disconnectNotify(const class QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & signal) {
    if (callback_ZN18QFutureWatcherBase16disconnectNotifyERK11QMetaMethod != 0) {
      // callback_ZN18QFutureWatcherBase16disconnectNotifyERK11QMetaMethod(signal);
    }
    QFutureWatcherBase::disconnectNotify(signal);
  }
// void connectOutputInterface()
  virtual void connectOutputInterface() {
    if (callback_ZN18QFutureWatcherBase22connectOutputInterfaceEv != 0) {
      // callback_ZN18QFutureWatcherBase22connectOutputInterfaceEv();
    }
    QFutureWatcherBase::connectOutputInterface();
  }
// void disconnectOutputInterface(_Bool)
  virtual void disconnectOutputInterface(bool pendingAssignment) {
    if (callback_ZN18QFutureWatcherBase25disconnectOutputInterfaceEb != 0) {
      // callback_ZN18QFutureWatcherBase25disconnectOutputInterfaceEb(pendingAssignment);
    }
    QFutureWatcherBase::disconnectOutputInterface(pendingAssignment);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QFutureWatcherBase10metaObjectEv(void *this_) {
  return (void*)((QFutureWatcherBase*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:61
// [-2] void QFutureWatcherBase(class QObject *)
extern "C"
void* C_ZN18QFutureWatcherBaseC1EP7QObject(QObject * parent) {
  auto _nilp = (MyQFutureWatcherBase*)(0);
  return 0; // new MyQFutureWatcherBase(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:64
// [4] int progressValue()
extern "C"
int C_ZNK18QFutureWatcherBase13progressValueEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressValue();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:65
// [4] int progressMinimum()
extern "C"
int C_ZNK18QFutureWatcherBase15progressMinimumEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressMinimum();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:66
// [4] int progressMaximum()
extern "C"
int C_ZNK18QFutureWatcherBase15progressMaximumEv(void *this_) {
  return (int)((QFutureWatcherBase*)this_)->progressMaximum();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:67
// [8] QString progressText()
extern "C"
void* C_ZNK18QFutureWatcherBase12progressTextEv(void *this_) {
  auto rv = ((QFutureWatcherBase*)this_)->progressText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:69
// [1] bool isStarted()
extern "C"
bool C_ZNK18QFutureWatcherBase9isStartedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isStarted();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:70
// [1] bool isFinished()
extern "C"
bool C_ZNK18QFutureWatcherBase10isFinishedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isFinished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:71
// [1] bool isRunning()
extern "C"
bool C_ZNK18QFutureWatcherBase9isRunningEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isRunning();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:72
// [1] bool isCanceled()
extern "C"
bool C_ZNK18QFutureWatcherBase10isCanceledEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isCanceled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:73
// [1] bool isPaused()
extern "C"
bool C_ZNK18QFutureWatcherBase8isPausedEv(void *this_) {
  return (bool)((QFutureWatcherBase*)this_)->isPaused();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:75
// [-2] void waitForFinished()
extern "C"
void C_ZN18QFutureWatcherBase15waitForFinishedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->waitForFinished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:77
// [-2] void setPendingResultsLimit(int)
extern "C"
void C_ZN18QFutureWatcherBase22setPendingResultsLimitEi(void *this_, int limit) {
  ((QFutureWatcherBase*)this_)->setPendingResultsLimit(limit);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:79
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN18QFutureWatcherBase5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QFutureWatcherBase*)this_)->event(event);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:82
// [-2] void started()
extern "C"
void C_ZN18QFutureWatcherBase7startedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->started();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:83
// [-2] void finished()
extern "C"
void C_ZN18QFutureWatcherBase8finishedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->finished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:84
// [-2] void canceled()
extern "C"
void C_ZN18QFutureWatcherBase8canceledEv(void *this_) {
  ((QFutureWatcherBase*)this_)->canceled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:85
// [-2] void paused()
extern "C"
void C_ZN18QFutureWatcherBase6pausedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->paused();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:86
// [-2] void resumed()
extern "C"
void C_ZN18QFutureWatcherBase7resumedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->resumed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:87
// [-2] void resultReadyAt(int)
extern "C"
void C_ZN18QFutureWatcherBase13resultReadyAtEi(void *this_, int resultIndex) {
  ((QFutureWatcherBase*)this_)->resultReadyAt(resultIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:88
// [-2] void resultsReadyAt(int, int)
extern "C"
void C_ZN18QFutureWatcherBase14resultsReadyAtEii(void *this_, int beginIndex, int endIndex) {
  ((QFutureWatcherBase*)this_)->resultsReadyAt(beginIndex, endIndex);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:89
// [-2] void progressRangeChanged(int, int)
extern "C"
void C_ZN18QFutureWatcherBase20progressRangeChangedEii(void *this_, int minimum, int maximum) {
  ((QFutureWatcherBase*)this_)->progressRangeChanged(minimum, maximum);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:90
// [-2] void progressValueChanged(int)
extern "C"
void C_ZN18QFutureWatcherBase20progressValueChangedEi(void *this_, int progressValue) {
  ((QFutureWatcherBase*)this_)->progressValueChanged(progressValue);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:91
// [-2] void progressTextChanged(const class QString &)
extern "C"
void C_ZN18QFutureWatcherBase19progressTextChangedERK7QString(void *this_, const QString & progressText) {
  ((QFutureWatcherBase*)this_)->progressTextChanged(progressText);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:94
// [-2] void cancel()
extern "C"
void C_ZN18QFutureWatcherBase6cancelEv(void *this_) {
  ((QFutureWatcherBase*)this_)->cancel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:95
// [-2] void setPaused(_Bool)
extern "C"
void C_ZN18QFutureWatcherBase9setPausedEb(void *this_, bool paused) {
  ((QFutureWatcherBase*)this_)->setPaused(paused);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:96
// [-2] void pause()
extern "C"
void C_ZN18QFutureWatcherBase5pauseEv(void *this_) {
  ((QFutureWatcherBase*)this_)->pause();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:97
// [-2] void resume()
extern "C"
void C_ZN18QFutureWatcherBase6resumeEv(void *this_) {
  ((QFutureWatcherBase*)this_)->resume();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:98
// [-2] void togglePaused()
extern "C"
void C_ZN18QFutureWatcherBase12togglePausedEv(void *this_) {
  ((QFutureWatcherBase*)this_)->togglePaused();
}
//  main block end