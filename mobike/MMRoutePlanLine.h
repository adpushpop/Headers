//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMRoutePlanLine : NSObject
{
    int _pointsCount;
    double _distance;
    double _duration;
    struct CLLocationCoordinate2D *_points;
}

@property(nonatomic) int pointsCount; // @synthesize pointsCount=_pointsCount;
@property(nonatomic) struct CLLocationCoordinate2D *points; // @synthesize points=_points;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (void)dealloc;

@end
