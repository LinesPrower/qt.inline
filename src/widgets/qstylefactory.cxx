//  header block begin
// /usr/include/qt/QtWidgets/qstylefactory.h
#ifndef protected
#define protected public
#endif
#include <qstylefactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleFactory is pure virtual: false
// QStyleFactory has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleFactory : public QStyleFactory {
public:
  virtual ~MyQStyleFactory() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylefactory.h:54
// [8] QStringList keys()
extern "C" Q_DECL_EXPORT
void* C_ZN13QStyleFactory4keysEv() {
  auto rv = QStyleFactory::keys();
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylefactory.h:55
// [8] QStyle * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStyleFactory6createERK7QString(QString* arg0) {
  return (void*)QStyleFactory::create(*arg0);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QStyleFactoryD2Ev(void *this_) {
  delete (QStyleFactory*)(this_);
}
//  main block end
