//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface QZVideoCommon : NSObject
{
    UIView *_tipIsSetVideoPlayOnWifiView;
    _Bool _isShowedTip;
}

+ (void)reportVideoPlayOnWifiToPf00064:(id)arg1 firstAction:(long long)arg2 secondAction:(long long)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)showTipIsSetVideoPlayOnWifi:(id)arg1 videoView:(id)arg2;
- (_Bool)canShowTipIsSetVideoPlayOnWifi:(id)arg1;
- (void)hideTipIsSetVideoPlayOnwifi;

@end

