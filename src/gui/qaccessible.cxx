//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessible is pure virtual: false
// QAccessible has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessible : public QAccessible {
public:
  virtual ~MyQAccessible() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:414
// [8] QAccessibleInterface * queryAccessibleInterface(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAccessible24queryAccessibleInterfaceEP7QObject(QObject * arg0) {
  return (void*)QAccessible::queryAccessibleInterface(arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:415
// [4] QAccessible::Id uniqueId(QAccessibleInterface *)
extern "C" Q_DECL_EXPORT
QAccessible::Id C_ZN11QAccessible8uniqueIdEP20QAccessibleInterface(QAccessibleInterface * iface) {
  return (QAccessible::Id)QAccessible::uniqueId(iface);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:416
// [8] QAccessibleInterface * accessibleInterface(QAccessible::Id)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAccessible19accessibleInterfaceEj(QAccessible::Id uniqueId) {
  return (void*)QAccessible::accessibleInterface(uniqueId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:417
// [4] QAccessible::Id registerAccessibleInterface(QAccessibleInterface *)
extern "C" Q_DECL_EXPORT
QAccessible::Id C_ZN11QAccessible27registerAccessibleInterfaceEP20QAccessibleInterface(QAccessibleInterface * iface) {
  return (QAccessible::Id)QAccessible::registerAccessibleInterface(iface);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:418
// [-2] void deleteAccessibleInterface(QAccessible::Id)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible25deleteAccessibleInterfaceEj(QAccessible::Id uniqueId) {
  QAccessible::deleteAccessibleInterface(uniqueId);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:424
// [-2] void updateAccessibility(QAccessibleEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible19updateAccessibilityEP16QAccessibleEvent(QAccessibleEvent * event) {
  QAccessible::updateAccessibility(event);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:426
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZN11QAccessible8isActiveEv() {
  return (bool)QAccessible::isActive();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:427
// [-2] void setActive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible9setActiveEb(bool active) {
  QAccessible::setActive(active);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:428
// [-2] void setRootObject(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible13setRootObjectEP7QObject(QObject * object) {
  QAccessible::setRootObject(object);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:430
// [-2] void cleanup()
extern "C" Q_DECL_EXPORT
void C_ZN11QAccessible7cleanupEv() {
  QAccessible::cleanup();
}


extern "C" Q_DECL_EXPORT
void C_ZN11QAccessibleD2Ev(void *this_) {
  delete (QAccessible*)(this_);
}
//  main block end
