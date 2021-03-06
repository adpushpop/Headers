//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQStorySGVideoSelectorItemViewDelegate-Protocol.h>
#import <QQMainProject/QQStorySGVideoSelectorViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQTextViewInternalDelegate-Protocol.h>
#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>
#import <QQMainProject/TableViewCellStyleButtonDelagate-Protocol.h>

@class NSArray, NSMutableArray, NSString, QQTextViewInternal, UILabel, UIScrollView;
@protocol QQStoryShareGroupCreateViewControllerDelegate;

@interface QQStoryShareGroupCreateViewController : QQViewController <TableViewCellStyleButtonDelagate, QQTextViewInternalDelegate, QQStorySGVideoSelectorItemViewDelegate, QQStorySGVideoSelectorViewControllerDelegate, TBBizNetworkLogicDelegate>
{
    QQTextViewInternal *_titleView;
    UIScrollView *_selectedView;
    UILabel *_selectedNumLabel;
    _Bool _allowStrangerVisitAndPost;
    NSMutableArray *_selectedVideoInfoList;
    NSMutableArray *_allVideoInfoList;
    NSArray *_memberUinList;
    _Bool _noVideoListAdd;
    _Bool _showInFriendStoryMainPage;
    long long _enterSource;
    id <QQStoryShareGroupCreateViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <QQStoryShareGroupCreateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long enterSource; // @synthesize enterSource=_enterSource;
- (void).cxx_destruct;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)shareGroupVideoSelectorViewControllerDidCancelSelecting;
- (void)shareGroupVideoSelectorViewControllerDidFinishSelecting:(id)arg1;
- (void)didClickShareGroupVideo:(id)arg1;
- (_Bool)didSelectShareGroupVideo:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)clickSwitch:(id)arg1;
- (void)onClickButton:(id)arg1;
- (void)updateUIFromNotification:(id)arg1;
- (void)tapSelfView:(id)arg1;
- (id)getTitleDefaultPlaceHolderString;
- (void)showErrorToast:(id)arg1;
- (void)playVideoWithUin:(id)arg1 itemInfo:(id)arg2;
- (void)popViewController;
- (void)clickCompeletedCreateButton:(id)arg1;
- (id)getSimpleInfoWithArray:(id)arg1 withVid:(id)arg2;
- (id)getVidList:(id)arg1;
- (void)changeNavigationBarRightButtonStatus;
- (_Bool)isSupportRightDragToGoBack;
- (void)reloadItems;
- (void)reloadData;
- (id)createSwitchViewWithTitle:(id)arg1 Frame:(struct CGRect)arg2;
- (void)initUI;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithMemberList:(id)arg1 selectedVideoInfoList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

