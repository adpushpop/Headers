//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseEngine.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface QZAIOEngine : QZBaseEngine
{
    NSMutableDictionary *_aioNewestFeedMutlDict;
    NSRecursiveLock *_lock;
    _Bool _isNewestFeedDataChanged;
}

+ (void)updateLoverRelationship;
+ (id)instance;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)getAIONewestFeedFromNet:(long long)arg1;
- (id)getAIONewestFeedFromCache:(long long)arg1;
- (void)updateAIONewestFeedInfo:(long long)arg1 feedInfo:(id)arg2;
- (void)checkCanShowQzoneNewestFeed:(long long)arg1 executeBlockOnMainThread:(CDUnknownBlockType)arg2;
- (id)getHostDataInfoNeedLock:(long long)arg1;
- (void)checkCacheCountNeedLock:(id)arg1;
- (void)updateCache;
- (double)getDellOneC2CMsgTime:(long long)arg1;
- (double)getDelAllMsgTime;
- (void)onDellAllMsg;
- (void)onDellOneC2CMsg:(id)arg1;
- (id)init;

@end

