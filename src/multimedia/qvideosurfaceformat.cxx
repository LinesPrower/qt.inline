//  header block begin
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h
#ifndef protected
#define protected public
#endif
#include <qvideosurfaceformat.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoSurfaceFormat is pure virtual: false
// QVideoSurfaceFormat has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoSurfaceFormat : public QVideoSurfaceFormat {
public:
  virtual ~MyQVideoSurfaceFormat() {}
// void QVideoSurfaceFormat()
MyQVideoSurfaceFormat() : QVideoSurfaceFormat() {}
// void QVideoSurfaceFormat(const QSize &, QVideoFrame::PixelFormat, QAbstractVideoBuffer::HandleType)
MyQVideoSurfaceFormat(const QSize & size, QVideoFrame::PixelFormat pixelFormat, QAbstractVideoBuffer::HandleType handleType) : QVideoSurfaceFormat(size, pixelFormat, handleType) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:79
// [-2] void QVideoSurfaceFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN19QVideoSurfaceFormatC2Ev() {
  return  new QVideoSurfaceFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:80
// [-2] void QVideoSurfaceFormat(const QSize &, QVideoFrame::PixelFormat, QAbstractVideoBuffer::HandleType)
extern "C" Q_DECL_EXPORT
void* C_ZN19QVideoSurfaceFormatC2ERK5QSizeN11QVideoFrame11PixelFormatEN20QAbstractVideoBuffer10HandleTypeE(QSize* size, QVideoFrame::PixelFormat pixelFormat, QAbstractVideoBuffer::HandleType handleType) {
  return  new QVideoSurfaceFormat(*size, pixelFormat, handleType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:85
// [-2] void ~QVideoSurfaceFormat()
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormatD2Ev(void *this_) {
  delete (QVideoSurfaceFormat*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:87
// [8] QVideoSurfaceFormat & operator=(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QVideoSurfaceFormataSERKS_(void *this_, QVideoSurfaceFormat* format) {
  auto& rv = ((QVideoSurfaceFormat*)this_)->operator=(*format);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:89
// [1] bool operator==(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QVideoSurfaceFormateqERKS_(void *this_, QVideoSurfaceFormat* format) {
  return (bool)((QVideoSurfaceFormat*)this_)->operator==(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:90
// [1] bool operator!=(const QVideoSurfaceFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QVideoSurfaceFormatneERKS_(void *this_, QVideoSurfaceFormat* format) {
  return (bool)((QVideoSurfaceFormat*)this_)->operator!=(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:92
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QVideoSurfaceFormat7isValidEv(void *this_) {
  return (bool)((QVideoSurfaceFormat*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:94
// [4] QVideoFrame::PixelFormat pixelFormat()
extern "C" Q_DECL_EXPORT
QVideoFrame::PixelFormat C_ZNK19QVideoSurfaceFormat11pixelFormatEv(void *this_) {
  return (QVideoFrame::PixelFormat)((QVideoSurfaceFormat*)this_)->pixelFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:95
// [4] QAbstractVideoBuffer::HandleType handleType()
extern "C" Q_DECL_EXPORT
QAbstractVideoBuffer::HandleType C_ZNK19QVideoSurfaceFormat10handleTypeEv(void *this_) {
  return (QAbstractVideoBuffer::HandleType)((QVideoSurfaceFormat*)this_)->handleType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:97
// [8] QSize frameSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoSurfaceFormat9frameSizeEv(void *this_) {
  auto rv = ((QVideoSurfaceFormat*)this_)->frameSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:98
// [-2] void setFrameSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat12setFrameSizeERK5QSize(void *this_, QSize* size) {
  ((QVideoSurfaceFormat*)this_)->setFrameSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:99
// [-2] void setFrameSize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat12setFrameSizeEii(void *this_, int width, int height) {
  ((QVideoSurfaceFormat*)this_)->setFrameSize(width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:101
// [4] int frameWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK19QVideoSurfaceFormat10frameWidthEv(void *this_) {
  return (int)((QVideoSurfaceFormat*)this_)->frameWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:102
// [4] int frameHeight()
extern "C" Q_DECL_EXPORT
int C_ZNK19QVideoSurfaceFormat11frameHeightEv(void *this_) {
  return (int)((QVideoSurfaceFormat*)this_)->frameHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:104
// [16] QRect viewport()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoSurfaceFormat8viewportEv(void *this_) {
  auto rv = ((QVideoSurfaceFormat*)this_)->viewport();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:105
// [-2] void setViewport(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat11setViewportERK5QRect(void *this_, QRect* viewport) {
  ((QVideoSurfaceFormat*)this_)->setViewport(*viewport);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:107
// [4] QVideoSurfaceFormat::Direction scanLineDirection()
extern "C" Q_DECL_EXPORT
QVideoSurfaceFormat::Direction C_ZNK19QVideoSurfaceFormat17scanLineDirectionEv(void *this_) {
  return (QVideoSurfaceFormat::Direction)((QVideoSurfaceFormat*)this_)->scanLineDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:108
// [-2] void setScanLineDirection(QVideoSurfaceFormat::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat20setScanLineDirectionENS_9DirectionE(void *this_, QVideoSurfaceFormat::Direction direction) {
  ((QVideoSurfaceFormat*)this_)->setScanLineDirection(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:110
// [8] qreal frameRate()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QVideoSurfaceFormat9frameRateEv(void *this_) {
  return (qreal)((QVideoSurfaceFormat*)this_)->frameRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:111
// [-2] void setFrameRate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat12setFrameRateEd(void *this_, qreal rate) {
  ((QVideoSurfaceFormat*)this_)->setFrameRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:113
// [8] QSize pixelAspectRatio()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoSurfaceFormat16pixelAspectRatioEv(void *this_) {
  auto rv = ((QVideoSurfaceFormat*)this_)->pixelAspectRatio();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:114
// [-2] void setPixelAspectRatio(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat19setPixelAspectRatioERK5QSize(void *this_, QSize* ratio) {
  ((QVideoSurfaceFormat*)this_)->setPixelAspectRatio(*ratio);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:115
// [-2] void setPixelAspectRatio(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat19setPixelAspectRatioEii(void *this_, int width, int height) {
  ((QVideoSurfaceFormat*)this_)->setPixelAspectRatio(width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:117
// [4] QVideoSurfaceFormat::YCbCrColorSpace yCbCrColorSpace()
extern "C" Q_DECL_EXPORT
QVideoSurfaceFormat::YCbCrColorSpace C_ZNK19QVideoSurfaceFormat15yCbCrColorSpaceEv(void *this_) {
  return (QVideoSurfaceFormat::YCbCrColorSpace)((QVideoSurfaceFormat*)this_)->yCbCrColorSpace();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:118
// [-2] void setYCbCrColorSpace(QVideoSurfaceFormat::YCbCrColorSpace)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat18setYCbCrColorSpaceENS_15YCbCrColorSpaceE(void *this_, QVideoSurfaceFormat::YCbCrColorSpace colorSpace) {
  ((QVideoSurfaceFormat*)this_)->setYCbCrColorSpace(colorSpace);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:120
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoSurfaceFormat8sizeHintEv(void *this_) {
  auto rv = ((QVideoSurfaceFormat*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:123
// [16] QVariant property(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QVideoSurfaceFormat8propertyEPKc(void *this_, const char * name) {
  auto rv = ((QVideoSurfaceFormat*)this_)->property(name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideosurfaceformat.h:124
// [-2] void setProperty(const char *, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN19QVideoSurfaceFormat11setPropertyEPKcRK8QVariant(void *this_, const char * name, QVariant* value) {
  ((QVideoSurfaceFormat*)this_)->setProperty(name, *value);
}

//  main block end
