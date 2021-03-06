//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleValueInterface is pure virtual: true
// QAccessibleValueInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleValueInterface : public QAccessibleValueInterface {
public:
  virtual ~MyQAccessibleValueInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:566
// [-2] void ~QAccessibleValueInterface()
extern "C" Q_DECL_EXPORT
void C_ZN25QAccessibleValueInterfaceD2Ev(void *this_) {
  delete (QAccessibleValueInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:568
// [16] QVariant currentValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleValueInterface12currentValueEv(void *this_) {
  auto rv = ((QAccessibleValueInterface*)this_)->currentValue();
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:569
// [-2] void setCurrentValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN25QAccessibleValueInterface15setCurrentValueERK8QVariant(void *this_, QVariant* value) {
  ((QAccessibleValueInterface*)this_)->setCurrentValue(*value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:570
// [16] QVariant maximumValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleValueInterface12maximumValueEv(void *this_) {
  auto rv = ((QAccessibleValueInterface*)this_)->maximumValue();
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:571
// [16] QVariant minimumValue()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleValueInterface12minimumValueEv(void *this_) {
  auto rv = ((QAccessibleValueInterface*)this_)->minimumValue();
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:572
// [16] QVariant minimumStepSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleValueInterface15minimumStepSizeEv(void *this_) {
  auto rv = ((QAccessibleValueInterface*)this_)->minimumStepSize();
return new QVariant(rv);
}

//  main block end
