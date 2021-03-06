//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface BDSDKSessionManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMutableDictionary *_sessionList;
}

+ (id)sharedSession;
@property(retain, nonatomic) NSMutableDictionary *sessionList; // @synthesize sessionList=_sessionList;
- (void).cxx_destruct;
- (id)removeSessionWithReqId:(id)arg1;
- (id)sessionForReqId:(id)arg1;
- (void)addSession:(id)arg1;
- (void)addSessionWithReq:(id)arg1;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end

