//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreMomentListCellItemBase.h"

#import "FriendDataManagerDelegate-Protocol.h"
#import "TTBlockManagerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class ExploreMomentListCellCommentItemView, ExploreMomentListCellForumItemView, ExploreMomentListCellForwardItemView, ExploreMomentListCellOriginArticleItemView, ExploreMomentListCellPicItemView, ExploreMomentListCellTimeAndReportItem, ExploreMomentListCellUserActionItemView, ExploreMomentListCellUserInfoItemView, FriendDataManager, NSString, TTActionSheetController, TTBlockManager;

@interface ExploreMomentListCellHeaderItem : ExploreMomentListCellItemBase <UIActionSheetDelegate, UIAlertViewDelegate, FriendDataManagerDelegate, TTBlockManagerDelegate>
{
    ExploreMomentListCellUserInfoItemView *_userInfoItemView;
    ExploreMomentListCellCommentItemView *_commentItemView;
    ExploreMomentListCellForumItemView *_forumItemView;
    ExploreMomentListCellTimeAndReportItem *_timeAndReportItemView;
    ExploreMomentListCellUserActionItemView *_actionItemView;
    ExploreMomentListCellPicItemView *_picItemView;
    ExploreMomentListCellForwardItemView *_forwardItemView;
    ExploreMomentListCellOriginArticleItemView *_originArticleItemView;
    FriendDataManager *_friendDataManager;
    TTBlockManager *_blockUserManager;
    TTActionSheetController *_actionSheetController;
}

+ (long long)reportSourceWithSourceType:(unsigned long long)arg1;
+ (double)heightForMomentModel:(id)arg1 cellWidth:(double)arg2 userInfo:(id)arg3;
+ (_Bool)needShowForModel:(id)arg1 userInfo:(id)arg2;
@property(retain, nonatomic) TTActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(retain, nonatomic) TTBlockManager *blockUserManager; // @synthesize blockUserManager=_blockUserManager;
@property(retain, nonatomic) FriendDataManager *friendDataManager; // @synthesize friendDataManager=_friendDataManager;
@property(retain, nonatomic) ExploreMomentListCellOriginArticleItemView *originArticleItemView; // @synthesize originArticleItemView=_originArticleItemView;
@property(retain, nonatomic) ExploreMomentListCellForwardItemView *forwardItemView; // @synthesize forwardItemView=_forwardItemView;
@property(retain, nonatomic) ExploreMomentListCellPicItemView *picItemView; // @synthesize picItemView=_picItemView;
@property(retain, nonatomic) ExploreMomentListCellUserActionItemView *actionItemView; // @synthesize actionItemView=_actionItemView;
@property(retain, nonatomic) ExploreMomentListCellTimeAndReportItem *timeAndReportItemView; // @synthesize timeAndReportItemView=_timeAndReportItemView;
@property(retain, nonatomic) ExploreMomentListCellForumItemView *forumItemView; // @synthesize forumItemView=_forumItemView;
@property(retain, nonatomic) ExploreMomentListCellCommentItemView *commentItemView; // @synthesize commentItemView=_commentItemView;
@property(retain, nonatomic) ExploreMomentListCellUserInfoItemView *userInfoItemView; // @synthesize userInfoItemView=_userInfoItemView;
- (void).cxx_destruct;
- (void)relationActionNotification:(id)arg1;
- (id)topMostView;
- (void)friendDataManager:(id)arg1 finishActionType:(int)arg2 error:(id)arg3 result:(id)arg4;
- (void)blockUserManager:(id)arg1 unblockResult:(_Bool)arg2 unblockedUserID:(id)arg3 error:(id)arg4 errorTip:(id)arg5;
- (void)blockUserManager:(id)arg1 blocResult:(_Bool)arg2 blockedUserID:(id)arg3 error:(id)arg4 errorTip:(id)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)shouldAddReportEntranceInUserInfoItem;
- (id)needResponder;
- (void)presentReportView;
- (void)showLoginViewWithSource:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)arrowButtonClicked;
- (_Bool)isUserHimself;
- (double)heightForMomentModel:(id)arg1 cellWidth:(double)arg2;
- (void)refreshForMomentModel:(id)arg1;
- (id)initWithWidth:(double)arg1 userInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

