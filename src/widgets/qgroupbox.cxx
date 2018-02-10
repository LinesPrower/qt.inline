//  header block begin
// /usr/include/qt/QtWidgets/qgroupbox.h
#include <qgroupbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGroupBox is pure virtual: false
// QGroupBox has virtual projected: true
//  header block end

//  main block begin

class MyQGroupBox : public QGroupBox {
public:
  virtual ~MyQGroupBox() {}
// void QGroupBox(class QWidget *)
MyQGroupBox(QWidget * parent) : QGroupBox(parent) {}
// void QGroupBox(const class QString &, class QWidget *)
MyQGroupBox(const QString & title, QWidget * parent) : QGroupBox(title, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGroupBox::event(event);
  }
  }

// void childEvent(class QChildEvent *)
  virtual void childEvent(QChildEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"childEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::childEvent(event);
  }
  }

// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::resizeEvent(event);
  }
  }

// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::paintEvent(event);
  }
  }

// void focusInEvent(class QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::focusInEvent(event);
  }
  }

// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::changeEvent(event);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::mousePressEvent(event);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::mouseMoveEvent(event);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::mouseReleaseEvent(event);
  }
  }

// void initStyleOption(class QStyleOptionGroupBox *)
  virtual void initStyleOption(QStyleOptionGroupBox * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGroupBox::initStyleOption(option);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QGroupBox10metaObjectEv(void *this_) {
  return (void*)((QGroupBox*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:62
// [-2] void QGroupBox(class QWidget *)
extern "C"
void* C_ZN9QGroupBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQGroupBox*)(0);
  return  new MyQGroupBox(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:63
// [-2] void QGroupBox(const class QString &, class QWidget *)
extern "C"
void* C_ZN9QGroupBoxC2ERK7QStringP7QWidget(QString* title, QWidget * parent) {
  auto _nilp = (MyQGroupBox*)(0);
  return  new MyQGroupBox(*title, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:64
// [-2] void ~QGroupBox()
extern "C"
void C_ZN9QGroupBoxD2Ev(void *this_) {
  delete (QGroupBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:66
// [8] QString title()
extern "C"
void* C_ZNK9QGroupBox5titleEv(void *this_) {
  auto rv = ((QGroupBox*)this_)->title();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:67
// [-2] void setTitle(const class QString &)
extern "C"
void C_ZN9QGroupBox8setTitleERK7QString(void *this_, QString* title) {
  ((QGroupBox*)this_)->setTitle(*title);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:69
// [4] Qt::Alignment alignment()
extern "C"
Qt::Alignment C_ZNK9QGroupBox9alignmentEv(void *this_) {
  return (Qt::Alignment)((QGroupBox*)this_)->alignment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:70
// [-2] void setAlignment(int)
extern "C"
void C_ZN9QGroupBox12setAlignmentEi(void *this_, int alignment) {
  ((QGroupBox*)this_)->setAlignment(alignment);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:72
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK9QGroupBox15minimumSizeHintEv(void *this_) {
  auto rv = ((QGroupBox*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:74
// [1] bool isFlat()
extern "C"
bool C_ZNK9QGroupBox6isFlatEv(void *this_) {
  return (bool)((QGroupBox*)this_)->isFlat();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:75
// [-2] void setFlat(_Bool)
extern "C"
void C_ZN9QGroupBox7setFlatEb(void *this_, bool flat) {
  ((QGroupBox*)this_)->setFlat(flat);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:76
// [1] bool isCheckable()
extern "C"
bool C_ZNK9QGroupBox11isCheckableEv(void *this_) {
  return (bool)((QGroupBox*)this_)->isCheckable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:77
// [-2] void setCheckable(_Bool)
extern "C"
void C_ZN9QGroupBox12setCheckableEb(void *this_, bool checkable) {
  ((QGroupBox*)this_)->setCheckable(checkable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:78
// [1] bool isChecked()
extern "C"
bool C_ZNK9QGroupBox9isCheckedEv(void *this_) {
  return (bool)((QGroupBox*)this_)->isChecked();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:81
// [-2] void setChecked(_Bool)
extern "C"
void C_ZN9QGroupBox10setCheckedEb(void *this_, bool checked) {
  ((QGroupBox*)this_)->setChecked(checked);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:84
// [-2] void clicked(_Bool)
extern "C"
void C_ZN9QGroupBox7clickedEb(void *this_, bool checked) {
  ((QGroupBox*)this_)->clicked(checked);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:85
// [-2] void toggled(_Bool)
extern "C"
void C_ZN9QGroupBox7toggledEb(void *this_, bool arg0) {
  ((QGroupBox*)this_)->toggled(arg0);
}
//  main block end
