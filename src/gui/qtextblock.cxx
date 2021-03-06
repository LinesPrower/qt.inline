//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlock is pure virtual: false
// QTextBlock has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextBlock : public QTextBlock {
public:
  virtual ~MyQTextBlock() {}
// void QTextBlock()
MyQTextBlock() : QTextBlock() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:206
// [-2] void QTextBlock()
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextBlockC2Ev() {
  return  new QTextBlock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:208
// [16] QTextBlock & operator=(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextBlockaSERKS_(void *this_, QTextBlock* o) {
  auto& rv = ((QTextBlock*)this_)->operator=(*o);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:210
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextBlock7isValidEv(void *this_) {
  return (bool)((QTextBlock*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:212
// [1] bool operator==(const QTextBlock &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextBlockeqERKS_(void *this_, QTextBlock* o) {
  return (bool)((QTextBlock*)this_)->operator==(*o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:213
// [1] bool operator!=(const QTextBlock &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextBlockneERKS_(void *this_, QTextBlock* o) {
  return (bool)((QTextBlock*)this_)->operator!=(*o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:214
// [1] bool operator<(const QTextBlock &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextBlockltERKS_(void *this_, QTextBlock* o) {
  return (bool)((QTextBlock*)this_)->operator<(*o);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:216
// [4] int position()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock8positionEv(void *this_) {
  return (int)((QTextBlock*)this_)->position();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:217
// [4] int length()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock6lengthEv(void *this_) {
  return (int)((QTextBlock*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:218
// [1] bool contains(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextBlock8containsEi(void *this_, int position) {
  return (bool)((QTextBlock*)this_)->contains(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:220
// [8] QTextLayout * layout()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock6layoutEv(void *this_) {
  return (void*)((QTextBlock*)this_)->layout();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextobject.h:221
// [-2] void clearLayout()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN10QTextBlock11clearLayoutEv(void *this_) {
  ((QTextBlock*)this_)->clearLayout();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:222
// [16] QTextBlockFormat blockFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock11blockFormatEv(void *this_) {
  auto rv = ((QTextBlock*)this_)->blockFormat();
return new QTextBlockFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:223
// [4] int blockFormatIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock16blockFormatIndexEv(void *this_) {
  return (int)((QTextBlock*)this_)->blockFormatIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:224
// [16] QTextCharFormat charFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock10charFormatEv(void *this_) {
  auto rv = ((QTextBlock*)this_)->charFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:225
// [4] int charFormatIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock15charFormatIndexEv(void *this_) {
  return (int)((QTextBlock*)this_)->charFormatIndex();
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qtextobject.h:227
// [4] Qt::LayoutDirection textDirection()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK10QTextBlock13textDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QTextBlock*)this_)->textDirection();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:229
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock4textEv(void *this_) {
  auto rv = ((QTextBlock*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:233
// [8] const QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock8documentEv(void *this_) {
  return (void*)((QTextBlock*)this_)->document();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:235
// [8] QTextList * textList()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock8textListEv(void *this_) {
  return (void*)((QTextBlock*)this_)->textList();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtextobject.h:237
// [8] QTextBlockUserData * userData()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock8userDataEv(void *this_) {
  return (void*)((QTextBlock*)this_)->userData();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtextobject.h:238
// [-2] void setUserData(QTextBlockUserData *)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTextBlock11setUserDataEP18QTextBlockUserData(void *this_, QTextBlockUserData * data) {
  ((QTextBlock*)this_)->setUserData(data);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtextobject.h:240
// [4] int userState()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock9userStateEv(void *this_) {
  return (int)((QTextBlock*)this_)->userState();
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtextobject.h:241
// [-2] void setUserState(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTextBlock12setUserStateEi(void *this_, int state) {
  ((QTextBlock*)this_)->setUserState(state);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextobject.h:243
// [4] int revision()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock8revisionEv(void *this_) {
  return (int)((QTextBlock*)this_)->revision();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextobject.h:244
// [-2] void setRevision(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN10QTextBlock11setRevisionEi(void *this_, int rev) {
  ((QTextBlock*)this_)->setRevision(rev);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextobject.h:246
// [1] bool isVisible()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextBlock9isVisibleEv(void *this_) {
  return (bool)((QTextBlock*)this_)->isVisible();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextobject.h:247
// [-2] void setVisible(bool)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN10QTextBlock10setVisibleEb(void *this_, bool visible) {
  ((QTextBlock*)this_)->setVisible(visible);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextobject.h:249
// [4] int blockNumber()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock11blockNumberEv(void *this_) {
  return (int)((QTextBlock*)this_)->blockNumber();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextobject.h:250
// [4] int firstLineNumber()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock15firstLineNumberEv(void *this_) {
  return (int)((QTextBlock*)this_)->firstLineNumber();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextobject.h:252
// [-2] void setLineCount(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN10QTextBlock12setLineCountEi(void *this_, int count) {
  ((QTextBlock*)this_)->setLineCount(count);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextobject.h:253
// [4] int lineCount()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock9lineCountEv(void *this_) {
  return (int)((QTextBlock*)this_)->lineCount();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:283
// [24] QTextBlock::iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock5beginEv(void *this_) {
  auto rv = ((QTextBlock*)this_)->begin();
return new QTextBlock::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:284
// [24] QTextBlock::iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock3endEv(void *this_) {
  auto rv = ((QTextBlock*)this_)->end();
return new QTextBlock::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:286
// [16] QTextBlock next()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock4nextEv(void *this_) {
  auto rv = ((QTextBlock*)this_)->next();
return new QTextBlock(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:287
// [16] QTextBlock previous()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextBlock8previousEv(void *this_) {
  auto rv = ((QTextBlock*)this_)->previous();
return new QTextBlock(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:290
// [4] int fragmentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextBlock13fragmentIndexEv(void *this_) {
  return (int)((QTextBlock*)this_)->fragmentIndex();
}


extern "C" Q_DECL_EXPORT
void C_ZN10QTextBlockD2Ev(void *this_) {
  delete (QTextBlock*)(this_);
}
//  main block end
