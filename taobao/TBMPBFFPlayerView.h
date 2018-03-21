//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBMPBPlayerProtocol-Protocol.h"

@class NSString, NSTimer, TBMPBFFOptions, TBMPBFFPlayerController, TBMPBPlayerOptions;

@interface TBMPBFFPlayerView : UIView <TBMPBPlayerProtocol>
{
    _Bool _muted;
    _Bool _isLoadingFromCache;
    int _playerStatus;
    long long _playerContentMode;
    double _preferredForwardBufferDuration;
    double _currentPlaybackTime;
    double _duration;
    double _cacheProgress;
    CDUnknownBlockType _playerEventFired;
    CDUnknownBlockType _playerDataPopped;
    double _lastActiveTime;
    TBMPBPlayerOptions *_options;
    NSString *_url;
    TBMPBFFOptions *_ffOptions;
    TBMPBFFPlayerController *_playerController;
    NSTimer *_playbackTimeTimer;
    struct CGRect _videoRect;
}

@property(retain, nonatomic) NSTimer *playbackTimeTimer; // @synthesize playbackTimeTimer=_playbackTimeTimer;
@property(nonatomic) int playerStatus; // @synthesize playerStatus=_playerStatus;
@property(retain, nonatomic) TBMPBFFPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) TBMPBFFOptions *ffOptions; // @synthesize ffOptions=_ffOptions;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) TBMPBPlayerOptions *options; // @synthesize options=_options;
@property(nonatomic) double lastActiveTime; // @synthesize lastActiveTime=_lastActiveTime;
@property(copy, nonatomic) CDUnknownBlockType playerDataPopped; // @synthesize playerDataPopped=_playerDataPopped;
@property(copy, nonatomic) CDUnknownBlockType playerEventFired; // @synthesize playerEventFired=_playerEventFired;
@property(nonatomic) _Bool isLoadingFromCache; // @synthesize isLoadingFromCache=_isLoadingFromCache;
@property(nonatomic) long long playerContentMode; // @synthesize playerContentMode=_playerContentMode;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) long long renderViewOrientation;
- (struct __CVBuffer *)copyCurrentVideoPixelBuffer;
- (_Bool)hasNewVideoPixelBufferToDraw;
- (id)playerStatusData;
- (id)snapshotImageAtCurrentTime;
- (double)playableDuration;
- (_Bool)isPlaying;
- (void)setInfo:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)prepareToRecycle;
- (void)shutdown;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)removeObservers;
- (void)addObservers;
- (void)internalHandlePlayerData:(int)arg1 data:(id)arg2;
- (void)internalHandlePlayerEvent:(int)arg1 info:(id)arg2;
- (void)popPlaybackTimeData;
- (long long)playbackState;
- (unsigned long long)loadState;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setupPlayerController;
- (id)initWithMediaURL:(id)arg1 playerOptions:(id)arg2;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(readonly, nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(readonly, nonatomic) double cacheDuration;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) double preferredForwardBufferDuration; // @synthesize preferredForwardBufferDuration=_preferredForwardBufferDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
