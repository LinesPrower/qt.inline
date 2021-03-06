//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFrame is pure virtual: false
// QTextFrame has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextFrame : public QTextFrame {
public:
  virtual ~MyQTextFrame() {}
// void QTextFrame(QTextDocument *)
MyQTextFrame(QTextDocument * doc) : QTextFrame(doc) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:120
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame10metaObjectEv(void *this_) {
  return (void*)((QTextFrame*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:123
// [-2] void QTextFrame(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextFrameC2EP13QTextDocument(QTextDocument * doc) {
  return  new QTextFrame(doc);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:124
// [-2] void ~QTextFrame()
extern "C" Q_DECL_EXPORT
void C_ZN10QTextFrameD2Ev(void *this_) {
  delete (QTextFrame*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:126
// [-2] void setFrameFormat(const QTextFrameFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat(void *this_, QTextFrameFormat* format) {
  ((QTextFrame*)this_)->setFrameFormat(*format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:127
// [16] QTextFrameFormat frameFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame11frameFormatEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->frameFormat();
return new QTextFrameFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:129
// [8] QTextCursor firstCursorPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame19firstCursorPositionEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->firstCursorPosition();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:130
// [8] QTextCursor lastCursorPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame18lastCursorPositionEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->lastCursorPosition();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:131
// [4] int firstPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextFrame13firstPositionEv(void *this_) {
  return (int)((QTextFrame*)this_)->firstPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:132
// [4] int lastPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextFrame12lastPositionEv(void *this_) {
  return (int)((QTextFrame*)this_)->lastPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:134
// [8] QTextFrameLayoutData * layoutData()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame10layoutDataEv(void *this_) {
  return (void*)((QTextFrame*)this_)->layoutData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:135
// [-2] void setLayoutData(QTextFrameLayoutData *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextFrame13setLayoutDataEP20QTextFrameLayoutData(void *this_, QTextFrameLayoutData * data) {
  ((QTextFrame*)this_)->setLayoutData(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:138
// [8] QTextFrame * parentFrame()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame11parentFrameEv(void *this_) {
  return (void*)((QTextFrame*)this_)->parentFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:181
// [32] QTextFrame::iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame5beginEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->begin();
return new QTextFrame::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:182
// [32] QTextFrame::iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame3endEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->end();
return new QTextFrame::iterator(rv);
}

//  main block end
