//  header block begin
// /usr/include/qt/QtGui/qtextoption.h
#ifndef protected
#define protected public
#endif
#include <qtextoption.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextOption is pure virtual: false
// QTextOption has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextOption : public QTextOption {
public:
  virtual ~MyQTextOption() {}
// void QTextOption()
MyQTextOption() : QTextOption() {}
// void QTextOption(Qt::Alignment)
MyQTextOption(QFlags<Qt::AlignmentFlag> alignment) : QTextOption(alignment) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:85
// [-2] void QTextOption()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextOptionC2Ev() {
  return  new QTextOption();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:86
// [-2] void QTextOption(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextOptionC2E6QFlagsIN2Qt13AlignmentFlagEE(QFlags<Qt::AlignmentFlag> alignment) {
  return  new QTextOption(alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:87
// [-2] void ~QTextOption()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextOptionD2Ev(void *this_) {
  delete (QTextOption*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:90
// [32] QTextOption & operator=(const QTextOption &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextOptionaSERKS_(void *this_, QTextOption* o) {
  auto& rv = ((QTextOption*)this_)->operator=(*o);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:92
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextOption12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QTextOption*)this_)->setAlignment(alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:93
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK11QTextOption9alignmentEv(void *this_) {
  return (Qt::Alignment)((QTextOption*)this_)->alignment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:95
// [-2] void setTextDirection(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextOption16setTextDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection aDirection) {
  ((QTextOption*)this_)->setTextDirection(aDirection);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:96
// [4] Qt::LayoutDirection textDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK11QTextOption13textDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QTextOption*)this_)->textDirection();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:105
// [-2] void setWrapMode(QTextOption::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextOption11setWrapModeENS_8WrapModeE(void *this_, QTextOption::WrapMode wrap) {
  ((QTextOption*)this_)->setWrapMode(wrap);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:106
// [4] QTextOption::WrapMode wrapMode()
extern "C" Q_DECL_EXPORT
QTextOption::WrapMode C_ZNK11QTextOption8wrapModeEv(void *this_) {
  return (QTextOption::WrapMode)((QTextOption*)this_)->wrapMode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:117
// [-2] void setFlags(QTextOption::Flags)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextOption8setFlagsE6QFlagsINS_4FlagEE(void *this_, QFlags<QTextOption::Flag> flags) {
  ((QTextOption*)this_)->setFlags(flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:118
// [4] QTextOption::Flags flags()
extern "C" Q_DECL_EXPORT
QTextOption::Flags* C_ZNK11QTextOption5flagsEv(void *this_) {
  auto rv = ((QTextOption*)this_)->flags();
return new QTextOption::Flags(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:121
// [-2] void setTabStop(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextOption10setTabStopEd(void *this_, qreal tabStop) {
  ((QTextOption*)this_)->setTabStop(tabStop);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:122
// [8] qreal tabStop()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextOption7tabStopEv(void *this_) {
  return (qreal)((QTextOption*)this_)->tabStop();
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qtextoption.h:125
// [-2] void setTabStopDistance(qreal)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN11QTextOption18setTabStopDistanceEd(void *this_, qreal tabStopDistance) {
  ((QTextOption*)this_)->setTabStopDistance(tabStopDistance);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qtextoption.h:126
// [8] qreal tabStopDistance()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextOption15tabStopDistanceEv(void *this_) {
  return (qreal)((QTextOption*)this_)->tabStopDistance();
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:134
// [-2] void setUseDesignMetrics(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextOption19setUseDesignMetricsEb(void *this_, bool b) {
  ((QTextOption*)this_)->setUseDesignMetrics(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:135
// [1] bool useDesignMetrics()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextOption16useDesignMetricsEv(void *this_) {
  return (bool)((QTextOption*)this_)->useDesignMetrics();
}

//  main block end
