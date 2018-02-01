//  header block begin
// /usr/include/qt/QtCore/qeventloop.h
#include <qeventloop.h>
#include <QtCore>

// QEventLoopLocker is pure virtual: false
// QEventLoopLocker has virtual projected: false
//  header block end

//  main block begin

class MyQEventLoopLocker : public QEventLoopLocker {
public:
  virtual ~MyQEventLoopLocker() {}
// void QEventLoopLocker()
MyQEventLoopLocker() : QEventLoopLocker() {}
// void QEventLoopLocker(class QEventLoop *)
MyQEventLoopLocker(QEventLoop * loop) : QEventLoopLocker(loop) {}
// void QEventLoopLocker(class QThread *)
MyQEventLoopLocker(QThread * thread) : QEventLoopLocker(thread) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:93
// [-2] void QEventLoopLocker()
extern "C"
void* C_ZN16QEventLoopLockerC2Ev() {
  return  new QEventLoopLocker();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:94
// [-2] void QEventLoopLocker(class QEventLoop *)
extern "C"
void* C_ZN16QEventLoopLockerC2EP10QEventLoop(QEventLoop * loop) {
  return  new QEventLoopLocker(loop);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:95
// [-2] void QEventLoopLocker(class QThread *)
extern "C"
void* C_ZN16QEventLoopLockerC2EP7QThread(QThread * thread) {
  return  new QEventLoopLocker(thread);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:96
// [-2] void ~QEventLoopLocker()
extern "C"
void C_ZN16QEventLoopLockerD2Ev(void *this_) {
  delete (QEventLoopLocker*)(this_);
}
//  main block end