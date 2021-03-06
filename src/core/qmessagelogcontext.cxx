//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qlogging.h
#ifndef protected
#define protected public
#endif
#include <qlogging.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageLogContext is pure virtual: false
// QMessageLogContext has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMessageLogContext : public QMessageLogContext {
public:
  virtual ~MyQMessageLogContext() {}
// void QMessageLogContext()
MyQMessageLogContext() : QMessageLogContext() {}
// void QMessageLogContext(const char *, int, const char *, const char *)
MyQMessageLogContext(const char * fileName, int lineNumber, const char * functionName, const char * categoryName) : QMessageLogContext(fileName, lineNumber, functionName, categoryName) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:66
// [-2] void QMessageLogContext()
extern "C" Q_DECL_EXPORT
void* C_ZN18QMessageLogContextC2Ev() {
  return  new QMessageLogContext();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:68
// [-2] void QMessageLogContext(const char *, int, const char *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QMessageLogContextC2EPKciS1_S1_(const char * fileName, int lineNumber, const char * functionName, const char * categoryName) {
  return  new QMessageLogContext(fileName, lineNumber, functionName, categoryName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:71
// [-2] void copy(const QMessageLogContext &)
extern "C" Q_DECL_EXPORT
void C_ZN18QMessageLogContext4copyERKS_(void *this_, QMessageLogContext* logContext) {
  ((QMessageLogContext*)this_)->copy(*logContext);
}


extern "C" Q_DECL_EXPORT
void C_ZN18QMessageLogContextD2Ev(void *this_) {
  delete (QMessageLogContext*)(this_);
}
//  main block end
