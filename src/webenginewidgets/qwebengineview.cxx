//  header block begin
// since 0x050400
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h
#ifndef protected
#define protected public
#endif
#include <qwebengineview.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineView is pure virtual: false
// QWebEngineView has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebEngineView : public QWebEngineView {
public:
  virtual ~MyQWebEngineView() {}
// void QWebEngineView(QWidget *)
MyQWebEngineView(QWidget * parent) : QWebEngineView(parent) {}
// Protected virtual Visibility=Default Availability=Available
// QWebEngineView * createWindow(QWebEnginePage::WebWindowType)
  virtual QWebEngineView * createWindow(QWebEnginePage::WebWindowType type_) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createWindow", &handled, 1, (uint64_t)type_, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWebEngineView *)(irv);
      // PointerPointerQWebEngineView *
    } else {
    return QWebEngineView::createWindow(type_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWebEngineView::contextMenuEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWebEngineView::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWebEngineView::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWebEngineView::hideEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWebEngineView::dragEnterEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWebEngineView::dragLeaveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWebEngineView::dragMoveEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dropEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWebEngineView::dropEvent(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:128
// [8] QWebEngineView * createWindow(QWebEnginePage::WebWindowType)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEngineView12createWindowEN14QWebEnginePage13WebWindowTypeE(void *this_, QWebEnginePage::WebWindowType type_) {
  return (void*)((QWebEngineView*)this_)->QWebEngineView::createWindow(type_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:129
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * arg0) {
  ((QWebEngineView*)this_)->QWebEngineView::contextMenuEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:130
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QWebEngineView5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QWebEngineView*)this_)->QWebEngineView::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:131
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QWebEngineView*)this_)->QWebEngineView::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:132
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView9hideEventEP10QHideEvent(void *this_, QHideEvent * arg0) {
  ((QWebEngineView*)this_)->QWebEngineView::hideEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:133
// [-2] void dragEnterEvent(QDragEnterEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView14dragEnterEventEP15QDragEnterEvent(void *this_, QDragEnterEvent * e) {
  ((QWebEngineView*)this_)->QWebEngineView::dragEnterEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:134
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView14dragLeaveEventEP15QDragLeaveEvent(void *this_, QDragLeaveEvent * e) {
  ((QWebEngineView*)this_)->QWebEngineView::dragLeaveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:135
// [-2] void dragMoveEvent(QDragMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView13dragMoveEventEP14QDragMoveEvent(void *this_, QDragMoveEvent * e) {
  ((QWebEngineView*)this_)->QWebEngineView::dragMoveEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:136
// [-2] void dropEvent(QDropEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView9dropEventEP10QDropEvent(void *this_, QDropEvent * e) {
  ((QWebEngineView*)this_)->QWebEngineView::dropEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView10metaObjectEv(void *this_) {
  return (void*)((QWebEngineView*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:69
// [-2] void QWebEngineView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QWebEngineViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQWebEngineView*)(0);
  return  new MyQWebEngineView(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:70
// [-2] void ~QWebEngineView()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineViewD2Ev(void *this_) {
  delete (QWebEngineView*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:72
// [8] QWebEnginePage * page()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView4pageEv(void *this_) {
  return (void*)((QWebEngineView*)this_)->page();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:73
// [-2] void setPage(QWebEnginePage *)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView7setPageEP14QWebEnginePage(void *this_, QWebEnginePage * page) {
  ((QWebEngineView*)this_)->setPage(page);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:75
// [-2] void load(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView4loadERK4QUrl(void *this_, QUrl* url) {
  ((QWebEngineView*)this_)->load(*url);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:76
// [-2] void load(const QWebEngineHttpRequest &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView4loadERK21QWebEngineHttpRequest(void *this_, QWebEngineHttpRequest* request) {
  ((QWebEngineView*)this_)->load(*request);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:77
// [-2] void setHtml(const QString &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView7setHtmlERK7QStringRK4QUrl(void *this_, QString* html, QUrl* baseUrl) {
  ((QWebEngineView*)this_)->setHtml(*html, *baseUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:78
// [-2] void setContent(const QByteArray &, const QString &, const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView10setContentERK10QByteArrayRK7QStringRK4QUrl(void *this_, QByteArray* data, QString* mimeType, QUrl* baseUrl) {
  ((QWebEngineView*)this_)->setContent(*data, *mimeType, *baseUrl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:80
// [8] QWebEngineHistory * history()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView7historyEv(void *this_) {
  return (void*)((QWebEngineView*)this_)->history();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:82
// [8] QString title()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView5titleEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:83
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QWebEngineView*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:84
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView3urlEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:85
// [8] QUrl iconUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView7iconUrlEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->iconUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:86
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView4iconEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:88
// [1] bool hasSelection()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QWebEngineView12hasSelectionEv(void *this_) {
  return (bool)((QWebEngineView*)this_)->hasSelection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:89
// [8] QString selectedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView12selectedTextEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->selectedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:92
// [8] QAction * pageAction(QWebEnginePage::WebAction)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView10pageActionEN14QWebEnginePage9WebActionE(void *this_, QWebEnginePage::WebAction action) {
  return (void*)((QWebEngineView*)this_)->pageAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:94
// [-2] void triggerPageAction(QWebEnginePage::WebAction, bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView17triggerPageActionEN14QWebEnginePage9WebActionEb(void *this_, QWebEnginePage::WebAction action, bool checked) {
  ((QWebEngineView*)this_)->triggerPageAction(action, checked);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:96
// [8] qreal zoomFactor()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QWebEngineView10zoomFactorEv(void *this_) {
  return (qreal)((QWebEngineView*)this_)->zoomFactor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:97
// [-2] void setZoomFactor(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView13setZoomFactorEd(void *this_, qreal factor) {
  ((QWebEngineView*)this_)->setZoomFactor(factor);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:106
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView8sizeHintEv(void *this_) {
  auto rv = ((QWebEngineView*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:107
// [8] QWebEngineSettings * settings()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QWebEngineView8settingsEv(void *this_) {
  return (void*)((QWebEngineView*)this_)->settings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:110
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView4stopEv(void *this_) {
  ((QWebEngineView*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:111
// [-2] void back()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView4backEv(void *this_) {
  ((QWebEngineView*)this_)->back();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:112
// [-2] void forward()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView7forwardEv(void *this_) {
  ((QWebEngineView*)this_)->forward();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:113
// [-2] void reload()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView6reloadEv(void *this_) {
  ((QWebEngineView*)this_)->reload();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:116
// [-2] void loadStarted()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView11loadStartedEv(void *this_) {
  ((QWebEngineView*)this_)->loadStarted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:117
// [-2] void loadProgress(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView12loadProgressEi(void *this_, int progress) {
  ((QWebEngineView*)this_)->loadProgress(progress);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:118
// [-2] void loadFinished(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView12loadFinishedEb(void *this_, bool arg0) {
  ((QWebEngineView*)this_)->loadFinished(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:119
// [-2] void titleChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView12titleChangedERK7QString(void *this_, QString* title) {
  ((QWebEngineView*)this_)->titleChanged(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:120
// [-2] void selectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView16selectionChangedEv(void *this_) {
  ((QWebEngineView*)this_)->selectionChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:121
// [-2] void urlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView10urlChangedERK4QUrl(void *this_, QUrl* arg0) {
  ((QWebEngineView*)this_)->urlChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:122
// [-2] void iconUrlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView14iconUrlChangedERK4QUrl(void *this_, QUrl* arg0) {
  ((QWebEngineView*)this_)->iconUrlChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:123
// [-2] void iconChanged(const QIcon &)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView11iconChangedERK5QIcon(void *this_, QIcon* arg0) {
  ((QWebEngineView*)this_)->iconChanged(*arg0);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWebEngineWidgets/qwebengineview.h:124
// [-2] void renderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus, int)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN14QWebEngineView23renderProcessTerminatedEN14QWebEnginePage30RenderProcessTerminationStatusEi(void *this_, QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
  ((QWebEngineView*)this_)->renderProcessTerminated(terminationStatus, exitCode);
}
#endif // QT_VERSION >= 0x050600

//  main block end
