//  header block begin
// since 0x040300
// /usr/include/qt/QtNetwork/qauthenticator.h
#ifndef protected
#define protected public
#endif
#include <qauthenticator.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QAuthenticator is pure virtual: false
// QAuthenticator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAuthenticator : public QAuthenticator {
public:
  virtual ~MyQAuthenticator() {}
// void QAuthenticator()
MyQAuthenticator() : QAuthenticator() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:56
// [-2] void QAuthenticator()
extern "C" Q_DECL_EXPORT
void* C_ZN14QAuthenticatorC2Ev() {
  return  new QAuthenticator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:57
// [-2] void ~QAuthenticator()
extern "C" Q_DECL_EXPORT
void C_ZN14QAuthenticatorD2Ev(void *this_) {
  delete (QAuthenticator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:60
// [8] QAuthenticator & operator=(const QAuthenticator &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAuthenticatoraSERKS_(void *this_, QAuthenticator* other) {
  auto& rv = ((QAuthenticator*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:62
// [1] bool operator==(const QAuthenticator &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QAuthenticatoreqERKS_(void *this_, QAuthenticator* other) {
  return (bool)((QAuthenticator*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:63
// [1] bool operator!=(const QAuthenticator &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QAuthenticatorneERKS_(void *this_, QAuthenticator* other) {
  return (bool)((QAuthenticator*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:65
// [8] QString user()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAuthenticator4userEv(void *this_) {
  auto rv = ((QAuthenticator*)this_)->user();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:66
// [-2] void setUser(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAuthenticator7setUserERK7QString(void *this_, QString* user) {
  ((QAuthenticator*)this_)->setUser(*user);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:68
// [8] QString password()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAuthenticator8passwordEv(void *this_) {
  auto rv = ((QAuthenticator*)this_)->password();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:69
// [-2] void setPassword(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAuthenticator11setPasswordERK7QString(void *this_, QString* password) {
  ((QAuthenticator*)this_)->setPassword(*password);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:71
// [8] QString realm()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAuthenticator5realmEv(void *this_) {
  auto rv = ((QAuthenticator*)this_)->realm();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:72
// [-2] void setRealm(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAuthenticator8setRealmERK7QString(void *this_, QString* realm) {
  ((QAuthenticator*)this_)->setRealm(*realm);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qauthenticator.h:74
// [16] QVariant option(const QString &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAuthenticator6optionERK7QString(void *this_, QString* opt) {
  auto rv = ((QAuthenticator*)this_)->option(*opt);
return new QVariant(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtNetwork/qauthenticator.h:76
// [-2] void setOption(const QString &, const QVariant &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN14QAuthenticator9setOptionERK7QStringRK8QVariant(void *this_, QString* opt, QVariant* value) {
  ((QAuthenticator*)this_)->setOption(*opt, *value);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:78
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QAuthenticator6isNullEv(void *this_) {
  return (bool)((QAuthenticator*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qauthenticator.h:79
// [-2] void detach()
extern "C" Q_DECL_EXPORT
void C_ZN14QAuthenticator6detachEv(void *this_) {
  ((QAuthenticator*)this_)->detach();
}

//  main block end
