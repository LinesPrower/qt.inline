//  header block begin
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h
#include <qnetworkconfiguration.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkConfiguration is pure virtual: false
// QNetworkConfiguration has virtual projected: false
//  header block end

//  main block begin

class MyQNetworkConfiguration : public QNetworkConfiguration {
public:
  virtual ~MyQNetworkConfiguration() {}
// void QNetworkConfiguration()
MyQNetworkConfiguration() : QNetworkConfiguration() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:56
// [-2] void QNetworkConfiguration()
extern "C"
void* C_ZN21QNetworkConfigurationC2Ev() {
  return  new QNetworkConfiguration();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:62
// [-2] void ~QNetworkConfiguration()
extern "C"
void C_ZN21QNetworkConfigurationD2Ev(void *this_) {
  delete (QNetworkConfiguration*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:64
// [-2] void swap(class QNetworkConfiguration &)
extern "C"
void C_ZN21QNetworkConfiguration4swapERS_(void *this_, QNetworkConfiguration* other) {
  ((QNetworkConfiguration*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:108
// [4] QNetworkConfiguration::StateFlags state()
extern "C"
void C_ZNK21QNetworkConfiguration5stateEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->state();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:109
// [4] QNetworkConfiguration::Type type()
extern "C"
QNetworkConfiguration::Type C_ZNK21QNetworkConfiguration4typeEv(void *this_) {
  return (QNetworkConfiguration::Type)((QNetworkConfiguration*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:110
// [4] QNetworkConfiguration::Purpose purpose()
extern "C"
QNetworkConfiguration::Purpose C_ZNK21QNetworkConfiguration7purposeEv(void *this_) {
  return (QNetworkConfiguration::Purpose)((QNetworkConfiguration*)this_)->purpose();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:112
// [4] QNetworkConfiguration::BearerType bearerType()
extern "C"
QNetworkConfiguration::BearerType C_ZNK21QNetworkConfiguration10bearerTypeEv(void *this_) {
  return (QNetworkConfiguration::BearerType)((QNetworkConfiguration*)this_)->bearerType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:113
// [4] QNetworkConfiguration::BearerType bearerTypeFamily()
extern "C"
QNetworkConfiguration::BearerType C_ZNK21QNetworkConfiguration16bearerTypeFamilyEv(void *this_) {
  return (QNetworkConfiguration::BearerType)((QNetworkConfiguration*)this_)->bearerTypeFamily();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:114
// [8] QString bearerTypeName()
extern "C"
void* C_ZNK21QNetworkConfiguration14bearerTypeNameEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->bearerTypeName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:116
// [8] QString identifier()
extern "C"
void* C_ZNK21QNetworkConfiguration10identifierEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->identifier();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:117
// [1] bool isRoamingAvailable()
extern "C"
bool C_ZNK21QNetworkConfiguration18isRoamingAvailableEv(void *this_) {
  return (bool)((QNetworkConfiguration*)this_)->isRoamingAvailable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:120
// [8] QString name()
extern "C"
void* C_ZNK21QNetworkConfiguration4nameEv(void *this_) {
  auto rv = ((QNetworkConfiguration*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:121
// [1] bool isValid()
extern "C"
bool C_ZNK21QNetworkConfiguration7isValidEv(void *this_) {
  return (bool)((QNetworkConfiguration*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:123
// [4] int connectTimeout()
extern "C"
int C_ZNK21QNetworkConfiguration14connectTimeoutEv(void *this_) {
  return (int)((QNetworkConfiguration*)this_)->connectTimeout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:124
// [1] bool setConnectTimeout(int)
extern "C"
bool C_ZN21QNetworkConfiguration17setConnectTimeoutEi(void *this_, int timeout) {
  return (bool)((QNetworkConfiguration*)this_)->setConnectTimeout(timeout);
}
//  main block end