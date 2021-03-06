//  header block begin
// since 0x050800
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QPointingDeviceUniqueId is pure virtual: false
// QPointingDeviceUniqueId has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPointingDeviceUniqueId : public QPointingDeviceUniqueId {
public:
  virtual ~MyQPointingDeviceUniqueId() {}
// void QPointingDeviceUniqueId()
MyQPointingDeviceUniqueId() : QPointingDeviceUniqueId() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:809
// [-2] void QPointingDeviceUniqueId()
extern "C" Q_DECL_EXPORT
void* C_ZN23QPointingDeviceUniqueIdC2Ev() {
  return  new QPointingDeviceUniqueId();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:813
// [8] QPointingDeviceUniqueId fromNumericId(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN23QPointingDeviceUniqueId13fromNumericIdEx(qint64 id) {
  auto rv = QPointingDeviceUniqueId::fromNumericId(id);
return new QPointingDeviceUniqueId(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:815
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QPointingDeviceUniqueId7isValidEv(void *this_) {
  return (bool)((QPointingDeviceUniqueId*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:816
// [8] qint64 numericId()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK23QPointingDeviceUniqueId9numericIdEv(void *this_) {
  return (qint64)((QPointingDeviceUniqueId*)this_)->numericId();
}


extern "C" Q_DECL_EXPORT
void C_ZN23QPointingDeviceUniqueIdD2Ev(void *this_) {
  delete (QPointingDeviceUniqueId*)(this_);
}
//  main block end
