//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, AVQueuePlayer, NSMutableArray, NSString;
@protocol QQRichTinyVideoPreviewViewDelegate;

@interface QQRichTinyVideoPreviewView : UIView
{
    AVQueuePlayer *_player;
    NSMutableArray *_playItems;
    AVPlayerLayer *_playerLayer;
    id _timerObserver;
    id <QQRichTinyVideoPreviewViewDelegate> _delegate;
    NSString *_videoGravity;
}

@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) id <QQRichTinyVideoPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAVPlayerItemPlaybackStalledNotification:(id)arg1;
- (void)onAVPlayerItemNewAccessLogEntryNotification:(id)arg1;
- (void)onAVPlayerItemNewErrorLogEntryNotification:(id)arg1;
- (void)onAVPlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (void)onAVPlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)playViewDidStopPlay;
- (void)playViewDidPlay;
- (void)closePlayer;
- (_Bool)stop;
- (void)rePlay;
- (_Bool)play;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 videoClips:(id)arg2;

@end

