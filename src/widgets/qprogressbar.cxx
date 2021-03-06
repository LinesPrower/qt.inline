//  header block begin
// /usr/include/qt/QtWidgets/qprogressbar.h
#ifndef protected
#define protected public
#endif
#include <qprogressbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QProgressBar is pure virtual: false
// QProgressBar has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQProgressBar : public QProgressBar {
public:
  virtual ~MyQProgressBar() {}
// void QProgressBar(QWidget *)
MyQProgressBar(QWidget * parent) : QProgressBar(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QProgressBar::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProgressBar::paintEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// void initStyleOption(QStyleOptionProgressBar *)
  virtual void initStyleOption(QStyleOptionProgressBar * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProgressBar::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:112
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QProgressBar5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QProgressBar*)this_)->QProgressBar::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:113
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QProgressBar*)this_)->QProgressBar::paintEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:114
// [-2] void initStyleOption(QStyleOptionProgressBar *)
extern "C" Q_DECL_EXPORT
void C_ZNK12QProgressBar15initStyleOptionEP23QStyleOptionProgressBar(void *this_, QStyleOptionProgressBar * option) {
  ((QProgressBar*)this_)->QProgressBar::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar10metaObjectEv(void *this_) {
  return (void*)((QProgressBar*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:71
// [-2] void QProgressBar(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QProgressBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQProgressBar*)(0);
  return  new MyQProgressBar(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:72
// [-2] void ~QProgressBar()
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBarD2Ev(void *this_) {
  delete (QProgressBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:74
// [4] int minimum()
extern "C" Q_DECL_EXPORT
int C_ZNK12QProgressBar7minimumEv(void *this_) {
  return (int)((QProgressBar*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:75
// [4] int maximum()
extern "C" Q_DECL_EXPORT
int C_ZNK12QProgressBar7maximumEv(void *this_) {
  return (int)((QProgressBar*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:77
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK12QProgressBar5valueEv(void *this_) {
  return (int)((QProgressBar*)this_)->value();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:79
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar4textEv(void *this_) {
  auto rv = ((QProgressBar*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:80
// [-2] void setTextVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar14setTextVisibleEb(void *this_, bool visible) {
  ((QProgressBar*)this_)->setTextVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:81
// [1] bool isTextVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QProgressBar13isTextVisibleEv(void *this_) {
  return (bool)((QProgressBar*)this_)->isTextVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:83
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK12QProgressBar9alignmentEv(void *this_) {
  return (Qt::Alignment)((QProgressBar*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:84
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QProgressBar*)this_)->setAlignment(alignment);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:86
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar8sizeHintEv(void *this_) {
  auto rv = ((QProgressBar*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:87
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar15minimumSizeHintEv(void *this_) {
  auto rv = ((QProgressBar*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:89
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK12QProgressBar11orientationEv(void *this_) {
  return (Qt::Orientation)((QProgressBar*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:91
// [-2] void setInvertedAppearance(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar21setInvertedAppearanceEb(void *this_, bool invert) {
  ((QProgressBar*)this_)->setInvertedAppearance(invert);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:92
// [1] bool invertedAppearance()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QProgressBar18invertedAppearanceEv(void *this_) {
  return (bool)((QProgressBar*)this_)->invertedAppearance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:93
// [-2] void setTextDirection(QProgressBar::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar16setTextDirectionENS_9DirectionE(void *this_, QProgressBar::Direction textDirection) {
  ((QProgressBar*)this_)->setTextDirection(textDirection);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:94
// [4] QProgressBar::Direction textDirection()
extern "C" Q_DECL_EXPORT
QProgressBar::Direction C_ZNK12QProgressBar13textDirectionEv(void *this_) {
  return (QProgressBar::Direction)((QProgressBar*)this_)->textDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:96
// [-2] void setFormat(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar9setFormatERK7QString(void *this_, QString* format) {
  ((QProgressBar*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:97
// [-2] void resetFormat()
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar11resetFormatEv(void *this_) {
  ((QProgressBar*)this_)->resetFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:98
// [8] QString format()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QProgressBar6formatEv(void *this_) {
  auto rv = ((QProgressBar*)this_)->format();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:101
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar5resetEv(void *this_) {
  ((QProgressBar*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:102
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar8setRangeEii(void *this_, int minimum, int maximum) {
  ((QProgressBar*)this_)->setRange(minimum, maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:103
// [-2] void setMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar10setMinimumEi(void *this_, int minimum) {
  ((QProgressBar*)this_)->setMinimum(minimum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:104
// [-2] void setMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar10setMaximumEi(void *this_, int maximum) {
  ((QProgressBar*)this_)->setMaximum(maximum);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:105
// [-2] void setValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar8setValueEi(void *this_, int value) {
  ((QProgressBar*)this_)->setValue(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:106
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation arg0) {
  ((QProgressBar*)this_)->setOrientation(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qprogressbar.h:109
// [-2] void valueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QProgressBar12valueChangedEi(void *this_, int value) {
  ((QProgressBar*)this_)->valueChanged(value);
}

//  main block end
