/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCCapabilities : NSObject  {
    BOOL isAudioEnabled;
    BOOL isAudioPausedToStart;
    BOOL isVideoEnabled;
    BOOL isVideoPausedToStart;
    BOOL isDuplexVideoOnly;
    BOOL isDuplexAudioOnly;
    BOOL isKeyExchangeEnabled;
    BOOL isRelayEnabled;
    BOOL isRelayForced;
    BOOL requiresWifi;
    BOOL isDTLSEnabled;
    unsigned int preferredAudioCodec;
    unsigned int actualAudioCodec;
    unsigned int preferredVideoCodec;
    unsigned int actualVideoCodec;
}

@property BOOL isDTLSEnabled;
@property BOOL requiresWifi;
@property BOOL isRelayForced;
@property BOOL isRelayEnabled;
@property BOOL isVideoPausedToStart;
@property BOOL isAudioPausedToStart;
@property unsigned int actualVideoCodec;
@property unsigned int preferredVideoCodec;
@property unsigned int actualAudioCodec;
@property unsigned int preferredAudioCodec;
@property BOOL isKeyExchangeEnabled;
@property BOOL isDuplexAudioOnly;
@property BOOL isDuplexVideoOnly;
@property BOOL isVideoEnabled;
@property BOOL isAudioEnabled;

+ (id)AudioOnlyVCCapabilities;
+ (id)VideoOnlyVCCapabilities;

- (id)description;
- (id)init;
- (void)setPreferredAudioCodec:(unsigned int)arg1;
- (void)setActualAudioCodec:(unsigned int)arg1;
- (void)setPreferredVideoCodec:(unsigned int)arg1;
- (void)setActualVideoCodec:(unsigned int)arg1;
- (void)setIsDuplexVideoOnly:(BOOL)arg1;
- (void)setIsDuplexAudioOnly:(BOOL)arg1;
- (void)setIsKeyExchangeEnabled:(BOOL)arg1;
- (void)setIsAudioPausedToStart:(BOOL)arg1;
- (void)setIsVideoPausedToStart:(BOOL)arg1;
- (void)setIsRelayForced:(BOOL)arg1;
- (void)setIsRelayEnabled:(BOOL)arg1;
- (void)setIsDTLSEnabled:(BOOL)arg1;
- (unsigned int)preferredAudioCodec;
- (unsigned int)actualAudioCodec;
- (unsigned int)preferredVideoCodec;
- (unsigned int)actualVideoCodec;
- (BOOL)isAudioEnabled;
- (BOOL)isVideoEnabled;
- (BOOL)isDuplexVideoOnly;
- (BOOL)isDuplexAudioOnly;
- (BOOL)isKeyExchangeEnabled;
- (BOOL)isAudioPausedToStart;
- (BOOL)isVideoPausedToStart;
- (BOOL)isRelayEnabled;
- (BOOL)isRelayForced;
- (BOOL)isDTLSEnabled;
- (BOOL)requiresWifi;
- (void)setRequiresWifi:(BOOL)arg1;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (void)setIsVideoEnabled:(BOOL)arg1;

@end