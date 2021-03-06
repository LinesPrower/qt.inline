//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneEvent is pure virtual: false
// QGraphicsSceneEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsSceneEvent : public QGraphicsSceneEvent {
public:
  virtual ~MyQGraphicsSceneEvent() {}
// void QGraphicsSceneEvent(QEvent::Type)
MyQGraphicsSceneEvent(QEvent::Type type_) : QGraphicsSceneEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:67
// [-2] void QGraphicsSceneEvent(QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsSceneEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneEvent(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:68
// [-2] void ~QGraphicsSceneEvent()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsSceneEventD2Ev(void *this_) {
  delete (QGraphicsSceneEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:70
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsSceneEvent6widgetEv(void *this_) {
  return (void*)((QGraphicsSceneEvent*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:71
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsSceneEvent9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGraphicsSceneEvent*)this_)->setWidget(widget);
}

//  main block end
