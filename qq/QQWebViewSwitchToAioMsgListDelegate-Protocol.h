//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, NSString, UIImage;

@protocol QQWebViewSwitchToAioMsgListDelegate <NSObject>

@optional
- (void)showHotDot:(_Bool)arg1;
- (NSString *)aioSwitchBannerTitle;
- (_Bool)isShowSwitchQQButton;
- (UIImage *)webViewSwitchQQButtonIcon;
- (NSString *)aioSwitchBannerIconName;
- (void)aioNotifyMessage:(NSDictionary *)arg1;
@end
