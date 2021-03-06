//  header block begin
// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextDecoder is pure virtual: false
// QTextDecoder has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextDecoder : public QTextDecoder {
public:
  virtual ~MyQTextDecoder() {}
// void QTextDecoder(const QTextCodec *)
MyQTextDecoder(const QTextCodec * codec) : QTextDecoder(codec) {}
// void QTextDecoder(const QTextCodec *, QTextCodec::ConversionFlags)
MyQTextDecoder(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) : QTextDecoder(codec, flags) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:158
// [-2] void QTextDecoder(const QTextCodec *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextDecoderC2EPK10QTextCodec(const QTextCodec * codec) {
  return  new QTextDecoder(codec);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qtextcodec.h:159
// [-2] void QTextDecoder(const QTextCodec *, QTextCodec::ConversionFlags)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextDecoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) {
  return  new QTextDecoder(codec, flags);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:160
// [-2] void ~QTextDecoder()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextDecoderD2Ev(void *this_) {
  delete (QTextDecoder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:161
// [8] QString toUnicode(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextDecoder9toUnicodeEPKci(void *this_, const char * chars, int len_) {
  auto rv = ((QTextDecoder*)this_)->toUnicode(chars, len_);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:162
// [8] QString toUnicode(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextDecoder9toUnicodeERK10QByteArray(void *this_, QByteArray* ba) {
  auto rv = ((QTextDecoder*)this_)->toUnicode(*ba);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:163
// [-2] void toUnicode(QString *, const char *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextDecoder9toUnicodeEP7QStringPKci(void *this_, QString * target, const char * chars, int len_) {
  ((QTextDecoder*)this_)->toUnicode(target, chars, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:164
// [1] bool hasFailure()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextDecoder10hasFailureEv(void *this_) {
  return (bool)((QTextDecoder*)this_)->hasFailure();
}

//  main block end
