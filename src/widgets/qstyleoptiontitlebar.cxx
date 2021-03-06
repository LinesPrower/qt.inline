//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTitleBar is pure virtual: false
// QStyleOptionTitleBar has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionTitleBar : public QStyleOptionTitleBar {
public:
  virtual ~MyQStyleOptionTitleBar() {}
// void QStyleOptionTitleBar()
MyQStyleOptionTitleBar() : QStyleOptionTitleBar() {}
// void QStyleOptionTitleBar(int)
MyQStyleOptionTitleBar(int version) : QStyleOptionTitleBar(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:619
// [-2] void QStyleOptionTitleBar()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionTitleBarC2Ev() {
  return  new QStyleOptionTitleBar();
}


extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionTitleBarD2Ev(void *this_) {
  delete (QStyleOptionTitleBar*)(this_);
}
//  main block end
