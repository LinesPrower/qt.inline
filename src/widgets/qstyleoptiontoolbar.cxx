//  header block begin
// since 0x040100
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionToolBar is pure virtual: false
// QStyleOptionToolBar has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionToolBar : public QStyleOptionToolBar {
public:
  virtual ~MyQStyleOptionToolBar() {}
// void QStyleOptionToolBar()
MyQStyleOptionToolBar() : QStyleOptionToolBar() {}
// void QStyleOptionToolBar(int)
MyQStyleOptionToolBar(int version) : QStyleOptionToolBar(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:315
// [-2] void QStyleOptionToolBar()
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionToolBarC2Ev() {
  return  new QStyleOptionToolBar();
}


extern "C" Q_DECL_EXPORT
void C_ZN19QStyleOptionToolBarD2Ev(void *this_) {
  delete (QStyleOptionToolBar*)(this_);
}
//  main block end
