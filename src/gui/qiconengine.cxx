//  header block begin
// /usr/include/qt/QtGui/qiconengine.h
#ifndef protected
#define protected public
#endif
#include <qiconengine.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconEngine is pure virtual: true
// QIconEngine has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQIconEngine : public QIconEngine {
public:
  virtual ~MyQIconEngine() {}
// void QIconEngine()
MyQIconEngine() : QIconEngine() {}
};

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qiconengine.h:53
// [-2] void QIconEngine()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN11QIconEngineC2Ev() {
  return 0; // new QIconEngine();
}
#endif // QT_VERSION >= 0x050600

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:55
// [-2] void ~QIconEngine()
extern "C" Q_DECL_EXPORT
void C_ZN11QIconEngineD2Ev(void *this_) {
  delete (QIconEngine*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:56
// [-2] void paint(QPainter *, const QRect &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void C_ZN11QIconEngine5paintEP8QPainterRK5QRectN5QIcon4ModeENS5_5StateE(void *this_, QPainter * painter, QRect* rect, QIcon::Mode mode, QIcon::State state) {
  ((QIconEngine*)this_)->paint(painter, *rect, mode, state);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:57
// [8] QSize actualSize(const QSize &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void* C_ZN11QIconEngine10actualSizeERK5QSizeN5QIcon4ModeENS3_5StateE(void *this_, QSize* size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIconEngine*)this_)->actualSize(*size, mode, state);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:58
// [32] QPixmap pixmap(const QSize &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void* C_ZN11QIconEngine6pixmapERK5QSizeN5QIcon4ModeENS3_5StateE(void *this_, QSize* size, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIconEngine*)this_)->pixmap(*size, mode, state);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:60
// [-2] void addPixmap(const QPixmap &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void C_ZN11QIconEngine9addPixmapERK7QPixmapN5QIcon4ModeENS3_5StateE(void *this_, QPixmap* pixmap, QIcon::Mode mode, QIcon::State state) {
  ((QIconEngine*)this_)->addPixmap(*pixmap, mode, state);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:61
// [-2] void addFile(const QString &, const QSize &, QIcon::Mode, QIcon::State)
extern "C" Q_DECL_EXPORT
void C_ZN11QIconEngine7addFileERK7QStringRK5QSizeN5QIcon4ModeENS6_5StateE(void *this_, QString* fileName, QSize* size, QIcon::Mode mode, QIcon::State state) {
  ((QIconEngine*)this_)->addFile(*fileName, *size, mode, state);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:63
// [8] QString key()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QIconEngine3keyEv(void *this_) {
  auto rv = ((QIconEngine*)this_)->key();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:64
// [8] QIconEngine * clone()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QIconEngine5cloneEv(void *this_) {
  return (void*)((QIconEngine*)this_)->clone();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:65
// [1] bool read(QDataStream &)
extern "C" Q_DECL_EXPORT
bool C_ZN11QIconEngine4readER11QDataStream(void *this_, QDataStream* in) {
  return (bool)((QIconEngine*)this_)->read(*in);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengine.h:66
// [1] bool write(QDataStream &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QIconEngine5writeER11QDataStream(void *this_, QDataStream* out) {
  return (bool)((QIconEngine*)this_)->write(*out);
}

// Public virtual Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qiconengine.h:77
// [8] QList<QSize> availableSizes(QIcon::Mode, QIcon::State)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK11QIconEngine14availableSizesEN5QIcon4ModeENS0_5StateE(void *this_, QIcon::Mode mode, QIcon::State state) {
  auto rv = ((QIconEngine*)this_)->availableSizes(mode, state);
return new QList<QSize>(rv);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qiconengine.h:80
// [8] QString iconName()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZNK11QIconEngine8iconNameEv(void *this_) {
  auto rv = ((QIconEngine*)this_)->iconName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtGui/qiconengine.h:81
// [1] bool isNull()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
bool C_ZNK11QIconEngine6isNullEv(void *this_) {
  return (bool)((QIconEngine*)this_)->isNull();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qiconengine.h:82
// [32] QPixmap scaledPixmap(const QSize &, QIcon::Mode, QIcon::State, qreal)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZN11QIconEngine12scaledPixmapERK5QSizeN5QIcon4ModeENS3_5StateEd(void *this_, QSize* size, QIcon::Mode mode, QIcon::State state, qreal scale) {
  auto rv = ((QIconEngine*)this_)->scaledPixmap(*size, mode, state, scale);
return new QPixmap(rv);
}
#endif // QT_VERSION >= 0x050900

// Public virtual Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qiconengine.h:93
// [-2] void virtual_hook(int, void *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN11QIconEngine12virtual_hookEiPv(void *this_, int id, void * data) {
  ((QIconEngine*)this_)->virtual_hook(id, data);
}
#endif // QT_VERSION >= 0x040500

//  main block end
