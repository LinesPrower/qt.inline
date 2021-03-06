//  header block begin
// /usr/include/qt/QtNetwork/qhostaddress.h
#ifndef protected
#define protected public
#endif
#include <qhostaddress.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QIPv6Address is pure virtual: false
// QIPv6Address has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQIPv6Address : public QIPv6Address {
public:
  virtual ~MyQIPv6Address() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:60
// [1] quint8 & operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QIPv6AddressixEi(void *this_, int index) {
  auto& rv = ((QIPv6Address*)this_)->operator[](index);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:61
// [1] quint8 operator[](int)
extern "C" Q_DECL_EXPORT
quint8 C_ZNK12QIPv6AddressixEi(void *this_, int index) {
  return (quint8)((QIPv6Address*)this_)->operator[](index);
}


extern "C" Q_DECL_EXPORT
void C_ZN12QIPv6AddressD2Ev(void *this_) {
  delete (QIPv6Address*)(this_);
}
//  main block end
