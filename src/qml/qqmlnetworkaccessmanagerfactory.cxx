//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qqmlnetworkaccessmanagerfactory.h
#ifndef protected
#define protected public
#endif
#include <qqmlnetworkaccessmanagerfactory.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlNetworkAccessManagerFactory is pure virtual: true
// QQmlNetworkAccessManagerFactory has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlNetworkAccessManagerFactory : public QQmlNetworkAccessManagerFactory {
public:
  virtual ~MyQQmlNetworkAccessManagerFactory() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlnetworkaccessmanagerfactory.h:54
// [-2] void ~QQmlNetworkAccessManagerFactory()
extern "C" Q_DECL_EXPORT
void C_ZN31QQmlNetworkAccessManagerFactoryD2Ev(void *this_) {
  delete (QQmlNetworkAccessManagerFactory*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlnetworkaccessmanagerfactory.h:55
// [8] QNetworkAccessManager * create(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN31QQmlNetworkAccessManagerFactory6createEP7QObject(void *this_, QObject * parent) {
  return (void*)((QQmlNetworkAccessManagerFactory*)this_)->create(parent);
}

//  main block end
