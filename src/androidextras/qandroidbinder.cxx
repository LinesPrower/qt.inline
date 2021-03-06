//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h
#ifndef protected
#define protected public
#endif
#include <qandroidbinder.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidBinder is pure virtual: false
// QAndroidBinder has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAndroidBinder : public QAndroidBinder {
public:
  virtual ~MyQAndroidBinder() {}
// void QAndroidBinder()
MyQAndroidBinder() : QAndroidBinder() {}
// void QAndroidBinder(const QAndroidJniObject &)
MyQAndroidBinder(const QAndroidJniObject & binder) : QAndroidBinder(binder) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:62
// [-2] void QAndroidBinder()
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidBinderC2Ev() {
  return  new QAndroidBinder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:63
// [-2] void QAndroidBinder(const QAndroidJniObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidBinderC2ERK17QAndroidJniObject(QAndroidJniObject* binder) {
  return  new QAndroidBinder(*binder);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:65
// [-2] void ~QAndroidBinder()
extern "C" Q_DECL_EXPORT
void C_ZN14QAndroidBinderD2Ev(void *this_) {
  delete (QAndroidBinder*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:67
// [1] bool onTransact(int, const QAndroidParcel &, const QAndroidParcel &, QAndroidBinder::CallType)
extern "C" Q_DECL_EXPORT
bool C_ZN14QAndroidBinder10onTransactEiRK14QAndroidParcelS2_NS_8CallTypeE(void *this_, int code, QAndroidParcel* data, QAndroidParcel* reply, QAndroidBinder::CallType flags) {
  return (bool)((QAndroidBinder*)this_)->onTransact(code, *data, *reply, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:68
// [1] bool transact(int, const QAndroidParcel &, QAndroidParcel *, QAndroidBinder::CallType)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QAndroidBinder8transactEiRK14QAndroidParcelPS0_NS_8CallTypeE(void *this_, int code, QAndroidParcel* data, QAndroidParcel * reply, QAndroidBinder::CallType flags) {
  return (bool)((QAndroidBinder*)this_)->transact(code, *data, reply, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:70
// [16] QAndroidJniObject handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAndroidBinder6handleEv(void *this_) {
  auto rv = ((QAndroidBinder*)this_)->handle();
return new QAndroidJniObject(rv);
}

//  main block end
