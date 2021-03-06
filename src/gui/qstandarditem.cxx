//  header block begin
// since 0x040200
// /usr/include/qt/QtGui/qstandarditemmodel.h
#ifndef protected
#define protected public
#endif
#include <qstandarditemmodel.h>
#include <QtGui>
#include "callback_inherit.h"

// QStandardItem is pure virtual: false
// QStandardItem has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStandardItem : public QStandardItem {
public:
  virtual ~MyQStandardItem() {}
// void QStandardItem()
MyQStandardItem() : QStandardItem() {}
// void QStandardItem(const QString &)
MyQStandardItem(const QString & text) : QStandardItem(text) {}
// void QStandardItem(const QIcon &, const QString &)
MyQStandardItem(const QIcon & icon, const QString & text) : QStandardItem(icon, text) {}
// void QStandardItem(int, int)
MyQStandardItem(int rows, int columns) : QStandardItem(rows, columns) {}
// Protected Visibility=Default Availability=Available
// QStandardItem & operator=(const QStandardItem &)
  virtual QStandardItem & operator=(const QStandardItem & other) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"operator=", &handled, 1, (uint64_t)&other, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QStandardItem &)(irv);
      // LValueReferenceLValueReferenceQStandardItem &
    } else {
    return QStandardItem::operator=(other);
  }
  }

// Protected Visibility=Default Availability=Available
// void emitDataChanged()
  virtual void emitDataChanged() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"emitDataChanged", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QStandardItem::emitDataChanged();
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:248
// [16] QStandardItem & operator=(const QStandardItem &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStandardItemaSERKS_(void *this_, QStandardItem* other) {
  auto& rv = ((QStandardItem*)this_)->QStandardItem::operator=(*other);
return &rv;
}

// Protected Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qstandarditemmodel.h:251
// [-2] void emitDataChanged()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem15emitDataChangedEv(void *this_) {
  ((QStandardItem*)this_)->QStandardItem::emitDataChanged();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:65
// [-2] void QStandardItem()
extern "C" Q_DECL_EXPORT
void* C_ZN13QStandardItemC2Ev() {
  auto _nilp = (MyQStandardItem*)(0);
  return  new MyQStandardItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:66
// [-2] void QStandardItem(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStandardItemC2ERK7QString(QString* text) {
  auto _nilp = (MyQStandardItem*)(0);
  return  new MyQStandardItem(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:67
// [-2] void QStandardItem(const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStandardItemC2ERK5QIconRK7QString(QIcon* icon, QString* text) {
  auto _nilp = (MyQStandardItem*)(0);
  return  new MyQStandardItem(*icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:68
// [-2] void QStandardItem(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStandardItemC2Eii(int rows, int columns) {
  auto _nilp = (MyQStandardItem*)(0);
  return  new MyQStandardItem(rows, columns);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:69
// [-2] void ~QStandardItem()
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItemD2Ev(void *this_) {
  delete (QStandardItem*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:71
// [16] QVariant data(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem4dataEi(void *this_, int role) {
  auto rv = ((QStandardItem*)this_)->data(role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:72
// [-2] void setData(const QVariant &, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem7setDataERK8QVarianti(void *this_, QVariant* value, int role) {
  ((QStandardItem*)this_)->setData(*value, role);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:74
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem4textEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->text();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:77
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem7setTextERK7QString(void *this_, QString* text) {
  ((QStandardItem*)this_)->setText(*text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:79
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem4iconEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->icon();
return new QIcon(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:82
// [-2] void setIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QStandardItem*)this_)->setIcon(*icon);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:85
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem7toolTipEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->toolTip();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:88
// [-2] void setToolTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem10setToolTipERK7QString(void *this_, QString* toolTip) {
  ((QStandardItem*)this_)->setToolTip(*toolTip);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:92
// [8] QString statusTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem9statusTipEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->statusTip();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:95
// [-2] void setStatusTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem12setStatusTipERK7QString(void *this_, QString* statusTip) {
  ((QStandardItem*)this_)->setStatusTip(*statusTip);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:99
// [8] QString whatsThis()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem9whatsThisEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->whatsThis();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:102
// [-2] void setWhatsThis(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem12setWhatsThisERK7QString(void *this_, QString* whatsThis) {
  ((QStandardItem*)this_)->setWhatsThis(*whatsThis);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:105
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem8sizeHintEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->sizeHint();
return new QSize(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:108
// [-2] void setSizeHint(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem11setSizeHintERK5QSize(void *this_, QSize* sizeHint) {
  ((QStandardItem*)this_)->setSizeHint(*sizeHint);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:110
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem4fontEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->font();
return new QFont(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:113
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem7setFontERK5QFont(void *this_, QFont* font) {
  ((QStandardItem*)this_)->setFont(*font);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:115
// [4] Qt::Alignment textAlignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK13QStandardItem13textAlignmentEv(void *this_) {
  return (Qt::Alignment)((QStandardItem*)this_)->textAlignment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:118
// [-2] void setTextAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem16setTextAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> textAlignment) {
  ((QStandardItem*)this_)->setTextAlignment(textAlignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:120
// [8] QBrush background()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem10backgroundEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->background();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:123
// [-2] void setBackground(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem13setBackgroundERK6QBrush(void *this_, QBrush* brush) {
  ((QStandardItem*)this_)->setBackground(*brush);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:125
// [8] QBrush foreground()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem10foregroundEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->foreground();
return new QBrush(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:128
// [-2] void setForeground(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem13setForegroundERK6QBrush(void *this_, QBrush* brush) {
  ((QStandardItem*)this_)->setForeground(*brush);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:130
// [4] Qt::CheckState checkState()
extern "C" Q_DECL_EXPORT
Qt::CheckState C_ZNK13QStandardItem10checkStateEv(void *this_) {
  return (Qt::CheckState)((QStandardItem*)this_)->checkState();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:133
// [-2] void setCheckState(Qt::CheckState)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState checkState) {
  ((QStandardItem*)this_)->setCheckState(checkState);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:135
// [8] QString accessibleText()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem14accessibleTextEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->accessibleText();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:138
// [-2] void setAccessibleText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem17setAccessibleTextERK7QString(void *this_, QString* accessibleText) {
  ((QStandardItem*)this_)->setAccessibleText(*accessibleText);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:140
// [8] QString accessibleDescription()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem21accessibleDescriptionEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->accessibleDescription();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:143
// [-2] void setAccessibleDescription(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem24setAccessibleDescriptionERK7QString(void *this_, QString* accessibleDescription) {
  ((QStandardItem*)this_)->setAccessibleDescription(*accessibleDescription);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:145
// [4] Qt::ItemFlags flags()
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK13QStandardItem5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QStandardItem*)this_)->flags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:146
// [-2] void setFlags(Qt::ItemFlags)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QStandardItem*)this_)->setFlags(flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:148
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem9isEnabledEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:151
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem10setEnabledEb(void *this_, bool enabled) {
  ((QStandardItem*)this_)->setEnabled(enabled);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:153
// [1] bool isEditable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem10isEditableEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isEditable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:156
// [-2] void setEditable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem11setEditableEb(void *this_, bool editable) {
  ((QStandardItem*)this_)->setEditable(editable);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:158
// [1] bool isSelectable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem12isSelectableEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isSelectable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:161
// [-2] void setSelectable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem13setSelectableEb(void *this_, bool selectable) {
  ((QStandardItem*)this_)->setSelectable(selectable);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:163
// [1] bool isCheckable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem11isCheckableEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isCheckable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:166
// [-2] void setCheckable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem12setCheckableEb(void *this_, bool checkable) {
  ((QStandardItem*)this_)->setCheckable(checkable);
}

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qstandarditemmodel.h:168
// [1] bool isAutoTristate()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem14isAutoTristateEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isAutoTristate();
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qstandarditemmodel.h:171
// [-2] void setAutoTristate(bool)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem15setAutoTristateEb(void *this_, bool tristate) {
  ((QStandardItem*)this_)->setAutoTristate(tristate);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qstandarditemmodel.h:173
// [1] bool isUserTristate()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem14isUserTristateEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isUserTristate();
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qstandarditemmodel.h:176
// [-2] void setUserTristate(bool)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem15setUserTristateEb(void *this_, bool tristate) {
  ((QStandardItem*)this_)->setUserTristate(tristate);
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:179
// [1] bool isTristate()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem10isTristateEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isTristate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:180
// [-2] void setTristate(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem11setTristateEb(void *this_, bool tristate) {
  ((QStandardItem*)this_)->setTristate(tristate);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:184
// [1] bool isDragEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem13isDragEnabledEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isDragEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:187
// [-2] void setDragEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem14setDragEnabledEb(void *this_, bool dragEnabled) {
  ((QStandardItem*)this_)->setDragEnabled(dragEnabled);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:189
// [1] bool isDropEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem13isDropEnabledEv(void *this_) {
  return (bool)((QStandardItem*)this_)->isDropEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:192
// [-2] void setDropEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem14setDropEnabledEb(void *this_, bool dropEnabled) {
  ((QStandardItem*)this_)->setDropEnabled(dropEnabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:195
// [8] QStandardItem * parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem6parentEv(void *this_) {
  return (void*)((QStandardItem*)this_)->parent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:196
// [4] int row()
extern "C" Q_DECL_EXPORT
int C_ZNK13QStandardItem3rowEv(void *this_) {
  return (int)((QStandardItem*)this_)->row();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:197
// [4] int column()
extern "C" Q_DECL_EXPORT
int C_ZNK13QStandardItem6columnEv(void *this_) {
  return (int)((QStandardItem*)this_)->column();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:198
// [24] QModelIndex index()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem5indexEv(void *this_) {
  auto rv = ((QStandardItem*)this_)->index();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:199
// [8] QStandardItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem5modelEv(void *this_) {
  return (void*)((QStandardItem*)this_)->model();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:201
// [4] int rowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK13QStandardItem8rowCountEv(void *this_) {
  return (int)((QStandardItem*)this_)->rowCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:202
// [-2] void setRowCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem11setRowCountEi(void *this_, int rows) {
  ((QStandardItem*)this_)->setRowCount(rows);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:203
// [4] int columnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK13QStandardItem11columnCountEv(void *this_) {
  return (int)((QStandardItem*)this_)->columnCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:204
// [-2] void setColumnCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem14setColumnCountEi(void *this_, int columns) {
  ((QStandardItem*)this_)->setColumnCount(columns);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:206
// [1] bool hasChildren()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItem11hasChildrenEv(void *this_) {
  return (bool)((QStandardItem*)this_)->hasChildren();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:207
// [8] QStandardItem * child(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem5childEii(void *this_, int row, int column) {
  return (void*)((QStandardItem*)this_)->child(row, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:208
// [-2] void setChild(int, int, QStandardItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem8setChildEiiPS_(void *this_, int row, int column, QStandardItem * item) {
  ((QStandardItem*)this_)->setChild(row, column, item);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:209
// [-2] void setChild(int, QStandardItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem8setChildEiPS_(void *this_, int row, QStandardItem * item) {
  ((QStandardItem*)this_)->setChild(row, item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:214
// [-2] void insertRows(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem10insertRowsEii(void *this_, int row, int count) {
  ((QStandardItem*)this_)->insertRows(row, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:215
// [-2] void insertColumns(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem13insertColumnsEii(void *this_, int column, int count) {
  ((QStandardItem*)this_)->insertColumns(column, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:217
// [-2] void removeRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem9removeRowEi(void *this_, int row) {
  ((QStandardItem*)this_)->removeRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:218
// [-2] void removeColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem12removeColumnEi(void *this_, int column) {
  ((QStandardItem*)this_)->removeColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:219
// [-2] void removeRows(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem10removeRowsEii(void *this_, int row, int count) {
  ((QStandardItem*)this_)->removeRows(row, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:220
// [-2] void removeColumns(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem13removeColumnsEii(void *this_, int column, int count) {
  ((QStandardItem*)this_)->removeColumns(column, count);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:225
// [-2] void insertRow(int, QStandardItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem9insertRowEiPS_(void *this_, int row, QStandardItem * item) {
  ((QStandardItem*)this_)->insertRow(row, item);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:226
// [-2] void appendRow(QStandardItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem9appendRowEPS_(void *this_, QStandardItem * item) {
  ((QStandardItem*)this_)->appendRow(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:228
// [8] QStandardItem * takeChild(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStandardItem9takeChildEii(void *this_, int row, int column) {
  return (void*)((QStandardItem*)this_)->takeChild(row, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:232
// [-2] void sortChildren(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem12sortChildrenEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QStandardItem*)this_)->sortChildren(column, order);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:234
// [8] QStandardItem * clone()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStandardItem5cloneEv(void *this_) {
  return (void*)((QStandardItem*)this_)->clone();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:237
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK13QStandardItem4typeEv(void *this_) {
  return (int)((QStandardItem*)this_)->type();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:240
// [-2] void read(QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZN13QStandardItem4readER11QDataStream(void *this_, QDataStream* in) {
  ((QStandardItem*)this_)->read(*in);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:241
// [-2] void write(QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QStandardItem5writeER11QDataStream(void *this_, QDataStream* out) {
  ((QStandardItem*)this_)->write(*out);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstandarditemmodel.h:243
// [1] bool operator<(const QStandardItem &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QStandardItemltERKS_(void *this_, QStandardItem* other) {
  return (bool)((QStandardItem*)this_)->operator<(*other);
}

//  main block end
