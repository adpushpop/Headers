//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class ApInfo, NSDictionary;

@protocol QQWifiConnectCallback <NSObject>

@optional
- (void)onTaskResult:(ApInfo *)arg1 networkConnState:(int)arg2 networkConnErrorCode:(int)arg3 extraInfo:(NSDictionary *)arg4;
- (void)onTaskStatus:(ApInfo *)arg1 networkConnState:(int)arg2;
@end
