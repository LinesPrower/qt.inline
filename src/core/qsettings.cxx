//  header block begin
// /usr/include/qt/QtCore/qsettings.h
#ifndef protected
#define protected public
#endif
#include <qsettings.h>
#include <QtCore>
#include "callback_inherit.h"

// QSettings is pure virtual: false
// QSettings has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSettings : public QSettings {
public:
  virtual ~MyQSettings() {}
// void QSettings(const QString &, const QString &, QObject *)
MyQSettings(const QString & organization, const QString & application, QObject * parent) : QSettings(organization, application, parent) {}
// void QSettings(QSettings::Scope, const QString &, const QString &, QObject *)
MyQSettings(QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) : QSettings(scope, organization, application, parent) {}
// void QSettings(QSettings::Format, QSettings::Scope, const QString &, const QString &, QObject *)
MyQSettings(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application, QObject * parent) : QSettings(format, scope, organization, application, parent) {}
// void QSettings(const QString &, QSettings::Format, QObject *)
MyQSettings(const QString & fileName, QSettings::Format format, QObject * parent) : QSettings(fileName, format, parent) {}
// void QSettings(QObject *)
MyQSettings(QObject * parent) : QSettings(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSettings::event(event);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:202
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QSettings5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSettings*)this_)->QSettings::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:71
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings10metaObjectEv(void *this_) {
  return (void*)((QSettings*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:127
// [-2] void QSettings(const QString &, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSettingsC2ERK7QStringS2_P7QObject(QString* organization, QString* application, QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(*organization, *application, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:129
// [-2] void QSettings(QSettings::Scope, const QString &, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSettingsC2ENS_5ScopeERK7QStringS3_P7QObject(QSettings::Scope scope, QString* organization, QString* application, QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(scope, *organization, *application, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:131
// [-2] void QSettings(QSettings::Format, QSettings::Scope, const QString &, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSettingsC2ENS_6FormatENS_5ScopeERK7QStringS4_P7QObject(QSettings::Format format, QSettings::Scope scope, QString* organization, QString* application, QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(format, scope, *organization, *application, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:133
// [-2] void QSettings(const QString &, QSettings::Format, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSettingsC2ERK7QStringNS_6FormatEP7QObject(QString* fileName, QSettings::Format format, QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(*fileName, format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:134
// [-2] void QSettings(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSettingsC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSettings*)(0);
  return  new MyQSettings(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:144
// [-2] void ~QSettings()
extern "C" Q_DECL_EXPORT
void C_ZN9QSettingsD2Ev(void *this_) {
  delete (QSettings*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:146
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings5clearEv(void *this_) {
  ((QSettings*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:147
// [-2] void sync()
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings4syncEv(void *this_) {
  ((QSettings*)this_)->sync();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:148
// [4] QSettings::Status status()
extern "C" Q_DECL_EXPORT
QSettings::Status C_ZNK9QSettings6statusEv(void *this_) {
  return (QSettings::Status)((QSettings*)this_)->status();
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qsettings.h:149
// [1] bool isAtomicSyncRequired()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSettings20isAtomicSyncRequiredEv(void *this_) {
  return (bool)((QSettings*)this_)->isAtomicSyncRequired();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qsettings.h:150
// [-2] void setAtomicSyncRequired(bool)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings21setAtomicSyncRequiredEb(void *this_, bool enable) {
  ((QSettings*)this_)->setAtomicSyncRequired(enable);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:152
// [-2] void beginGroup(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings10beginGroupERK7QString(void *this_, QString* prefix) {
  ((QSettings*)this_)->beginGroup(*prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:153
// [-2] void endGroup()
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings8endGroupEv(void *this_) {
  ((QSettings*)this_)->endGroup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:154
// [8] QString group()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings5groupEv(void *this_) {
  auto rv = ((QSettings*)this_)->group();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:156
// [4] int beginReadArray(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN9QSettings14beginReadArrayERK7QString(void *this_, QString* prefix) {
  return (int)((QSettings*)this_)->beginReadArray(*prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:157
// [-2] void beginWriteArray(const QString &, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings15beginWriteArrayERK7QStringi(void *this_, QString* prefix, int size) {
  ((QSettings*)this_)->beginWriteArray(*prefix, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:158
// [-2] void endArray()
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings8endArrayEv(void *this_) {
  ((QSettings*)this_)->endArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:159
// [-2] void setArrayIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings13setArrayIndexEi(void *this_, int i) {
  ((QSettings*)this_)->setArrayIndex(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:161
// [8] QStringList allKeys()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings7allKeysEv(void *this_) {
  auto rv = ((QSettings*)this_)->allKeys();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:162
// [8] QStringList childKeys()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings9childKeysEv(void *this_) {
  auto rv = ((QSettings*)this_)->childKeys();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:163
// [8] QStringList childGroups()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings11childGroupsEv(void *this_) {
  auto rv = ((QSettings*)this_)->childGroups();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:164
// [1] bool isWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSettings10isWritableEv(void *this_) {
  return (bool)((QSettings*)this_)->isWritable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:166
// [-2] void setValue(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings8setValueERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QSettings*)this_)->setValue(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:167
// [16] QVariant value(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings5valueERK7QStringRK8QVariant(void *this_, QString* key, QVariant* defaultValue) {
  auto rv = ((QSettings*)this_)->value(*key, *defaultValue);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:169
// [-2] void remove(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings6removeERK7QString(void *this_, QString* key) {
  ((QSettings*)this_)->remove(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:170
// [1] bool contains(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSettings8containsERK7QString(void *this_, QString* key) {
  return (bool)((QSettings*)this_)->contains(*key);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:172
// [-2] void setFallbacksEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings19setFallbacksEnabledEb(void *this_, bool b) {
  ((QSettings*)this_)->setFallbacksEnabled(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:173
// [1] bool fallbacksEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSettings16fallbacksEnabledEv(void *this_) {
  return (bool)((QSettings*)this_)->fallbacksEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:175
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings8fileNameEv(void *this_) {
  auto rv = ((QSettings*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qsettings.h:176
// [4] QSettings::Format format()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QSettings::Format C_ZNK9QSettings6formatEv(void *this_) {
  return (QSettings::Format)((QSettings*)this_)->format();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qsettings.h:177
// [4] QSettings::Scope scope()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QSettings::Scope C_ZNK9QSettings5scopeEv(void *this_) {
  return (QSettings::Scope)((QSettings*)this_)->scope();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qsettings.h:178
// [8] QString organizationName()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings16organizationNameEv(void *this_) {
  auto rv = ((QSettings*)this_)->organizationName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qsettings.h:179
// [8] QString applicationName()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings15applicationNameEv(void *this_) {
  auto rv = ((QSettings*)this_)->applicationName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qsettings.h:182
// [-2] void setIniCodec(QTextCodec *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings11setIniCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QSettings*)this_)->setIniCodec(codec);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qsettings.h:183
// [-2] void setIniCodec(const char *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings11setIniCodecEPKc(void *this_, const char * codecName) {
  ((QSettings*)this_)->setIniCodec(codecName);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qsettings.h:184
// [8] QTextCodec * iniCodec()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSettings8iniCodecEv(void *this_) {
  return (void*)((QSettings*)this_)->iniCodec();
}
#endif // QT_VERSION >= 0x040500

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:187
// [-2] void setDefaultFormat(QSettings::Format)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings16setDefaultFormatENS_6FormatE(QSettings::Format format) {
  QSettings::setDefaultFormat(format);
}

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qsettings.h:188
// [4] QSettings::Format defaultFormat()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QSettings::Format C_ZN9QSettings13defaultFormatEv() {
  return (QSettings::Format)QSettings::defaultFormat();
}
#endif // QT_VERSION >= 0x040400

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:189
// [-2] void setSystemIniPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings16setSystemIniPathERK7QString(QString* dir) {
  QSettings::setSystemIniPath(*dir);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:190
// [-2] void setUserIniPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings14setUserIniPathERK7QString(QString* dir) {
  QSettings::setUserIniPath(*dir);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsettings.h:191
// [-2] void setPath(QSettings::Format, QSettings::Scope, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSettings7setPathENS_6FormatENS_5ScopeERK7QString(QSettings::Format format, QSettings::Scope scope, QString* path) {
  QSettings::setPath(format, scope, *path);
}

//  main block end
