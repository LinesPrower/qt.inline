//  header block begin
// since 0x040800
// /usr/include/qt/QtGui/qglyphrun.h
#ifndef protected
#define protected public
#endif
#include <qglyphrun.h>
#include <QtGui>
#include "callback_inherit.h"

// QGlyphRun is pure virtual: false
// QGlyphRun has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGlyphRun : public QGlyphRun {
public:
  virtual ~MyQGlyphRun() {}
// void QGlyphRun()
MyQGlyphRun() : QGlyphRun() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:67
// [-2] void QGlyphRun()
extern "C" Q_DECL_EXPORT
void* C_ZN9QGlyphRunC2Ev() {
  return  new QGlyphRun();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:70
// [8] QGlyphRun & operator=(QGlyphRun &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QGlyphRunaSEOS_(void *this_, QGlyphRun && other) {
  auto& rv = ((QGlyphRun*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:72
// [8] QGlyphRun & operator=(const QGlyphRun &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QGlyphRunaSERKS_(void *this_, QGlyphRun* other) {
  auto& rv = ((QGlyphRun*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:73
// [-2] void ~QGlyphRun()
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRunD2Ev(void *this_) {
  delete (QGlyphRun*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qglyphrun.h:75
// [-2] void swap(QGlyphRun &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun4swapERS_(void *this_, QGlyphRun* other) {
  ((QGlyphRun*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:77
// [8] QRawFont rawFont()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QGlyphRun7rawFontEv(void *this_) {
  auto rv = ((QGlyphRun*)this_)->rawFont();
return new QRawFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:78
// [-2] void setRawFont(const QRawFont &)
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun10setRawFontERK8QRawFont(void *this_, QRawFont* rawFont) {
  ((QGlyphRun*)this_)->setRawFont(*rawFont);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:80
// [-2] void setRawData(const quint32 *, const QPointF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun10setRawDataEPKjPK7QPointFi(void *this_, const quint32 * glyphIndexArray, const QPointF * glyphPositionArray, int size) {
  ((QGlyphRun*)this_)->setRawData(glyphIndexArray, glyphPositionArray, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:90
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun5clearEv(void *this_) {
  ((QGlyphRun*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:92
// [1] bool operator==(const QGlyphRun &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGlyphRuneqERKS_(void *this_, QGlyphRun* other) {
  return (bool)((QGlyphRun*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:93
// [1] bool operator!=(const QGlyphRun &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGlyphRunneERKS_(void *this_, QGlyphRun* other) {
  return (bool)((QGlyphRun*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:96
// [-2] void setOverline(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun11setOverlineEb(void *this_, bool overline) {
  ((QGlyphRun*)this_)->setOverline(overline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:97
// [1] bool overline()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGlyphRun8overlineEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->overline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:99
// [-2] void setUnderline(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun12setUnderlineEb(void *this_, bool underline) {
  ((QGlyphRun*)this_)->setUnderline(underline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:100
// [1] bool underline()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGlyphRun9underlineEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->underline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:102
// [-2] void setStrikeOut(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun12setStrikeOutEb(void *this_, bool strikeOut) {
  ((QGlyphRun*)this_)->setStrikeOut(strikeOut);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:103
// [1] bool strikeOut()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGlyphRun9strikeOutEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->strikeOut();
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qglyphrun.h:105
// [-2] void setRightToLeft(bool)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun14setRightToLeftEb(void *this_, bool on) {
  ((QGlyphRun*)this_)->setRightToLeft(on);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qglyphrun.h:106
// [1] bool isRightToLeft()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGlyphRun13isRightToLeftEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->isRightToLeft();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:108
// [-2] void setFlag(QGlyphRun::GlyphRunFlag, bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun7setFlagENS_12GlyphRunFlagEb(void *this_, QGlyphRun::GlyphRunFlag flag, bool enabled) {
  ((QGlyphRun*)this_)->setFlag(flag, enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:109
// [-2] void setFlags(QGlyphRun::GlyphRunFlags)
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun8setFlagsE6QFlagsINS_12GlyphRunFlagEE(void *this_, QFlags<QGlyphRun::GlyphRunFlag> flags) {
  ((QGlyphRun*)this_)->setFlags(flags);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qglyphrun.h:110
// [-2] QGlyphRun::GlyphRunFlags flags()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QGlyphRun::GlyphRunFlags* C_ZNK9QGlyphRun5flagsEv(void *this_) {
  auto rv = ((QGlyphRun*)this_)->flags();
return new QGlyphRun::GlyphRunFlags(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qglyphrun.h:112
// [-2] void setBoundingRect(const QRectF &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QGlyphRun15setBoundingRectERK6QRectF(void *this_, QRectF* boundingRect) {
  ((QGlyphRun*)this_)->setBoundingRect(*boundingRect);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qglyphrun.h:113
// [32] QRectF boundingRect()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK9QGlyphRun12boundingRectEv(void *this_) {
  auto rv = ((QGlyphRun*)this_)->boundingRect();
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qglyphrun.h:115
// [1] bool isEmpty()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGlyphRun7isEmptyEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->isEmpty();
}
#endif // QT_VERSION >= 0x050000

//  main block end
