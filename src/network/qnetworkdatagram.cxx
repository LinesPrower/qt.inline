//  header block begin
// since 0x050800
// /usr/include/qt/QtNetwork/qnetworkdatagram.h
#ifndef protected
#define protected public
#endif
#include <qnetworkdatagram.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkDatagram is pure virtual: false
// QNetworkDatagram has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkDatagram : public QNetworkDatagram {
public:
  virtual ~MyQNetworkDatagram() {}
// void QNetworkDatagram()
MyQNetworkDatagram() : QNetworkDatagram() {}
// void QNetworkDatagram(const QByteArray &, const QHostAddress &, quint16)
MyQNetworkDatagram(const QByteArray & data, const QHostAddress & destinationAddress, quint16 port) : QNetworkDatagram(data, destinationAddress, port) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:56
// [-2] void QNetworkDatagram()
extern "C" Q_DECL_EXPORT
void* C_ZN16QNetworkDatagramC2Ev() {
  return  new QNetworkDatagram();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:57
// [-2] void QNetworkDatagram(const QByteArray &, const QHostAddress &, quint16)
extern "C" Q_DECL_EXPORT
void* C_ZN16QNetworkDatagramC2ERK10QByteArrayRK12QHostAddresst(QByteArray* data, QHostAddress* destinationAddress, quint16 port) {
  return  new QNetworkDatagram(*data, *destinationAddress, port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:60
// [8] QNetworkDatagram & operator=(const QNetworkDatagram &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QNetworkDatagramaSERKS_(void *this_, QNetworkDatagram* other) {
  auto& rv = ((QNetworkDatagram*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:61
// [-2] void ~QNetworkDatagram()
extern "C" Q_DECL_EXPORT
void C_ZN16QNetworkDatagramD2Ev(void *this_) {
  delete (QNetworkDatagram*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:67
// [8] QNetworkDatagram & operator=(QNetworkDatagram &&)
extern "C" Q_DECL_EXPORT
void* C_ZN16QNetworkDatagramaSEOS_(void *this_, QNetworkDatagram && other) {
  auto& rv = ((QNetworkDatagram*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:70
// [-2] void swap(QNetworkDatagram &)
extern "C" Q_DECL_EXPORT
void C_ZN16QNetworkDatagram4swapERS_(void *this_, QNetworkDatagram* other) {
  ((QNetworkDatagram*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:73
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN16QNetworkDatagram5clearEv(void *this_) {
  ((QNetworkDatagram*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:74
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QNetworkDatagram7isValidEv(void *this_) {
  return (bool)((QNetworkDatagram*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:75
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QNetworkDatagram6isNullEv(void *this_) {
  return (bool)((QNetworkDatagram*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:78
// [4] uint interfaceIndex()
extern "C" Q_DECL_EXPORT
uint C_ZNK16QNetworkDatagram14interfaceIndexEv(void *this_) {
  return (uint)((QNetworkDatagram*)this_)->interfaceIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:79
// [-2] void setInterfaceIndex(uint)
extern "C" Q_DECL_EXPORT
void C_ZN16QNetworkDatagram17setInterfaceIndexEj(void *this_, uint index) {
  ((QNetworkDatagram*)this_)->setInterfaceIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:81
// [8] QHostAddress senderAddress()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QNetworkDatagram13senderAddressEv(void *this_) {
  auto rv = ((QNetworkDatagram*)this_)->senderAddress();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:82
// [8] QHostAddress destinationAddress()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QNetworkDatagram18destinationAddressEv(void *this_) {
  auto rv = ((QNetworkDatagram*)this_)->destinationAddress();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:83
// [4] int senderPort()
extern "C" Q_DECL_EXPORT
int C_ZNK16QNetworkDatagram10senderPortEv(void *this_) {
  return (int)((QNetworkDatagram*)this_)->senderPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:84
// [4] int destinationPort()
extern "C" Q_DECL_EXPORT
int C_ZNK16QNetworkDatagram15destinationPortEv(void *this_) {
  return (int)((QNetworkDatagram*)this_)->destinationPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:85
// [-2] void setSender(const QHostAddress &, quint16)
extern "C" Q_DECL_EXPORT
void C_ZN16QNetworkDatagram9setSenderERK12QHostAddresst(void *this_, QHostAddress* address, quint16 port) {
  ((QNetworkDatagram*)this_)->setSender(*address, port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:86
// [-2] void setDestination(const QHostAddress &, quint16)
extern "C" Q_DECL_EXPORT
void C_ZN16QNetworkDatagram14setDestinationERK12QHostAddresst(void *this_, QHostAddress* address, quint16 port) {
  ((QNetworkDatagram*)this_)->setDestination(*address, port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:88
// [4] int hopLimit()
extern "C" Q_DECL_EXPORT
int C_ZNK16QNetworkDatagram8hopLimitEv(void *this_) {
  return (int)((QNetworkDatagram*)this_)->hopLimit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:89
// [-2] void setHopLimit(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QNetworkDatagram11setHopLimitEi(void *this_, int count) {
  ((QNetworkDatagram*)this_)->setHopLimit(count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:91
// [8] QByteArray data()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QNetworkDatagram4dataEv(void *this_) {
  auto rv = ((QNetworkDatagram*)this_)->data();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:92
// [-2] void setData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN16QNetworkDatagram7setDataERK10QByteArray(void *this_, QByteArray* data) {
  ((QNetworkDatagram*)this_)->setData(*data);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:95
// [8] QNetworkDatagram makeReply(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNKR16QNetworkDatagram9makeReplyERK10QByteArray(void *this_, QByteArray* payload) {
  auto rv = ((QNetworkDatagram*)this_)->makeReply(*payload);
return new QNetworkDatagram(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:97
// [8] QNetworkDatagram makeReply(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNO16QNetworkDatagram9makeReplyERK10QByteArray(void *this_, QByteArray* payload) {
  auto rv = ((QNetworkDatagram*)this_)->makeReply(*payload);
return new QNetworkDatagram(rv);
}

//  main block end
