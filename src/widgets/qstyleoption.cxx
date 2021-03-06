//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOption is pure virtual: false
// QStyleOption has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOption : public QStyleOption {
public:
  virtual ~MyQStyleOption() {}
// void QStyleOption(int, int)
MyQStyleOption(int version, int type_) : QStyleOption(version, type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:102
// [-2] void QStyleOption(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStyleOptionC2Eii(int version, int type_) {
  return  new QStyleOption(version, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:104
// [-2] void ~QStyleOption()
extern "C" Q_DECL_EXPORT
void C_ZN12QStyleOptionD2Ev(void *this_) {
  delete (QStyleOption*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:106
// [-2] void init(const QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN12QStyleOption4initEPK7QWidget(void *this_, const QWidget * w) {
  ((QStyleOption*)this_)->init(w);
}

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qstyleoption.h:107
// [-2] void initFrom(const QWidget *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN12QStyleOption8initFromEPK7QWidget(void *this_, const QWidget * w) {
  ((QStyleOption*)this_)->initFrom(w);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:108
// [64] QStyleOption & operator=(const QStyleOption &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStyleOptionaSERKS_(void *this_, QStyleOption* other) {
  auto& rv = ((QStyleOption*)this_)->operator=(*other);
return &rv;
}

//  main block end
