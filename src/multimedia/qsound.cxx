//  header block begin
// /usr/include/qt/QtMultimedia/qsound.h
#ifndef protected
#define protected public
#endif
#include <qsound.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QSound is pure virtual: false
// QSound has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSound : public QSound {
public:
  virtual ~MyQSound() {}
// void QSound(const QString &, QObject *)
MyQSound(const QString & filename, QObject * parent) : QSound(filename, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSound10metaObjectEv(void *this_) {
  return (void*)((QSound*)this_)->metaObject();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:59
// [-2] void play(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN6QSound4playERK7QString(QString* filename) {
  QSound::play(*filename);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:61
// [-2] void QSound(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSoundC2ERK7QStringP7QObject(QString* filename, QObject * parent) {
  return  new QSound(*filename, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:62
// [-2] void ~QSound()
extern "C" Q_DECL_EXPORT
void C_ZN6QSoundD2Ev(void *this_) {
  delete (QSound*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:64
// [4] int loops()
extern "C" Q_DECL_EXPORT
int C_ZNK6QSound5loopsEv(void *this_) {
  return (int)((QSound*)this_)->loops();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:65
// [4] int loopsRemaining()
extern "C" Q_DECL_EXPORT
int C_ZNK6QSound14loopsRemainingEv(void *this_) {
  return (int)((QSound*)this_)->loopsRemaining();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:66
// [-2] void setLoops(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QSound8setLoopsEi(void *this_, int arg0) {
  ((QSound*)this_)->setLoops(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:67
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSound8fileNameEv(void *this_) {
  auto rv = ((QSound*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:69
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QSound10isFinishedEv(void *this_) {
  return (bool)((QSound*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:72
// [-2] void play()
extern "C" Q_DECL_EXPORT
void C_ZN6QSound4playEv(void *this_) {
  ((QSound*)this_)->play();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:73
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN6QSound4stopEv(void *this_) {
  ((QSound*)this_)->stop();
}

//  main block end
