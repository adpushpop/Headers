//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEVideoPlayView, TTShortVideoModel;

@protocol AWEVideoPlayViewDelegate <NSObject>

@optional
- (void)playView:(AWEVideoPlayView *)arg1 didUpdateFrame:(struct CGRect)arg2;
- (void)playView:(AWEVideoPlayView *)arg1 didStopPlayWithModel:(TTShortVideoModel *)arg2 duration:(double)arg3;
- (void)playView:(AWEVideoPlayView *)arg1 didResumePlayWithModel:(TTShortVideoModel *)arg2 duration:(double)arg3;
- (void)playView:(AWEVideoPlayView *)arg1 didPausePlayWithModel:(TTShortVideoModel *)arg2 duration:(double)arg3;
- (void)playView:(AWEVideoPlayView *)arg1 didPlayNextLoopWithModel:(TTShortVideoModel *)arg2;
- (void)playView:(AWEVideoPlayView *)arg1 didStartPlayWithModel:(TTShortVideoModel *)arg2;
@end

