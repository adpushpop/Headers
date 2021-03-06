//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@interface WDPluginBaseController : SSViewControllerBase
{
    _Bool _isAppearing;
    double _initTime;
    double _appearTime;
}

@property(nonatomic) double appearTime; // @synthesize appearTime=_appearTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
- (void)_didEnterBackground:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)_sendPageStayTime:(double)arg1;
- (void)_sendCurrentPageStayTime:(double)arg1;
- (void)trySendPageStayTime;
- (void)trySendCurrentPageStayTime;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;
- (void)dealloc;

@end

