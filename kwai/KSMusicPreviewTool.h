//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSAVPlayerView, KSMusicItem, NSMutableDictionary;
@protocol KSMusicPreviewLogService;

@interface KSMusicPreviewTool : NSObject
{
    NSMutableDictionary *_musicSubscriberMapping;
    _Bool _pausedByEnterBackground;
    KSAVPlayerView *_playerView;
    double _duration;
    id <KSMusicPreviewLogService> _logService;
    KSMusicItem *_currentMusic;
    CDStruct_1b6d18a9 _playingTime;
}

@property(nonatomic) _Bool pausedByEnterBackground; // @synthesize pausedByEnterBackground=_pausedByEnterBackground;
@property(retain, nonatomic) KSMusicItem *currentMusic; // @synthesize currentMusic=_currentMusic;
@property(retain, nonatomic) id <KSMusicPreviewLogService> logService; // @synthesize logService=_logService;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_1b6d18a9 playingTime; // @synthesize playingTime=_playingTime;
@property(retain, nonatomic) KSAVPlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (void)_resume;
- (void)_pause;
- (void)_transferStateForMusicItem:(id)arg1;
- (void)_notifyMusicItemStateChanged:(id)arg1;
- (void)_storeSubscriber:(id)arg1 forMusicItem:(id)arg2;
- (id)_keyForMusicItem:(id)arg1;
- (void)_setupPlayerView;
- (void)didReceiveApplicationWillResignActiveNotification:(id)arg1;
- (void)didReceiveApplicationBecomeActiveNotification:(id)arg1;
- (_Bool)isPlayingMusicItem:(id)arg1;
- (void)stopPlay;
- (void)didSelectMusic:(id)arg1 withMusicStateChangeSubscriber:(id)arg2 userInfo:(id)arg3;
- (void)dealloc;
- (id)init;

@end
