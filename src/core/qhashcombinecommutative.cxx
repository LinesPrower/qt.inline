//  header block begin
// /usr/include/qt/QtCore/qhashfunctions.h
#include <qhashfunctions.h>
#include <QtCore>

// QHashCombineCommutative is pure virtual: false
// QHashCombineCommutative has virtual projected: false
//  header block end

//  main block begin

class MyQHashCombineCommutative : public QtPrivate::QHashCombineCommutative {
public:
  virtual ~MyQHashCombineCommutative() {}
};

//  main block end