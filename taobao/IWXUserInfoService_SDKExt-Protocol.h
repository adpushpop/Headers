//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IWXUserInfoService-Protocol.h"

@class NSString;
@protocol IWXUserInfoDelegate;

@protocol IWXUserInfoService_SDKExt <IWXUserInfoService>
- (void)getLogonSessionListWithDelegate:(id <IWXUserInfoDelegate>)arg1;
- (void)uploadUserTrack4Appid:(NSString *)arg1 data:(NSString *)arg2 site:(NSString *)arg3 delegate:(id <IWXUserInfoDelegate>)arg4;
- (void)setEHelpServiceMode:(int)arg1 withDelegate:(id <IWXUserInfoDelegate>)arg2;
- (void)getEHelpServiceModeWithDelegate:(id <IWXUserInfoDelegate>)arg1;
- (void)setEHelpMode:(int)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)modifyUserOnlineStatus:(int)arg1 predefinedStatus:(int)arg2;
@end
