//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qfontcombobox.h
#ifndef protected
#define protected public
#endif
#include <qfontcombobox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFontComboBox is pure virtual: false
// QFontComboBox has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFontComboBox : public QFontComboBox {
public:
  virtual ~MyQFontComboBox() {}
// void QFontComboBox(QWidget *)
MyQFontComboBox(QWidget * parent) : QFontComboBox(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QFontComboBox::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:90
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QFontComboBox5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QFontComboBox*)this_)->QFontComboBox::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontComboBox10metaObjectEv(void *this_) {
  return (void*)((QFontComboBox*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:61
// [-2] void QFontComboBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontComboBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQFontComboBox*)(0);
  return  new MyQFontComboBox(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:62
// [-2] void ~QFontComboBox()
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBoxD2Ev(void *this_) {
  delete (QFontComboBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:64
// [-2] void setWritingSystem(QFontDatabase::WritingSystem)
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBox16setWritingSystemEN13QFontDatabase13WritingSystemE(void *this_, QFontDatabase::WritingSystem arg0) {
  ((QFontComboBox*)this_)->setWritingSystem(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:65
// [4] QFontDatabase::WritingSystem writingSystem()
extern "C" Q_DECL_EXPORT
QFontDatabase::WritingSystem C_ZNK13QFontComboBox13writingSystemEv(void *this_) {
  return (QFontDatabase::WritingSystem)((QFontComboBox*)this_)->writingSystem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:77
// [-2] void setFontFilters(QFontComboBox::FontFilters)
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBox14setFontFiltersE6QFlagsINS_10FontFilterEE(void *this_, QFlags<QFontComboBox::FontFilter> filters) {
  ((QFontComboBox*)this_)->setFontFilters(filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:78
// [4] QFontComboBox::FontFilters fontFilters()
extern "C" Q_DECL_EXPORT
QFontComboBox::FontFilters* C_ZNK13QFontComboBox11fontFiltersEv(void *this_) {
  auto rv = ((QFontComboBox*)this_)->fontFilters();
return new QFontComboBox::FontFilters(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:80
// [16] QFont currentFont()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontComboBox11currentFontEv(void *this_) {
  auto rv = ((QFontComboBox*)this_)->currentFont();
return new QFont(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:81
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontComboBox8sizeHintEv(void *this_) {
  auto rv = ((QFontComboBox*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:84
// [-2] void setCurrentFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBox14setCurrentFontERK5QFont(void *this_, QFont* f) {
  ((QFontComboBox*)this_)->setCurrentFont(*f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:87
// [-2] void currentFontChanged(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBox18currentFontChangedERK5QFont(void *this_, QFont* f) {
  ((QFontComboBox*)this_)->currentFontChanged(*f);
}

//  main block end
