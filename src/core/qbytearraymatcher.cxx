//  header block begin
// /usr/include/qt/QtCore/qbytearraymatcher.h
#include <qbytearraymatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArrayMatcher is pure virtual: false
// QByteArrayMatcher has virtual projected: false
//  header block end

//  main block begin

class MyQByteArrayMatcher : public QByteArrayMatcher {
public:
  virtual ~MyQByteArrayMatcher() {}
// void QByteArrayMatcher()
MyQByteArrayMatcher() : QByteArrayMatcher() {}
// void QByteArrayMatcher(const class QByteArray &)
MyQByteArrayMatcher(const QByteArray & pattern) : QByteArrayMatcher(pattern) {}
// void QByteArrayMatcher(const char *, int)
MyQByteArrayMatcher(const char * pattern, int length) : QByteArrayMatcher(pattern, length) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:53
// [-2] void QByteArrayMatcher()
extern "C"
void* C_ZN17QByteArrayMatcherC2Ev() {
  return  new QByteArrayMatcher();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:54
// [-2] void QByteArrayMatcher(const class QByteArray &)
extern "C"
void* C_ZN17QByteArrayMatcherC2ERK10QByteArray(QByteArray* pattern) {
  return  new QByteArrayMatcher(*pattern);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:55
// [-2] void QByteArrayMatcher(const char *, int)
extern "C"
void* C_ZN17QByteArrayMatcherC2EPKci(const char * pattern, int length) {
  return  new QByteArrayMatcher(pattern, length);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:57
// [-2] void ~QByteArrayMatcher()
extern "C"
void C_ZN17QByteArrayMatcherD2Ev(void *this_) {
  delete (QByteArrayMatcher*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:59
// [1040] QByteArrayMatcher & operator=(const class QByteArrayMatcher &)
extern "C"
void* C_ZN17QByteArrayMatcheraSERKS_(void *this_, QByteArrayMatcher* other) {
  auto& rv = ((QByteArrayMatcher*)this_)->operator=(*other);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:61
// [-2] void setPattern(const class QByteArray &)
extern "C"
void C_ZN17QByteArrayMatcher10setPatternERK10QByteArray(void *this_, QByteArray* pattern) {
  ((QByteArrayMatcher*)this_)->setPattern(*pattern);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:63
// [4] int indexIn(const class QByteArray &, int)
extern "C"
int C_ZNK17QByteArrayMatcher7indexInERK10QByteArrayi(void *this_, QByteArray* ba, int from) {
  return (int)((QByteArrayMatcher*)this_)->indexIn(*ba, from);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:64
// [4] int indexIn(const char *, int, int)
extern "C"
int C_ZNK17QByteArrayMatcher7indexInEPKcii(void *this_, const char * str, int len, int from) {
  return (int)((QByteArrayMatcher*)this_)->indexIn(str, len, from);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:65
// [8] QByteArray pattern()
extern "C"
void* C_ZNK17QByteArrayMatcher7patternEv(void *this_) {
  auto rv = ((QByteArrayMatcher*)this_)->pattern();
return new QByteArray(rv);
}
//  main block end
