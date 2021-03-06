//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#endif
#include <qdatetimeedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDateEdit is pure virtual: false
// QDateEdit has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDateEdit : public QDateEdit {
public:
  virtual ~MyQDateEdit() {}
// void QDateEdit(QWidget *)
MyQDateEdit(QWidget * parent) : QDateEdit(parent) {}
// void QDateEdit(const QDate &, QWidget *)
MyQDateEdit(const QDate & date, QWidget * parent) : QDateEdit(date, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:217
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QDateEdit10metaObjectEv(void *this_) {
  return (void*)((QDateEdit*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:220
// [-2] void QDateEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateEditC2EP7QWidget(QWidget * parent) {
  return  new QDateEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:221
// [-2] void QDateEdit(const QDate &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QDateEditC2ERK5QDateP7QWidget(QDate* date, QWidget * parent) {
  return  new QDateEdit(*date, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:222
// [-2] void ~QDateEdit()
extern "C" Q_DECL_EXPORT
void C_ZN9QDateEditD2Ev(void *this_) {
  delete (QDateEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:225
// [-2] void userDateChanged(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN9QDateEdit15userDateChangedERK5QDate(void *this_, QDate* date) {
  ((QDateEdit*)this_)->userDateChanged(*date);
}

//  main block end
