//  header block begin
// since 0x040100
// /usr/include/qt/QtSvg/qsvgrenderer.h
#ifndef protected
#define protected public
#endif
#include <qsvgrenderer.h>
#include <QtSvg>
#include "callback_inherit.h"

// QSvgRenderer is pure virtual: false
// QSvgRenderer has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSvgRenderer : public QSvgRenderer {
public:
  virtual ~MyQSvgRenderer() {}
// void QSvgRenderer(QObject *)
MyQSvgRenderer(QObject * parent) : QSvgRenderer(parent) {}
// void QSvgRenderer(const QString &, QObject *)
MyQSvgRenderer(const QString & filename, QObject * parent) : QSvgRenderer(filename, parent) {}
// void QSvgRenderer(const QByteArray &, QObject *)
MyQSvgRenderer(const QByteArray & contents, QObject * parent) : QSvgRenderer(contents, parent) {}
// void QSvgRenderer(QXmlStreamReader *, QObject *)
MyQSvgRenderer(QXmlStreamReader * contents, QObject * parent) : QSvgRenderer(contents, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer10metaObjectEv(void *this_) {
  return (void*)((QSvgRenderer*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:68
// [-2] void QSvgRenderer(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRendererC2EP7QObject(QObject * parent) {
  return  new QSvgRenderer(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:69
// [-2] void QSvgRenderer(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRendererC2ERK7QStringP7QObject(QString* filename, QObject * parent) {
  return  new QSvgRenderer(*filename, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:70
// [-2] void QSvgRenderer(const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRendererC2ERK10QByteArrayP7QObject(QByteArray* contents, QObject * parent) {
  return  new QSvgRenderer(*contents, parent);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtSvg/qsvgrenderer.h:71
// [-2] void QSvgRenderer(QXmlStreamReader *, QObject *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRendererC2EP16QXmlStreamReaderP7QObject(QXmlStreamReader * contents, QObject * parent) {
  return  new QSvgRenderer(contents, parent);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:72
// [-2] void ~QSvgRenderer()
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRendererD2Ev(void *this_) {
  delete (QSvgRenderer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:74
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSvgRenderer7isValidEv(void *this_) {
  return (bool)((QSvgRenderer*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:76
// [8] QSize defaultSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer11defaultSizeEv(void *this_) {
  auto rv = ((QSvgRenderer*)this_)->defaultSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:78
// [16] QRect viewBox()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer7viewBoxEv(void *this_) {
  auto rv = ((QSvgRenderer*)this_)->viewBox();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:79
// [32] QRectF viewBoxF()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer8viewBoxFEv(void *this_) {
  auto rv = ((QSvgRenderer*)this_)->viewBoxF();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:80
// [-2] void setViewBox(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer10setViewBoxERK5QRect(void *this_, QRect* viewbox) {
  ((QSvgRenderer*)this_)->setViewBox(*viewbox);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:81
// [-2] void setViewBox(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer10setViewBoxERK6QRectF(void *this_, QRectF* viewbox) {
  ((QSvgRenderer*)this_)->setViewBox(*viewbox);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:83
// [1] bool animated()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSvgRenderer8animatedEv(void *this_) {
  return (bool)((QSvgRenderer*)this_)->animated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:84
// [4] int framesPerSecond()
extern "C" Q_DECL_EXPORT
int C_ZNK12QSvgRenderer15framesPerSecondEv(void *this_) {
  return (int)((QSvgRenderer*)this_)->framesPerSecond();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:85
// [-2] void setFramesPerSecond(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer18setFramesPerSecondEi(void *this_, int num) {
  ((QSvgRenderer*)this_)->setFramesPerSecond(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:86
// [4] int currentFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK12QSvgRenderer12currentFrameEv(void *this_) {
  return (int)((QSvgRenderer*)this_)->currentFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:87
// [-2] void setCurrentFrame(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer15setCurrentFrameEi(void *this_, int arg0) {
  ((QSvgRenderer*)this_)->setCurrentFrame(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:88
// [4] int animationDuration()
extern "C" Q_DECL_EXPORT
int C_ZNK12QSvgRenderer17animationDurationEv(void *this_) {
  return (int)((QSvgRenderer*)this_)->animationDuration();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtSvg/qsvgrenderer.h:90
// [32] QRectF boundsOnElement(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer15boundsOnElementERK7QString(void *this_, QString* id) {
  auto rv = ((QSvgRenderer*)this_)->boundsOnElement(*id);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtSvg/qsvgrenderer.h:91
// [1] bool elementExists(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSvgRenderer13elementExistsERK7QString(void *this_, QString* id) {
  return (bool)((QSvgRenderer*)this_)->elementExists(*id);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtSvg/qsvgrenderer.h:92
// [48] QMatrix matrixForElement(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer16matrixForElementERK7QString(void *this_, QString* id) {
  auto rv = ((QSvgRenderer*)this_)->matrixForElement(*id);
return new QMatrix(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:95
// [1] bool load(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QSvgRenderer4loadERK7QString(void *this_, QString* filename) {
  return (bool)((QSvgRenderer*)this_)->load(*filename);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:96
// [1] bool load(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QSvgRenderer4loadERK10QByteArray(void *this_, QByteArray* contents) {
  return (bool)((QSvgRenderer*)this_)->load(*contents);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtSvg/qsvgrenderer.h:97
// [1] bool load(QXmlStreamReader *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZN12QSvgRenderer4loadEP16QXmlStreamReader(void *this_, QXmlStreamReader * contents) {
  return (bool)((QSvgRenderer*)this_)->load(contents);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:98
// [-2] void render(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer6renderEP8QPainter(void *this_, QPainter * p) {
  ((QSvgRenderer*)this_)->render(p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:99
// [-2] void render(QPainter *, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer6renderEP8QPainterRK6QRectF(void *this_, QPainter * p, QRectF* bounds) {
  ((QSvgRenderer*)this_)->render(p, *bounds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:101
// [-2] void render(QPainter *, const QString &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer6renderEP8QPainterRK7QStringRK6QRectF(void *this_, QPainter * p, QString* elementId, QRectF* bounds) {
  ((QSvgRenderer*)this_)->render(p, *elementId, *bounds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:105
// [-2] void repaintNeeded()
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer13repaintNeededEv(void *this_) {
  ((QSvgRenderer*)this_)->repaintNeeded();
}

//  main block end
