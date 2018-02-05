//  header block begin
// /usr/include/qt/QtNetwork/qnetworkcookie.h
#include <qnetworkcookie.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkCookie is pure virtual: false
// QNetworkCookie has virtual projected: false
//  header block end

//  main block begin

class MyQNetworkCookie : public QNetworkCookie {
public:
  virtual ~MyQNetworkCookie() {}
// void QNetworkCookie(const class QByteArray &, const class QByteArray &)
MyQNetworkCookie(const QByteArray & name, const QByteArray & value) : QNetworkCookie(name, value) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:66
// [-2] void QNetworkCookie(const class QByteArray &, const class QByteArray &)
extern "C"
void* C_ZN14QNetworkCookieC2ERK10QByteArrayS2_(QByteArray* name, QByteArray* value) {
  return  new QNetworkCookie(*name, *value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:68
// [-2] void ~QNetworkCookie()
extern "C"
void C_ZN14QNetworkCookieD2Ev(void *this_) {
  delete (QNetworkCookie*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:74
// [-2] void swap(class QNetworkCookie &)
extern "C"
void C_ZN14QNetworkCookie4swapERS_(void *this_, QNetworkCookie* other) {
  ((QNetworkCookie*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:80
// [1] bool isSecure()
extern "C"
bool C_ZNK14QNetworkCookie8isSecureEv(void *this_) {
  return (bool)((QNetworkCookie*)this_)->isSecure();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:81
// [-2] void setSecure(_Bool)
extern "C"
void C_ZN14QNetworkCookie9setSecureEb(void *this_, bool enable) {
  ((QNetworkCookie*)this_)->setSecure(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:82
// [1] bool isHttpOnly()
extern "C"
bool C_ZNK14QNetworkCookie10isHttpOnlyEv(void *this_) {
  return (bool)((QNetworkCookie*)this_)->isHttpOnly();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:83
// [-2] void setHttpOnly(_Bool)
extern "C"
void C_ZN14QNetworkCookie11setHttpOnlyEb(void *this_, bool enable) {
  ((QNetworkCookie*)this_)->setHttpOnly(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:85
// [1] bool isSessionCookie()
extern "C"
bool C_ZNK14QNetworkCookie15isSessionCookieEv(void *this_) {
  return (bool)((QNetworkCookie*)this_)->isSessionCookie();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:86
// [8] QDateTime expirationDate()
extern "C"
void* C_ZNK14QNetworkCookie14expirationDateEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->expirationDate();
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:87
// [-2] void setExpirationDate(const class QDateTime &)
extern "C"
void C_ZN14QNetworkCookie17setExpirationDateERK9QDateTime(void *this_, QDateTime* date) {
  ((QNetworkCookie*)this_)->setExpirationDate(*date);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:89
// [8] QString domain()
extern "C"
void* C_ZNK14QNetworkCookie6domainEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->domain();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:90
// [-2] void setDomain(const class QString &)
extern "C"
void C_ZN14QNetworkCookie9setDomainERK7QString(void *this_, QString* domain) {
  ((QNetworkCookie*)this_)->setDomain(*domain);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:92
// [8] QString path()
extern "C"
void* C_ZNK14QNetworkCookie4pathEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->path();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:93
// [-2] void setPath(const class QString &)
extern "C"
void C_ZN14QNetworkCookie7setPathERK7QString(void *this_, QString* path) {
  ((QNetworkCookie*)this_)->setPath(*path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:95
// [8] QByteArray name()
extern "C"
void* C_ZNK14QNetworkCookie4nameEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->name();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:96
// [-2] void setName(const class QByteArray &)
extern "C"
void C_ZN14QNetworkCookie7setNameERK10QByteArray(void *this_, QByteArray* cookieName) {
  ((QNetworkCookie*)this_)->setName(*cookieName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:98
// [8] QByteArray value()
extern "C"
void* C_ZNK14QNetworkCookie5valueEv(void *this_) {
  auto rv = ((QNetworkCookie*)this_)->value();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:99
// [-2] void setValue(const class QByteArray &)
extern "C"
void C_ZN14QNetworkCookie8setValueERK10QByteArray(void *this_, QByteArray* value) {
  ((QNetworkCookie*)this_)->setValue(*value);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:101
// [8] QByteArray toRawForm(enum QNetworkCookie::RawForm)
extern "C"
void* C_ZNK14QNetworkCookie9toRawFormENS_7RawFormE(void *this_, QNetworkCookie::RawForm form) {
  auto rv = ((QNetworkCookie*)this_)->toRawForm(form);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:103
// [1] bool hasSameIdentifier(const class QNetworkCookie &)
extern "C"
bool C_ZNK14QNetworkCookie17hasSameIdentifierERKS_(void *this_, QNetworkCookie* other) {
  return (bool)((QNetworkCookie*)this_)->hasSameIdentifier(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:104
// [-2] void normalize(const class QUrl &)
extern "C"
void C_ZN14QNetworkCookie9normalizeERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkCookie*)this_)->normalize(*url);
}
//  main block end