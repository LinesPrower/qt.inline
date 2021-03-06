//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qjsondocument.h
#ifndef protected
#define protected public
#endif
#include <qjsondocument.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonDocument is pure virtual: false
// QJsonDocument has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQJsonDocument : public QJsonDocument {
public:
  virtual ~MyQJsonDocument() {}
// void QJsonDocument()
MyQJsonDocument() : QJsonDocument() {}
// void QJsonDocument(const QJsonObject &)
MyQJsonDocument(const QJsonObject & object) : QJsonDocument(object) {}
// void QJsonDocument(const QJsonArray &)
MyQJsonDocument(const QJsonArray & array) : QJsonDocument(array) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:88
// [-2] void QJsonDocument()
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentC2Ev() {
  return  new QJsonDocument();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:89
// [-2] void QJsonDocument(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentC2ERK11QJsonObject(QJsonObject* object) {
  return  new QJsonDocument(*object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:90
// [-2] void QJsonDocument(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentC2ERK10QJsonArray(QJsonArray* array) {
  return  new QJsonDocument(*array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:91
// [-2] void ~QJsonDocument()
extern "C" Q_DECL_EXPORT
void C_ZN13QJsonDocumentD2Ev(void *this_) {
  delete (QJsonDocument*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:94
// [8] QJsonDocument & operator=(const QJsonDocument &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentaSERKS_(void *this_, QJsonDocument* other) {
  auto& rv = ((QJsonDocument*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:102
// [8] QJsonDocument & operator=(QJsonDocument &&)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocumentaSEOS_(void *this_, QJsonDocument && other) {
  auto& rv = ((QJsonDocument*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qjsondocument.h:108
// [-2] void swap(QJsonDocument &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN13QJsonDocument4swapERS_(void *this_, QJsonDocument* other) {
  ((QJsonDocument*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050a00

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:118
// [8] QJsonDocument fromRawData(const char *, int, QJsonDocument::DataValidation)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocument11fromRawDataEPKciNS_14DataValidationE(const char * data, int size, QJsonDocument::DataValidation validation) {
  auto rv = QJsonDocument::fromRawData(data, size, validation);
return new QJsonDocument(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:119
// [8] const char * rawData(int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument7rawDataEPi(void *this_, int * size) {
  return (void*)((QJsonDocument*)this_)->rawData(size);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:121
// [8] QJsonDocument fromBinaryData(const QByteArray &, QJsonDocument::DataValidation)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocument14fromBinaryDataERK10QByteArrayNS_14DataValidationE(QByteArray* data, QJsonDocument::DataValidation validation) {
  auto rv = QJsonDocument::fromBinaryData(*data, validation);
return new QJsonDocument(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:122
// [8] QByteArray toBinaryData()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument12toBinaryDataEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->toBinaryData();
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:124
// [8] QJsonDocument fromVariant(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QJsonDocument11fromVariantERK8QVariant(QVariant* variant) {
  auto rv = QJsonDocument::fromVariant(*variant);
return new QJsonDocument(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:125
// [16] QVariant toVariant()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument9toVariantEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->toVariant();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:137
// [8] QByteArray toJson()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument6toJsonEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->toJson();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:138
// [8] QByteArray toJson(QJsonDocument::JsonFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument6toJsonENS_10JsonFormatE(void *this_, QJsonDocument::JsonFormat format) {
  auto rv = ((QJsonDocument*)this_)->toJson(format);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:141
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocument7isEmptyEv(void *this_) {
  return (bool)((QJsonDocument*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:142
// [1] bool isArray()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocument7isArrayEv(void *this_) {
  return (bool)((QJsonDocument*)this_)->isArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:143
// [1] bool isObject()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocument8isObjectEv(void *this_) {
  return (bool)((QJsonDocument*)this_)->isObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:145
// [16] QJsonObject object()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument6objectEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->object();
return new QJsonObject(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:146
// [16] QJsonArray array()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocument5arrayEv(void *this_) {
  auto rv = ((QJsonDocument*)this_)->array();
return new QJsonArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:148
// [-2] void setObject(const QJsonObject &)
extern "C" Q_DECL_EXPORT
void C_ZN13QJsonDocument9setObjectERK11QJsonObject(void *this_, QJsonObject* object) {
  ((QJsonDocument*)this_)->setObject(*object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:149
// [-2] void setArray(const QJsonArray &)
extern "C" Q_DECL_EXPORT
void C_ZN13QJsonDocument8setArrayERK10QJsonArray(void *this_, QJsonArray* array) {
  ((QJsonDocument*)this_)->setArray(*array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:151
// [24] const QJsonValue operator[](const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocumentixERK7QString(void *this_, QString* key) {
  auto rv = ((QJsonDocument*)this_)->operator[](*key);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:152
// [24] const QJsonValue operator[](QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocumentixE13QLatin1String(void *this_, QLatin1String* key) {
  auto rv = ((QJsonDocument*)this_)->operator[](*key);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:153
// [24] const QJsonValue operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QJsonDocumentixEi(void *this_, int i) {
  auto rv = ((QJsonDocument*)this_)->operator[](i);
return new QJsonValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:155
// [1] bool operator==(const QJsonDocument &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocumenteqERKS_(void *this_, QJsonDocument* other) {
  return (bool)((QJsonDocument*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:156
// [1] bool operator!=(const QJsonDocument &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocumentneERKS_(void *this_, QJsonDocument* other) {
  return (bool)((QJsonDocument*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:158
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QJsonDocument6isNullEv(void *this_) {
  return (bool)((QJsonDocument*)this_)->isNull();
}

//  main block end
