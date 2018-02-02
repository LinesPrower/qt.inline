//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

// QGraphicsSceneHelpEvent is pure virtual: false
// QGraphicsSceneHelpEvent has virtual projected: false
//  header block end

//  main block begin

class MyQGraphicsSceneHelpEvent : public QGraphicsSceneHelpEvent {
public:
  virtual ~MyQGraphicsSceneHelpEvent() {}
// void QGraphicsSceneHelpEvent(enum QEvent::Type)
MyQGraphicsSceneHelpEvent(QEvent::Type type) : QGraphicsSceneHelpEvent(type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:234
// [-2] void QGraphicsSceneHelpEvent(enum QEvent::Type)
extern "C"
void* C_ZN23QGraphicsSceneHelpEventC2EN6QEvent4TypeE(QEvent::Type type) {
  return  new QGraphicsSceneHelpEvent(type);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:235
// [-2] void ~QGraphicsSceneHelpEvent()
extern "C"
void C_ZN23QGraphicsSceneHelpEventD2Ev(void *this_) {
  delete (QGraphicsSceneHelpEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:237
// [16] QPointF scenePos()
extern "C"
void* C_ZNK23QGraphicsSceneHelpEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneHelpEvent*)this_)->scenePos();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:238
// [-2] void setScenePos(const class QPointF &)
extern "C"
void C_ZN23QGraphicsSceneHelpEvent11setScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneHelpEvent*)this_)->setScenePos(*pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:240
// [8] QPoint screenPos()
extern "C"
void* C_ZNK23QGraphicsSceneHelpEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneHelpEvent*)this_)->screenPos();
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:241
// [-2] void setScreenPos(const class QPoint &)
extern "C"
void C_ZN23QGraphicsSceneHelpEvent12setScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneHelpEvent*)this_)->setScreenPos(*pos);
}
//  main block end
