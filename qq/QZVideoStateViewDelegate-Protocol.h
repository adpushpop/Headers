//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, UIView;

@protocol QZVideoStateViewDelegate <NSObject>

@optional
- (void)notifyControl:(UIView *)arg1 isHidden:(_Bool)arg2 param:(NSDictionary *)arg3;
- (long long)getVideoSizeWithNoPlayVideoSize:(long long *)arg1;
- (void)setFeedLiveInfoViewsHidden:(_Bool)arg1;
- (void)setVideoPlayerHidden:(_Bool)arg1;
- (_Bool)playWithManul:(_Bool)arg1;
- (void)isSeeking:(_Bool)arg1;
- (void)videoStateTouchAction:(unsigned long long)arg1 param:(NSDictionary *)arg2;
@end
