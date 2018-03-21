//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ARMapTilePreDownload : NSObject
{
    NSDate *_lastHitTime;
    NSMutableArray *_latestPreDownloadLocations;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _supportATS;
    _Bool _shouldReport;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool shouldReport; // @synthesize shouldReport=_shouldReport;
@property(nonatomic) _Bool supportATS; // @synthesize supportATS=_supportATS;
- (void).cxx_destruct;
- (void)loadTileMapAtLatitude:(double)arg1 longitude:(double)arg2;
- (void)addLatestLocation:(struct CLLocationCoordinate2D)arg1;
- (void)saveLatestPreDownloadLocations;
- (void)loadLatestPreDownloadLocations;
- (id)localFilePath;
- (void)saveLastHitTime:(id)arg1;
- (id)loadLastHitTime;
- (_Bool)dice;
- (float)currentDiceProbability;
- (_Bool)shouldDice;
- (int)timeZoneInDay:(long long)arg1;
- (_Bool)isDateOK;
- (_Bool)isNetworkAvailable;
- (double)getServerTimeIntervalSince1970;
- (_Bool)isFreeStorageEnough;
- (void)reportCurrentDeviceStorage;
- (void)didLoadARMapConfig;
- (void)dpcDidUpdate:(id)arg1;
- (void)dealloc;
- (void)showToast:(id)arg1 position:(double)arg2;
- (id)init;

@end
