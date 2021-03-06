//  header block begin
// since 0x040100
// /usr/include/qt/QtSvg/qsvgwidget.h
#ifndef protected
#define protected public
#endif
#include <qsvgwidget.h>
#include <QtSvg>
#include "callback_inherit.h"

// QSvgWidget is pure virtual: false
// QSvgWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSvgWidget : public QSvgWidget {
public:
  virtual ~MyQSvgWidget() {}
// void QSvgWidget(QWidget *)
MyQSvgWidget(QWidget * parent) : QSvgWidget(parent) {}
// void QSvgWidget(const QString &, QWidget *)
MyQSvgWidget(const QString & file, QWidget * parent) : QSvgWidget(file, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSvgWidget::paintEvent(event);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:73
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QSvgWidget10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QSvgWidget*)this_)->QSvgWidget::paintEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSvgWidget10metaObjectEv(void *this_) {
  return (void*)((QSvgWidget*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:62
// [-2] void QSvgWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSvgWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSvgWidget*)(0);
  return  new MyQSvgWidget(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:63
// [-2] void QSvgWidget(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSvgWidgetC2ERK7QStringP7QWidget(QString* file, QWidget * parent) {
  auto _nilp = (MyQSvgWidget*)(0);
  return  new MyQSvgWidget(*file, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:64
// [-2] void ~QSvgWidget()
extern "C" Q_DECL_EXPORT
void C_ZN10QSvgWidgetD2Ev(void *this_) {
  delete (QSvgWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:66
// [8] QSvgRenderer * renderer()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSvgWidget8rendererEv(void *this_) {
  return (void*)((QSvgWidget*)this_)->renderer();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:68
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSvgWidget8sizeHintEv(void *this_) {
  auto rv = ((QSvgWidget*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:70
// [-2] void load(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSvgWidget4loadERK7QString(void *this_, QString* file) {
  ((QSvgWidget*)this_)->load(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:71
// [-2] void load(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSvgWidget4loadERK10QByteArray(void *this_, QByteArray* contents) {
  ((QSvgWidget*)this_)->load(*contents);
}

//  main block end
