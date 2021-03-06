//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WBQueueJob, WBQueueOperation;

@protocol WBQueueJobDelegate <NSObject>
- (void)jobSendFinished:(WBQueueJob *)arg1;

@optional
- (void)queueJob:(WBQueueJob *)arg1 operationDidCanceled:(WBQueueOperation *)arg2;
- (void)queueJob:(WBQueueJob *)arg1 operationFailed:(WBQueueOperation *)arg2 withError:(NSError *)arg3;
- (void)queueJob:(WBQueueJob *)arg1 operationDidStart:(WBQueueOperation *)arg2;
- (void)queueJob:(WBQueueJob *)arg1 operation:(WBQueueOperation *)arg2 didUpdateProgress:(float)arg3;
- (void)queueJob:(WBQueueJob *)arg1 operationFinished:(WBQueueOperation *)arg2;
- (void)uploadProgressChanged:(double)arg1 forJob:(WBQueueJob *)arg2;
- (void)jobSendCanceled:(WBQueueJob *)arg1;
- (void)jobUpdated:(WBQueueJob *)arg1;
@end

