//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleValueChangeEvent is pure virtual: false
// QAccessibleValueChangeEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleValueChangeEvent : public QAccessibleValueChangeEvent {
public:
  virtual ~MyQAccessibleValueChangeEvent() {}
// void QAccessibleValueChangeEvent(QObject *, const QVariant &)
MyQAccessibleValueChangeEvent(QObject * obj, const QVariant & val) : QAccessibleValueChangeEvent(obj, val) {}
// void QAccessibleValueChangeEvent(QAccessibleInterface *, const QVariant &)
MyQAccessibleValueChangeEvent(QAccessibleInterface * iface, const QVariant & val) : QAccessibleValueChangeEvent(iface, val) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:898
// [-2] void QAccessibleValueChangeEvent(QObject *, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAccessibleValueChangeEventC2EP7QObjectRK8QVariant(QObject * obj, QVariant* val) {
  return  new QAccessibleValueChangeEvent(obj, *val);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:904
// [-2] void QAccessibleValueChangeEvent(QAccessibleInterface *, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAccessibleValueChangeEventC2EP20QAccessibleInterfaceRK8QVariant(QAccessibleInterface * iface, QVariant* val) {
  return  new QAccessibleValueChangeEvent(iface, *val);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:911
// [-2] void ~QAccessibleValueChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN27QAccessibleValueChangeEventD2Ev(void *this_) {
  delete (QAccessibleValueChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:913
// [-2] void setValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAccessibleValueChangeEvent8setValueERK8QVariant(void *this_, QVariant* val) {
  ((QAccessibleValueChangeEvent*)this_)->setValue(*val);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:914
// [16] QVariant value()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAccessibleValueChangeEvent5valueEv(void *this_) {
  auto rv = ((QAccessibleValueChangeEvent*)this_)->value();
return new QVariant(rv);
}

//  main block end
