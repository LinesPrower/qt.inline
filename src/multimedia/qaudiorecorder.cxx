//  header block begin
// /usr/include/qt/QtMultimedia/qaudiorecorder.h
#ifndef protected
#define protected public
#endif
#include <qaudiorecorder.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioRecorder is pure virtual: false
// QAudioRecorder has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioRecorder : public QAudioRecorder {
public:
  virtual ~MyQAudioRecorder() {}
// void QAudioRecorder(QObject *)
MyQAudioRecorder(QObject * parent) : QAudioRecorder(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder10metaObjectEv(void *this_) {
  return (void*)((QAudioRecorder*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:65
// [-2] void QAudioRecorder(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAudioRecorderC2EP7QObject(QObject * parent) {
  return  new QAudioRecorder(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:66
// [-2] void ~QAudioRecorder()
extern "C" Q_DECL_EXPORT
void C_ZN14QAudioRecorderD2Ev(void *this_) {
  delete (QAudioRecorder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:68
// [8] QStringList audioInputs()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder11audioInputsEv(void *this_) {
  auto rv = ((QAudioRecorder*)this_)->audioInputs();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:69
// [8] QString defaultAudioInput()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder17defaultAudioInputEv(void *this_) {
  auto rv = ((QAudioRecorder*)this_)->defaultAudioInput();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:70
// [8] QString audioInputDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder21audioInputDescriptionERK7QString(void *this_, QString* name) {
  auto rv = ((QAudioRecorder*)this_)->audioInputDescription(*name);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:72
// [8] QString audioInput()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAudioRecorder10audioInputEv(void *this_) {
  auto rv = ((QAudioRecorder*)this_)->audioInput();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:75
// [-2] void setAudioInput(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAudioRecorder13setAudioInputERK7QString(void *this_, QString* name) {
  ((QAudioRecorder*)this_)->setAudioInput(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:78
// [-2] void audioInputChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QAudioRecorder17audioInputChangedERK7QString(void *this_, QString* name) {
  ((QAudioRecorder*)this_)->audioInputChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiorecorder.h:79
// [-2] void availableAudioInputsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QAudioRecorder27availableAudioInputsChangedEv(void *this_) {
  ((QAudioRecorder*)this_)->availableAudioInputsChanged();
}

//  main block end
