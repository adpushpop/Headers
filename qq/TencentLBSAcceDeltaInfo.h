//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TencentLBSAcceDeltaInfo : NSObject
{
    double _delta;
    double _lastDelta;
    double _synthesis;
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double synthesis; // @synthesize synthesis=_synthesis;
@property(readonly, nonatomic) double lastDelta; // @synthesize lastDelta=_lastDelta;
@property(readonly, nonatomic) double delta; // @synthesize delta=_delta;
- (id)initWithDelta:(double)arg1 lastDelta:(double)arg2 synthesis:(double)arg3 timestamp:(double)arg4;

@end

