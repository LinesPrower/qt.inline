//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#include <qreadwritelock.h>
#include <QtCore>

// QReadLocker is pure virtual: false
// QReadLocker has virtual projected: false
//  header block end

//  main block begin

class MyQReadLocker : public QReadLocker {
public:
  virtual ~MyQReadLocker() {}
// void QReadLocker(class QReadWriteLock *)
MyQReadLocker(QReadWriteLock * readWriteLock) : QReadLocker(readWriteLock) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:87
// [-2] void QReadLocker(class QReadWriteLock *)
extern "C"
void* C_ZN11QReadLockerC2EP14QReadWriteLock(QReadWriteLock * readWriteLock) {
  return  new QReadLocker(readWriteLock);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:89
// [-2] void ~QReadLocker()
extern "C"
void C_ZN11QReadLockerD2Ev(void *this_) {
  delete (QReadLocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:92
// [-2] void unlock()
extern "C"
void C_ZN11QReadLocker6unlockEv(void *this_) {
  ((QReadLocker*)this_)->unlock();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:102
// [-2] void relock()
extern "C"
void C_ZN11QReadLocker6relockEv(void *this_) {
  ((QReadLocker*)this_)->relock();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:112
// [8] QReadWriteLock * readWriteLock()
extern "C"
void* C_ZNK11QReadLocker13readWriteLockEv(void *this_) {
  return (void*)((QReadLocker*)this_)->readWriteLock();
}
//  main block end