//  header block begin
// /usr/include/qt/QtWidgets/qdesktopwidget.h
#ifndef protected
#define protected public
#endif
#include <qdesktopwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDesktopWidget is pure virtual: false
// QDesktopWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDesktopWidget : public QDesktopWidget {
public:
  virtual ~MyQDesktopWidget() {}
// void QDesktopWidget()
MyQDesktopWidget() : QDesktopWidget() {}
// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDesktopWidget::resizeEvent(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:90
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QDesktopWidget11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * e) {
  ((QDesktopWidget*)this_)->QDesktopWidget::resizeEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDesktopWidget10metaObjectEv(void *this_) {
  return (void*)((QDesktopWidget*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:59
// [-2] void QDesktopWidget()
extern "C" Q_DECL_EXPORT
void* C_ZN14QDesktopWidgetC2Ev() {
  auto _nilp = (MyQDesktopWidget*)(0);
  return  new MyQDesktopWidget();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:60
// [-2] void ~QDesktopWidget()
extern "C" Q_DECL_EXPORT
void C_ZN14QDesktopWidgetD2Ev(void *this_) {
  delete (QDesktopWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:62
// [1] bool isVirtualDesktop()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QDesktopWidget16isVirtualDesktopEv(void *this_) {
  return (bool)((QDesktopWidget*)this_)->isVirtualDesktop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:64
// [4] int numScreens()
extern "C" Q_DECL_EXPORT
int C_ZNK14QDesktopWidget10numScreensEv(void *this_) {
  return (int)((QDesktopWidget*)this_)->numScreens();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:65
// [4] int screenCount()
extern "C" Q_DECL_EXPORT
int C_ZNK14QDesktopWidget11screenCountEv(void *this_) {
  return (int)((QDesktopWidget*)this_)->screenCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:66
// [4] int primaryScreen()
extern "C" Q_DECL_EXPORT
int C_ZNK14QDesktopWidget13primaryScreenEv(void *this_) {
  return (int)((QDesktopWidget*)this_)->primaryScreen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:68
// [4] int screenNumber(const QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK14QDesktopWidget12screenNumberEPK7QWidget(void *this_, const QWidget * widget) {
  return (int)((QDesktopWidget*)this_)->screenNumber(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:69
// [4] int screenNumber(const QPoint &)
extern "C" Q_DECL_EXPORT
int C_ZNK14QDesktopWidget12screenNumberERK6QPoint(void *this_, QPoint* arg0) {
  return (int)((QDesktopWidget*)this_)->screenNumber(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:71
// [8] QWidget * screen(int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDesktopWidget6screenEi(void *this_, int screen) {
  return (void*)((QDesktopWidget*)this_)->screen(screen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:73
// [16] const QRect screenGeometry(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDesktopWidget14screenGeometryEi(void *this_, int screen) {
  auto rv = ((QDesktopWidget*)this_)->screenGeometry(screen);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:74
// [16] const QRect screenGeometry(const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDesktopWidget14screenGeometryEPK7QWidget(void *this_, const QWidget * widget) {
  auto rv = ((QDesktopWidget*)this_)->screenGeometry(widget);
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:75
// [16] const QRect screenGeometry(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDesktopWidget14screenGeometryERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QDesktopWidget*)this_)->screenGeometry(*point);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:78
// [16] const QRect availableGeometry(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDesktopWidget17availableGeometryEi(void *this_, int screen) {
  auto rv = ((QDesktopWidget*)this_)->availableGeometry(screen);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:79
// [16] const QRect availableGeometry(const QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDesktopWidget17availableGeometryEPK7QWidget(void *this_, const QWidget * widget) {
  auto rv = ((QDesktopWidget*)this_)->availableGeometry(widget);
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:80
// [16] const QRect availableGeometry(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDesktopWidget17availableGeometryERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QDesktopWidget*)this_)->availableGeometry(*point);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:84
// [-2] void resized(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QDesktopWidget7resizedEi(void *this_, int arg0) {
  ((QDesktopWidget*)this_)->resized(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:85
// [-2] void workAreaResized(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QDesktopWidget15workAreaResizedEi(void *this_, int arg0) {
  ((QDesktopWidget*)this_)->workAreaResized(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qdesktopwidget.h:86
// [-2] void screenCountChanged(int)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN14QDesktopWidget18screenCountChangedEi(void *this_, int arg0) {
  ((QDesktopWidget*)this_)->screenCountChanged(arg0);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWidgets/qdesktopwidget.h:87
// [-2] void primaryScreenChanged()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN14QDesktopWidget20primaryScreenChangedEv(void *this_) {
  ((QDesktopWidget*)this_)->primaryScreenChanged();
}
#endif // QT_VERSION >= 0x050600

//  main block end
