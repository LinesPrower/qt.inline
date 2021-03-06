//  header block begin
// /usr/include/qt/QtGui/qtexttable.h
#ifndef protected
#define protected public
#endif
#include <qtexttable.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTable is pure virtual: false
// QTextTable has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextTable : public QTextTable {
public:
  virtual ~MyQTextTable() {}
// void QTextTable(QTextDocument *)
MyQTextTable(QTextDocument * doc) : QTextTable(doc) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:100
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable10metaObjectEv(void *this_) {
  return (void*)((QTextTable*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:102
// [-2] void QTextTable(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextTableC2EP13QTextDocument(QTextDocument * doc) {
  return  new QTextTable(doc);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:103
// [-2] void ~QTextTable()
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTableD2Ev(void *this_) {
  delete (QTextTable*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:105
// [-2] void resize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable6resizeEii(void *this_, int rows, int cols) {
  ((QTextTable*)this_)->resize(rows, cols);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:106
// [-2] void insertRows(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10insertRowsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->insertRows(pos, num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:107
// [-2] void insertColumns(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable13insertColumnsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->insertColumns(pos, num);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtexttable.h:108
// [-2] void appendRows(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10appendRowsEi(void *this_, int count) {
  ((QTextTable*)this_)->appendRows(count);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtexttable.h:109
// [-2] void appendColumns(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable13appendColumnsEi(void *this_, int count) {
  ((QTextTable*)this_)->appendColumns(count);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:110
// [-2] void removeRows(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10removeRowsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->removeRows(pos, num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:111
// [-2] void removeColumns(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable13removeColumnsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->removeColumns(pos, num);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtexttable.h:113
// [-2] void mergeCells(int, int, int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10mergeCellsEiiii(void *this_, int row, int col, int numRows, int numCols) {
  ((QTextTable*)this_)->mergeCells(row, col, numRows, numCols);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtexttable.h:114
// [-2] void mergeCells(const QTextCursor &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10mergeCellsERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QTextTable*)this_)->mergeCells(*cursor);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtexttable.h:115
// [-2] void splitCell(int, int, int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable9splitCellEiiii(void *this_, int row, int col, int numRows, int numCols) {
  ((QTextTable*)this_)->splitCell(row, col, numRows, numCols);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:117
// [4] int rows()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextTable4rowsEv(void *this_) {
  return (int)((QTextTable*)this_)->rows();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:118
// [4] int columns()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextTable7columnsEv(void *this_) {
  return (int)((QTextTable*)this_)->columns();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:120
// [16] QTextTableCell cellAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6cellAtEii(void *this_, int row, int col) {
  auto rv = ((QTextTable*)this_)->cellAt(row, col);
return new QTextTableCell(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:121
// [16] QTextTableCell cellAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6cellAtEi(void *this_, int position) {
  auto rv = ((QTextTable*)this_)->cellAt(position);
return new QTextTableCell(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:122
// [16] QTextTableCell cellAt(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6cellAtERK11QTextCursor(void *this_, QTextCursor* c) {
  auto rv = ((QTextTable*)this_)->cellAt(*c);
return new QTextTableCell(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:124
// [8] QTextCursor rowStart(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable8rowStartERK11QTextCursor(void *this_, QTextCursor* c) {
  auto rv = ((QTextTable*)this_)->rowStart(*c);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:125
// [8] QTextCursor rowEnd(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6rowEndERK11QTextCursor(void *this_, QTextCursor* c) {
  auto rv = ((QTextTable*)this_)->rowEnd(*c);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:127
// [-2] void setFormat(const QTextTableFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable9setFormatERK16QTextTableFormat(void *this_, QTextTableFormat* format) {
  ((QTextTable*)this_)->setFormat(*format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:128
// [16] QTextTableFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6formatEv(void *this_) {
  auto rv = ((QTextTable*)this_)->format();
return new QTextTableFormat(rv);
}

//  main block end
