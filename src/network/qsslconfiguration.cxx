//  header block begin
// since 0x040400
// /usr/include/qt/QtNetwork/qsslconfiguration.h
#ifndef protected
#define protected public
#endif
#include <qsslconfiguration.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslConfiguration is pure virtual: false
// QSslConfiguration has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSslConfiguration : public QSslConfiguration {
public:
  virtual ~MyQSslConfiguration() {}
// void QSslConfiguration()
MyQSslConfiguration() : QSslConfiguration() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:79
// [-2] void QSslConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZN17QSslConfigurationC2Ev() {
  return  new QSslConfiguration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:81
// [-2] void ~QSslConfiguration()
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfigurationD2Ev(void *this_) {
  delete (QSslConfiguration*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:83
// [8] QSslConfiguration & operator=(QSslConfiguration &&)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSslConfigurationaSEOS_(void *this_, QSslConfiguration && other) {
  auto& rv = ((QSslConfiguration*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:85
// [8] QSslConfiguration & operator=(const QSslConfiguration &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSslConfigurationaSERKS_(void *this_, QSslConfiguration* other) {
  auto& rv = ((QSslConfiguration*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslconfiguration.h:87
// [-2] void swap(QSslConfiguration &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration4swapERS_(void *this_, QSslConfiguration* other) {
  ((QSslConfiguration*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:90
// [1] bool operator==(const QSslConfiguration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QSslConfigurationeqERKS_(void *this_, QSslConfiguration* other) {
  return (bool)((QSslConfiguration*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:91
// [1] bool operator!=(const QSslConfiguration &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QSslConfigurationneERKS_(void *this_, QSslConfiguration* other) {
  return (bool)((QSslConfiguration*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:94
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QSslConfiguration6isNullEv(void *this_) {
  return (bool)((QSslConfiguration*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:96
// [4] QSsl::SslProtocol protocol()
extern "C" Q_DECL_EXPORT
QSsl::SslProtocol C_ZNK17QSslConfiguration8protocolEv(void *this_) {
  return (QSsl::SslProtocol)((QSslConfiguration*)this_)->protocol();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:97
// [-2] void setProtocol(QSsl::SslProtocol)
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration11setProtocolEN4QSsl11SslProtocolE(void *this_, QSsl::SslProtocol protocol) {
  ((QSslConfiguration*)this_)->setProtocol(protocol);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:100
// [4] QSslSocket::PeerVerifyMode peerVerifyMode()
extern "C" Q_DECL_EXPORT
QSslSocket::PeerVerifyMode C_ZNK17QSslConfiguration14peerVerifyModeEv(void *this_) {
  return (QSslSocket::PeerVerifyMode)((QSslConfiguration*)this_)->peerVerifyMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:101
// [-2] void setPeerVerifyMode(QSslSocket::PeerVerifyMode)
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration17setPeerVerifyModeEN10QSslSocket14PeerVerifyModeE(void *this_, QSslSocket::PeerVerifyMode mode) {
  ((QSslConfiguration*)this_)->setPeerVerifyMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:103
// [4] int peerVerifyDepth()
extern "C" Q_DECL_EXPORT
int C_ZNK17QSslConfiguration15peerVerifyDepthEv(void *this_) {
  return (int)((QSslConfiguration*)this_)->peerVerifyDepth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:104
// [-2] void setPeerVerifyDepth(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration18setPeerVerifyDepthEi(void *this_, int depth) {
  ((QSslConfiguration*)this_)->setPeerVerifyDepth(depth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:110
// [8] QSslCertificate localCertificate()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration16localCertificateEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->localCertificate();
return new QSslCertificate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:111
// [-2] void setLocalCertificate(const QSslCertificate &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration19setLocalCertificateERK15QSslCertificate(void *this_, QSslCertificate* certificate) {
  ((QSslConfiguration*)this_)->setLocalCertificate(*certificate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:113
// [8] QSslCertificate peerCertificate()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration15peerCertificateEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->peerCertificate();
return new QSslCertificate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:115
// [8] QSslCipher sessionCipher()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration13sessionCipherEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->sessionCipher();
return new QSslCipher(rv);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtNetwork/qsslconfiguration.h:116
// [4] QSsl::SslProtocol sessionProtocol()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
QSsl::SslProtocol C_ZNK17QSslConfiguration15sessionProtocolEv(void *this_) {
  return (QSsl::SslProtocol)((QSslConfiguration*)this_)->sessionProtocol();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:119
// [8] QSslKey privateKey()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration10privateKeyEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->privateKey();
return new QSslKey(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:120
// [-2] void setPrivateKey(const QSslKey &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration13setPrivateKeyERK7QSslKey(void *this_, QSslKey* key) {
  ((QSslConfiguration*)this_)->setPrivateKey(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:132
// [-2] void setSslOption(QSsl::SslOption, bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration12setSslOptionEN4QSsl9SslOptionEb(void *this_, QSsl::SslOption option, bool on) {
  ((QSslConfiguration*)this_)->setSslOption(option, on);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtNetwork/qsslconfiguration.h:133
// [1] bool testSslOption(QSsl::SslOption)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
bool C_ZNK17QSslConfiguration13testSslOptionEN4QSsl9SslOptionE(void *this_, QSsl::SslOption option) {
  return (bool)((QSslConfiguration*)this_)->testSslOption(option);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qsslconfiguration.h:135
// [8] QByteArray sessionTicket()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration13sessionTicketEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->sessionTicket();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qsslconfiguration.h:136
// [-2] void setSessionTicket(const QByteArray &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration16setSessionTicketERK10QByteArray(void *this_, QByteArray* sessionTicket) {
  ((QSslConfiguration*)this_)->setSessionTicket(*sessionTicket);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtNetwork/qsslconfiguration.h:137
// [4] int sessionTicketLifeTimeHint()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
int C_ZNK17QSslConfiguration25sessionTicketLifeTimeHintEv(void *this_) {
  return (int)((QSslConfiguration*)this_)->sessionTicketLifeTimeHint();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtNetwork/qsslconfiguration.h:139
// [8] QSslKey ephemeralServerKey()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration18ephemeralServerKeyEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->ephemeralServerKey();
return new QSslKey(rv);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qsslconfiguration.h:146
// [8] QByteArray preSharedKeyIdentityHint()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration24preSharedKeyIdentityHintEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->preSharedKeyIdentityHint();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qsslconfiguration.h:147
// [-2] void setPreSharedKeyIdentityHint(const QByteArray &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration27setPreSharedKeyIdentityHintERK10QByteArray(void *this_, QByteArray* hint) {
  ((QSslConfiguration*)this_)->setPreSharedKeyIdentityHint(*hint);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qsslconfiguration.h:149
// [8] QSslDiffieHellmanParameters diffieHellmanParameters()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration23diffieHellmanParametersEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->diffieHellmanParameters();
return new QSslDiffieHellmanParameters(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qsslconfiguration.h:150
// [-2] void setDiffieHellmanParameters(const QSslDiffieHellmanParameters &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration26setDiffieHellmanParametersERK27QSslDiffieHellmanParameters(void *this_, QSslDiffieHellmanParameters* dhparams) {
  ((QSslConfiguration*)this_)->setDiffieHellmanParameters(*dhparams);
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:152
// [8] QSslConfiguration defaultConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZN17QSslConfiguration20defaultConfigurationEv() {
  auto rv = QSslConfiguration::defaultConfiguration();
return new QSslConfiguration(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:153
// [-2] void setDefaultConfiguration(const QSslConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSslConfiguration23setDefaultConfigurationERKS_(QSslConfiguration* configuration) {
  QSslConfiguration::setDefaultConfiguration(*configuration);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtNetwork/qsslconfiguration.h:168
// [8] QByteArray nextNegotiatedProtocol()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSslConfiguration22nextNegotiatedProtocolEv(void *this_) {
  auto rv = ((QSslConfiguration*)this_)->nextNegotiatedProtocol();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtNetwork/qsslconfiguration.h:169
// [4] QSslConfiguration::NextProtocolNegotiationStatus nextProtocolNegotiationStatus()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
QSslConfiguration::NextProtocolNegotiationStatus C_ZNK17QSslConfiguration29nextProtocolNegotiationStatusEv(void *this_) {
  return (QSslConfiguration::NextProtocolNegotiationStatus)((QSslConfiguration*)this_)->nextProtocolNegotiationStatus();
}
#endif // QT_VERSION >= 0x050300

//  main block end
