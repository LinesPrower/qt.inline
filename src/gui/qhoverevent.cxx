//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHoverEvent is pure virtual: false
// QHoverEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQHoverEvent : public QHoverEvent {
public:
  virtual ~MyQHoverEvent() {}
// void QHoverEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::KeyboardModifiers)
MyQHoverEvent(QEvent::Type type_, const QPointF & pos, const QPointF & oldPos, QFlags<Qt::KeyboardModifier> modifiers) : QHoverEvent(type_, pos, oldPos, modifiers) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:157
// [-2] void QHoverEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHoverEventC2EN6QEvent4TypeERK7QPointFS4_6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type_, QPointF* pos, QPointF* oldPos, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QHoverEvent(type_, *pos, *oldPos, modifiers);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:158
// [-2] void ~QHoverEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QHoverEventD2Ev(void *this_) {
  delete (QHoverEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:161
// [8] QPoint pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHoverEvent3posEv(void *this_) {
  auto rv = ((QHoverEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:162
// [8] QPoint oldPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHoverEvent6oldPosEv(void *this_) {
  auto rv = ((QHoverEvent*)this_)->oldPos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:165
// [16] const QPointF & posF()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHoverEvent4posFEv(void *this_) {
  auto& rv = ((QHoverEvent*)this_)->posF();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:166
// [16] const QPointF & oldPosF()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHoverEvent7oldPosFEv(void *this_) {
  auto& rv = ((QHoverEvent*)this_)->oldPosF();
return new QPointF(rv);
}

//  main block end
