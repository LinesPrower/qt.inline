//  header block begin
// /usr/include/qt/QtGui/qbitmap.h
#ifndef protected
#define protected public
#endif
#include <qbitmap.h>
#include <QtGui>
#include "callback_inherit.h"

// QBitmap is pure virtual: false
// QBitmap has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQBitmap : public QBitmap {
public:
  virtual ~MyQBitmap() {}
// void QBitmap()
MyQBitmap() : QBitmap() {}
// void QBitmap(const QPixmap &)
MyQBitmap(const QPixmap & arg0) : QBitmap(arg0) {}
// void QBitmap(int, int)
MyQBitmap(int w, int h) : QBitmap(w, h) {}
// void QBitmap(const QSize &)
MyQBitmap(const QSize & arg0) : QBitmap(arg0) {}
// void QBitmap(const QString &, const char *)
MyQBitmap(const QString & fileName, const char * format) : QBitmap(fileName, format) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:54
// [-2] void QBitmap()
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmapC2Ev() {
  return  new QBitmap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:55
// [-2] void QBitmap(const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmapC2ERK7QPixmap(QPixmap* arg0) {
  return  new QBitmap(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:56
// [-2] void QBitmap(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmapC2Eii(int w, int h) {
  return  new QBitmap(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:57
// [-2] void QBitmap(const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmapC2ERK5QSize(QSize* arg0) {
  return  new QBitmap(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:58
// [-2] void QBitmap(const QString &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmapC2ERK7QStringPKc(QString* fileName, const char * format) {
  return  new QBitmap(*fileName, format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:63
// [32] QBitmap & operator=(const QBitmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmapaSERKS_(void *this_, QBitmap* other) {
  auto& rv = ((QBitmap*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:64
// [32] QBitmap & operator=(QBitmap &&)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmapaSEOS_(void *this_, QBitmap && other) {
  auto& rv = ((QBitmap*)this_)->operator=(other);
return &rv;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:65
// [-2] void ~QBitmap()
extern "C" Q_DECL_EXPORT
void C_ZN7QBitmapD2Ev(void *this_) {
  delete (QBitmap*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:68
// [32] QBitmap & operator=(const QPixmap &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmapaSERK7QPixmap(void *this_, QPixmap* arg0) {
  auto& rv = ((QBitmap*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qbitmap.h:69
// [-2] void swap(QBitmap &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN7QBitmap4swapERS_(void *this_, QBitmap* other) {
  ((QBitmap*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:72
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN7QBitmap5clearEv(void *this_) {
  ((QBitmap*)this_)->clear();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:74
// [32] QBitmap fromImage(const QImage &, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(QImage* image, QFlags<Qt::ImageConversionFlag> flags) {
  auto rv = QBitmap::fromImage(*image, flags);
return new QBitmap(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:75
// [32] QBitmap fromData(const QSize &, const uchar *, QImage::Format)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBitmap8fromDataERK5QSizePKhN6QImage6FormatE(QSize* size, const uchar * bits, QImage::Format monoFormat) {
  auto rv = QBitmap::fromData(*size, bits, monoFormat);
return new QBitmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:78
// [32] QBitmap transformed(const QMatrix &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QBitmap11transformedERK7QMatrix(void *this_, QMatrix* arg0) {
  auto rv = ((QBitmap*)this_)->transformed(*arg0);
return new QBitmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:79
// [32] QBitmap transformed(const QTransform &)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QBitmap11transformedERK10QTransform(void *this_, QTransform* matrix) {
  auto rv = ((QBitmap*)this_)->transformed(*matrix);
return new QBitmap(rv);
}

//  main block end
