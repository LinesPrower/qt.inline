//  header block begin
// /usr/include/qt/QtWidgets/qprogressdialog.h
#ifndef protected
#define protected public
#endif
#include <qprogressdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QProgressDialog is pure virtual: false
// QProgressDialog has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQProgressDialog : public QProgressDialog {
public:
  virtual ~MyQProgressDialog() {}
// void QProgressDialog(QWidget *, Qt::WindowFlags)
MyQProgressDialog(QWidget * parent, QFlags<Qt::WindowType> flags) : QProgressDialog(parent, flags) {}
// void QProgressDialog(const QString &, const QString &, int, int, QWidget *, Qt::WindowFlags)
MyQProgressDialog(const QString & labelText, const QString & cancelButtonText, int minimum, int maximum, QWidget * parent, QFlags<Qt::WindowType> flags) : QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags) {}
// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProgressDialog::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProgressDialog::closeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProgressDialog::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProgressDialog::showEvent(event);
  }
  }

// Protected Visibility=Default Availability=Available
// void forceShow()
  virtual void forceShow() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"forceShow", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProgressDialog::forceShow();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:116
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QProgressDialog*)this_)->QProgressDialog::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:117
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QProgressDialog*)this_)->QProgressDialog::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:118
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QProgressDialog*)this_)->QProgressDialog::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:119
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog9showEventEP10QShowEvent(void *this_, QShowEvent * event) {
  ((QProgressDialog*)this_)->QProgressDialog::showEvent(event);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:122
// [-2] void forceShow()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog9forceShowEv(void *this_) {
  ((QProgressDialog*)this_)->QProgressDialog::forceShow();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QProgressDialog10metaObjectEv(void *this_) {
  return (void*)((QProgressDialog*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:71
// [-2] void QProgressDialog(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN15QProgressDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQProgressDialog*)(0);
  return  new MyQProgressDialog(parent, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:72
// [-2] void QProgressDialog(const QString &, const QString &, int, int, QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN15QProgressDialogC2ERK7QStringS2_iiP7QWidget6QFlagsIN2Qt10WindowTypeEE(QString* labelText, QString* cancelButtonText, int minimum, int maximum, QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQProgressDialog*)(0);
  return  new MyQProgressDialog(*labelText, *cancelButtonText, minimum, maximum, parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:75
// [-2] void ~QProgressDialog()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialogD2Ev(void *this_) {
  delete (QProgressDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:77
// [-2] void setLabel(QLabel *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog8setLabelEP6QLabel(void *this_, QLabel * label) {
  ((QProgressDialog*)this_)->setLabel(label);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:78
// [-2] void setCancelButton(QPushButton *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog15setCancelButtonEP11QPushButton(void *this_, QPushButton * button) {
  ((QProgressDialog*)this_)->setCancelButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:79
// [-2] void setBar(QProgressBar *)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog6setBarEP12QProgressBar(void *this_, QProgressBar * bar) {
  ((QProgressDialog*)this_)->setBar(bar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:81
// [1] bool wasCanceled()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QProgressDialog11wasCanceledEv(void *this_) {
  return (bool)((QProgressDialog*)this_)->wasCanceled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:83
// [4] int minimum()
extern "C" Q_DECL_EXPORT
int C_ZNK15QProgressDialog7minimumEv(void *this_) {
  return (int)((QProgressDialog*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:84
// [4] int maximum()
extern "C" Q_DECL_EXPORT
int C_ZNK15QProgressDialog7maximumEv(void *this_) {
  return (int)((QProgressDialog*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:86
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK15QProgressDialog5valueEv(void *this_) {
  return (int)((QProgressDialog*)this_)->value();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:88
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QProgressDialog8sizeHintEv(void *this_) {
  auto rv = ((QProgressDialog*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:90
// [8] QString labelText()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QProgressDialog9labelTextEv(void *this_) {
  auto rv = ((QProgressDialog*)this_)->labelText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:91
// [4] int minimumDuration()
extern "C" Q_DECL_EXPORT
int C_ZNK15QProgressDialog15minimumDurationEv(void *this_) {
  return (int)((QProgressDialog*)this_)->minimumDuration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:93
// [-2] void setAutoReset(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog12setAutoResetEb(void *this_, bool reset) {
  ((QProgressDialog*)this_)->setAutoReset(reset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:94
// [1] bool autoReset()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QProgressDialog9autoResetEv(void *this_) {
  return (bool)((QProgressDialog*)this_)->autoReset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:95
// [-2] void setAutoClose(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog12setAutoCloseEb(void *this_, bool close) {
  ((QProgressDialog*)this_)->setAutoClose(close);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:96
// [1] bool autoClose()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QProgressDialog9autoCloseEv(void *this_) {
  return (bool)((QProgressDialog*)this_)->autoClose();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qprogressdialog.h:99
// [-2] void open(QObject *, const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QProgressDialog*)this_)->open(receiver, member);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:102
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog6cancelEv(void *this_) {
  ((QProgressDialog*)this_)->cancel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:103
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog5resetEv(void *this_) {
  ((QProgressDialog*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:104
// [-2] void setMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog10setMaximumEi(void *this_, int maximum) {
  ((QProgressDialog*)this_)->setMaximum(maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:105
// [-2] void setMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog10setMinimumEi(void *this_, int minimum) {
  ((QProgressDialog*)this_)->setMinimum(minimum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:106
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog8setRangeEii(void *this_, int minimum, int maximum) {
  ((QProgressDialog*)this_)->setRange(minimum, maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:107
// [-2] void setValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog8setValueEi(void *this_, int progress) {
  ((QProgressDialog*)this_)->setValue(progress);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:108
// [-2] void setLabelText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog12setLabelTextERK7QString(void *this_, QString* text) {
  ((QProgressDialog*)this_)->setLabelText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:109
// [-2] void setCancelButtonText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog19setCancelButtonTextERK7QString(void *this_, QString* text) {
  ((QProgressDialog*)this_)->setCancelButtonText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:110
// [-2] void setMinimumDuration(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog18setMinimumDurationEi(void *this_, int ms) {
  ((QProgressDialog*)this_)->setMinimumDuration(ms);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressdialog.h:113
// [-2] void canceled()
extern "C" Q_DECL_EXPORT
void C_ZN15QProgressDialog8canceledEv(void *this_) {
  ((QProgressDialog*)this_)->canceled();
}

//  main block end
