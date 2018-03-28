//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiveRoomPlayingView.h"

@class HTSLivePlayerView, NSString, NSTimer;

@interface LiveRoomPlayerPlayingView : LiveRoomPlayingView
{
    _Bool _isHorizontal;
    HTSLivePlayerView *_playerView;
}

@property(retain, nonatomic) HTSLivePlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool isHorizontal; // @synthesize isHorizontal=_isHorizontal;
- (void).cxx_destruct;
- (void)playTimer:(id)arg1;
- (void)startTimer;
- (void)stop;
- (void)startWithRealUrl;
- (void)start;
- (void)refreshURLString;
- (void)appResignActive;
- (void)appEnterBack;
- (void)appDidActive;
- (void)refreshLiveRoomModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 liveRoomModel:(id)arg2 playerView:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSTimer *statusTimer; // @dynamic statusTimer;
@property(retain, nonatomic) NSString *urlString; // @dynamic urlString;

@end
