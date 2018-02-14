//  header block begin
// /usr/include/qt/QtCore/qbitarray.h
#include <qbitarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QBitRef is pure virtual: false
// QBitRef has virtual projected: false
//  header block end

//  main block begin

class MyQBitRef : public QBitRef {
public:
  virtual ~MyQBitRef() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:152
// [1] bool operator!()
extern "C"
bool C_ZNK7QBitRefntEv(void *this_) {
  return (bool)((QBitRef*)this_)->operator!();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:153
// [16] QBitRef & operator=(const class QBitRef &)
extern "C"
void* C_ZN7QBitRefaSERKS_(void *this_, QBitRef* val) {
  auto& rv = ((QBitRef*)this_)->operator=(*val);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:154
// [16] QBitRef & operator=(_Bool)
extern "C"
void* C_ZN7QBitRefaSEb(void *this_, bool val) {
  auto& rv = ((QBitRef*)this_)->operator=(val);
return &rv;
}

extern "C"
void C_ZN7QBitRefD2Ev(void *this_) {
  delete (QBitRef*)(this_);
}
//  main block end
