//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTBaseSystemMonitorRecorder.h"

@interface TTBatteryUsageMonitorRecorder : TTBaseSystemMonitorRecorder
{
    long long _batteryState;
    double _batteryLevel;
    double _totalCost;
}

@property(nonatomic) double totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) double batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
- (void)recordIfNeeded:(_Bool)arg1;
- (_Bool)isEnabled;
- (double)monitorInterval;
- (id)type;
- (void)batteryStatusUpdated:(id)arg1;
- (id)init;

@end

