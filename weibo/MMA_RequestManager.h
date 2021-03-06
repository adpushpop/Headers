//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;

@interface MMA_RequestManager : NSObject <NSURLSessionDelegate>
{
    NSMutableDictionary *_requestDic;
    NSURLSession *_urlSession;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
+ (void)sendRequest:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableDictionary *requestDic; // @synthesize requestDic=_requestDic;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)sendRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

