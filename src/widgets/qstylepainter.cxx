//  header block begin
// /usr/include/qt/QtWidgets/qstylepainter.h
#ifndef protected
#define protected public
#endif
#include <qstylepainter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStylePainter is pure virtual: false
// QStylePainter has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStylePainter : public QStylePainter {
public:
  virtual ~MyQStylePainter() {}
// void QStylePainter()
MyQStylePainter() : QStylePainter() {}
// void QStylePainter(QWidget *)
MyQStylePainter(QWidget * w) : QStylePainter(w) {}
// void QStylePainter(QPaintDevice *, QWidget *)
MyQStylePainter(QPaintDevice * pd, QWidget * w) : QStylePainter(pd, w) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:54
// [-2] void QStylePainter()
extern "C" Q_DECL_EXPORT
void* C_ZN13QStylePainterC2Ev() {
  return  new QStylePainter();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:55
// [-2] void QStylePainter(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStylePainterC2EP7QWidget(QWidget * w) {
  return  new QStylePainter(w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:56
// [-2] void QStylePainter(QPaintDevice *, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStylePainterC2EP12QPaintDeviceP7QWidget(QPaintDevice * pd, QWidget * w) {
  return  new QStylePainter(pd, w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:57
// [1] bool begin(QWidget *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QStylePainter5beginEP7QWidget(void *this_, QWidget * w) {
  return (bool)((QStylePainter*)this_)->begin(w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:58
// [1] bool begin(QPaintDevice *, QWidget *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QStylePainter5beginEP12QPaintDeviceP7QWidget(void *this_, QPaintDevice * pd, QWidget * w) {
  return (bool)((QStylePainter*)this_)->begin(pd, w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:64
// [-2] void drawPrimitive(QStyle::PrimitiveElement, const QStyleOption &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStylePainter13drawPrimitiveEN6QStyle16PrimitiveElementERK12QStyleOption(void *this_, QStyle::PrimitiveElement pe, QStyleOption* opt) {
  ((QStylePainter*)this_)->drawPrimitive(pe, *opt);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:65
// [-2] void drawControl(QStyle::ControlElement, const QStyleOption &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStylePainter11drawControlEN6QStyle14ControlElementERK12QStyleOption(void *this_, QStyle::ControlElement ce, QStyleOption* opt) {
  ((QStylePainter*)this_)->drawControl(ce, *opt);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:66
// [-2] void drawComplexControl(QStyle::ComplexControl, const QStyleOptionComplex &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStylePainter18drawComplexControlEN6QStyle14ComplexControlERK19QStyleOptionComplex(void *this_, QStyle::ComplexControl cc, QStyleOptionComplex* opt) {
  ((QStylePainter*)this_)->drawComplexControl(cc, *opt);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:67
// [-2] void drawItemText(const QRect &, int, const QPalette &, bool, const QString &, QPalette::ColorRole)
extern "C" Q_DECL_EXPORT
void C_ZN13QStylePainter12drawItemTextERK5QRectiRK8QPalettebRK7QStringNS3_9ColorRoleE(void *this_, QRect* r, int flags, QPalette* pal, bool enabled, QString* text, QPalette::ColorRole textRole) {
  ((QStylePainter*)this_)->drawItemText(*r, flags, *pal, enabled, *text, textRole);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:69
// [-2] void drawItemPixmap(const QRect &, int, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStylePainter14drawItemPixmapERK5QRectiRK7QPixmap(void *this_, QRect* r, int flags, QPixmap* pixmap) {
  ((QStylePainter*)this_)->drawItemPixmap(*r, flags, *pixmap);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylepainter.h:70
// [8] QStyle * style()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStylePainter5styleEv(void *this_) {
  return (void*)((QStylePainter*)this_)->style();
}


extern "C" Q_DECL_EXPORT
void C_ZN13QStylePainterD2Ev(void *this_) {
  delete (QStylePainter*)(this_);
}
//  main block end
