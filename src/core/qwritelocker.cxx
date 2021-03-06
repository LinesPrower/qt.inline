//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#ifndef protected
#define protected public
#endif
#include <qreadwritelock.h>
#include <QtCore>
#include "callback_inherit.h"

// QWriteLocker is pure virtual: false
// QWriteLocker has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWriteLocker : public QWriteLocker {
public:
  virtual ~MyQWriteLocker() {}
// void QWriteLocker(QReadWriteLock *)
MyQWriteLocker(QReadWriteLock * readWriteLock) : QWriteLocker(readWriteLock) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:131
// [-2] void QWriteLocker(QReadWriteLock *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QWriteLockerC2EP14QReadWriteLock(QReadWriteLock * readWriteLock) {
  return  new QWriteLocker(readWriteLock);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:133
// [-2] void ~QWriteLocker()
extern "C" Q_DECL_EXPORT
void C_ZN12QWriteLockerD2Ev(void *this_) {
  delete (QWriteLocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:136
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN12QWriteLocker6unlockEv(void *this_) {
  ((QWriteLocker*)this_)->unlock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:146
// [-2] void relock()
extern "C" Q_DECL_EXPORT
void C_ZN12QWriteLocker6relockEv(void *this_) {
  ((QWriteLocker*)this_)->relock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:156
// [8] QReadWriteLock * readWriteLock()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QWriteLocker13readWriteLockEv(void *this_) {
  return (void*)((QWriteLocker*)this_)->readWriteLock();
}

//  main block end
