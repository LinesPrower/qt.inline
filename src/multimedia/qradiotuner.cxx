//  header block begin
// /usr/include/qt/QtMultimedia/qradiotuner.h
#ifndef protected
#define protected public
#endif
#include <qradiotuner.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioTuner is pure virtual: false
// QRadioTuner has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRadioTuner : public QRadioTuner {
public:
  virtual ~MyQRadioTuner() {}
// void QRadioTuner(QObject *)
MyQRadioTuner(QObject * parent) : QRadioTuner(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QRadioTuner10metaObjectEv(void *this_) {
  return (void*)((QRadioTuner*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:81
// [-2] void QRadioTuner(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRadioTunerC2EP7QObject(QObject * parent) {
  return  new QRadioTuner(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:82
// [-2] void ~QRadioTuner()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTunerD2Ev(void *this_) {
  delete (QRadioTuner*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:84
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK11QRadioTuner12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QRadioTuner*)this_)->availability();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:86
// [4] QRadioTuner::State state()
extern "C" Q_DECL_EXPORT
QRadioTuner::State C_ZNK11QRadioTuner5stateEv(void *this_) {
  return (QRadioTuner::State)((QRadioTuner*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:88
// [4] QRadioTuner::Band band()
extern "C" Q_DECL_EXPORT
QRadioTuner::Band C_ZNK11QRadioTuner4bandEv(void *this_) {
  return (QRadioTuner::Band)((QRadioTuner*)this_)->band();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:90
// [1] bool isBandSupported(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner15isBandSupportedENS_4BandE(void *this_, QRadioTuner::Band b) {
  return (bool)((QRadioTuner*)this_)->isBandSupported(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:92
// [4] int frequency()
extern "C" Q_DECL_EXPORT
int C_ZNK11QRadioTuner9frequencyEv(void *this_) {
  return (int)((QRadioTuner*)this_)->frequency();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:93
// [4] int frequencyStep(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
int C_ZNK11QRadioTuner13frequencyStepENS_4BandE(void *this_, QRadioTuner::Band band) {
  return (int)((QRadioTuner*)this_)->frequencyStep(band);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:96
// [1] bool isStereo()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner8isStereoEv(void *this_) {
  return (bool)((QRadioTuner*)this_)->isStereo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:97
// [-2] void setStereoMode(QRadioTuner::StereoMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner13setStereoModeENS_10StereoModeE(void *this_, QRadioTuner::StereoMode mode) {
  ((QRadioTuner*)this_)->setStereoMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:98
// [4] QRadioTuner::StereoMode stereoMode()
extern "C" Q_DECL_EXPORT
QRadioTuner::StereoMode C_ZNK11QRadioTuner10stereoModeEv(void *this_) {
  return (QRadioTuner::StereoMode)((QRadioTuner*)this_)->stereoMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:100
// [4] int signalStrength()
extern "C" Q_DECL_EXPORT
int C_ZNK11QRadioTuner14signalStrengthEv(void *this_) {
  return (int)((QRadioTuner*)this_)->signalStrength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:102
// [4] int volume()
extern "C" Q_DECL_EXPORT
int C_ZNK11QRadioTuner6volumeEv(void *this_) {
  return (int)((QRadioTuner*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:103
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner7isMutedEv(void *this_) {
  return (bool)((QRadioTuner*)this_)->isMuted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:105
// [1] bool isSearching()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner11isSearchingEv(void *this_) {
  return (bool)((QRadioTuner*)this_)->isSearching();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:107
// [1] bool isAntennaConnected()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner18isAntennaConnectedEv(void *this_) {
  return (bool)((QRadioTuner*)this_)->isAntennaConnected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:109
// [4] QRadioTuner::Error error()
extern "C" Q_DECL_EXPORT
QRadioTuner::Error C_ZNK11QRadioTuner5errorEv(void *this_) {
  return (QRadioTuner::Error)((QRadioTuner*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:110
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QRadioTuner11errorStringEv(void *this_) {
  auto rv = ((QRadioTuner*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:112
// [8] QRadioData * radioData()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QRadioTuner9radioDataEv(void *this_) {
  return (void*)((QRadioTuner*)this_)->radioData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:115
// [-2] void searchForward()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner13searchForwardEv(void *this_) {
  ((QRadioTuner*)this_)->searchForward();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:116
// [-2] void searchBackward()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner14searchBackwardEv(void *this_) {
  ((QRadioTuner*)this_)->searchBackward();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:117
// [-2] void searchAllStations(QRadioTuner::SearchMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner17searchAllStationsENS_10SearchModeE(void *this_, QRadioTuner::SearchMode searchMode) {
  ((QRadioTuner*)this_)->searchAllStations(searchMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:118
// [-2] void cancelSearch()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12cancelSearchEv(void *this_) {
  ((QRadioTuner*)this_)->cancelSearch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:120
// [-2] void setBand(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner7setBandENS_4BandE(void *this_, QRadioTuner::Band band) {
  ((QRadioTuner*)this_)->setBand(band);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:121
// [-2] void setFrequency(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12setFrequencyEi(void *this_, int frequency) {
  ((QRadioTuner*)this_)->setFrequency(frequency);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:123
// [-2] void setVolume(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner9setVolumeEi(void *this_, int volume) {
  ((QRadioTuner*)this_)->setVolume(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:124
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner8setMutedEb(void *this_, bool muted) {
  ((QRadioTuner*)this_)->setMuted(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:126
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner5startEv(void *this_) {
  ((QRadioTuner*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:127
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner4stopEv(void *this_) {
  ((QRadioTuner*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:130
// [-2] void stateChanged(QRadioTuner::State)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12stateChangedENS_5StateE(void *this_, QRadioTuner::State state) {
  ((QRadioTuner*)this_)->stateChanged(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:131
// [-2] void bandChanged(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner11bandChangedENS_4BandE(void *this_, QRadioTuner::Band band) {
  ((QRadioTuner*)this_)->bandChanged(band);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:132
// [-2] void frequencyChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner16frequencyChangedEi(void *this_, int frequency) {
  ((QRadioTuner*)this_)->frequencyChanged(frequency);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:133
// [-2] void stereoStatusChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner19stereoStatusChangedEb(void *this_, bool stereo) {
  ((QRadioTuner*)this_)->stereoStatusChanged(stereo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:134
// [-2] void searchingChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner16searchingChangedEb(void *this_, bool searching) {
  ((QRadioTuner*)this_)->searchingChanged(searching);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:135
// [-2] void signalStrengthChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner21signalStrengthChangedEi(void *this_, int signalStrength) {
  ((QRadioTuner*)this_)->signalStrengthChanged(signalStrength);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:136
// [-2] void volumeChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner13volumeChangedEi(void *this_, int volume) {
  ((QRadioTuner*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:137
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12mutedChangedEb(void *this_, bool muted) {
  ((QRadioTuner*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:138
// [-2] void stationFound(int, QString)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12stationFoundEi7QString(void *this_, int frequency, QString* stationId) {
  ((QRadioTuner*)this_)->stationFound(frequency, *stationId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:139
// [-2] void antennaConnectedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner23antennaConnectedChangedEb(void *this_, bool connectionStatus) {
  ((QRadioTuner*)this_)->antennaConnectedChanged(connectionStatus);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:141
// [-2] void error(QRadioTuner::Error)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner5errorENS_5ErrorE(void *this_, QRadioTuner::Error error) {
  ((QRadioTuner*)this_)->error(error);
}

//  main block end
