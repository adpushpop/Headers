//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSTagViewController.h"

@class KSTopicBannerHeader, KS_Topic;

@interface KSTopicViewController : KSTagViewController
{
    KS_Topic *_topic;
    KSTopicBannerHeader *_topicHeader;
}

@property(retain, nonatomic) KSTopicBannerHeader *topicHeader; // @synthesize topicHeader=_topicHeader;
@property(retain, nonatomic) KS_Topic *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (void)modifyFeedsCountWithOffset:(long long)arg1;
- (void)openActiveURL:(id)arg1;
- (void)gotoEditViewController;
- (void)setupActions;
- (id)createHeaderView;
- (void)didTapRefreshWithloadingErrorView:(id)arg1;
- (void)loadHeader;
- (void)feedAdded:(id)arg1;
- (void)feedDeleted:(id)arg1;
- (void)didDragToRefresh:(id)arg1;
- (void)addtionProcessWithDetail:(id)arg1 feed:(id)arg2;
- (void)configShareContent:(id)arg1;
- (id)ksuShowMetaData;
- (void)viewDidLoad;
- (void)dealloc;

@end

