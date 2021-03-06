//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WVShakeRecognizer : NSObject
{
    double _shakeThreshold;
    long long _timeThreshold;
    long long _shakeNum;
    double _pre2Date;
    double _pre1Date;
    long long _changeCount;
    long long _waveTime;
    long long _waveStatus;
}

@property(nonatomic) long long waveStatus; // @synthesize waveStatus=_waveStatus;
@property(nonatomic) long long waveTime; // @synthesize waveTime=_waveTime;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) double pre1Date; // @synthesize pre1Date=_pre1Date;
@property(nonatomic) double pre2Date; // @synthesize pre2Date=_pre2Date;
@property(nonatomic) long long shakeNum; // @synthesize shakeNum=_shakeNum;
@property(nonatomic) long long timeThreshold; // @synthesize timeThreshold=_timeThreshold;
@property(nonatomic) double shakeThreshold; // @synthesize shakeThreshold=_shakeThreshold;
- (_Bool)shake:(double)arg1;
- (id)init;

@end

