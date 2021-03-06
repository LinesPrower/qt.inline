//  header block begin
// /usr/include/qt/QtMultimedia/qmediaplayer.h
#ifndef protected
#define protected public
#endif
#include <qmediaplayer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaPlayer is pure virtual: false
// QMediaPlayer has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaPlayer : public QMediaPlayer {
public:
  virtual ~MyQMediaPlayer() {}
// void QMediaPlayer(QObject *, QMediaPlayer::Flags)
MyQMediaPlayer(QObject * parent, QFlags<QMediaPlayer::Flag> flags) : QMediaPlayer(parent, flags) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer10metaObjectEv(void *this_) {
  return (void*)((QMediaPlayer*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:122
// [-2] void QMediaPlayer(QObject *, QMediaPlayer::Flags)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaPlayerC2EP7QObject6QFlagsINS_4FlagEE(QObject * parent, QFlags<QMediaPlayer::Flag> flags) {
  return  new QMediaPlayer(parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:123
// [-2] void ~QMediaPlayer()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayerD2Ev(void *this_) {
  delete (QMediaPlayer*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:125
// [4] QMultimedia::SupportEstimate hasSupport(const QString &, const QStringList &, QMediaPlayer::Flags)
extern "C" Q_DECL_EXPORT
QMultimedia::SupportEstimate C_ZN12QMediaPlayer10hasSupportERK7QStringRK11QStringList6QFlagsINS_4FlagEE(QString* mimeType, QStringList* codecs, QFlags<QMediaPlayer::Flag> flags) {
  return (QMultimedia::SupportEstimate)QMediaPlayer::hasSupport(*mimeType, *codecs, flags);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:128
// [8] QStringList supportedMimeTypes(QMediaPlayer::Flags)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaPlayer18supportedMimeTypesE6QFlagsINS_4FlagEE(QFlags<QMediaPlayer::Flag> flags) {
  auto rv = QMediaPlayer::supportedMimeTypes(flags);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:132
// [-2] void setVideoOutput(QAbstractVideoSurface *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer14setVideoOutputEP21QAbstractVideoSurface(void *this_, QAbstractVideoSurface * surface) {
  ((QMediaPlayer*)this_)->setVideoOutput(surface);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:134
// [8] QMediaContent media()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer5mediaEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->media();
return new QMediaContent(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:135
// [8] const QIODevice * mediaStream()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer11mediaStreamEv(void *this_) {
  return (void*)((QMediaPlayer*)this_)->mediaStream();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:136
// [8] QMediaPlaylist * playlist()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer8playlistEv(void *this_) {
  return (void*)((QMediaPlayer*)this_)->playlist();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:137
// [8] QMediaContent currentMedia()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer12currentMediaEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->currentMedia();
return new QMediaContent(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:139
// [4] QMediaPlayer::State state()
extern "C" Q_DECL_EXPORT
QMediaPlayer::State C_ZNK12QMediaPlayer5stateEv(void *this_) {
  return (QMediaPlayer::State)((QMediaPlayer*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:140
// [4] QMediaPlayer::MediaStatus mediaStatus()
extern "C" Q_DECL_EXPORT
QMediaPlayer::MediaStatus C_ZNK12QMediaPlayer11mediaStatusEv(void *this_) {
  return (QMediaPlayer::MediaStatus)((QMediaPlayer*)this_)->mediaStatus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:142
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QMediaPlayer8durationEv(void *this_) {
  return (qint64)((QMediaPlayer*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:143
// [8] qint64 position()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QMediaPlayer8positionEv(void *this_) {
  return (qint64)((QMediaPlayer*)this_)->position();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:145
// [4] int volume()
extern "C" Q_DECL_EXPORT
int C_ZNK12QMediaPlayer6volumeEv(void *this_) {
  return (int)((QMediaPlayer*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:146
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaPlayer7isMutedEv(void *this_) {
  return (bool)((QMediaPlayer*)this_)->isMuted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:147
// [1] bool isAudioAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaPlayer16isAudioAvailableEv(void *this_) {
  return (bool)((QMediaPlayer*)this_)->isAudioAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:148
// [1] bool isVideoAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaPlayer16isVideoAvailableEv(void *this_) {
  return (bool)((QMediaPlayer*)this_)->isVideoAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:150
// [4] int bufferStatus()
extern "C" Q_DECL_EXPORT
int C_ZNK12QMediaPlayer12bufferStatusEv(void *this_) {
  return (int)((QMediaPlayer*)this_)->bufferStatus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:152
// [1] bool isSeekable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaPlayer10isSeekableEv(void *this_) {
  return (bool)((QMediaPlayer*)this_)->isSeekable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:153
// [8] qreal playbackRate()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QMediaPlayer12playbackRateEv(void *this_) {
  return (qreal)((QMediaPlayer*)this_)->playbackRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:155
// [4] QMediaPlayer::Error error()
extern "C" Q_DECL_EXPORT
QMediaPlayer::Error C_ZNK12QMediaPlayer5errorEv(void *this_) {
  return (QMediaPlayer::Error)((QMediaPlayer*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:156
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer11errorStringEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:158
// [8] QNetworkConfiguration currentNetworkConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer27currentNetworkConfigurationEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->currentNetworkConfiguration();
return new QNetworkConfiguration(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:160
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK12QMediaPlayer12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QMediaPlayer*)this_)->availability();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:162
// [4] QAudio::Role audioRole()
extern "C" Q_DECL_EXPORT
QAudio::Role C_ZNK12QMediaPlayer9audioRoleEv(void *this_) {
  return (QAudio::Role)((QMediaPlayer*)this_)->audioRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:163
// [-2] void setAudioRole(QAudio::Role)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer12setAudioRoleEN6QAudio4RoleE(void *this_, QAudio::Role audioRole) {
  ((QMediaPlayer*)this_)->setAudioRole(audioRole);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:167
// [-2] void play()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer4playEv(void *this_) {
  ((QMediaPlayer*)this_)->play();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:168
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer5pauseEv(void *this_) {
  ((QMediaPlayer*)this_)->pause();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:169
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer4stopEv(void *this_) {
  ((QMediaPlayer*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:171
// [-2] void setPosition(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer11setPositionEx(void *this_, qint64 position) {
  ((QMediaPlayer*)this_)->setPosition(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:172
// [-2] void setVolume(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer9setVolumeEi(void *this_, int volume) {
  ((QMediaPlayer*)this_)->setVolume(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:173
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer8setMutedEb(void *this_, bool muted) {
  ((QMediaPlayer*)this_)->setMuted(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:175
// [-2] void setPlaybackRate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer15setPlaybackRateEd(void *this_, qreal rate) {
  ((QMediaPlayer*)this_)->setPlaybackRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:177
// [-2] void setMedia(const QMediaContent &, QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer8setMediaERK13QMediaContentP9QIODevice(void *this_, QMediaContent* media, QIODevice * stream) {
  ((QMediaPlayer*)this_)->setMedia(*media, stream);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:178
// [-2] void setPlaylist(QMediaPlaylist *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer11setPlaylistEP14QMediaPlaylist(void *this_, QMediaPlaylist * playlist) {
  ((QMediaPlayer*)this_)->setPlaylist(playlist);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:183
// [-2] void mediaChanged(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer12mediaChangedERK13QMediaContent(void *this_, QMediaContent* media) {
  ((QMediaPlayer*)this_)->mediaChanged(*media);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:184
// [-2] void currentMediaChanged(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer19currentMediaChangedERK13QMediaContent(void *this_, QMediaContent* media) {
  ((QMediaPlayer*)this_)->currentMediaChanged(*media);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:186
// [-2] void stateChanged(QMediaPlayer::State)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer12stateChangedENS_5StateE(void *this_, QMediaPlayer::State newState) {
  ((QMediaPlayer*)this_)->stateChanged(newState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:187
// [-2] void mediaStatusChanged(QMediaPlayer::MediaStatus)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer18mediaStatusChangedENS_11MediaStatusE(void *this_, QMediaPlayer::MediaStatus status) {
  ((QMediaPlayer*)this_)->mediaStatusChanged(status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:189
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer15durationChangedEx(void *this_, qint64 duration) {
  ((QMediaPlayer*)this_)->durationChanged(duration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:190
// [-2] void positionChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer15positionChangedEx(void *this_, qint64 position) {
  ((QMediaPlayer*)this_)->positionChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:192
// [-2] void volumeChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer13volumeChangedEi(void *this_, int volume) {
  ((QMediaPlayer*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:193
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer12mutedChangedEb(void *this_, bool muted) {
  ((QMediaPlayer*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:194
// [-2] void audioAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer21audioAvailableChangedEb(void *this_, bool available) {
  ((QMediaPlayer*)this_)->audioAvailableChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:195
// [-2] void videoAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer21videoAvailableChangedEb(void *this_, bool videoAvailable) {
  ((QMediaPlayer*)this_)->videoAvailableChanged(videoAvailable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:197
// [-2] void bufferStatusChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer19bufferStatusChangedEi(void *this_, int percentFilled) {
  ((QMediaPlayer*)this_)->bufferStatusChanged(percentFilled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:199
// [-2] void seekableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer15seekableChangedEb(void *this_, bool seekable) {
  ((QMediaPlayer*)this_)->seekableChanged(seekable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:200
// [-2] void playbackRateChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer19playbackRateChangedEd(void *this_, qreal rate) {
  ((QMediaPlayer*)this_)->playbackRateChanged(rate);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtMultimedia/qmediaplayer.h:202
// [-2] void audioRoleChanged(QAudio::Role)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer16audioRoleChangedEN6QAudio4RoleE(void *this_, QAudio::Role role) {
  ((QMediaPlayer*)this_)->audioRoleChanged(role);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:204
// [-2] void error(QMediaPlayer::Error)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer5errorENS_5ErrorE(void *this_, QMediaPlayer::Error error) {
  ((QMediaPlayer*)this_)->error(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:206
// [-2] void networkConfigurationChanged(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer27networkConfigurationChangedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* configuration) {
  ((QMediaPlayer*)this_)->networkConfigurationChanged(*configuration);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:208
// [1] bool bind(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QMediaPlayer4bindEP7QObject(void *this_, QObject * arg0) {
  return (bool)((QMediaPlayer*)this_)->bind(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:209
// [-2] void unbind(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer6unbindEP7QObject(void *this_, QObject * arg0) {
  ((QMediaPlayer*)this_)->unbind(arg0);
}

//  main block end
