//  header block begin
// since 0x040100
// /usr/include/qt/QtCore/qsortfilterproxymodel.h
#ifndef protected
#define protected public
#endif
#include <qsortfilterproxymodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QSortFilterProxyModel is pure virtual: false
// QSortFilterProxyModel has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSortFilterProxyModel : public QSortFilterProxyModel {
public:
  virtual ~MyQSortFilterProxyModel() {}
// void QSortFilterProxyModel(QObject *)
MyQSortFilterProxyModel(QObject * parent) : QSortFilterProxyModel(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool filterAcceptsRow(int, const QModelIndex &)
  virtual bool filterAcceptsRow(int source_row, const QModelIndex & source_parent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"filterAcceptsRow", &handled, 2, (uint64_t)source_row, (uint64_t)&source_parent, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool filterAcceptsColumn(int, const QModelIndex &)
  virtual bool filterAcceptsColumn(int source_column, const QModelIndex & source_parent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"filterAcceptsColumn", &handled, 2, (uint64_t)source_column, (uint64_t)&source_parent, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool lessThan(const QModelIndex &, const QModelIndex &)
  virtual bool lessThan(const QModelIndex & source_left, const QModelIndex & source_right) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"lessThan", &handled, 2, (uint64_t)&source_left, (uint64_t)&source_right, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSortFilterProxyModel::lessThan(source_left, source_right);
  }
  }

// Protected Visibility=Default Availability=Available
// void filterChanged()
  virtual void filterChanged() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"filterChanged", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSortFilterProxyModel::filterChanged();
  }
  }

// Protected Visibility=Default Availability=Available
// void invalidateFilter()
  virtual void invalidateFilter() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"invalidateFilter", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSortFilterProxyModel::invalidateFilter();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:122
// [1] bool filterAcceptsRow(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QSortFilterProxyModel16filterAcceptsRowEiRK11QModelIndex(void *this_, int source_row, QModelIndex* source_parent) {
  return (bool)((QSortFilterProxyModel*)this_)->QSortFilterProxyModel::filterAcceptsRow(source_row, *source_parent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:123
// [1] bool filterAcceptsColumn(int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QSortFilterProxyModel19filterAcceptsColumnEiRK11QModelIndex(void *this_, int source_column, QModelIndex* source_parent) {
  return (bool)((QSortFilterProxyModel*)this_)->QSortFilterProxyModel::filterAcceptsColumn(source_column, *source_parent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:124
// [1] bool lessThan(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QSortFilterProxyModel8lessThanERK11QModelIndexS2_(void *this_, QModelIndex* source_left, QModelIndex* source_right) {
  return (bool)((QSortFilterProxyModel*)this_)->QSortFilterProxyModel::lessThan(*source_left, *source_right);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:126
// [-2] void filterChanged()
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel13filterChangedEv(void *this_) {
  ((QSortFilterProxyModel*)this_)->QSortFilterProxyModel::filterChanged();
}

// Protected Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:127
// [-2] void invalidateFilter()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel16invalidateFilterEv(void *this_) {
  ((QSortFilterProxyModel*)this_)->QSortFilterProxyModel::invalidateFilter();
}
#endif // QT_VERSION >= 0x040300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel10metaObjectEv(void *this_) {
  return (void*)((QSortFilterProxyModel*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:73
// [-2] void QSortFilterProxyModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QSortFilterProxyModelC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSortFilterProxyModel*)(0);
  return  new MyQSortFilterProxyModel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:74
// [-2] void ~QSortFilterProxyModel()
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModelD2Ev(void *this_) {
  delete (QSortFilterProxyModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:76
// [-2] void setSourceModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel14setSourceModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * sourceModel) {
  ((QSortFilterProxyModel*)this_)->setSourceModel(sourceModel);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:78
// [24] QModelIndex mapToSource(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel11mapToSourceERK11QModelIndex(void *this_, QModelIndex* proxyIndex) {
  auto rv = ((QSortFilterProxyModel*)this_)->mapToSource(*proxyIndex);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:79
// [24] QModelIndex mapFromSource(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel13mapFromSourceERK11QModelIndex(void *this_, QModelIndex* sourceIndex) {
  auto rv = ((QSortFilterProxyModel*)this_)->mapFromSource(*sourceIndex);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:81
// [8] QItemSelection mapSelectionToSource(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel20mapSelectionToSourceERK14QItemSelection(void *this_, QItemSelection* proxySelection) {
  auto rv = ((QSortFilterProxyModel*)this_)->mapSelectionToSource(*proxySelection);
return new QItemSelection(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:82
// [8] QItemSelection mapSelectionFromSource(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel22mapSelectionFromSourceERK14QItemSelection(void *this_, QItemSelection* sourceSelection) {
  auto rv = ((QSortFilterProxyModel*)this_)->mapSelectionFromSource(*sourceSelection);
return new QItemSelection(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:84
// [8] QRegExp filterRegExp()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel12filterRegExpEv(void *this_) {
  auto rv = ((QSortFilterProxyModel*)this_)->filterRegExp();
return new QRegExp(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:85
// [-2] void setFilterRegExp(const QRegExp &)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel15setFilterRegExpERK7QRegExp(void *this_, QRegExp* regExp) {
  ((QSortFilterProxyModel*)this_)->setFilterRegExp(*regExp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:87
// [4] int filterKeyColumn()
extern "C" Q_DECL_EXPORT
int C_ZNK21QSortFilterProxyModel15filterKeyColumnEv(void *this_) {
  return (int)((QSortFilterProxyModel*)this_)->filterKeyColumn();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:88
// [-2] void setFilterKeyColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel18setFilterKeyColumnEi(void *this_, int column) {
  ((QSortFilterProxyModel*)this_)->setFilterKeyColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:90
// [4] Qt::CaseSensitivity filterCaseSensitivity()
extern "C" Q_DECL_EXPORT
Qt::CaseSensitivity C_ZNK21QSortFilterProxyModel21filterCaseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QSortFilterProxyModel*)this_)->filterCaseSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:91
// [-2] void setFilterCaseSensitivity(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel24setFilterCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QSortFilterProxyModel*)this_)->setFilterCaseSensitivity(cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:93
// [4] Qt::CaseSensitivity sortCaseSensitivity()
extern "C" Q_DECL_EXPORT
Qt::CaseSensitivity C_ZNK21QSortFilterProxyModel19sortCaseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QSortFilterProxyModel*)this_)->sortCaseSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:94
// [-2] void setSortCaseSensitivity(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel22setSortCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QSortFilterProxyModel*)this_)->setSortCaseSensitivity(cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:96
// [1] bool isSortLocaleAware()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QSortFilterProxyModel17isSortLocaleAwareEv(void *this_) {
  return (bool)((QSortFilterProxyModel*)this_)->isSortLocaleAware();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:97
// [-2] void setSortLocaleAware(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel18setSortLocaleAwareEb(void *this_, bool on) {
  ((QSortFilterProxyModel*)this_)->setSortLocaleAware(on);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:99
// [4] int sortColumn()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK21QSortFilterProxyModel10sortColumnEv(void *this_) {
  return (int)((QSortFilterProxyModel*)this_)->sortColumn();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:100
// [4] Qt::SortOrder sortOrder()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
Qt::SortOrder C_ZNK21QSortFilterProxyModel9sortOrderEv(void *this_) {
  return (Qt::SortOrder)((QSortFilterProxyModel*)this_)->sortOrder();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:102
// [1] bool dynamicSortFilter()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QSortFilterProxyModel17dynamicSortFilterEv(void *this_) {
  return (bool)((QSortFilterProxyModel*)this_)->dynamicSortFilter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:103
// [-2] void setDynamicSortFilter(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel20setDynamicSortFilterEb(void *this_, bool enable) {
  ((QSortFilterProxyModel*)this_)->setDynamicSortFilter(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:105
// [4] int sortRole()
extern "C" Q_DECL_EXPORT
int C_ZNK21QSortFilterProxyModel8sortRoleEv(void *this_) {
  return (int)((QSortFilterProxyModel*)this_)->sortRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:106
// [-2] void setSortRole(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel11setSortRoleEi(void *this_, int role) {
  ((QSortFilterProxyModel*)this_)->setSortRole(role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:108
// [4] int filterRole()
extern "C" Q_DECL_EXPORT
int C_ZNK21QSortFilterProxyModel10filterRoleEv(void *this_) {
  return (int)((QSortFilterProxyModel*)this_)->filterRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:109
// [-2] void setFilterRole(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel13setFilterRoleEi(void *this_, int role) {
  ((QSortFilterProxyModel*)this_)->setFilterRole(role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:111
// [1] bool isRecursiveFilteringEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QSortFilterProxyModel27isRecursiveFilteringEnabledEv(void *this_) {
  return (bool)((QSortFilterProxyModel*)this_)->isRecursiveFilteringEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:112
// [-2] void setRecursiveFilteringEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel28setRecursiveFilteringEnabledEb(void *this_, bool recursive) {
  ((QSortFilterProxyModel*)this_)->setRecursiveFilteringEnabled(recursive);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:115
// [-2] void setFilterRegExp(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel15setFilterRegExpERK7QString(void *this_, QString* pattern) {
  ((QSortFilterProxyModel*)this_)->setFilterRegExp(*pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:116
// [-2] void setFilterWildcard(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel17setFilterWildcardERK7QString(void *this_, QString* pattern) {
  ((QSortFilterProxyModel*)this_)->setFilterWildcard(*pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:117
// [-2] void setFilterFixedString(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel20setFilterFixedStringERK7QString(void *this_, QString* pattern) {
  ((QSortFilterProxyModel*)this_)->setFilterFixedString(*pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:118
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel5clearEv(void *this_) {
  ((QSortFilterProxyModel*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:119
// [-2] void invalidate()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel10invalidateEv(void *this_) {
  ((QSortFilterProxyModel*)this_)->invalidate();
}
#endif // QT_VERSION >= 0x040300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:132
// [24] QModelIndex index(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QSortFilterProxyModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:133
// [24] QModelIndex parent(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QSortFilterProxyModel*)this_)->parent(*child);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:134
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QSortFilterProxyModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:136
// [4] int rowCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK21QSortFilterProxyModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QSortFilterProxyModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:137
// [4] int columnCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK21QSortFilterProxyModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QSortFilterProxyModel*)this_)->columnCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:138
// [1] bool hasChildren(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QSortFilterProxyModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QSortFilterProxyModel*)this_)->hasChildren(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:140
// [16] QVariant data(const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QSortFilterProxyModel*)this_)->data(*index, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:141
// [1] bool setData(const QModelIndex &, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN21QSortFilterProxyModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QSortFilterProxyModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:143
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QSortFilterProxyModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:144
// [1] bool setHeaderData(int, Qt::Orientation, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN21QSortFilterProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *this_, int section, Qt::Orientation orientation, QVariant* value, int role) {
  return (bool)((QSortFilterProxyModel*)this_)->setHeaderData(section, orientation, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:148
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QSortFilterProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QSortFilterProxyModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:151
// [1] bool insertRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QSortFilterProxyModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QSortFilterProxyModel*)this_)->insertRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:152
// [1] bool insertColumns(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QSortFilterProxyModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QSortFilterProxyModel*)this_)->insertColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:153
// [1] bool removeRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QSortFilterProxyModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QSortFilterProxyModel*)this_)->removeRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:154
// [1] bool removeColumns(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QSortFilterProxyModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QSortFilterProxyModel*)this_)->removeColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:156
// [-2] void fetchMore(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel9fetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  ((QSortFilterProxyModel*)this_)->fetchMore(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:157
// [1] bool canFetchMore(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QSortFilterProxyModel12canFetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QSortFilterProxyModel*)this_)->canFetchMore(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:158
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK21QSortFilterProxyModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QSortFilterProxyModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:160
// [24] QModelIndex buddy(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel5buddyERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QSortFilterProxyModel*)this_)->buddy(*index);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:161
// [8] QModelIndexList match(const QModelIndex &, int, const QVariant &, int, Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK21QSortFilterProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *this_, QModelIndex* start, int role, QVariant* value, int hits, QFlags<Qt::MatchFlag> flags) {
  auto rv = ((QSortFilterProxyModel*)this_)->match(*start, role, *value, hits, flags);
return new QModelIndexList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:165
// [8] QSize span(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel4spanERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QSortFilterProxyModel*)this_)->span(*index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:166
// [-2] void sort(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN21QSortFilterProxyModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QSortFilterProxyModel*)this_)->sort(column, order);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:168
// [8] QStringList mimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QSortFilterProxyModel9mimeTypesEv(void *this_) {
  auto rv = ((QSortFilterProxyModel*)this_)->mimeTypes();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:169
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK21QSortFilterProxyModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QSortFilterProxyModel*)this_)->supportedDropActions();
}

//  main block end
