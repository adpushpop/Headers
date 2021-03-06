//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class CLLocationManager, MCGeoView, NSNumber, NSString;

@interface TBIMGeoViewController : TBViewController
{
    unsigned long long _type;
    NSNumber *_latitude;
    NSNumber *_longitude;
    MCGeoView *_geoView;
    CLLocationManager *_manager;
    NSString *_sessionID;
}

@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) CLLocationManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) MCGeoView *geoView; // @synthesize geoView=_geoView;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)focusSelfAction:(id)arg1;
- (void)sendMessageWithCoordinate:(struct CLLocationCoordinate2D)arg1 name:(id)arg2 image:(id)arg3 sessionID:(id)arg4;
- (void)requestLocationAuth;
- (void)sure:(id)arg1;
- (void)setupLocationSelfButton;
- (void)setupMapView;
- (void)setupNavigation;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

@end

