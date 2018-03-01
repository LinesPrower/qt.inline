//  header block begin
// /usr/include/qt/QtGui/qtextlayout.h
#ifndef protected
#define protected public
#endif
#include <qtextlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextInlineObject is pure virtual: false
// QTextInlineObject has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextInlineObject : public QTextInlineObject {
public:
  virtual ~MyQTextInlineObject() {}
// void QTextInlineObject()
MyQTextInlineObject() : QTextInlineObject() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:72
// [-2] void QTextInlineObject()
extern "C" Q_DECL_EXPORT
void* C_ZN17QTextInlineObjectC2Ev() {
  return  new QTextInlineObject();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:73
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QTextInlineObject7isValidEv(void *this_) {
  return (bool)((QTextInlineObject*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:75
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QTextInlineObject4rectEv(void *this_) {
  auto rv = ((QTextInlineObject*)this_)->rect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:76
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QTextInlineObject5widthEv(void *this_) {
  return (qreal)((QTextInlineObject*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:77
// [8] qreal ascent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QTextInlineObject6ascentEv(void *this_) {
  return (qreal)((QTextInlineObject*)this_)->ascent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:78
// [8] qreal descent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QTextInlineObject7descentEv(void *this_) {
  return (qreal)((QTextInlineObject*)this_)->descent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:79
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QTextInlineObject6heightEv(void *this_) {
  return (qreal)((QTextInlineObject*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:81
// [4] Qt::LayoutDirection textDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK17QTextInlineObject13textDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QTextInlineObject*)this_)->textDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:83
// [-2] void setWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QTextInlineObject8setWidthEd(void *this_, qreal w) {
  ((QTextInlineObject*)this_)->setWidth(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:84
// [-2] void setAscent(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QTextInlineObject9setAscentEd(void *this_, qreal a) {
  ((QTextInlineObject*)this_)->setAscent(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:85
// [-2] void setDescent(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QTextInlineObject10setDescentEd(void *this_, qreal d) {
  ((QTextInlineObject*)this_)->setDescent(d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:87
// [4] int textPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK17QTextInlineObject12textPositionEv(void *this_) {
  return (int)((QTextInlineObject*)this_)->textPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:89
// [4] int formatIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK17QTextInlineObject11formatIndexEv(void *this_) {
  return (int)((QTextInlineObject*)this_)->formatIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:90
// [16] QTextFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QTextInlineObject6formatEv(void *this_) {
  auto rv = ((QTextInlineObject*)this_)->format();
return new QTextFormat(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN17QTextInlineObjectD2Ev(void *this_) {
  delete (QTextInlineObject*)(this_);
}
//  main block end
