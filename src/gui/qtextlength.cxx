//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextLength is pure virtual: false
// QTextLength has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextLength : public QTextLength {
public:
  virtual ~MyQTextLength() {}
// void QTextLength()
MyQTextLength() : QTextLength() {}
// void QTextLength(QTextLength::Type, qreal)
MyQTextLength(QTextLength::Type type_, qreal value) : QTextLength(type_, value) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:89
// [-2] void QTextLength()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLengthC2Ev() {
  return  new QTextLength();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:91
// [-2] void QTextLength(QTextLength::Type, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLengthC2ENS_4TypeEd(QTextLength::Type type_, qreal value) {
  return  new QTextLength(type_, value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:93
// [4] QTextLength::Type type()
extern "C" Q_DECL_EXPORT
QTextLength::Type C_ZNK11QTextLength4typeEv(void *this_) {
  return (QTextLength::Type)((QTextLength*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:94
// [8] qreal value(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextLength5valueEd(void *this_, qreal maximumLength) {
  return (qreal)((QTextLength*)this_)->value(maximumLength);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:104
// [8] qreal rawValue()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextLength8rawValueEv(void *this_) {
  return (qreal)((QTextLength*)this_)->rawValue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:106
// [1] bool operator==(const QTextLength &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextLengtheqERKS_(void *this_, QTextLength* other) {
  return (bool)((QTextLength*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:109
// [1] bool operator!=(const QTextLength &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextLengthneERKS_(void *this_, QTextLength* other) {
  return (bool)((QTextLength*)this_)->operator!=(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QTextLengthD2Ev(void *this_) {
  delete (QTextLength*)(this_);
}
//  main block end
