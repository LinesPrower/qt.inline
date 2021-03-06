//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComboBox is pure virtual: false
// QStyleOptionComboBox has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionComboBox : public QStyleOptionComboBox {
public:
  virtual ~MyQStyleOptionComboBox() {}
// void QStyleOptionComboBox()
MyQStyleOptionComboBox() : QStyleOptionComboBox() {}
// void QStyleOptionComboBox(int)
MyQStyleOptionComboBox(int version) : QStyleOptionComboBox(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:601
// [-2] void QStyleOptionComboBox()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionComboBoxC2Ev() {
  return  new QStyleOptionComboBox();
}


extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionComboBoxD2Ev(void *this_) {
  delete (QStyleOptionComboBox*)(this_);
}
//  main block end
