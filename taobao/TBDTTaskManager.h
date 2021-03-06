//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, TBDTDownloader;

@interface TBDTTaskManager : NSObject
{
    unsigned long long _maxConcurrentOperationCount;
    NSMutableArray *_operatingTaskArray;
    NSMutableArray *_waitingTaskArray;
    TBDTDownloader *_downloader;
    NSMutableDictionary *_backgroundTasksJSON;
    NSLock *_backgroundTasksJSONLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *backgroundTasksJSONLock; // @synthesize backgroundTasksJSONLock=_backgroundTasksJSONLock;
@property(retain, nonatomic) NSMutableDictionary *backgroundTasksJSON; // @synthesize backgroundTasksJSON=_backgroundTasksJSON;
@property(retain, nonatomic) TBDTDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) NSMutableArray *waitingTaskArray; // @synthesize waitingTaskArray=_waitingTaskArray;
@property(retain, nonatomic) NSMutableArray *operatingTaskArray; // @synthesize operatingTaskArray=_operatingTaskArray;
- (void).cxx_destruct;
- (id)backgroundTaskForURL:(id)arg1;
- (id)waitingBackgroundTasks;
- (void)addBackgroundTask:(id)arg1;
- (void)finishBackgroundTask:(id)arg1;
- (id)backgroundTaskRecordFile;
- (void)beginNewTask;
- (void)finishTask:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)resumeTask:(id)arg1;
- (void)suspendTask:(id)arg1;
- (void)startTask:(id)arg1;
- (_Bool)haveDuplicateTask:(id)arg1;
- (_Bool)task:(id)arg1 duplicateWithTaskIn:(id)arg2;
- (void)conditionChanged:(id)arg1;
- (void)configMaxConcurrent;
- (_Bool)isConditionSatisfied:(id)arg1;
- (void)insertTask:(id)arg1 toArray:(id)arg2;
- (void)dealloc;
- (id)init;

@end

