//  header block begin
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h
#include <qqmlpropertyvaluesource.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlPropertyValueSource is pure virtual: true
// QQmlPropertyValueSource has virtual projected: false
//  header block end

//  main block begin

class MyQQmlPropertyValueSource : public QQmlPropertyValueSource {
public:
  virtual ~MyQQmlPropertyValueSource() {}
// void QQmlPropertyValueSource()
MyQQmlPropertyValueSource() : QQmlPropertyValueSource() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h:53
// [-2] void QQmlPropertyValueSource()
extern "C"
void* C_ZN23QQmlPropertyValueSourceC1Ev() {
  return 0; // new QQmlPropertyValueSource();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h:54
// [-2] void ~QQmlPropertyValueSource()
extern "C"
void C_ZN23QQmlPropertyValueSourceD2Ev(void *this_) {
  delete (QQmlPropertyValueSource*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlpropertyvaluesource.h:55
// [-2] void setTarget(const class QQmlProperty &)
extern "C"
void C_ZN23QQmlPropertyValueSource9setTargetERK12QQmlProperty(void *this_, QQmlProperty* arg0) {
  ((QQmlPropertyValueSource*)this_)->setTarget(*arg0);
}
//  main block end