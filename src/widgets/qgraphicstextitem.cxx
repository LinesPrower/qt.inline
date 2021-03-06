//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsTextItem is pure virtual: false
// QGraphicsTextItem has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsTextItem : public QGraphicsTextItem {
public:
  virtual ~MyQGraphicsTextItem() {}
// void QGraphicsTextItem(QGraphicsItem *)
MyQGraphicsTextItem(QGraphicsItem * parent) : QGraphicsTextItem(parent) {}
// void QGraphicsTextItem(const QString &, QGraphicsItem *)
MyQGraphicsTextItem(const QString & text, QGraphicsItem * parent) : QGraphicsTextItem(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool sceneEvent(QEvent *)
  virtual bool sceneEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sceneEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsTextItem::sceneEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(QGraphicsSceneMouseEvent *)
  virtual void mousePressEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseMoveEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::mouseReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *)
  virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::mouseDoubleClickEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(QGraphicsSceneContextMenuEvent *)
  virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::contextMenuEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::keyReleaseEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusOutEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::focusOutEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragEnterEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragEnterEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::dragEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragLeaveEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::dragLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragMoveEvent(QGraphicsSceneDragDropEvent *)
  virtual void dragMoveEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::dragMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dropEvent(QGraphicsSceneDragDropEvent *)
  virtual void dropEvent(QGraphicsSceneDragDropEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::dropEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::inputMethodEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hoverEnterEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverEnterEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverEnterEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::hoverEnterEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hoverMoveEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverMoveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::hoverMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hoverLeaveEvent(QGraphicsSceneHoverEvent *)
  virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hoverLeaveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::hoverLeaveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QVariant inputMethodQuery(Qt::InputMethodQuery)
  virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"inputMethodQuery", &handled, 1, (uint64_t)query, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsTextItem::inputMethodQuery(query);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool supportsExtension(QGraphicsItem::Extension)
  virtual bool supportsExtension(QGraphicsItem::Extension extension) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"supportsExtension", &handled, 1, (uint64_t)extension, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGraphicsTextItem::supportsExtension(extension);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void setExtension(QGraphicsItem::Extension, const QVariant &)
  virtual void setExtension(QGraphicsItem::Extension extension, const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setExtension", &handled, 2, (uint64_t)extension, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsTextItem::setExtension(extension, variant);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QVariant extension(const QVariant &)
  virtual QVariant extension(const QVariant & variant) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"extension", &handled, 1, (uint64_t)&variant, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QVariant*)(irv);
      // RecordRecordQVariant
    } else {
    return QGraphicsTextItem::extension(variant);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:930
// [1] bool sceneEvent(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QGraphicsTextItem10sceneEventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGraphicsTextItem*)this_)->QGraphicsTextItem::sceneEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:931
// [-2] void mousePressEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem15mousePressEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:932
// [-2] void mouseMoveEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem14mouseMoveEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:933
// [-2] void mouseReleaseEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem17mouseReleaseEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::mouseReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:934
// [-2] void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem21mouseDoubleClickEventEP24QGraphicsSceneMouseEvent(void *this_, QGraphicsSceneMouseEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::mouseDoubleClickEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:935
// [-2] void contextMenuEvent(QGraphicsSceneContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem16contextMenuEventEP30QGraphicsSceneContextMenuEvent(void *this_, QGraphicsSceneContextMenuEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:936
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:937
// [-2] void keyReleaseEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem15keyReleaseEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::keyReleaseEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:938
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:939
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::focusOutEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:940
// [-2] void dragEnterEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem14dragEnterEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::dragEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:941
// [-2] void dragLeaveEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem14dragLeaveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::dragLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:942
// [-2] void dragMoveEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem13dragMoveEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::dragMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:943
// [-2] void dropEvent(QGraphicsSceneDragDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem9dropEventEP27QGraphicsSceneDragDropEvent(void *this_, QGraphicsSceneDragDropEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::dropEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:944
// [-2] void inputMethodEvent(QInputMethodEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem16inputMethodEventEP17QInputMethodEvent(void *this_, QInputMethodEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::inputMethodEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:945
// [-2] void hoverEnterEvent(QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem15hoverEnterEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::hoverEnterEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:946
// [-2] void hoverMoveEvent(QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem14hoverMoveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::hoverMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:947
// [-2] void hoverLeaveEvent(QGraphicsSceneHoverEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem15hoverLeaveEventEP24QGraphicsSceneHoverEvent(void *this_, QGraphicsSceneHoverEvent * event) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::hoverLeaveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:949
// [16] QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QGraphicsTextItem*)this_)->QGraphicsTextItem::inputMethodQuery(query);
return new QVariant(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:951
// [1] bool supportsExtension(QGraphicsItem::Extension)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsTextItem17supportsExtensionEN13QGraphicsItem9ExtensionE(void *this_, QGraphicsItem::Extension extension) {
  return (bool)((QGraphicsTextItem*)this_)->QGraphicsTextItem::supportsExtension(extension);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:952
// [-2] void setExtension(QGraphicsItem::Extension, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem12setExtensionEN13QGraphicsItem9ExtensionERK8QVariant(void *this_, QGraphicsItem::Extension extension, QVariant* variant) {
  ((QGraphicsTextItem*)this_)->QGraphicsTextItem::setExtension(extension, *variant);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:953
// [16] QVariant extension(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem9extensionERK8QVariant(void *this_, QVariant* variant) {
  auto rv = ((QGraphicsTextItem*)this_)->QGraphicsTextItem::extension(*variant);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:872
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem10metaObjectEv(void *this_) {
  return (void*)((QGraphicsTextItem*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:877
// [-2] void QGraphicsTextItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsTextItemC2EP13QGraphicsItem(QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsTextItem*)(0);
  return  new MyQGraphicsTextItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:878
// [-2] void QGraphicsTextItem(const QString &, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsTextItemC2ERK7QStringP13QGraphicsItem(QString* text, QGraphicsItem * parent) {
  auto _nilp = (MyQGraphicsTextItem*)(0);
  return  new MyQGraphicsTextItem(*text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:879
// [-2] void ~QGraphicsTextItem()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItemD2Ev(void *this_) {
  delete (QGraphicsTextItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:881
// [8] QString toHtml()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem6toHtmlEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->toHtml();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:882
// [-2] void setHtml(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem7setHtmlERK7QString(void *this_, QString* html) {
  ((QGraphicsTextItem*)this_)->setHtml(*html);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:884
// [8] QString toPlainText()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem11toPlainTextEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->toPlainText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:885
// [-2] void setPlainText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem12setPlainTextERK7QString(void *this_, QString* text) {
  ((QGraphicsTextItem*)this_)->setPlainText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:887
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem4fontEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:888
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem7setFontERK5QFont(void *this_, QFont* font) {
  ((QGraphicsTextItem*)this_)->setFont(*font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:890
// [-2] void setDefaultTextColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem19setDefaultTextColorERK6QColor(void *this_, QColor* c) {
  ((QGraphicsTextItem*)this_)->setDefaultTextColor(*c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:891
// [16] QColor defaultTextColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem16defaultTextColorEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->defaultTextColor();
return new QColor(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:893
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:894
// [8] QPainterPath shape()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem5shapeEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->shape();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:895
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsTextItem8containsERK7QPointF(void *this_, QPointF* point) {
  return (bool)((QGraphicsTextItem*)this_)->contains(*point);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:897
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsTextItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:899
// [1] bool isObscuredBy(const QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsTextItem12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsTextItem*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:900
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:903
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK17QGraphicsTextItem4typeEv(void *this_) {
  return (int)((QGraphicsTextItem*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:905
// [-2] void setTextWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem12setTextWidthEd(void *this_, qreal width) {
  ((QGraphicsTextItem*)this_)->setTextWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:906
// [8] qreal textWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QGraphicsTextItem9textWidthEv(void *this_) {
  return (qreal)((QGraphicsTextItem*)this_)->textWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:908
// [-2] void adjustSize()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem10adjustSizeEv(void *this_) {
  ((QGraphicsTextItem*)this_)->adjustSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:910
// [-2] void setDocument(QTextDocument *)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem11setDocumentEP13QTextDocument(void *this_, QTextDocument * document) {
  ((QGraphicsTextItem*)this_)->setDocument(document);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:911
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem8documentEv(void *this_) {
  return (void*)((QGraphicsTextItem*)this_)->document();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:913
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QGraphicsTextItem*)this_)->setTextInteractionFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:914
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C" Q_DECL_EXPORT
Qt::TextInteractionFlags C_ZNK17QGraphicsTextItem20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QGraphicsTextItem*)this_)->textInteractionFlags();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicsitem.h:916
// [-2] void setTabChangesFocus(bool)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem18setTabChangesFocusEb(void *this_, bool b) {
  ((QGraphicsTextItem*)this_)->setTabChangesFocus(b);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qgraphicsitem.h:917
// [1] bool tabChangesFocus()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsTextItem15tabChangesFocusEv(void *this_) {
  return (bool)((QGraphicsTextItem*)this_)->tabChangesFocus();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:919
// [-2] void setOpenExternalLinks(bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem20setOpenExternalLinksEb(void *this_, bool open) {
  ((QGraphicsTextItem*)this_)->setOpenExternalLinks(open);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:920
// [1] bool openExternalLinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QGraphicsTextItem17openExternalLinksEv(void *this_) {
  return (bool)((QGraphicsTextItem*)this_)->openExternalLinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:922
// [-2] void setTextCursor(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem13setTextCursorERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QGraphicsTextItem*)this_)->setTextCursor(*cursor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:923
// [8] QTextCursor textCursor()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsTextItem10textCursorEv(void *this_) {
  auto rv = ((QGraphicsTextItem*)this_)->textCursor();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:926
// [-2] void linkActivated(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem13linkActivatedERK7QString(void *this_, QString* arg0) {
  ((QGraphicsTextItem*)this_)->linkActivated(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:927
// [-2] void linkHovered(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsTextItem11linkHoveredERK7QString(void *this_, QString* arg0) {
  ((QGraphicsTextItem*)this_)->linkHovered(*arg0);
}

//  main block end
