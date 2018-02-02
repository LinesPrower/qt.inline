//  header block begin
// /usr/include/qt/QtCore/qtemporaryfile.h
#include <qtemporaryfile.h>
#include <QtCore>

// QTemporaryFile is pure virtual: false
// QTemporaryFile has virtual projected: false
//  header block end

//  main block begin

class MyQTemporaryFile : public QTemporaryFile {
public:
  virtual ~MyQTemporaryFile() {}
// void QTemporaryFile()
MyQTemporaryFile() : QTemporaryFile() {}
// void QTemporaryFile(const class QString &)
MyQTemporaryFile(const QString & templateName) : QTemporaryFile(templateName) {}
// void QTemporaryFile(class QObject *)
MyQTemporaryFile(QObject * parent) : QTemporaryFile(parent) {}
// void QTemporaryFile(const class QString &, class QObject *)
MyQTemporaryFile(const QString & templateName, QObject * parent) : QTemporaryFile(templateName, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:61
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QTemporaryFile10metaObjectEv(void *this_) {
  return (void*)((QTemporaryFile*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:66
// [-2] void QTemporaryFile()
extern "C"
void* C_ZN14QTemporaryFileC2Ev() {
  return  new QTemporaryFile();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:67
// [-2] void QTemporaryFile(const class QString &)
extern "C"
void* C_ZN14QTemporaryFileC2ERK7QString(QString* templateName) {
  return  new QTemporaryFile(*templateName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:69
// [-2] void QTemporaryFile(class QObject *)
extern "C"
void* C_ZN14QTemporaryFileC2EP7QObject(QObject * parent) {
  return  new QTemporaryFile(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:70
// [-2] void QTemporaryFile(const class QString &, class QObject *)
extern "C"
void* C_ZN14QTemporaryFileC2ERK7QStringP7QObject(QString* templateName, QObject * parent) {
  return  new QTemporaryFile(*templateName, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:72
// [-2] void ~QTemporaryFile()
extern "C"
void C_ZN14QTemporaryFileD2Ev(void *this_) {
  delete (QTemporaryFile*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:74
// [1] bool autoRemove()
extern "C"
bool C_ZNK14QTemporaryFile10autoRemoveEv(void *this_) {
  return (bool)((QTemporaryFile*)this_)->autoRemove();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:75
// [-2] void setAutoRemove(_Bool)
extern "C"
void C_ZN14QTemporaryFile13setAutoRemoveEb(void *this_, bool b) {
  ((QTemporaryFile*)this_)->setAutoRemove(b);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:78
// [1] bool open()
extern "C"
bool C_ZN14QTemporaryFile4openEv(void *this_) {
  return (bool)((QTemporaryFile*)this_)->open();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:80
// [8] QString fileName()
extern "C"
void* C_ZNK14QTemporaryFile8fileNameEv(void *this_) {
  auto rv = ((QTemporaryFile*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:81
// [8] QString fileTemplate()
extern "C"
void* C_ZNK14QTemporaryFile12fileTemplateEv(void *this_) {
  auto rv = ((QTemporaryFile*)this_)->fileTemplate();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:82
// [-2] void setFileTemplate(const class QString &)
extern "C"
void C_ZN14QTemporaryFile15setFileTemplateERK7QString(void *this_, QString* name) {
  ((QTemporaryFile*)this_)->setFileTemplate(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:85
// [1] bool rename(const class QString &)
extern "C"
bool C_ZN14QTemporaryFile6renameERK7QString(void *this_, QString* newName) {
  return (bool)((QTemporaryFile*)this_)->rename(*newName);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:88
// [8] QTemporaryFile * createLocalFile(const class QString &)
extern "C"
void* C_ZN14QTemporaryFile15createLocalFileERK7QString(QString* fileName) {
  return (void*)QTemporaryFile::createLocalFile(*fileName);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:90
// [8] QTemporaryFile * createLocalFile(class QFile &)
extern "C"
void* C_ZN14QTemporaryFile15createLocalFileER5QFile(QFile* file) {
  return (void*)QTemporaryFile::createLocalFile(*file);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:93
// [8] QTemporaryFile * createNativeFile(const class QString &)
extern "C"
void* C_ZN14QTemporaryFile16createNativeFileERK7QString(QString* fileName) {
  return (void*)QTemporaryFile::createNativeFile(*fileName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:95
// [8] QTemporaryFile * createNativeFile(class QFile &)
extern "C"
void* C_ZN14QTemporaryFile16createNativeFileER5QFile(QFile* file) {
  return (void*)QTemporaryFile::createNativeFile(*file);
}
//  main block end
