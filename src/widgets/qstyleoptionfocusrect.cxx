//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionFocusRect is pure virtual: false
// QStyleOptionFocusRect has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionFocusRect : public QStyleOptionFocusRect {
public:
  virtual ~MyQStyleOptionFocusRect() {}
// void QStyleOptionFocusRect()
MyQStyleOptionFocusRect() : QStyleOptionFocusRect() {}
// void QStyleOptionFocusRect(int)
MyQStyleOptionFocusRect(int version) : QStyleOptionFocusRect(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:119
// [-2] void QStyleOptionFocusRect()
extern "C" Q_DECL_EXPORT
void* C_ZN21QStyleOptionFocusRectC2Ev() {
  return  new QStyleOptionFocusRect();
}


extern "C" Q_DECL_EXPORT
void C_ZN21QStyleOptionFocusRectD2Ev(void *this_) {
  delete (QStyleOptionFocusRect*)(this_);
}
//  main block end
