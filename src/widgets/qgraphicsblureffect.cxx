//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

// QGraphicsBlurEffect is pure virtual: false
// QGraphicsBlurEffect has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:186
// [-2] void draw(class QPainter *)
extern "C"
void* callback_ZN19QGraphicsBlurEffect4drawEP8QPainter_fnptr = 0;
extern "C" void set_callback_ZN19QGraphicsBlurEffect4drawEP8QPainter(void*cbfn)
{ callback_ZN19QGraphicsBlurEffect4drawEP8QPainter_fnptr = cbfn; }

class MyQGraphicsBlurEffect : public QGraphicsBlurEffect {
public:
  virtual ~MyQGraphicsBlurEffect() {}
// void QGraphicsBlurEffect(class QObject *)
MyQGraphicsBlurEffect(QObject * parent) : QGraphicsBlurEffect(parent) {}
// void draw(class QPainter *)
  virtual void draw(QPainter * painter) {
    auto fnptr = ((void (*)(void* , QPainter *))(callback_ZN19QGraphicsBlurEffect4drawEP8QPainter_fnptr));
    if (fnptr != 0) {
      fnptr(this , painter);
    }
    QGraphicsBlurEffect::draw(painter);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:157
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QGraphicsBlurEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsBlurEffect*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:170
// [-2] void QGraphicsBlurEffect(class QObject *)
extern "C"
void* C_ZN19QGraphicsBlurEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsBlurEffect*)(0);
  return  new MyQGraphicsBlurEffect(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:171
// [-2] void ~QGraphicsBlurEffect()
extern "C"
void C_ZN19QGraphicsBlurEffectD2Ev(void *this_) {
  delete (QGraphicsBlurEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:173
// [32] QRectF boundingRectFor(const class QRectF &)
extern "C"
void* C_ZNK19QGraphicsBlurEffect15boundingRectForERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsBlurEffect*)this_)->boundingRectFor(*rect);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:174
// [8] qreal blurRadius()
extern "C"
qreal C_ZNK19QGraphicsBlurEffect10blurRadiusEv(void *this_) {
  return (qreal)((QGraphicsBlurEffect*)this_)->blurRadius();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:175
// [4] QGraphicsBlurEffect::BlurHints blurHints()
extern "C"
void C_ZNK19QGraphicsBlurEffect9blurHintsEv(void *this_) {
  auto rv = ((QGraphicsBlurEffect*)this_)->blurHints();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:178
// [-2] void setBlurRadius(qreal)
extern "C"
void C_ZN19QGraphicsBlurEffect13setBlurRadiusEd(void *this_, qreal blurRadius) {
  ((QGraphicsBlurEffect*)this_)->setBlurRadius(blurRadius);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:182
// [-2] void blurRadiusChanged(qreal)
extern "C"
void C_ZN19QGraphicsBlurEffect17blurRadiusChangedEd(void *this_, qreal blurRadius) {
  ((QGraphicsBlurEffect*)this_)->blurRadiusChanged(blurRadius);
}
//  main block end
