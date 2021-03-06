
#include <QtCore>
#include <QtGui>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:78
// [1] bool qIsGray(QRgb)
extern "C" Q_DECL_EXPORT
bool C_Z7qIsGrayj(QRgb rgb) {
  return (bool)qIsGray(rgb);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:57
// [4] int qGreen(QRgb)
extern "C" Q_DECL_EXPORT
int C_Z6qGreenj(QRgb rgb) {
  return (int)qGreen(rgb);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:63
// [4] int qAlpha(QRgb)
extern "C" Q_DECL_EXPORT
int C_Z6qAlphaj(QRgb rgb) {
  return (int)qAlpha(rgb);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:69
// [4] QRgb qRgba(int, int, int, int)
extern "C" Q_DECL_EXPORT
QRgb C_Z5qRgbaiiii(int r, int g, int b, int a) {
  return (QRgb)qRgba(r, g, b, a);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:75
// [4] int qGray(QRgb)
extern "C" Q_DECL_EXPORT
int C_Z5qGrayj(QRgb rgb) {
  return (int)qGray(rgb);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:72
// [4] int qGray(int, int, int)
extern "C" Q_DECL_EXPORT
int C_Z5qGrayiii_1(int r, int g, int b) {
  return (int)qGray(r, g, b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:60
// [4] int qBlue(QRgb)
extern "C" Q_DECL_EXPORT
int C_Z5qBluej(QRgb rgb) {
  return (int)qBlue(rgb);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:66
// [4] QRgb qRgb(int, int, int)
extern "C" Q_DECL_EXPORT
QRgb C_Z4qRgbiii(int r, int g, int b) {
  return (QRgb)qRgb(r, g, b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:54
// [4] int qRed(QRgb)
extern "C" Q_DECL_EXPORT
int C_Z4qRedj(QRgb rgb) {
  return (int)qRed(rgb);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:974
// [8] QString qAccessibleLocalizedActionDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_Z37qAccessibleLocalizedActionDescriptionRK7QString(QString* actionName) {
  auto rv = qAccessibleLocalizedActionDescription(*actionName);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:973
// [8] const char * qAccessibleEventString(QAccessible::Event)
extern "C" Q_DECL_EXPORT
void* C_Z22qAccessibleEventStringN11QAccessible5EventE(QAccessible::Event event) {
  return (void*)qAccessibleEventString(event);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:972
// [8] const char * qAccessibleRoleString(QAccessible::Role)
extern "C" Q_DECL_EXPORT
void* C_Z21qAccessibleRoleStringN11QAccessible4RoleE(QAccessible::Role role) {
  return (void*)qAccessibleRoleString(role);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:149
// [8] QString qt_findAtNxFile(const QString &, qreal, qreal *)
extern "C" Q_DECL_EXPORT
void* C_Z15qt_findAtNxFileRK7QStringdPd(QString* baseFileName, qreal targetDevicePixelRatio, qreal * sourceDevicePixelRatio) {
  auto rv = qt_findAtNxFile(*baseFileName, targetDevicePixelRatio, sourceDevicePixelRatio);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:96
// [4] QRgb qUnpremultiply(QRgb)
extern "C" Q_DECL_EXPORT
QRgb C_Z14qUnpremultiplyj(QRgb p) {
  return (QRgb)qUnpremultiply(p);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:323
// [1] bool qFuzzyCompare(const QQuaternion &, const QQuaternion &)
extern "C" Q_DECL_EXPORT
bool C_Z13qFuzzyCompareRK11QQuaternionS1__2(QQuaternion* q1, QQuaternion* q2) {
  return (bool)qFuzzyCompare(*q1, *q2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:81
// [4] QRgb qPremultiply(QRgb)
extern "C" Q_DECL_EXPORT
QRgb C_Z12qPremultiplyj(QRgb x) {
  return (QRgb)qPremultiply(x);
}

//  main block end
