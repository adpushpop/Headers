//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQReadInJoyMessageViewDelegate-Protocol.h>
#import <QQMainProject/QQReadInJoySubsDelegate-Protocol.h>
#import <QQMainProject/ReadInJoyMessageDelegate-Protocol.h>
#import <QQMainProject/TabControllerDelegate-Protocol.h>

@class NSDate, NSMutableArray, NSString, QQReadInJoySubsViewController;
@protocol ReadInJoyScrollViewDelegate;

@interface QQReadInJoyMessageViewController : QQViewController <QQReadInJoyMessageViewDelegate, TabControllerDelegate, QQReadInJoySubsDelegate, ReadInJoyMessageDelegate>
{
    NSMutableArray *_messageArticleLists;
    NSMutableArray *_messageStrategyLists;
    NSMutableArray *_messageAlgorithmLists;
    NSDate *_enterDate;
    NSMutableArray *_dates;
    NSMutableArray *_labelList;
    _Bool _firstTimeLoadData;
    _Bool _isFirstAppearFromMsgTab;
    _Bool _isFromSearch;
    _Bool _isForceRefresh;
    _Bool _isForPageVC;
    _Bool _firstAppearFromTab;
    QQReadInJoySubsViewController *_subViewController;
    long long _subview_source;
    double _enterTime;
    id <ReadInJoyScrollViewDelegate> _scrollViewDelegate;
    NSDate *_startTime;
}

+ (void)resetTableViewOffset;
+ (void)handleMsgUnreadCountCleanWithUin:(id)arg1;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) id <ReadInJoyScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) _Bool firstAppearFromTab; // @synthesize firstAppearFromTab=_firstAppearFromTab;
@property(nonatomic) _Bool isForPageVC; // @synthesize isForPageVC=_isForPageVC;
@property(nonatomic) _Bool isForceRefresh; // @synthesize isForceRefresh=_isForceRefresh;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) long long subview_source; // @synthesize subview_source=_subview_source;
@property(nonatomic) _Bool isFromSearch; // @synthesize isFromSearch=_isFromSearch;
@property(retain, nonatomic) QQReadInJoySubsViewController *subViewController; // @synthesize subViewController=_subViewController;
- (void)TabController:(id)arg1 didUnSelect:(id)arg2 to:(id)arg3;
- (void)TabController:(id)arg1 didSelect:(id)arg2 from:(id)arg3;
- (void)interestSettingUpdated;
- (void)readInJoyTabUnSelected;
- (void)readInJoyMessageTabClicked:(_Bool)arg1;
- (_Bool)shouldShowRefreshTip;
- (void)reportKandianUseTime;
- (void)resetKandianStartTime;
- (void)dataReportForUseDuration;
- (double)getUseDuration;
- (void)refreshRIJChangeMessage:(id)arg1;
- (void)setRefreshTime:(double)arg1 channelId:(unsigned int)arg2;
- (_Bool)shouldRefresh:(unsigned int)arg1;
- (void)readInJoyViewWillDisappear;
- (void)dealloc;
- (void)TabController:(id)arg1 cleanup:(id)arg2;
- (void)updateReadInJoyOperationBitmap:(unsigned int)arg1;
- (void)updateOutRIJTime;
- (void)updateGoRIJTime;
- (void)onSwitchToAioNoti:(id)arg1;
- (void)becomeActive;
- (void)resignActive;
- (void)loadReadInJoyViewNew;
- (void)refreshChannelDataNewWithTips;
- (void)refreshChannelDataNew;
- (_Bool)checkNeedRefreshNew;
- (void)reportDataExpose;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onExitReadInJoy;
- (void)updateReadInJoyBrief;
- (void)parentTabWillDisappear;
- (void)loadOldChannelData;
- (void)readInJoyViewWillAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)leftButtonDidReset;
- (void)TabController:(id)arg1 menuLongPress:(id)arg2;
- (void)setControllerApperant;
- (void)openOrCloseNightMode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)accountChanged;
- (void)preloadStyle;
- (void)viewDidLoad;
- (void)preloadWebResource;
- (void)reportExitFeeds;
- (void)reportEnterFeeds;
- (void)recordDuration;
- (void)resetDuration;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
