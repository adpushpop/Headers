//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBLiveBaseViewController;

@protocol WBLiveViewControllerEventListener <NSObject>
- (void)liveViewControllerDidUpdateChatRoomInfo:(WBLiveBaseViewController *)arg1;
- (void)liveViewController:(WBLiveBaseViewController *)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)liveViewController:(WBLiveBaseViewController *)arg1 didTransitionFromLiveState:(unsigned long long)arg2 toLiveState:(unsigned long long)arg3;
- (void)liveViewController:(WBLiveBaseViewController *)arg1 didTransitionFromPresentationState:(long long)arg2 toPresentationState:(long long)arg3;
@end

