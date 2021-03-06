//  header block begin
// since 0x050200
// /usr/include/qt/QtCore/qcommandlineparser.h
#ifndef protected
#define protected public
#endif
#include <qcommandlineparser.h>
#include <QtCore>
#include "callback_inherit.h"

// QCommandLineParser is pure virtual: false
// QCommandLineParser has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCommandLineParser : public QCommandLineParser {
public:
  virtual ~MyQCommandLineParser() {}
// void QCommandLineParser()
MyQCommandLineParser() : QCommandLineParser() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:59
// [-2] void QCommandLineParser()
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineParserC2Ev() {
  return  new QCommandLineParser();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:60
// [-2] void ~QCommandLineParser()
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParserD2Ev(void *this_) {
  delete (QCommandLineParser*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:66
// [-2] void setSingleDashWordOptionMode(QCommandLineParser::SingleDashWordOptionMode)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser27setSingleDashWordOptionModeENS_24SingleDashWordOptionModeE(void *this_, QCommandLineParser::SingleDashWordOptionMode parsingMode) {
  ((QCommandLineParser*)this_)->setSingleDashWordOptionMode(parsingMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:72
// [-2] void setOptionsAfterPositionalArgumentsMode(QCommandLineParser::OptionsAfterPositionalArgumentsMode)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser38setOptionsAfterPositionalArgumentsModeENS_35OptionsAfterPositionalArgumentsModeE(void *this_, QCommandLineParser::OptionsAfterPositionalArgumentsMode mode) {
  ((QCommandLineParser*)this_)->setOptionsAfterPositionalArgumentsMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:74
// [1] bool addOption(const QCommandLineOption &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QCommandLineParser9addOptionERK18QCommandLineOption(void *this_, QCommandLineOption* commandLineOption) {
  return (bool)((QCommandLineParser*)this_)->addOption(*commandLineOption);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:77
// [8] QCommandLineOption addVersionOption()
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineParser16addVersionOptionEv(void *this_) {
  auto rv = ((QCommandLineParser*)this_)->addVersionOption();
return new QCommandLineOption(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:78
// [8] QCommandLineOption addHelpOption()
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLineParser13addHelpOptionEv(void *this_) {
  auto rv = ((QCommandLineParser*)this_)->addHelpOption();
return new QCommandLineOption(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:79
// [-2] void setApplicationDescription(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser25setApplicationDescriptionERK7QString(void *this_, QString* description) {
  ((QCommandLineParser*)this_)->setApplicationDescription(*description);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:80
// [8] QString applicationDescription()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser22applicationDescriptionEv(void *this_) {
  auto rv = ((QCommandLineParser*)this_)->applicationDescription();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:81
// [-2] void addPositionalArgument(const QString &, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser21addPositionalArgumentERK7QStringS2_S2_(void *this_, QString* name, QString* description, QString* syntax) {
  ((QCommandLineParser*)this_)->addPositionalArgument(*name, *description, *syntax);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:82
// [-2] void clearPositionalArguments()
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser24clearPositionalArgumentsEv(void *this_) {
  ((QCommandLineParser*)this_)->clearPositionalArguments();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:84
// [-2] void process(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser7processERK11QStringList(void *this_, QStringList* arguments) {
  ((QCommandLineParser*)this_)->process(*arguments);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:85
// [-2] void process(const QCoreApplication &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser7processERK16QCoreApplication(void *this_, QCoreApplication* app) {
  ((QCommandLineParser*)this_)->process(*app);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:87
// [1] bool parse(const QStringList &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QCommandLineParser5parseERK11QStringList(void *this_, QStringList* arguments) {
  return (bool)((QCommandLineParser*)this_)->parse(*arguments);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:88
// [8] QString errorText()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser9errorTextEv(void *this_) {
  auto rv = ((QCommandLineParser*)this_)->errorText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:90
// [1] bool isSet(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QCommandLineParser5isSetERK7QString(void *this_, QString* name) {
  return (bool)((QCommandLineParser*)this_)->isSet(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:91
// [8] QString value(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser5valueERK7QString(void *this_, QString* name) {
  auto rv = ((QCommandLineParser*)this_)->value(*name);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:92
// [8] QStringList values(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser6valuesERK7QString(void *this_, QString* name) {
  auto rv = ((QCommandLineParser*)this_)->values(*name);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:94
// [1] bool isSet(const QCommandLineOption &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QCommandLineParser5isSetERK18QCommandLineOption(void *this_, QCommandLineOption* option) {
  return (bool)((QCommandLineParser*)this_)->isSet(*option);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:95
// [8] QString value(const QCommandLineOption &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser5valueERK18QCommandLineOption(void *this_, QCommandLineOption* option) {
  auto rv = ((QCommandLineParser*)this_)->value(*option);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:96
// [8] QStringList values(const QCommandLineOption &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser6valuesERK18QCommandLineOption(void *this_, QCommandLineOption* option) {
  auto rv = ((QCommandLineParser*)this_)->values(*option);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:98
// [8] QStringList positionalArguments()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser19positionalArgumentsEv(void *this_) {
  auto rv = ((QCommandLineParser*)this_)->positionalArguments();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:99
// [8] QStringList optionNames()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser11optionNamesEv(void *this_) {
  auto rv = ((QCommandLineParser*)this_)->optionNames();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:100
// [8] QStringList unknownOptionNames()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser18unknownOptionNamesEv(void *this_) {
  auto rv = ((QCommandLineParser*)this_)->unknownOptionNames();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qcommandlineparser.h:102
// [-2] void showVersion()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser11showVersionEv(void *this_) {
  ((QCommandLineParser*)this_)->showVersion();
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:103
// [-2] void showHelp(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLineParser8showHelpEi(void *this_, int exitCode) {
  ((QCommandLineParser*)this_)->showHelp(exitCode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineparser.h:104
// [8] QString helpText()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLineParser8helpTextEv(void *this_) {
  auto rv = ((QCommandLineParser*)this_)->helpText();
return new QString(rv);
}

//  main block end
