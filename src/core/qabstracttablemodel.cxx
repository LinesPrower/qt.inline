//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractTableModel is pure virtual: false
// QAbstractTableModel has virtual projected: false
//  header block end

//  main block begin

class MyQAbstractTableModel : public QAbstractTableModel {
public:
  virtual ~MyQAbstractTableModel() {}
// void QAbstractTableModel(class QObject *)
MyQAbstractTableModel(QObject * parent) : QAbstractTableModel(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:367
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QAbstractTableModel10metaObjectEv(void *this_) {
  return (void*)((QAbstractTableModel*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:370
// [-2] void QAbstractTableModel(class QObject *)
extern "C"
void* C_ZN19QAbstractTableModelC2EP7QObject(QObject * parent) {
  return 0; // new QAbstractTableModel(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:371
// [-2] void ~QAbstractTableModel()
extern "C"
void C_ZN19QAbstractTableModelD2Ev(void *this_) {
  delete (QAbstractTableModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:373
// [24] QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK19QAbstractTableModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QAbstractTableModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:374
// [24] QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK19QAbstractTableModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QAbstractTableModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:375
// [1] bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool C_ZN19QAbstractTableModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractTableModel*)this_)->dropMimeData(data, action, row, column, *parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:378
// [4] Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
Qt::ItemFlags C_ZNK19QAbstractTableModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QAbstractTableModel*)this_)->flags(*index);
}
//  main block end
