//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBLocationReportManager : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareLocationReportManager;
- (_Bool)isAllowReport:(id)arg1;
- (void)reportLocationFialedEvent:(id)arg1 innerErrorCode:(long long)arg2 isPassive:(_Bool)arg3;
- (void)reportLocation:(id)arg1 isPassive:(_Bool)arg2;
- (void)reportCacheLocation;
- (void)registerLocationCallback;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
