//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface CNLogisticsDetailViewMapBridge : NSObject
{
    UIView *_mapView;
    CDUnknownBlockType _scrollViewDidScrollBlock;
    CDUnknownBlockType _scrollViewDidEndScrolling;
}

@property(copy, nonatomic) CDUnknownBlockType scrollViewDidEndScrolling; // @synthesize scrollViewDidEndScrolling=_scrollViewDidEndScrolling;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollBlock; // @synthesize scrollViewDidScrollBlock=_scrollViewDidScrollBlock;
@property(nonatomic) __weak UIView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;

@end

