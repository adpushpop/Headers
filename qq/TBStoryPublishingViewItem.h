//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBStoryPageScrollViewBaseItem.h>

@class TBPublishStoryVideoModel, TBStoryPlayerPanelView;

@interface TBStoryPublishingViewItem : TBStoryPageScrollViewBaseItem
{
    TBStoryPlayerPanelView *_panelView;
    TBPublishStoryVideoModel *_publishModel;
    id _delegate;
    unsigned long long _publicPlayerEntry;
}

@property(nonatomic) unsigned long long publicPlayerEntry; // @synthesize publicPlayerEntry=_publicPlayerEntry;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBPublishStoryVideoModel *publishModel; // @synthesize publishModel=_publishModel;
- (void).cxx_destruct;
- (void)pageScrollViewItemDidShow:(id)arg1;
- (void)p_onSendSuccessHandle:(id)arg1;
- (void)p_onSendFailedHandle:(id)arg1;
- (void)p_onSendResult:(id)arg1;
- (void)p_refreshPublishState;
- (void)p_onSending:(id)arg1;
- (void)prepareForReuse;
- (void)refreshPanelView;
- (void)destroyVideoPanel;
- (void)initPanelView;
- (void)p_addVideoSendingNotification;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2 unionID:(id)arg3 storyMode:(long long)arg4 from:(id)arg5;

@end
