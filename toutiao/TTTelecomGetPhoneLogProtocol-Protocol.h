//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol TTTelecomGetPhoneLogProtocol <NSObject>

@optional
- (void)requestGetPhoneDidFailure:(NSError *)arg1;
- (void)requestGetPhoneDidSuccess:(NSString *)arg1;
- (void)requestTelecomSDKDidFail:(NSError *)arg1;
- (void)requestTelecomSDKDidSuccess;
- (void)requestTelecomSDKDidStart;
- (void)requestAuthControlDidRetryWithDelay:(long long)arg1;
- (void)requestAuthControlDidFail:(NSError *)arg1;
- (void)requestAuthControlDidSuccess;
@end

