//  header block begin
// /usr/include/qt/QtCore/qprocess.h
#ifndef protected
#define protected public
#endif
#include <qprocess.h>
#include <QtCore>
#include "callback_inherit.h"

// QProcess is pure virtual: false
// QProcess has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQProcess : public QProcess {
public:
  virtual ~MyQProcess() {}
// void QProcess(QObject *)
MyQProcess(QObject * parent) : QProcess(parent) {}
// Protected Visibility=Default Availability=Available
// void setProcessState(QProcess::ProcessState)
  virtual void setProcessState(QProcess::ProcessState state) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setProcessState", &handled, 1, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProcess::setProcessState(state);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void setupChildProcess()
  virtual void setupChildProcess() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setupChildProcess", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QProcess::setupChildProcess();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QProcess::readData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QProcess::writeData(data, len_);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:284
// [-2] void setProcessState(QProcess::ProcessState)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess15setProcessStateENS_12ProcessStateE(void *this_, QProcess::ProcessState state) {
  ((QProcess*)this_)->QProcess::setProcessState(state);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:286
// [-2] void setupChildProcess()
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess17setupChildProcessEv(void *this_) {
  ((QProcess*)this_)->QProcess::setupChildProcess();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:289
// [8] qint64 readData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN8QProcess8readDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QProcess*)this_)->QProcess::readData(data, maxlen);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:290
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN8QProcess9writeDataEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QProcess*)this_)->QProcess::writeData(data, len_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:112
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QProcess10metaObjectEv(void *this_) {
  return (void*)((QProcess*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:158
// [-2] void QProcess(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QProcessC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQProcess*)(0);
  return  new MyQProcess(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:159
// [-2] void ~QProcess()
extern "C" Q_DECL_EXPORT
void C_ZN8QProcessD2Ev(void *this_) {
  delete (QProcess*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:161
// [-2] void start(const QString &, const QStringList &, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess5startERK7QStringRK11QStringList6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QString* program, QStringList* arguments, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->start(*program, *arguments, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:163
// [-2] void start(const QString &, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess5startERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QString* command, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->start(*command, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:165
// [-2] void start(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess5startE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->start(mode);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qprocess.h:166
// [1] bool startDetached(qint64 *)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess13startDetachedEPx(void *this_, qint64 * pid) {
  return (bool)((QProcess*)this_)->startDetached(pid);
}
#endif // QT_VERSION >= 0x050a00

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:167
// [1] bool open(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> mode) {
  return (bool)((QProcess*)this_)->open(mode);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qprocess.h:169
// [8] QString program()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QProcess7programEv(void *this_) {
  auto rv = ((QProcess*)this_)->program();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qprocess.h:170
// [-2] void setProgram(const QString &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess10setProgramERK7QString(void *this_, QString* program) {
  ((QProcess*)this_)->setProgram(*program);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qprocess.h:172
// [8] QStringList arguments()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QProcess9argumentsEv(void *this_) {
  auto rv = ((QProcess*)this_)->arguments();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qprocess.h:173
// [-2] void setArguments(const QStringList &)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess12setArgumentsERK11QStringList(void *this_, QStringList* arguments) {
  ((QProcess*)this_)->setArguments(*arguments);
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:175
// [4] QProcess::ProcessChannelMode readChannelMode()
extern "C" Q_DECL_EXPORT
QProcess::ProcessChannelMode C_ZNK8QProcess15readChannelModeEv(void *this_) {
  return (QProcess::ProcessChannelMode)((QProcess*)this_)->readChannelMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:176
// [-2] void setReadChannelMode(QProcess::ProcessChannelMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess18setReadChannelModeENS_18ProcessChannelModeE(void *this_, QProcess::ProcessChannelMode mode) {
  ((QProcess*)this_)->setReadChannelMode(mode);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qprocess.h:177
// [4] QProcess::ProcessChannelMode processChannelMode()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QProcess::ProcessChannelMode C_ZNK8QProcess18processChannelModeEv(void *this_) {
  return (QProcess::ProcessChannelMode)((QProcess*)this_)->processChannelMode();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:178
// [-2] void setProcessChannelMode(QProcess::ProcessChannelMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess21setProcessChannelModeENS_18ProcessChannelModeE(void *this_, QProcess::ProcessChannelMode mode) {
  ((QProcess*)this_)->setProcessChannelMode(mode);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qprocess.h:179
// [4] QProcess::InputChannelMode inputChannelMode()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
QProcess::InputChannelMode C_ZNK8QProcess16inputChannelModeEv(void *this_) {
  return (QProcess::InputChannelMode)((QProcess*)this_)->inputChannelMode();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:180
// [-2] void setInputChannelMode(QProcess::InputChannelMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess19setInputChannelModeENS_16InputChannelModeE(void *this_, QProcess::InputChannelMode mode) {
  ((QProcess*)this_)->setInputChannelMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:182
// [4] QProcess::ProcessChannel readChannel()
extern "C" Q_DECL_EXPORT
QProcess::ProcessChannel C_ZNK8QProcess11readChannelEv(void *this_) {
  return (QProcess::ProcessChannel)((QProcess*)this_)->readChannel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:183
// [-2] void setReadChannel(QProcess::ProcessChannel)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess14setReadChannelENS_14ProcessChannelE(void *this_, QProcess::ProcessChannel channel) {
  ((QProcess*)this_)->setReadChannel(channel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:185
// [-2] void closeReadChannel(QProcess::ProcessChannel)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess16closeReadChannelENS_14ProcessChannelE(void *this_, QProcess::ProcessChannel channel) {
  ((QProcess*)this_)->closeReadChannel(channel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:186
// [-2] void closeWriteChannel()
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess17closeWriteChannelEv(void *this_) {
  ((QProcess*)this_)->closeWriteChannel();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qprocess.h:188
// [-2] void setStandardInputFile(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess20setStandardInputFileERK7QString(void *this_, QString* fileName) {
  ((QProcess*)this_)->setStandardInputFile(*fileName);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:189
// [-2] void setStandardOutputFile(const QString &, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess21setStandardOutputFileERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QString* fileName, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->setStandardOutputFile(*fileName, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:190
// [-2] void setStandardErrorFile(const QString &, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess20setStandardErrorFileERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QString* fileName, QFlags<QIODevice::OpenModeFlag> mode) {
  ((QProcess*)this_)->setStandardErrorFile(*fileName, mode);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qprocess.h:191
// [-2] void setStandardOutputProcess(QProcess *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess24setStandardOutputProcessEPS_(void *this_, QProcess * destination) {
  ((QProcess*)this_)->setStandardOutputProcess(destination);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:214
// [8] QString workingDirectory()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QProcess16workingDirectoryEv(void *this_) {
  auto rv = ((QProcess*)this_)->workingDirectory();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:215
// [-2] void setWorkingDirectory(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess19setWorkingDirectoryERK7QString(void *this_, QString* dir) {
  ((QProcess*)this_)->setWorkingDirectory(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:217
// [-2] void setEnvironment(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess14setEnvironmentERK11QStringList(void *this_, QStringList* environment) {
  ((QProcess*)this_)->setEnvironment(*environment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:218
// [8] QStringList environment()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QProcess11environmentEv(void *this_) {
  auto rv = ((QProcess*)this_)->environment();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qprocess.h:219
// [-2] void setProcessEnvironment(const QProcessEnvironment &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess21setProcessEnvironmentERK19QProcessEnvironment(void *this_, QProcessEnvironment* environment) {
  ((QProcess*)this_)->setProcessEnvironment(*environment);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qprocess.h:220
// [8] QProcessEnvironment processEnvironment()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK8QProcess18processEnvironmentEv(void *this_) {
  auto rv = ((QProcess*)this_)->processEnvironment();
return new QProcessEnvironment(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:222
// [4] QProcess::ProcessError error()
extern "C" Q_DECL_EXPORT
QProcess::ProcessError C_ZNK8QProcess5errorEv(void *this_) {
  return (QProcess::ProcessError)((QProcess*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:223
// [4] QProcess::ProcessState state()
extern "C" Q_DECL_EXPORT
QProcess::ProcessState C_ZNK8QProcess5stateEv(void *this_) {
  return (QProcess::ProcessState)((QProcess*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:226
// [8] Q_PID pid()
extern "C" Q_DECL_EXPORT
Q_PID C_ZNK8QProcess3pidEv(void *this_) {
  return (Q_PID)((QProcess*)this_)->pid();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qprocess.h:227
// [8] qint64 processId()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
qint64 C_ZNK8QProcess9processIdEv(void *this_) {
  return (qint64)((QProcess*)this_)->processId();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:229
// [1] bool waitForStarted(int)
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess14waitForStartedEi(void *this_, int msecs) {
  return (bool)((QProcess*)this_)->waitForStarted(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:230
// [1] bool waitForReadyRead(int)
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess16waitForReadyReadEi(void *this_, int msecs) {
  return (bool)((QProcess*)this_)->waitForReadyRead(msecs);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:231
// [1] bool waitForBytesWritten(int)
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess19waitForBytesWrittenEi(void *this_, int msecs) {
  return (bool)((QProcess*)this_)->waitForBytesWritten(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:232
// [1] bool waitForFinished(int)
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess15waitForFinishedEi(void *this_, int msecs) {
  return (bool)((QProcess*)this_)->waitForFinished(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:234
// [8] QByteArray readAllStandardOutput()
extern "C" Q_DECL_EXPORT
void* C_ZN8QProcess21readAllStandardOutputEv(void *this_) {
  auto rv = ((QProcess*)this_)->readAllStandardOutput();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:235
// [8] QByteArray readAllStandardError()
extern "C" Q_DECL_EXPORT
void* C_ZN8QProcess20readAllStandardErrorEv(void *this_) {
  auto rv = ((QProcess*)this_)->readAllStandardError();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:237
// [4] int exitCode()
extern "C" Q_DECL_EXPORT
int C_ZNK8QProcess8exitCodeEv(void *this_) {
  return (int)((QProcess*)this_)->exitCode();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qprocess.h:238
// [4] QProcess::ExitStatus exitStatus()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
QProcess::ExitStatus C_ZNK8QProcess10exitStatusEv(void *this_) {
  return (QProcess::ExitStatus)((QProcess*)this_)->exitStatus();
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:241
// [8] qint64 bytesAvailable()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK8QProcess14bytesAvailableEv(void *this_) {
  return (qint64)((QProcess*)this_)->bytesAvailable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:242
// [8] qint64 bytesToWrite()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK8QProcess12bytesToWriteEv(void *this_) {
  return (qint64)((QProcess*)this_)->bytesToWrite();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:243
// [1] bool isSequential()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QProcess12isSequentialEv(void *this_) {
  return (bool)((QProcess*)this_)->isSequential();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:244
// [1] bool canReadLine()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QProcess11canReadLineEv(void *this_) {
  return (bool)((QProcess*)this_)->canReadLine();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:245
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess5closeEv(void *this_) {
  ((QProcess*)this_)->close();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:246
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QProcess5atEndEv(void *this_) {
  return (bool)((QProcess*)this_)->atEnd();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:248
// [4] int execute(const QString &, const QStringList &)
extern "C" Q_DECL_EXPORT
int C_ZN8QProcess7executeERK7QStringRK11QStringList(QString* program, QStringList* arguments) {
  return (int)QProcess::execute(*program, *arguments);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:249
// [4] int execute(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN8QProcess7executeERK7QString(QString* command) {
  return (int)QProcess::execute(*command);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:251
// [1] bool startDetached(const QString &, const QStringList &, const QString &, qint64 *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess13startDetachedERK7QStringRK11QStringListS2_Px(QString* program, QStringList* arguments, QString* workingDirectory, qint64 * pid) {
  return (bool)QProcess::startDetached(*program, *arguments, *workingDirectory, pid);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:258
// [1] bool startDetached(const QString &, const QStringList &)
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess13startDetachedERK7QStringRK11QStringList(QString* program, QStringList* arguments) {
  return (bool)QProcess::startDetached(*program, *arguments);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:260
// [1] bool startDetached(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN8QProcess13startDetachedERK7QString(QString* command) {
  return (bool)QProcess::startDetached(*command);
}

// Public static Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtCore/qprocess.h:262
// [8] QStringList systemEnvironment()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZN8QProcess17systemEnvironmentEv() {
  auto rv = QProcess::systemEnvironment();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040100

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qprocess.h:264
// [8] QString nullDevice()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN8QProcess10nullDeviceEv() {
  auto rv = QProcess::nullDevice();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:267
// [-2] void terminate()
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess9terminateEv(void *this_) {
  ((QProcess*)this_)->terminate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:268
// [-2] void kill()
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess4killEv(void *this_) {
  ((QProcess*)this_)->kill();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:272
// [-2] void finished(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess8finishedEi(void *this_, int exitCode) {
  ((QProcess*)this_)->finished(exitCode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:273
// [-2] void finished(int, QProcess::ExitStatus)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess8finishedEiNS_10ExitStatusE(void *this_, int exitCode, QProcess::ExitStatus exitStatus) {
  ((QProcess*)this_)->finished(exitCode, exitStatus);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:275
// [-2] void error(QProcess::ProcessError)
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess5errorENS_12ProcessErrorE(void *this_, QProcess::ProcessError error) {
  ((QProcess*)this_)->error(error);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qprocess.h:277
// [-2] void errorOccurred(QProcess::ProcessError)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN8QProcess13errorOccurredENS_12ProcessErrorE(void *this_, QProcess::ProcessError error) {
  ((QProcess*)this_)->errorOccurred(error);
}
#endif // QT_VERSION >= 0x050600

//  main block end
