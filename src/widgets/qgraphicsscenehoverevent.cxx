//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneHoverEvent is pure virtual: false
// QGraphicsSceneHoverEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsSceneHoverEvent : public QGraphicsSceneHoverEvent {
public:
  virtual ~MyQGraphicsSceneHoverEvent() {}
// void QGraphicsSceneHoverEvent(QEvent::Type)
MyQGraphicsSceneHoverEvent(QEvent::Type type_) : QGraphicsSceneHoverEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:201
// [-2] void QGraphicsSceneHoverEvent(QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN24QGraphicsSceneHoverEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneHoverEvent(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:202
// [-2] void ~QGraphicsSceneHoverEvent()
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneHoverEventD2Ev(void *this_) {
  delete (QGraphicsSceneHoverEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:204
// [16] QPointF pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneHoverEvent3posEv(void *this_) {
  auto rv = ((QGraphicsSceneHoverEvent*)this_)->pos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:205
// [-2] void setPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneHoverEvent6setPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:207
// [16] QPointF scenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneHoverEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneHoverEvent*)this_)->scenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:208
// [-2] void setScenePos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneHoverEvent11setScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:210
// [8] QPoint screenPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneHoverEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneHoverEvent*)this_)->screenPos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:211
// [-2] void setScreenPos(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneHoverEvent12setScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:213
// [16] QPointF lastPos()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneHoverEvent7lastPosEv(void *this_) {
  auto rv = ((QGraphicsSceneHoverEvent*)this_)->lastPos();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:214
// [-2] void setLastPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneHoverEvent10setLastPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setLastPos(*pos);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:216
// [16] QPointF lastScenePos()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneHoverEvent12lastScenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneHoverEvent*)this_)->lastScenePos();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:217
// [-2] void setLastScenePos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneHoverEvent15setLastScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setLastScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:219
// [8] QPoint lastScreenPos()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneHoverEvent13lastScreenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneHoverEvent*)this_)->lastScreenPos();
return new QPoint(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:220
// [-2] void setLastScreenPos(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneHoverEvent16setLastScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setLastScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:222
// [4] Qt::KeyboardModifiers modifiers()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK24QGraphicsSceneHoverEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QGraphicsSceneHoverEvent*)this_)->modifiers();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:223
// [-2] void setModifiers(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneHoverEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneHoverEvent*)this_)->setModifiers(modifiers);
}

//  main block end
