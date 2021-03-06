//  header block begin
// /usr/include/qt/QtWidgets/qstyleplugin.h
#ifndef protected
#define protected public
#endif
#include <qstyleplugin.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStylePlugin is pure virtual: true
// QStylePlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStylePlugin : public QStylePlugin {
public:
  virtual ~MyQStylePlugin() {}
// void QStylePlugin(QObject *)
MyQStylePlugin(QObject * parent) : QStylePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QStylePlugin10metaObjectEv(void *this_) {
  return (void*)((QStylePlugin*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:58
// [-2] void QStylePlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStylePluginC2EP7QObject(QObject * parent) {
  return 0; // new QStylePlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:59
// [-2] void ~QStylePlugin()
extern "C" Q_DECL_EXPORT
void C_ZN12QStylePluginD2Ev(void *this_) {
  delete (QStylePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:61
// [8] QStyle * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStylePlugin6createERK7QString(void *this_, QString* key) {
  return (void*)((QStylePlugin*)this_)->create(*key);
}

//  main block end
