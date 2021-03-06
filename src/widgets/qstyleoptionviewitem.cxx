//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionViewItem is pure virtual: false
// QStyleOptionViewItem has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionViewItem : public QStyleOptionViewItem {
public:
  virtual ~MyQStyleOptionViewItem() {}
// void QStyleOptionViewItem()
MyQStyleOptionViewItem() : QStyleOptionViewItem() {}
// void QStyleOptionViewItem(int)
MyQStyleOptionViewItem(int version) : QStyleOptionViewItem(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:442
// [-2] void QStyleOptionViewItem()
extern "C" Q_DECL_EXPORT
void* C_ZN20QStyleOptionViewItemC2Ev() {
  return  new QStyleOptionViewItem();
}


extern "C" Q_DECL_EXPORT
void C_ZN20QStyleOptionViewItemD2Ev(void *this_) {
  delete (QStyleOptionViewItem*)(this_);
}
//  main block end
