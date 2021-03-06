//  header block begin
// since 0x050200
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QNativeGestureEvent is pure virtual: false
// QNativeGestureEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNativeGestureEvent : public QNativeGestureEvent {
public:
  virtual ~MyQNativeGestureEvent() {}
// void QNativeGestureEvent(Qt::NativeGestureType, const QPointF &, const QPointF &, const QPointF &, qreal, ulong, quint64)
MyQNativeGestureEvent(Qt::NativeGestureType type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, qreal value, ulong sequenceId, quint64 intArgument) : QNativeGestureEvent(type_, localPos, windowPos, screenPos, value, sequenceId, intArgument) {}
// void QNativeGestureEvent(Qt::NativeGestureType, const QTouchDevice *, const QPointF &, const QPointF &, const QPointF &, qreal, ulong, quint64)
MyQNativeGestureEvent(Qt::NativeGestureType type_, const QTouchDevice * dev, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, qreal value, ulong sequenceId, quint64 intArgument) : QNativeGestureEvent(type_, dev, localPos, windowPos, screenPos, value, sequenceId, intArgument) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:305
// [-2] void QNativeGestureEvent(Qt::NativeGestureType, const QPointF &, const QPointF &, const QPointF &, qreal, ulong, quint64)
extern "C" Q_DECL_EXPORT
void* C_ZN19QNativeGestureEventC2EN2Qt17NativeGestureTypeERK7QPointFS4_S4_dmy(Qt::NativeGestureType type_, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, qreal value, ulong sequenceId, quint64 intArgument) {
  return  new QNativeGestureEvent(type_, *localPos, *windowPos, *screenPos, value, sequenceId, intArgument);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qevent.h:308
// [-2] void QNativeGestureEvent(Qt::NativeGestureType, const QTouchDevice *, const QPointF &, const QPointF &, const QPointF &, qreal, ulong, quint64)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN19QNativeGestureEventC2EN2Qt17NativeGestureTypeEPK12QTouchDeviceRK7QPointFS7_S7_dmy(Qt::NativeGestureType type_, const QTouchDevice * dev, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, qreal value, ulong sequenceId, quint64 intArgument) {
  return  new QNativeGestureEvent(type_, dev, *localPos, *windowPos, *screenPos, value, sequenceId, intArgument);
}
#endif // QT_VERSION >= 0x050a00

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:310
// [-2] void ~QNativeGestureEvent()
extern "C" Q_DECL_EXPORT
void C_ZN19QNativeGestureEventD2Ev(void *this_) {
  delete (QNativeGestureEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qevent.h:311
// [4] Qt::NativeGestureType gestureType()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
Qt::NativeGestureType C_ZNK19QNativeGestureEvent11gestureTypeEv(void *this_) {
  return (Qt::NativeGestureType)((QNativeGestureEvent*)this_)->gestureType();
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qevent.h:312
// [8] qreal value()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QNativeGestureEvent5valueEv(void *this_) {
  return (qreal)((QNativeGestureEvent*)this_)->value();
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qevent.h:315
// [8] const QPoint pos()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QNativeGestureEvent3posEv(void *this_) {
  auto rv = ((QNativeGestureEvent*)this_)->pos();
return new QPoint(rv);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qevent.h:316
// [8] const QPoint globalPos()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QNativeGestureEvent9globalPosEv(void *this_) {
  auto rv = ((QNativeGestureEvent*)this_)->globalPos();
return new QPoint(rv);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qevent.h:318
// [16] const QPointF & localPos()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QNativeGestureEvent8localPosEv(void *this_) {
  auto& rv = ((QNativeGestureEvent*)this_)->localPos();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qevent.h:319
// [16] const QPointF & windowPos()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QNativeGestureEvent9windowPosEv(void *this_) {
  auto& rv = ((QNativeGestureEvent*)this_)->windowPos();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qevent.h:320
// [16] const QPointF & screenPos()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZNK19QNativeGestureEvent9screenPosEv(void *this_) {
  auto& rv = ((QNativeGestureEvent*)this_)->screenPos();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qevent.h:322
// [8] const QTouchDevice * device()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK19QNativeGestureEvent6deviceEv(void *this_) {
  return (void*)((QNativeGestureEvent*)this_)->device();
}
#endif // QT_VERSION >= 0x050a00

//  main block end
