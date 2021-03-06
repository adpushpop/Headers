//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MBKAnalyticsNetworkProtocol, MBKAnalyticsPersistanceProtocol, OS_dispatch_queue;

@interface MBKAnalyticsUploader : NSObject
{
    _Bool _isUploading;
    long long _batchCount;
    long long _failedCount;
    id <MBKAnalyticsPersistanceProtocol> _database;
    id <MBKAnalyticsNetworkProtocol> _network;
    long long _retryCount;
    NSObject<OS_dispatch_queue> *_workingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) id <MBKAnalyticsNetworkProtocol> network; // @synthesize network=_network;
@property(retain, nonatomic) id <MBKAnalyticsPersistanceProtocol> database; // @synthesize database=_database;
@property(nonatomic) long long failedCount; // @synthesize failedCount=_failedCount;
@property(nonatomic) long long batchCount; // @synthesize batchCount=_batchCount;
@property(readonly, nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
- (void).cxx_destruct;
- (id)dataFromDatabaseObjects:(id)arg1;
- (id)fetchLogsWithMaxCount:(long long)arg1;
- (void)uploadInnerWithCompletion:(CDUnknownBlockType)arg1 retryCount:(long long)arg2;
- (void)uploadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 network:(id)arg2 workingQueue:(id)arg3 retryCountWhenFailed:(long long)arg4;

@end

