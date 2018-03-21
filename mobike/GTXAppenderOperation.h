//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class GTXLogEvent, NSRecursiveLock;

@interface GTXAppenderOperation : NSOperation
{
    long long _state;
    NSRecursiveLock *_lock;
    GTXLogEvent *_event;
}

@property(retain, nonatomic) GTXLogEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)finish;
- (void)resume;
- (void)pause;
- (void)start;
- (_Bool)isConcurrent;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isPaused;
- (id)initWithEvent:(id)arg1;

@end
