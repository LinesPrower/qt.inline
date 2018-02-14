//  header block begin
// /usr/include/qt/QtGui/qpicture.h
#include <qpicture.h>
#include <QtGui>
#include "callback_inherit.h"

// QPicture is pure virtual: false
// QPicture has virtual projected: true
//  header block end

//  main block begin

class MyQPicture : public QPicture {
public:
  virtual ~MyQPicture() {}
// void QPicture(int)
MyQPicture(int formatVersion) : QPicture(formatVersion) {}
// int metric(enum QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric m) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"metric", &handled, 1, (uint64_t)m, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QPicture::metric(m);
  }
  }

};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:59
// [-2] void QPicture(int)
extern "C"
void* C_ZN8QPictureC2Ei(int formatVersion) {
  auto _nilp = (MyQPicture*)(0);
  return  new MyQPicture(formatVersion);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:61
// [-2] void ~QPicture()
extern "C"
void C_ZN8QPictureD2Ev(void *this_) {
  delete (QPicture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:63
// [1] bool isNull()
extern "C"
bool C_ZNK8QPicture6isNullEv(void *this_) {
  return (bool)((QPicture*)this_)->isNull();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:65
// [4] int devType()
extern "C"
int C_ZNK8QPicture7devTypeEv(void *this_) {
  return (int)((QPicture*)this_)->devType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:66
// [4] uint size()
extern "C"
uint C_ZNK8QPicture4sizeEv(void *this_) {
  return (uint)((QPicture*)this_)->size();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:67
// [8] const char * data()
extern "C"
void* C_ZNK8QPicture4dataEv(void *this_) {
  return (void*)((QPicture*)this_)->data();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:68
// [-2] void setData(const char *, uint)
extern "C"
void C_ZN8QPicture7setDataEPKcj(void *this_, const char * data, uint size) {
  ((QPicture*)this_)->setData(data, size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:70
// [1] bool play(class QPainter *)
extern "C"
bool C_ZN8QPicture4playEP8QPainter(void *this_, QPainter * p) {
  return (bool)((QPicture*)this_)->play(p);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:72
// [1] bool load(class QIODevice *, const char *)
extern "C"
bool C_ZN8QPicture4loadEP9QIODevicePKc(void *this_, QIODevice * dev, const char * format) {
  return (bool)((QPicture*)this_)->load(dev, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:73
// [1] bool load(const class QString &, const char *)
extern "C"
bool C_ZN8QPicture4loadERK7QStringPKc(void *this_, QString* fileName, const char * format) {
  return (bool)((QPicture*)this_)->load(*fileName, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:74
// [1] bool save(class QIODevice *, const char *)
extern "C"
bool C_ZN8QPicture4saveEP9QIODevicePKc(void *this_, QIODevice * dev, const char * format) {
  return (bool)((QPicture*)this_)->save(dev, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:75
// [1] bool save(const class QString &, const char *)
extern "C"
bool C_ZN8QPicture4saveERK7QStringPKc(void *this_, QString* fileName, const char * format) {
  return (bool)((QPicture*)this_)->save(*fileName, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:77
// [16] QRect boundingRect()
extern "C"
void* C_ZNK8QPicture12boundingRectEv(void *this_) {
  auto rv = ((QPicture*)this_)->boundingRect();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:78
// [-2] void setBoundingRect(const class QRect &)
extern "C"
void C_ZN8QPicture15setBoundingRectERK5QRect(void *this_, QRect* r) {
  ((QPicture*)this_)->setBoundingRect(*r);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:80
// [32] QPicture & operator=(const class QPicture &)
extern "C"
void* C_ZN8QPictureaSERKS_(void *this_, QPicture* p) {
  auto& rv = ((QPicture*)this_)->operator=(*p);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:82
// [32] QPicture & operator=(class QPicture &&)
extern "C"
void* C_ZN8QPictureaSEOS_(void *this_, QPicture && other) {
  auto& rv = ((QPicture*)this_)->operator=(other);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:85
// [-2] void swap(class QPicture &)
extern "C"
void C_ZN8QPicture4swapERS_(void *this_, QPicture* other) {
  ((QPicture*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:87
// [-2] void detach()
extern "C"
void C_ZN8QPicture6detachEv(void *this_) {
  ((QPicture*)this_)->detach();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:88
// [1] bool isDetached()
extern "C"
bool C_ZNK8QPicture10isDetachedEv(void *this_) {
  return (bool)((QPicture*)this_)->isDetached();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:94
// [8] const char * pictureFormat(const class QString &)
extern "C"
void* C_ZN8QPicture13pictureFormatERK7QString(QString* fileName) {
  return (void*)QPicture::pictureFormat(*fileName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:97
// [8] QStringList inputFormatList()
extern "C"
void* C_ZN8QPicture15inputFormatListEv() {
  auto rv = QPicture::inputFormatList();
return new QStringList(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:98
// [8] QStringList outputFormatList()
extern "C"
void* C_ZN8QPicture16outputFormatListEv() {
  auto rv = QPicture::outputFormatList();
return new QStringList(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:101
// [8] QPaintEngine * paintEngine()
extern "C"
void* C_ZNK8QPicture11paintEngineEv(void *this_) {
  return (void*)((QPicture*)this_)->paintEngine();
}
//  main block end
