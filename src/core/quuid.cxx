//  header block begin
// /usr/include/qt/QtCore/quuid.h
#ifndef protected
#define protected public
#endif
#include <quuid.h>
#include <QtCore>
#include "callback_inherit.h"

// QUuid is pure virtual: false
// QUuid has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQUuid : public QUuid {
public:
  virtual ~MyQUuid() {}
// void QUuid()
MyQUuid() : QUuid() {}
// void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
MyQUuid(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8) : QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) {}
// void QUuid(const QString &)
MyQUuid(const QString & arg0) : QUuid(arg0) {}
// void QUuid(const char *)
MyQUuid(const char * arg0) : QUuid(arg0) {}
// void QUuid(const QByteArray &)
MyQUuid(const QByteArray & arg0) : QUuid(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:89
// [-2] void QUuid()
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2Ev() {
  return  new QUuid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:91
// [-2] void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2Ejtthhhhhhhh(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8) {
  return  new QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:119
// [-2] void QUuid(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2ERK7QString(QString* arg0) {
  return  new QUuid(*arg0);
}

// Public static Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/quuid.h:120
// [16] QUuid fromString(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid10fromStringE11QStringView(QStringView* string) {
  auto rv = QUuid::fromString(*string);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public static Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/quuid.h:121
// [16] QUuid fromString(QLatin1String)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid10fromStringE13QLatin1String(QLatin1String* string) {
  auto rv = QUuid::fromString(*string);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:122
// [-2] void QUuid(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2EPKc(const char * arg0) {
  return  new QUuid(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:123
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QUuid8toStringEv(void *this_) {
  auto rv = ((QUuid*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/quuid.h:124
// [-2] void QUuid(const QByteArray &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuidC2ERK10QByteArray(QByteArray* arg0) {
  return  new QUuid(*arg0);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/quuid.h:125
// [8] QByteArray toByteArray()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK5QUuid11toByteArrayEv(void *this_) {
  auto rv = ((QUuid*)this_)->toByteArray();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/quuid.h:126
// [8] QByteArray toRfc4122()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK5QUuid9toRfc4122Ev(void *this_) {
  auto rv = ((QUuid*)this_)->toRfc4122();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x040800

// Public static Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/quuid.h:127
// [16] QUuid fromRfc4122(const QByteArray &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid11fromRfc4122ERK10QByteArray(QByteArray* arg0) {
  auto rv = QUuid::fromRfc4122(*arg0);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:128
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuid6isNullEv(void *this_) {
  return (bool)((QUuid*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:130
// [1] bool operator==(const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuideqERKS_(void *this_, QUuid* orig) {
  return (bool)((QUuid*)this_)->operator==(*orig);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:143
// [1] bool operator!=(const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuidneERKS_(void *this_, QUuid* orig) {
  return (bool)((QUuid*)this_)->operator!=(*orig);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:148
// [1] bool operator<(const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuidltERKS_(void *this_, QUuid* other) {
  return (bool)((QUuid*)this_)->operator<(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:149
// [1] bool operator>(const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QUuidgtERKS_(void *this_, QUuid* other) {
  return (bool)((QUuid*)this_)->operator>(*other);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:192
// [16] QUuid createUuid()
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid10createUuidEv() {
  auto rv = QUuid::createUuid();
return new QUuid(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/quuid.h:194
// [16] QUuid createUuidV3(const QUuid &, const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid12createUuidV3ERKS_RK10QByteArray(QUuid* ns, QByteArray* baseData) {
  auto rv = QUuid::createUuidV3(*ns, *baseData);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/quuid.h:195
// [16] QUuid createUuidV5(const QUuid &, const QByteArray &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid12createUuidV5ERKS_RK10QByteArray(QUuid* ns, QByteArray* baseData) {
  auto rv = QUuid::createUuidV5(*ns, *baseData);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/quuid.h:196
// [16] QUuid createUuidV3(const QUuid &, const QString &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid12createUuidV3ERKS_RK7QString(QUuid* ns, QString* baseData) {
  auto rv = QUuid::createUuidV3(*ns, *baseData);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/quuid.h:201
// [16] QUuid createUuidV5(const QUuid &, const QString &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZN5QUuid12createUuidV5ERKS_RK7QString(QUuid* ns, QString* baseData) {
  auto rv = QUuid::createUuidV5(*ns, *baseData);
return new QUuid(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:208
// [4] QUuid::Variant variant()
extern "C" Q_DECL_EXPORT
QUuid::Variant C_ZNK5QUuid7variantEv(void *this_) {
  return (QUuid::Variant)((QUuid*)this_)->variant();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:209
// [4] QUuid::Version version()
extern "C" Q_DECL_EXPORT
QUuid::Version C_ZNK5QUuid7versionEv(void *this_) {
  return (QUuid::Version)((QUuid*)this_)->version();
}


extern "C" Q_DECL_EXPORT
void C_ZN5QUuidD2Ev(void *this_) {
  delete (QUuid*)(this_);
}
//  main block end
