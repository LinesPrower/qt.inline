
#include <QtCore>
#include <QtAndroidExtras>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:107
// [1] bool shouldShowRequestPermissionRationale(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtAndroid36shouldShowRequestPermissionRationaleERK7QString(QString* permission) {
    return (bool)QtAndroid::shouldShowRequestPermissionRationale(*permission);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:104
// [-2] void requestPermissions(const QStringList &, const QtAndroid::PermissionResultCallback &)
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid18requestPermissionsERK11QStringListRKSt8functionIFvRK5QHashI7QStringNS_16PermissionResultEEEE(QStringList* permissions, const QtAndroid::PermissionResultCallback & callbackFunc) {
  requestPermissions(*permissions, callbackFunc);
}

//  main block end
