//  header block begin
// /usr/include/qt/QtNetwork/qdnslookup.h
#ifndef protected
#define protected public
#endif
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsDomainNameRecord is pure virtual: false
// QDnsDomainNameRecord has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDnsDomainNameRecord : public QDnsDomainNameRecord {
public:
  virtual ~MyQDnsDomainNameRecord() {}
// void QDnsDomainNameRecord()
MyQDnsDomainNameRecord() : QDnsDomainNameRecord() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:63
// [-2] void QDnsDomainNameRecord()
extern "C" Q_DECL_EXPORT
void* C_ZN20QDnsDomainNameRecordC2Ev() {
  return  new QDnsDomainNameRecord();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:66
// [8] QDnsDomainNameRecord & operator=(QDnsDomainNameRecord &&)
extern "C" Q_DECL_EXPORT
void* C_ZN20QDnsDomainNameRecordaSEOS_(void *this_, QDnsDomainNameRecord && other) {
  auto& rv = ((QDnsDomainNameRecord*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:68
// [8] QDnsDomainNameRecord & operator=(const QDnsDomainNameRecord &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QDnsDomainNameRecordaSERKS_(void *this_, QDnsDomainNameRecord* other) {
  auto& rv = ((QDnsDomainNameRecord*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:69
// [-2] void ~QDnsDomainNameRecord()
extern "C" Q_DECL_EXPORT
void C_ZN20QDnsDomainNameRecordD2Ev(void *this_) {
  delete (QDnsDomainNameRecord*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:71
// [-2] void swap(QDnsDomainNameRecord &)
extern "C" Q_DECL_EXPORT
void C_ZN20QDnsDomainNameRecord4swapERS_(void *this_, QDnsDomainNameRecord* other) {
  ((QDnsDomainNameRecord*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:73
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QDnsDomainNameRecord4nameEv(void *this_) {
  auto rv = ((QDnsDomainNameRecord*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:74
// [4] quint32 timeToLive()
extern "C" Q_DECL_EXPORT
quint32 C_ZNK20QDnsDomainNameRecord10timeToLiveEv(void *this_) {
  return (quint32)((QDnsDomainNameRecord*)this_)->timeToLive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:75
// [8] QString value()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QDnsDomainNameRecord5valueEv(void *this_) {
  auto rv = ((QDnsDomainNameRecord*)this_)->value();
return new QString(rv);
}

//  main block end
