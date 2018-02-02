//  header block begin
// /usr/include/qt/QtWidgets/qtoolbutton.h
#include <qtoolbutton.h>
#include <QtWidgets>

// QToolButton is pure virtual: false
// QToolButton has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:109
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QToolButton5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton5eventEP6QEvent(void*cbfn)
{ callback_ZN11QToolButton5eventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:110
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN11QToolButton15mousePressEventEP11QMouseEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN11QToolButton15mousePressEventEP11QMouseEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:111
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void* callback_ZN11QToolButton17mouseReleaseEventEP11QMouseEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton17mouseReleaseEventEP11QMouseEvent(void*cbfn)
{ callback_ZN11QToolButton17mouseReleaseEventEP11QMouseEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:112
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN11QToolButton10paintEventEP11QPaintEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN11QToolButton10paintEventEP11QPaintEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:113
// [-2] void actionEvent(class QActionEvent *)
extern "C"
void* callback_ZN11QToolButton11actionEventEP12QActionEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton11actionEventEP12QActionEvent(void*cbfn)
{ callback_ZN11QToolButton11actionEventEP12QActionEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:115
// [-2] void enterEvent(class QEvent *)
extern "C"
void* callback_ZN11QToolButton10enterEventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton10enterEventEP6QEvent(void*cbfn)
{ callback_ZN11QToolButton10enterEventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:116
// [-2] void leaveEvent(class QEvent *)
extern "C"
void* callback_ZN11QToolButton10leaveEventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton10leaveEventEP6QEvent(void*cbfn)
{ callback_ZN11QToolButton10leaveEventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:117
// [-2] void timerEvent(class QTimerEvent *)
extern "C"
void* callback_ZN11QToolButton10timerEventEP11QTimerEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton10timerEventEP11QTimerEvent(void*cbfn)
{ callback_ZN11QToolButton10timerEventEP11QTimerEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:118
// [-2] void changeEvent(class QEvent *)
extern "C"
void* callback_ZN11QToolButton11changeEventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton11changeEventEP6QEvent(void*cbfn)
{ callback_ZN11QToolButton11changeEventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:120
// [1] bool hitButton(const class QPoint &)
extern "C"
void* callback_ZNK11QToolButton9hitButtonERK6QPoint_fnptr = 0;
extern "C" void set_callback_ZNK11QToolButton9hitButtonERK6QPoint(void*cbfn)
{ callback_ZNK11QToolButton9hitButtonERK6QPoint_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:121
// [-2] void nextCheckState()
extern "C"
void* callback_ZN11QToolButton14nextCheckStateEv_fnptr = 0;
extern "C" void set_callback_ZN11QToolButton14nextCheckStateEv(void*cbfn)
{ callback_ZN11QToolButton14nextCheckStateEv_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:122
// [-2] void initStyleOption(class QStyleOptionToolButton *)
extern "C"
void* callback_ZNK11QToolButton15initStyleOptionEP22QStyleOptionToolButton_fnptr = 0;
extern "C" void set_callback_ZNK11QToolButton15initStyleOptionEP22QStyleOptionToolButton(void*cbfn)
{ callback_ZNK11QToolButton15initStyleOptionEP22QStyleOptionToolButton_fnptr = cbfn; }

class MyQToolButton : public QToolButton {
public:
  virtual ~MyQToolButton() {}
// void QToolButton(class QWidget *)
MyQToolButton(QWidget * parent) : QToolButton(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN11QToolButton5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QToolButton::event(e);
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN11QToolButton15mousePressEventEP11QMouseEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QToolButton::mousePressEvent(arg0);
  }
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN11QToolButton17mouseReleaseEventEP11QMouseEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QToolButton::mouseReleaseEvent(arg0);
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN11QToolButton10paintEventEP11QPaintEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QToolButton::paintEvent(arg0);
  }
// void actionEvent(class QActionEvent *)
  virtual void actionEvent(QActionEvent * arg0) {
    auto fnptr = ((void (*)(void* , QActionEvent *))(callback_ZN11QToolButton11actionEventEP12QActionEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QToolButton::actionEvent(arg0);
  }
// void enterEvent(class QEvent *)
  virtual void enterEvent(QEvent * arg0) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN11QToolButton10enterEventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QToolButton::enterEvent(arg0);
  }
// void leaveEvent(class QEvent *)
  virtual void leaveEvent(QEvent * arg0) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN11QToolButton10leaveEventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QToolButton::leaveEvent(arg0);
  }
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    auto fnptr = ((void (*)(void* , QTimerEvent *))(callback_ZN11QToolButton10timerEventEP11QTimerEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QToolButton::timerEvent(arg0);
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN11QToolButton11changeEventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QToolButton::changeEvent(arg0);
  }
// bool hitButton(const class QPoint &)
  virtual bool hitButton(const QPoint & pos) {
    auto fnptr = ((bool (*)(void* , QPoint*))(callback_ZNK11QToolButton9hitButtonERK6QPoint_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QPoint*)&pos);
    }
    return QToolButton::hitButton(pos);
  }
// void nextCheckState()
  virtual void nextCheckState() {
    auto fnptr = ((void (*)(void* ))(callback_ZN11QToolButton14nextCheckStateEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    QToolButton::nextCheckState();
  }
// void initStyleOption(class QStyleOptionToolButton *)
  virtual void initStyleOption(QStyleOptionToolButton * option) {
    auto fnptr = ((void (*)(void* , QStyleOptionToolButton *))(callback_ZNK11QToolButton15initStyleOptionEP22QStyleOptionToolButton_fnptr));
    if (fnptr != 0) {
      fnptr(this , option);
    }
    QToolButton::initStyleOption(option);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QToolButton10metaObjectEv(void *this_) {
  return (void*)((QToolButton*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:74
// [-2] void QToolButton(class QWidget *)
extern "C"
void* C_ZN11QToolButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQToolButton*)(0);
  return  new MyQToolButton(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:75
// [-2] void ~QToolButton()
extern "C"
void C_ZN11QToolButtonD2Ev(void *this_) {
  delete (QToolButton*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:77
// [8] QSize sizeHint()
extern "C"
void* C_ZNK11QToolButton8sizeHintEv(void *this_) {
  auto rv = ((QToolButton*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:78
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK11QToolButton15minimumSizeHintEv(void *this_) {
  auto rv = ((QToolButton*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:80
// [4] Qt::ToolButtonStyle toolButtonStyle()
extern "C"
Qt::ToolButtonStyle C_ZNK11QToolButton15toolButtonStyleEv(void *this_) {
  return (Qt::ToolButtonStyle)((QToolButton*)this_)->toolButtonStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:82
// [4] Qt::ArrowType arrowType()
extern "C"
Qt::ArrowType C_ZNK11QToolButton9arrowTypeEv(void *this_) {
  return (Qt::ArrowType)((QToolButton*)this_)->arrowType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:83
// [-2] void setArrowType(Qt::ArrowType)
extern "C"
void C_ZN11QToolButton12setArrowTypeEN2Qt9ArrowTypeE(void *this_, Qt::ArrowType type) {
  ((QToolButton*)this_)->setArrowType(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:86
// [-2] void setMenu(class QMenu *)
extern "C"
void C_ZN11QToolButton7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QToolButton*)this_)->setMenu(menu);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:87
// [8] QMenu * menu()
extern "C"
void* C_ZNK11QToolButton4menuEv(void *this_) {
  return (void*)((QToolButton*)this_)->menu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:89
// [-2] void setPopupMode(enum QToolButton::ToolButtonPopupMode)
extern "C"
void C_ZN11QToolButton12setPopupModeENS_19ToolButtonPopupModeE(void *this_, QToolButton::ToolButtonPopupMode mode) {
  ((QToolButton*)this_)->setPopupMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:90
// [4] QToolButton::ToolButtonPopupMode popupMode()
extern "C"
QToolButton::ToolButtonPopupMode C_ZNK11QToolButton9popupModeEv(void *this_) {
  return (QToolButton::ToolButtonPopupMode)((QToolButton*)this_)->popupMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:93
// [8] QAction * defaultAction()
extern "C"
void* C_ZNK11QToolButton13defaultActionEv(void *this_) {
  return (void*)((QToolButton*)this_)->defaultAction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:95
// [-2] void setAutoRaise(_Bool)
extern "C"
void C_ZN11QToolButton12setAutoRaiseEb(void *this_, bool enable) {
  ((QToolButton*)this_)->setAutoRaise(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:96
// [1] bool autoRaise()
extern "C"
bool C_ZNK11QToolButton9autoRaiseEv(void *this_) {
  return (bool)((QToolButton*)this_)->autoRaise();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:100
// [-2] void showMenu()
extern "C"
void C_ZN11QToolButton8showMenuEv(void *this_) {
  ((QToolButton*)this_)->showMenu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:102
// [-2] void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void C_ZN11QToolButton18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle style) {
  ((QToolButton*)this_)->setToolButtonStyle(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:103
// [-2] void setDefaultAction(class QAction *)
extern "C"
void C_ZN11QToolButton16setDefaultActionEP7QAction(void *this_, QAction * arg0) {
  ((QToolButton*)this_)->setDefaultAction(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:106
// [-2] void triggered(class QAction *)
extern "C"
void C_ZN11QToolButton9triggeredEP7QAction(void *this_, QAction * arg0) {
  ((QToolButton*)this_)->triggered(arg0);
}
//  main block end
