//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation;

@interface QZGPSController : NSObject
{
    CLLocation *_cachedLocation;
    _Bool _isGPSEnabledAndAuthorize;
    _Bool _enabled;
}

+ (id)sharedInstance;
@property _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D)currentLocationCoordinate;
- (void)didEndUpdateLocation:(id)arg1;
- (void)stopPositioning;
- (void)startPositioning;

@end

