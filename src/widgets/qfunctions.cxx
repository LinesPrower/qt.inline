
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:68
// [4] uint qHash(QSizePolicy, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHash11QSizePolicyj_44(QSizePolicy* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:147
// [-2] void qDrawBorderPixmap(QPainter *, const QRect &, const QMargins &, const QPixmap &, const QRect &, const QMargins &, const QTileRules &, QDrawBorderPixmap::DrawingHints)
extern "C" Q_DECL_EXPORT
void C_Z17qDrawBorderPixmapP8QPainterRK5QRectRK8QMarginsRK7QPixmapS3_S6_RK10QTileRules6QFlagsIN17QDrawBorderPixmap11DrawingHintEE(QPainter * painter, QRect* targetRect, QMargins* targetMargins, QPixmap* pixmap, QRect* sourceRect, QMargins* sourceMargins, QTileRules* rules, QFlags<QDrawBorderPixmap::DrawingHint> hints) {
  qDrawBorderPixmap(painter, *targetRect, *targetMargins, *pixmap, *sourceRect, *sourceMargins, *rules, hints);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:159
// [-2] void qDrawBorderPixmap(QPainter *, const QRect &, const QMargins &, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_Z17qDrawBorderPixmapP8QPainterRK5QRectRK8QMarginsRK7QPixmap_1(QPainter * painter, QRect* target, QMargins* margins, QPixmap* pixmap) {
  qDrawBorderPixmap(painter, *target, *margins, *pixmap);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:80
// [-2] void qDrawShadePanel(QPainter *, int, int, int, int, const QPalette &, bool, int, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z15qDrawShadePanelP8QPainteriiiiRK8QPalettebiPK6QBrush(QPainter * p, int x, int y, int w, int h, QPalette* pal, bool sunken, int lineWidth, const QBrush * fill) {
  qDrawShadePanel(p, x, y, w, h, *pal, sunken, lineWidth, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:84
// [-2] void qDrawShadePanel(QPainter *, const QRect &, const QPalette &, bool, int, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z15qDrawShadePanelP8QPainterRK5QRectRK8QPalettebiPK6QBrush_1(QPainter * p, QRect* r, QPalette* pal, bool sunken, int lineWidth, const QBrush * fill) {
  qDrawShadePanel(p, *r, *pal, sunken, lineWidth, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:88
// [-2] void qDrawWinButton(QPainter *, int, int, int, int, const QPalette &, bool, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z14qDrawWinButtonP8QPainteriiiiRK8QPalettebPK6QBrush(QPainter * p, int x, int y, int w, int h, QPalette* pal, bool sunken, const QBrush * fill) {
  qDrawWinButton(p, x, y, w, h, *pal, sunken, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:92
// [-2] void qDrawWinButton(QPainter *, const QRect &, const QPalette &, bool, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z14qDrawWinButtonP8QPainterRK5QRectRK8QPalettebPK6QBrush_1(QPainter * p, QRect* r, QPalette* pal, bool sunken, const QBrush * fill) {
  qDrawWinButton(p, *r, *pal, sunken, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:70
// [-2] void qDrawShadeRect(QPainter *, int, int, int, int, const QPalette &, bool, int, int, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z14qDrawShadeRectP8QPainteriiiiRK8QPalettebiiPK6QBrush(QPainter * p, int x, int y, int w, int h, QPalette* pal, bool sunken, int lineWidth, int midLineWidth, const QBrush * fill) {
  qDrawShadeRect(p, x, y, w, h, *pal, sunken, lineWidth, midLineWidth, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:75
// [-2] void qDrawShadeRect(QPainter *, const QRect &, const QPalette &, bool, int, int, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z14qDrawShadeRectP8QPainterRK5QRectRK8QPalettebiiPK6QBrush_1(QPainter * p, QRect* r, QPalette* pal, bool sunken, int lineWidth, int midLineWidth, const QBrush * fill) {
  qDrawShadeRect(p, *r, *pal, sunken, lineWidth, midLineWidth, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:62
// [-2] void qDrawShadeLine(QPainter *, int, int, int, int, const QPalette &, bool, int, int)
extern "C" Q_DECL_EXPORT
void C_Z14qDrawShadeLineP8QPainteriiiiRK8QPalettebii(QPainter * p, int x1, int y1, int x2, int y2, QPalette* pal, bool sunken, int lineWidth, int midLineWidth) {
  qDrawShadeLine(p, x1, y1, x2, y2, *pal, sunken, lineWidth, midLineWidth);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:66
// [-2] void qDrawShadeLine(QPainter *, const QPoint &, const QPoint &, const QPalette &, bool, int, int)
extern "C" Q_DECL_EXPORT
void C_Z14qDrawShadeLineP8QPainterRK6QPointS3_RK8QPalettebii_1(QPainter * p, QPoint* p1, QPoint* p2, QPalette* pal, bool sunken, int lineWidth, int midLineWidth) {
  qDrawShadeLine(p, *p1, *p2, *pal, sunken, lineWidth, midLineWidth);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:104
// [-2] void qDrawPlainRect(QPainter *, int, int, int, int, const QColor &, int, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z14qDrawPlainRectP8QPainteriiiiRK6QColoriPK6QBrush(QPainter * p, int x, int y, int w, int h, QColor* arg5, int lineWidth, const QBrush * fill) {
  qDrawPlainRect(p, x, y, w, h, *arg5, lineWidth, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:107
// [-2] void qDrawPlainRect(QPainter *, const QRect &, const QColor &, int, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z14qDrawPlainRectP8QPainterRK5QRectRK6QColoriPK6QBrush_1(QPainter * p, QRect* r, QColor* arg2, int lineWidth, const QBrush * fill) {
  qDrawPlainRect(p, *r, *arg2, lineWidth, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:96
// [-2] void qDrawWinPanel(QPainter *, int, int, int, int, const QPalette &, bool, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z13qDrawWinPanelP8QPainteriiiiRK8QPalettebPK6QBrush(QPainter * p, int x, int y, int w, int h, QPalette* pal, bool sunken, const QBrush * fill) {
  qDrawWinPanel(p, x, y, w, h, *pal, sunken, fill);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:100
// [-2] void qDrawWinPanel(QPainter *, const QRect &, const QPalette &, bool, const QBrush *)
extern "C" Q_DECL_EXPORT
void C_Z13qDrawWinPanelP8QPainterRK5QRectRK8QPalettebPK6QBrush_1(QPainter * p, QRect* r, QPalette* pal, bool sunken, const QBrush * fill) {
  qDrawWinPanel(p, *r, *pal, sunken, fill);
}

//  main block end
