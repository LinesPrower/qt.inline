//  header block begin
// /usr/include/qt/QtGui/qgenericplugin.h
#ifndef protected
#define protected public
#endif
#include <qgenericplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QGenericPlugin is pure virtual: true
// QGenericPlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGenericPlugin : public QGenericPlugin {
public:
  virtual ~MyQGenericPlugin() {}
// void QGenericPlugin(QObject *)
MyQGenericPlugin(QObject * parent) : QGenericPlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGenericPlugin10metaObjectEv(void *this_) {
  return (void*)((QGenericPlugin*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:55
// [-2] void QGenericPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGenericPluginC2EP7QObject(QObject * parent) {
  return 0; // new QGenericPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:56
// [-2] void ~QGenericPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN14QGenericPluginD2Ev(void *this_) {
  delete (QGenericPlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:58
// [8] QObject * create(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGenericPlugin6createERK7QStringS2_(void *this_, QString* name, QString* spec) {
  return (void*)((QGenericPlugin*)this_)->create(*name, *spec);
}

//  main block end
