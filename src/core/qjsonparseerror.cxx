//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qjsondocument.h
#ifndef protected
#define protected public
#endif
#include <qjsondocument.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonParseError is pure virtual: false
// QJsonParseError has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQJsonParseError : public QJsonParseError {
public:
  virtual ~MyQJsonParseError() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:73
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QJsonParseError11errorStringEv(void *this_) {
  auto rv = ((QJsonParseError*)this_)->errorString();
return new QString(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN15QJsonParseErrorD2Ev(void *this_) {
  delete (QJsonParseError*)(this_);
}
//  main block end
