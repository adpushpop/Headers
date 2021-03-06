//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBMPBObserverDelegate-Protocol.h"
#import "TBMPBPlayerControlViewDataSource-Protocol.h"
#import "TBMPBPlayerControlViewDelegate-Protocol.h"

@class NSString, NSTimer, TBMPBObserver, TBMPBPlayerContext, TBMPBPlayerControlView, TBMPBPlayerOptions, UIImageView;
@protocol TBMPBPlayerProtocol, TBMPBPlayerViewDelegate;

@interface TBMPBPlayerView : UIView <TBMPBPlayerControlViewDelegate, TBMPBPlayerControlViewDataSource, TBMPBObserverDelegate>
{
    _Bool _muted;
    _Bool _fullScreenAnimationEnabled;
    _Bool _defaultFullScreenFeatureEnabled;
    _Bool _fullScreen;
    _Bool _lastStatusBarHidden;
    _Bool _shouldResumePlayWhenActive;
    _Bool _isRefreshingForBecomeActive;
    _Bool _isFirstVideoFrameRendered;
    _Bool _usePlayerManager;
    _Bool _isRecycled;
    _Bool _isResuming;
    _Bool _isRefreshingForError;
    _Bool _isRefreshWithNewURL;
    int _playerStatus;
    int _remainRefreshCountForTimeout;
    int _maxLoadingTime;
    id <TBMPBPlayerViewDelegate> _delegate;
    long long _playerContentMode;
    double _preferredForwardBufferDuration;
    TBMPBPlayerControlView *_playerControlView;
    long long _renderViewOrientation;
    NSString *_url;
    TBMPBPlayerOptions *_options;
    CDUnknownBlockType _playerEventFired;
    CDUnknownBlockType _playerDataPopped;
    UIView<TBMPBPlayerProtocol> *_internalPlayerView;
    UIImageView *_snapshotImageView;
    UIView *_lastSuperview;
    long long _lastSubviewIndex;
    NSTimer *_loadingCheckTimer;
    TBMPBObserver *_observer;
    TBMPBPlayerContext *_contextWhenRecycled;
    TBMPBPlayerContext *_contextWhenError;
    NSString *_businessID;
    struct CGRect _lastFrame;
}

@property(nonatomic) _Bool isRefreshWithNewURL; // @synthesize isRefreshWithNewURL=_isRefreshWithNewURL;
@property(copy, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(nonatomic) _Bool isRefreshingForError; // @synthesize isRefreshingForError=_isRefreshingForError;
@property(retain, nonatomic) TBMPBPlayerContext *contextWhenError; // @synthesize contextWhenError=_contextWhenError;
@property(nonatomic) _Bool isResuming; // @synthesize isResuming=_isResuming;
@property(nonatomic) _Bool isRecycled; // @synthesize isRecycled=_isRecycled;
@property(retain, nonatomic) TBMPBPlayerContext *contextWhenRecycled; // @synthesize contextWhenRecycled=_contextWhenRecycled;
@property(nonatomic) _Bool usePlayerManager; // @synthesize usePlayerManager=_usePlayerManager;
@property(retain, nonatomic) TBMPBObserver *observer; // @synthesize observer=_observer;
@property(nonatomic) _Bool isFirstVideoFrameRendered; // @synthesize isFirstVideoFrameRendered=_isFirstVideoFrameRendered;
@property(retain, nonatomic) NSTimer *loadingCheckTimer; // @synthesize loadingCheckTimer=_loadingCheckTimer;
@property(nonatomic) int maxLoadingTime; // @synthesize maxLoadingTime=_maxLoadingTime;
@property(nonatomic) int remainRefreshCountForTimeout; // @synthesize remainRefreshCountForTimeout=_remainRefreshCountForTimeout;
@property(nonatomic) _Bool isRefreshingForBecomeActive; // @synthesize isRefreshingForBecomeActive=_isRefreshingForBecomeActive;
@property(nonatomic) _Bool shouldResumePlayWhenActive; // @synthesize shouldResumePlayWhenActive=_shouldResumePlayWhenActive;
@property(nonatomic) _Bool lastStatusBarHidden; // @synthesize lastStatusBarHidden=_lastStatusBarHidden;
@property(nonatomic) struct CGRect lastFrame; // @synthesize lastFrame=_lastFrame;
@property(nonatomic) long long lastSubviewIndex; // @synthesize lastSubviewIndex=_lastSubviewIndex;
@property(nonatomic) __weak UIView *lastSuperview; // @synthesize lastSuperview=_lastSuperview;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) _Bool defaultFullScreenFeatureEnabled; // @synthesize defaultFullScreenFeatureEnabled=_defaultFullScreenFeatureEnabled;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(retain, nonatomic) UIView<TBMPBPlayerProtocol> *internalPlayerView; // @synthesize internalPlayerView=_internalPlayerView;
@property(copy, nonatomic) CDUnknownBlockType playerDataPopped; // @synthesize playerDataPopped=_playerDataPopped;
@property(copy, nonatomic) CDUnknownBlockType playerEventFired; // @synthesize playerEventFired=_playerEventFired;
@property(retain, nonatomic) TBMPBPlayerOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int playerStatus; // @synthesize playerStatus=_playerStatus;
@property(nonatomic) long long renderViewOrientation; // @synthesize renderViewOrientation=_renderViewOrientation;
@property(nonatomic) _Bool fullScreenAnimationEnabled; // @synthesize fullScreenAnimationEnabled=_fullScreenAnimationEnabled;
@property(retain, nonatomic) TBMPBPlayerControlView *playerControlView; // @synthesize playerControlView=_playerControlView;
@property(nonatomic) double preferredForwardBufferDuration; // @synthesize preferredForwardBufferDuration=_preferredForwardBufferDuration;
@property(nonatomic) long long playerContentMode; // @synthesize playerContentMode=_playerContentMode;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <TBMPBPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isPlayerPlayingForControlView:(id)arg1;
- (double)playerCurrentPlaybackTimeForControlView:(id)arg1;
- (double)playerDurationForControlView:(id)arg1;
- (void)controlViewDidTwiceTapped:(id)arg1;
- (void)controlViewDidTapped:(id)arg1;
- (void)progressSliderDidDragToTime:(double)arg1 inControlView:(id)arg2;
- (void)progressSliderBeginToDragInControlView:(id)arg1;
- (void)miniScreenButtonDidClickedInControlView:(id)arg1;
- (void)fullScreenButtonDidClickedInControlView:(id)arg1;
- (void)pauseButtonDidClickedInControlView:(id)arg1;
- (void)playButtonDidClickedInControlView:(id)arg1;
- (struct __CVBuffer *)copyCurrentVideoPixelBuffer;
- (_Bool)hasNewVideoPixelBufferToDraw;
- (void)exitFullScreenMode;
- (void)enterFullScreenMode;
- (void)updateSnapshotImageViewContentMode;
- (id)configOptions:(id)arg1 andURL:(id)arg2;
- (void)removeTimers;
- (void)removeObservers;
- (void)addObservers;
- (void)observer:(id)arg1 willEnterForeground:(id)arg2;
- (void)observer:(id)arg1 didEnterBackground:(id)arg2;
- (void)observer:(id)arg1 didBecomeActive:(id)arg2;
- (void)observer:(id)arg1 willResignActive:(id)arg2;
- (void)internalHandlePlayerData:(int)arg1 data:(id)arg2;
- (void)handleFirstVideoFrameNotRenderedInTime;
- (void)checkIfFirstVideoFrameRendered;
- (void)handleVideoToolboxFailedWithInfo:(id)arg1;
- (void)handleNetworkErrorWithInfo:(id)arg1;
- (void)reportErrorWithInfo:(id)arg1;
- (void)internalHandlePlayerEvent:(int)arg1 info:(id)arg2;
- (id)playerStatusData;
- (id)snapshotImageAtCurrentTime;
- (double)playableDuration;
- (_Bool)isPlaying;
- (void)setInfo:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)resumePlayer;
- (void)recyclePlayerWithInfo:(id)arg1;
- (void)refreshWithMediaURL:(id)arg1 options:(id)arg2;
- (void)refresh;
- (void)stop;
- (void)pause;
- (void)play;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setupEventHandlerConfig;
- (void)setupInternalPlayerViewProperty;
- (void)setupInternalPlayerView;
- (void)loadWithMediaURL:(id)arg1 options:(id)arg2;
- (id)initWithMediaURL:(id)arg1 options:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(readonly, nonatomic) double cacheProgress;
@property(readonly, nonatomic) double cacheDuration;
@property(readonly, nonatomic) _Bool isLoadingFromCache;
@property(readonly, nonatomic) double duration;
@property(nonatomic) double currentPlaybackTime;
@property(nonatomic) float playbackRate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

