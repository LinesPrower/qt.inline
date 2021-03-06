//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleHintReturnMask is pure virtual: false
// QStyleHintReturnMask has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleHintReturnMask : public QStyleHintReturnMask {
public:
  virtual ~MyQStyleHintReturnMask() {}
// void QStyleHintReturnMask()
MyQStyleHintReturnMask() : QStyleHintReturnMask() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:722
// [-2] void QStyleHintReturnMask()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleHintReturnMaskC2Ev() {
  return  new QStyleHintReturnMask();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:723
// [-2] void ~QStyleHintReturnMask()
extern "C" Q_DECL_EXPORT
void C_ZN20QStyleHintReturnMaskD2Ev(void *this_) {
  delete (QStyleHintReturnMask*)(this_);
}
//  main block end
