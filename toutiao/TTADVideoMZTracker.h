//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface TTADVideoMZTracker : NSObject
{
    UIView *_trackSDKView;
    long long _timerId;
}

+ (id)sharedManager;
@property(nonatomic) long long timerId; // @synthesize timerId=_timerId;
@property(nonatomic) __weak UIView *trackSDKView; // @synthesize trackSDKView=_trackSDKView;
- (void).cxx_destruct;
- (void)mzStopTrack;
- (void)mzTrackVideoUrls:(id)arg1 adView:(id)arg2;

@end
