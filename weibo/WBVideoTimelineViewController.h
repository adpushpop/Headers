//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WBTimeRecorderProtocol-Protocol.h"
#import "WBVideoDismissInteractiveTransitionDelegate-Protocol.h"
#import "WBVideoPlaybackTransitionManagerDelegate-Protocol.h"
#import "WBVideoPrefetchDataSource-Protocol.h"
#import "WBVideoTimelinePlayerControllerDelegate-Protocol.h"
#import "WBVideoTimelinePreviewContentViewDelegate-Protocol.h"
#import "WBVideoTimelineTableViewCellDelegate-Protocol.h"
#import "WBVideoUpNextPluginCountDownDelegate-Protocol.h"
#import "WBVideoUpNextPluginViewVisibleDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, PRLMTableViewWrapper, SNHTTPRequestOperationWrapper, UIButton, UIView, WBContactEngine, WBMediaAutoPlayManager, WBStatus, WBTimeRecorder, WBVideoFeedNavigationBar, WBVideoPanToDismissInteractiveTransition, WBVideoPlaybackTransitionManager, WBVideoTimelinePlayerController, WBVideoTimelinePreviewContentView, WBVideoTimelineTableViewCell, WBViewController;
@protocol WBVideoPlayerSourceView;

@interface WBVideoTimelineViewController : WBTableViewController <WBVideoTimelineTableViewCellDelegate, WBVideoUpNextPluginCountDownDelegate, UIViewControllerTransitioningDelegate, WBVideoTimelinePlayerControllerDelegate, UIGestureRecognizerDelegate, PRLMTableViewWrapperDelegate, WBVideoUpNextPluginViewVisibleDelegate, WBVideoTimelinePreviewContentViewDelegate, WBVideoPrefetchDataSource, WBVideoDismissInteractiveTransitionDelegate, WBVideoPlaybackTransitionManagerDelegate, WBTimeRecorderProtocol>
{
    long long _originalStatusBarStyle;
    _Bool _originalStatusBarHidden;
    struct {
        unsigned int presentFinished:1;
        long long threaterMode;
        unsigned int nextVideoButtonHidden:1;
        unsigned int firstIntoThreaterMode:1;
        unsigned int showCustomBackground:1;
        unsigned int firstVideoTimelineLoaded:1;
        unsigned int activeOverlayWhenScroll:1;
        unsigned int fromOpenURL:1;
        unsigned int playingGifVideo:1;
        unsigned int shouldFadeVolume:1;
        unsigned int shouldShowPreView:1;
    } _flags;
    PRLMTableViewWrapper *_loadMoreWrapper;
    unsigned long long _pageNum;
    unsigned long long _pageCount;
    NSString *_cacheID;
    NSString *_navigationTitle;
    unsigned long long _playCount;
    SNHTTPRequestOperationWrapper *_wrapper;
    id _audioSessionHandler;
    WBTimeRecorder *timeRecorder;
    _Bool _interactiveDismissing;
    _Bool _isDismissing;
    _Bool _newNavigationBarEnable;
    _Bool _dismissing;
    _Bool _recmmendVideoDisplayed;
    _Bool _muteStateWhenPlaying;
    WBVideoTimelinePlayerController *_playerController;
    NSArray *_statuses;
    UIView<WBVideoPlayerSourceView> *_timelineSourceView;
    WBViewController *_presentedInViewController;
    UIView *_backgroundView;
    WBVideoFeedNavigationBar *_navigationBar;
    WBStatus *_baseStatus;
    WBMediaAutoPlayManager *_playbackManager;
    WBContactEngine *_contactEngine;
    NSMutableArray *_preloadedPlaybackIdentifiers;
    UIButton *_nextVideoButton;
    WBVideoPlaybackTransitionManager *_playbackTransferer;
    WBVideoPanToDismissInteractiveTransition *_interactiveController;
    WBVideoTimelinePreviewContentView *_previewContentView;
    struct CGRect _sourceFrameOnScreen;
}

@property(nonatomic) _Bool muteStateWhenPlaying; // @synthesize muteStateWhenPlaying=_muteStateWhenPlaying;
@property(retain, nonatomic) WBVideoTimelinePreviewContentView *previewContentView; // @synthesize previewContentView=_previewContentView;
@property(nonatomic) _Bool recmmendVideoDisplayed; // @synthesize recmmendVideoDisplayed=_recmmendVideoDisplayed;
@property(retain, nonatomic) WBVideoPanToDismissInteractiveTransition *interactiveController; // @synthesize interactiveController=_interactiveController;
@property(retain, nonatomic) WBVideoPlaybackTransitionManager *playbackTransferer; // @synthesize playbackTransferer=_playbackTransferer;
@property(retain, nonatomic) UIButton *nextVideoButton; // @synthesize nextVideoButton=_nextVideoButton;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(retain, nonatomic) NSMutableArray *preloadedPlaybackIdentifiers; // @synthesize preloadedPlaybackIdentifiers=_preloadedPlaybackIdentifiers;
@property(retain, nonatomic) WBContactEngine *contactEngine; // @synthesize contactEngine=_contactEngine;
@property(retain, nonatomic) WBMediaAutoPlayManager *playbackManager; // @synthesize playbackManager=_playbackManager;
@property(retain, nonatomic) WBStatus *baseStatus; // @synthesize baseStatus=_baseStatus;
@property(retain, nonatomic) WBVideoFeedNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool newNavigationBarEnable; // @synthesize newNavigationBarEnable=_newNavigationBarEnable;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool interactiveDismissing; // @synthesize interactiveDismissing=_interactiveDismissing;
@property(nonatomic) struct CGRect sourceFrameOnScreen; // @synthesize sourceFrameOnScreen=_sourceFrameOnScreen;
@property(nonatomic) __weak WBViewController *presentedInViewController; // @synthesize presentedInViewController=_presentedInViewController;
@property(nonatomic) __weak UIView<WBVideoPlayerSourceView> *timelineSourceView; // @synthesize timelineSourceView=_timelineSourceView;
@property(retain, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) WBVideoTimelinePlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (_Bool)supportTextExpandable;
- (struct CGRect)tableViewVisibleRectOnScreenForMediaAnimatedTransition;
- (id)videoPrefetch_timelineItems;
- (_Bool)isNewVideoTimelineEnable;
- (_Bool)isVideoFeedNewRatioEnable;
- (_Bool)isVideotimelineVideoPreviewEnable;
- (_Bool)isVideoPreviewEnable;
- (void)escapeKeyPressed:(id)arg1;
- (id)keyCommands;
- (void)playbackTransitionManager:(id)arg1 didFinishDismissalWithTransfered:(_Bool)arg2;
- (void)playbackTransitionManagerWillBeginPresentation:(id)arg1;
- (void)playbackTransitionManager:(id)arg1 playerViewWillTransferFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 simulated:(_Bool)arg4 withTransitionCoordinator:(id)arg5;
- (void)muteButtonPressed:(id)arg1;
- (void)updateMuteState:(_Bool)arg1;
- (void)updateMuteButtonState;
- (void)volumeChanged:(id)arg1;
- (void)videoPreviewContentView:(id)arg1 didSelectIndexPath:(id)arg2;
- (_Bool)didPressLoadMoreFooterView:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)videoDismissInteractiveTransition:(id)arg1 didFinishDismissWithSuccess:(_Bool)arg2;
- (void)videoDismissInteractiveTransitionDidBeginInteractiveGesture:(id)arg1;
- (_Bool)videoDismissInteractiveTransitionShouldBeginInteractiveGesture:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (_Bool)videoCollectionHelperDisabled;
- (void)reloadVideoTimelineWithStatuses:(id)arg1;
- (_Bool)isInvalidFor:(id)arg1;
- (void)reloadVideoTimelineFromServer;
- (id)baseVideoItem;
- (void)videoUpNextPluginDidFinishCountDown:(id)arg1;
- (_Bool)videoUpNextPluginShouldCountDown:(id)arg1;
- (id)providerForSourceView:(id)arg1;
- (void)videoPlayerController:(id)arg1 didPressMutebutton:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willPerformPauseWithReason:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerControllerUserDidTapOnBlankArea:(id)arg1;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenAnimated:(_Bool)arg2;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenByPressingFullScreenButton:(id)arg2;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenByPressingPlayButton:(id)arg2;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didReceiveOrientationChangeNotificationWithOrientation:(long long)arg2;
- (void)videoPlayerControllerDidFinishPlayback:(id)arg1;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)playNextVideo;
- (_Bool)shouldStartPlayNextVideo;
- (_Bool)hasNextVideo:(_Bool *)arg1 nextIndex:(unsigned long long *)arg2;
- (_Bool)haveNextVideo;
- (id)cellForSourceView:(id)arg1;
- (_Bool)shouldPlayToEndWithVideoPlayerController:(id)arg1;
- (void)videoPlayerController:(id)arg1 didChangeVideoPlayerItem:(id)arg2;
- (_Bool)shouldReplayForPlayerController:(id)arg1;
- (_Bool)videoUpNextPluginInvisibleWhenInlinePlaybackFinished:(id)arg1;
- (struct UIEdgeInsets)generalVideoPlaybackTableViewContentInsets;
- (void)tableViewDidFinishScrolling:(id)arg1;
- (void)startAutoPlayIfNeeded;
- (_Bool)mediaAutoPlayValidateSourceView:(id)arg1;
- (id)currentMediaAutoPlayProviderCandidates;
- (void)setNextVideoButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)nextVideoButtonPressed:(id)arg1;
- (void)startThreaterModeTimer;
- (void)stopThreaterModeTimer;
- (void)enterThreaterModeIfNeeded;
- (void)exitFromThreaterModeIfNeeded;
- (_Bool)_enterThreaterMode;
- (_Bool)_exitFromThreaterMode;
@property(readonly, nonatomic) _Bool shouldUpdateStatusBarState;
- (void)tapGesture:(id)arg1;
- (void)_slientScrollToCellAtIndexPath:(id)arg1;
- (void)scrollToCellAtIndexPath:(id)arg1;
- (void)_slientScrollToSourceView:(id)arg1;
- (void)scrollToSourceView:(id)arg1;
- (void)videoTimelineTableViewCell:(id)arg1 didPressExtraActionButton:(id)arg2;
- (id)extraActionButtonTypesForStatus:(id)arg1;
- (void)videoTimelineTableViewCell:(id)arg1 didPressContentView:(id)arg2;
- (void)videoTimelineTableViewCell:(id)arg1 didPressInactiveOverlay:(id)arg2;
- (void)videoTimelineTableViewCell:(id)arg1 didPressVideoSourceView:(id)arg2;
- (void)videoTimelineTableViewCell:(id)arg1 didPressExpandTextButton:(id)arg2;
- (void)closeButtonPressed:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)teardown;
- (void)cellDidBecomeHighlight:(id)arg1;
- (id)activeCell;
@property(readonly, nonatomic) WBVideoTimelineTableViewCell *playingCell;
- (id)timeRecorder:(id)arg1 willStartRecordAtIndexPath:(id)arg2;
- (void)showPreviewContentView;
- (_Bool)isLastTableViewCell:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTableViewCellState:(_Bool)arg1;
- (void)updateTableViewCellState;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_finishSoundPlayback;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)autoScroll;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateVideoAudioPlaybackState;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)shouldCaptureViewWhenDismiss;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)generalNavigationTitle;
- (id)mediaPlaybackService;
- (id)moduleID;
- (id)uiCode;
- (id)loadMoreFooterView;
- (id)loadMoreWrapper;
- (void)viewDidLoad;
- (id)copyStatus:(id)arg1;
- (void)configVideoPlayerControllerPlugins;
- (id)initWithSourceView:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

