//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MMLocationManagerDelegate;

@interface MMLocationManager : NSObject
{
    _Bool _pausesLocationUpdatesAutomatically;
    _Bool _allowsBackgroundLocationUpdates;
    id <MMLocationManagerDelegate> _delegate;
    double _distanceFilter;
    double _desiredAccuracy;
    double _headingFilter;
    unsigned long long _coordinateType;
}

@property(nonatomic) unsigned long long coordinateType; // @synthesize coordinateType=_coordinateType;
@property(nonatomic) double headingFilter; // @synthesize headingFilter=_headingFilter;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates; // @synthesize allowsBackgroundLocationUpdates=_allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically; // @synthesize pausesLocationUpdatesAutomatically=_pausesLocationUpdatesAutomatically;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(nonatomic) double distanceFilter; // @synthesize distanceFilter=_distanceFilter;
@property(nonatomic) __weak id <MMLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopLocationService;
- (void)startLocationService;
- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorization;
- (id)init;

@end

