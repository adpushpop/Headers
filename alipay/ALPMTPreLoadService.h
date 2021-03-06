//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTService-Protocol.h"
#import "MVLBService-Protocol.h"

@class ALPMTLocation, CLLocation, NSString, NSTimer;

@interface ALPMTPreLoadService : NSObject <MVLBService, DTService>
{
    ALPMTLocation *_loc;
    ALPMTLocation *_appLoc;
    NSTimer *_countdownTimer;
    CLLocation *_location;
    CLLocation *_deviceLocation;
}

@property(retain, nonatomic) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *selectCityName;
@property(retain, nonatomic) NSString *selectCityCode;
- (void)updateCity;
- (void)locationDidSuccess;
- (_Bool)canCheckCityChanged;
- (void)alipayHomeLaunched;
- (void)startLocatingInApp;
- (id)fixCityCode:(id)arg1 cityName:(id)arg2;
- (void)updateLBS:(id)arg1 fromLocation:(id)arg2;
- (void)dealloc;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

