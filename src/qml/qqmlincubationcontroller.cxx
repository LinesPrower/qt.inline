//  header block begin
// /usr/include/qt/QtQml/qqmlincubator.h
#ifndef protected
#define protected public
#endif
#include <qqmlincubator.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlIncubationController is pure virtual: false
// QQmlIncubationController has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlIncubationController : public QQmlIncubationController {
public:
  virtual ~MyQQmlIncubationController() {}
// void QQmlIncubationController()
MyQQmlIncubationController() : QQmlIncubationController() {}
// Protected virtual Visibility=Default Availability=Available
// void incubatingObjectCountChanged(int)
  virtual void incubatingObjectCountChanged(int arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"incubatingObjectCountChanged", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQmlIncubationController::incubatingObjectCountChanged(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:113
// [-2] void incubatingObjectCountChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN24QQmlIncubationController28incubatingObjectCountChangedEi(void *this_, int arg0) {
  ((QQmlIncubationController*)this_)->QQmlIncubationController::incubatingObjectCountChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:103
// [-2] void QQmlIncubationController()
extern "C" Q_DECL_EXPORT
void* C_ZN24QQmlIncubationControllerC2Ev() {
  auto _nilp = (MyQQmlIncubationController*)(0);
  return  new MyQQmlIncubationController();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:104
// [-2] void ~QQmlIncubationController()
extern "C" Q_DECL_EXPORT
void C_ZN24QQmlIncubationControllerD2Ev(void *this_) {
  delete (QQmlIncubationController*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:106
// [8] QQmlEngine * engine()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QQmlIncubationController6engineEv(void *this_) {
  return (void*)((QQmlIncubationController*)this_)->engine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:107
// [4] int incubatingObjectCount()
extern "C" Q_DECL_EXPORT
int C_ZNK24QQmlIncubationController21incubatingObjectCountEv(void *this_) {
  return (int)((QQmlIncubationController*)this_)->incubatingObjectCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:109
// [-2] void incubateFor(int)
extern "C" Q_DECL_EXPORT
void C_ZN24QQmlIncubationController11incubateForEi(void *this_, int msecs) {
  ((QQmlIncubationController*)this_)->incubateFor(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:110
// [-2] void incubateWhile(volatile bool *, int)
extern "C" Q_DECL_EXPORT
void C_ZN24QQmlIncubationController13incubateWhileEPVbi(void *this_, volatile bool * flag, int msecs) {
  ((QQmlIncubationController*)this_)->incubateWhile(flag, msecs);
}

//  main block end
