// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qgraphicslinearlayout.h
// dst-file: /src/widgets/qgraphicslinearlayout.cxx
//

// header block begin =>
#include <qgraphicslinearlayout.h>

extern "C" {

int QGraphicsLinearLayout_Class_Size()
{
  return sizeof(QGraphicsLinearLayout);
}

// QGraphicsLinearLayout(class QGraphicsLayoutItem *)
QGraphicsLinearLayout* dector_ZN21QGraphicsLinearLayoutC1EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent)
{
  // static_assert(sizeof(QGraphicsLinearLayout) == 32, "tyszerr");
  QGraphicsLinearLayout* rthis = new QGraphicsLinearLayout(parent);
  return rthis;
}

// ~QGraphicsLinearLayout()
void dedtor_ZN21QGraphicsLinearLayoutD0Ev(QGraphicsLinearLayout* that)
{
  QGraphicsLinearLayout* rthis = (QGraphicsLinearLayout*)that;
  delete rthis;
}

// QGraphicsLinearLayout(Qt::Orientation, class QGraphicsLayoutItem *)
QGraphicsLinearLayout* dector_ZN21QGraphicsLinearLayoutC1EN2Qt11OrientationEP19QGraphicsLayoutItem(Qt::Orientation orientation, QGraphicsLayoutItem * parent)
{
  // static_assert(sizeof(QGraphicsLinearLayout) == 32, "tyszerr");
  QGraphicsLinearLayout* rthis = new QGraphicsLinearLayout(orientation, parent);
  return rthis;
}

  // proto:  void QGraphicsLinearLayout::addStretch(int stretch);
void demth_ZN21QGraphicsLinearLayout10addStretchEi(void *that, int stretch)
{
  QGraphicsLinearLayout *cthat = (QGraphicsLinearLayout *)that;
   cthat->addStretch(stretch);
}

  // proto:  void QGraphicsLinearLayout::addItem(QGraphicsLayoutItem * item);
void demth_ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem(void *that, QGraphicsLayoutItem * item)
{
  QGraphicsLinearLayout *cthat = (QGraphicsLinearLayout *)that;
   cthat->addItem(item);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

