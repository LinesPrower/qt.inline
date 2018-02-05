//  header block begin
// /usr/include/qt/QtQml/qqmlfileselector.h
#include <qqmlfileselector.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlFileSelector is pure virtual: false
// QQmlFileSelector has virtual projected: false
//  header block end

//  main block begin

class MyQQmlFileSelector : public QQmlFileSelector {
public:
  virtual ~MyQQmlFileSelector() {}
// void QQmlFileSelector(class QQmlEngine *, class QObject *)
MyQQmlFileSelector(QQmlEngine * engine, QObject * parent) : QQmlFileSelector(engine, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK16QQmlFileSelector10metaObjectEv(void *this_) {
  return (void*)((QQmlFileSelector*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:57
// [-2] void QQmlFileSelector(class QQmlEngine *, class QObject *)
extern "C"
void* C_ZN16QQmlFileSelectorC2EP10QQmlEngineP7QObject(QQmlEngine * engine, QObject * parent) {
  return  new QQmlFileSelector(engine, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:58
// [-2] void ~QQmlFileSelector()
extern "C"
void C_ZN16QQmlFileSelectorD2Ev(void *this_) {
  delete (QQmlFileSelector*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:59
// [8] QFileSelector * selector()
extern "C"
void* C_ZNK16QQmlFileSelector8selectorEv(void *this_) {
  return (void*)((QQmlFileSelector*)this_)->selector();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:60
// [-2] void setSelector(class QFileSelector *)
extern "C"
void C_ZN16QQmlFileSelector11setSelectorEP13QFileSelector(void *this_, QFileSelector * selector) {
  ((QQmlFileSelector*)this_)->setSelector(selector);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:61
// [-2] void setExtraSelectors(class QStringList &)
extern "C"
void C_ZN16QQmlFileSelector17setExtraSelectorsER11QStringList(void *this_, QStringList* strings) {
  ((QQmlFileSelector*)this_)->setExtraSelectors(*strings);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:62
// [-2] void setExtraSelectors(const class QStringList &)
extern "C"
void C_ZN16QQmlFileSelector17setExtraSelectorsERK11QStringList(void *this_, QStringList* strings) {
  ((QQmlFileSelector*)this_)->setExtraSelectors(*strings);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:63
// [8] QQmlFileSelector * get(class QQmlEngine *)
extern "C"
void* C_ZN16QQmlFileSelector3getEP10QQmlEngine(QQmlEngine * arg0) {
  return (void*)QQmlFileSelector::get(arg0);
}
//  main block end