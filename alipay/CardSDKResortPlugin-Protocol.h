//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SocialPlugin-Protocol.h"

@class CCardBaseViewController, NSArray;

@protocol CardSDKResortPlugin <SocialPlugin>

@optional
- (void)cardViewController:(CCardBaseViewController *)arg1 loadCardData:(NSArray *)arg2 loadType:(int)arg3 insertIndex:(long long)arg4 callback:(void (^)(NSArray *, int, long long))arg5;
@end

