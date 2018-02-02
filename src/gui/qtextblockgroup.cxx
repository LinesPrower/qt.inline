//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>

// QTextBlockGroup is pure virtual: false
// QTextBlockGroup has virtual projected: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:95
// [-2] void QTextBlockGroup(class QTextDocument *)
extern "C"
void* callback_ZN15QTextBlockGroupC1EP13QTextDocument_fnptr = 0;
extern "C" void set_callback_ZN15QTextBlockGroupC1EP13QTextDocument(void*cbfn)
{ callback_ZN15QTextBlockGroupC1EP13QTextDocument_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:96
// [-2] void ~QTextBlockGroup()
extern "C"
void* callback_ZN15QTextBlockGroupD1Ev_fnptr = 0;
extern "C" void set_callback_ZN15QTextBlockGroupD1Ev(void*cbfn)
{ callback_ZN15QTextBlockGroupD1Ev_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:98
// [-2] void blockInserted(const class QTextBlock &)
extern "C"
void* callback_ZN15QTextBlockGroup13blockInsertedERK10QTextBlock_fnptr = 0;
extern "C" void set_callback_ZN15QTextBlockGroup13blockInsertedERK10QTextBlock(void*cbfn)
{ callback_ZN15QTextBlockGroup13blockInsertedERK10QTextBlock_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:99
// [-2] void blockRemoved(const class QTextBlock &)
extern "C"
void* callback_ZN15QTextBlockGroup12blockRemovedERK10QTextBlock_fnptr = 0;
extern "C" void set_callback_ZN15QTextBlockGroup12blockRemovedERK10QTextBlock(void*cbfn)
{ callback_ZN15QTextBlockGroup12blockRemovedERK10QTextBlock_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:100
// [-2] void blockFormatChanged(const class QTextBlock &)
extern "C"
void* callback_ZN15QTextBlockGroup18blockFormatChangedERK10QTextBlock_fnptr = 0;
extern "C" void set_callback_ZN15QTextBlockGroup18blockFormatChangedERK10QTextBlock(void*cbfn)
{ callback_ZN15QTextBlockGroup18blockFormatChangedERK10QTextBlock_fnptr = cbfn; }

class MyQTextBlockGroup : public QTextBlockGroup {
public:
  virtual ~MyQTextBlockGroup() {}
// void QTextBlockGroup(class QTextDocument *)
MyQTextBlockGroup(QTextDocument * doc) : QTextBlockGroup(doc) {}
// void ~QTextBlockGroup()
// void blockInserted(const class QTextBlock &)
  virtual void blockInserted(const QTextBlock & block) {
    auto fnptr = ((void (*)(void* , QTextBlock*))(callback_ZN15QTextBlockGroup13blockInsertedERK10QTextBlock_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QTextBlock*)&block);
    }
    QTextBlockGroup::blockInserted(block);
  }
// void blockRemoved(const class QTextBlock &)
  virtual void blockRemoved(const QTextBlock & block) {
    auto fnptr = ((void (*)(void* , QTextBlock*))(callback_ZN15QTextBlockGroup12blockRemovedERK10QTextBlock_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QTextBlock*)&block);
    }
    QTextBlockGroup::blockRemoved(block);
  }
// void blockFormatChanged(const class QTextBlock &)
  virtual void blockFormatChanged(const QTextBlock & block) {
    auto fnptr = ((void (*)(void* , QTextBlock*))(callback_ZN15QTextBlockGroup18blockFormatChangedERK10QTextBlock_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QTextBlock*)&block);
    }
    QTextBlockGroup::blockFormatChanged(block);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:92
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QTextBlockGroup10metaObjectEv(void *this_) {
  return (void*)((QTextBlockGroup*)this_)->metaObject();
}
//  main block end
