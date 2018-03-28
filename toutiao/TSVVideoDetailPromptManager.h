//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, RACDisposable, UIScrollView, UIViewController;
@protocol TSVShortVideoDataFetchManagerProtocol;

@interface TSVVideoDetailPromptManager : NSObject
{
    id <TSVShortVideoDataFetchManagerProtocol> _dataFetchManager;
    UIViewController *_containerViewController;
    UIScrollView *_scrollView;
    NSDictionary *_commonTrackingParameter;
    long long _visibleFloatingViewCount;
    long long _currentVideoRepeatCount;
    RACDisposable *_timerDisposable;
    NSDictionary *_configDictionary;
}

+ (void)increasePropmtCountToday;
+ (long long)promptCountToday;
+ (void)setSkipPromptToday;
+ (_Bool)skipPromptToday;
+ (void)resetConsecutiveClickPlayCount;
+ (void)increaseConsecutiveClickPlayCount;
+ (long long)consecutiveClickPlayCount;
+ (void)setUserhasSwiped;
+ (_Bool)hasUserSwiped;
+ (id)dateOfBeginningOfToday;
+ (void)updateLastVideoViewCountThatPromptAppears;
+ (long long)lastVideoViewCountThatPromptAppears;
+ (void)increaseVideoPlayCount;
+ (long long)videoPlayCount;
+ (void)initialize;
@property(retain, nonatomic) NSDictionary *configDictionary; // @synthesize configDictionary=_configDictionary;
@property(retain, nonatomic) RACDisposable *timerDisposable; // @synthesize timerDisposable=_timerDisposable;
@property(nonatomic) long long currentVideoRepeatCount; // @synthesize currentVideoRepeatCount=_currentVideoRepeatCount;
@property(nonatomic) long long visibleFloatingViewCount; // @synthesize visibleFloatingViewCount=_visibleFloatingViewCount;
@property(nonatomic) __weak NSDictionary *commonTrackingParameter; // @synthesize commonTrackingParameter=_commonTrackingParameter;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <TSVShortVideoDataFetchManagerProtocol> dataFetchManager; // @synthesize dataFetchManager=_dataFetchManager;
- (void).cxx_destruct;
- (void)hidePrompt;
- (void)showPromptIfConditionsMet;
- (void)videoDidPlayOneLoop;
- (void)videoDidPlayWithSwipe:(_Bool)arg1;
- (void)updateVisibleFloatingViewCountForVisibility:(_Bool)arg1;
- (id)init;

@end
