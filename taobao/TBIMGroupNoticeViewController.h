//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBIMGroupServiceDelegate-Protocol.h"

@class NSDate, NSString, UIImageView, UILabel, UITextView, UIView;
@protocol TBIMGroupAdapter, TBIMGroupServiceAdapter, TBIMGroupUserAdapter;

@interface TBIMGroupNoticeViewController : UIViewController <TBIMGroupServiceDelegate>
{
    id <TBIMGroupServiceAdapter> _groupService;
    id <TBIMGroupAdapter> _groupInfo;
    NSString *_groupId;
    id <TBIMGroupUserAdapter> _groupUserAdapter;
    NSString *_groupUserID;
    NSDate *_noticeModifyTime;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UIView *_lineView;
    UITextView *_noticeTextView;
    UIView *_leftLineView;
    UILabel *_noticeTipLabel;
    UIView *_rightLineView;
}

@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UILabel *noticeTipLabel; // @synthesize noticeTipLabel=_noticeTipLabel;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) UITextView *noticeTextView; // @synthesize noticeTextView=_noticeTextView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSDate *noticeModifyTime; // @synthesize noticeModifyTime=_noticeModifyTime;
@property(copy, nonatomic) NSString *groupUserID; // @synthesize groupUserID=_groupUserID;
@property(retain, nonatomic) id <TBIMGroupUserAdapter> groupUserAdapter; // @synthesize groupUserAdapter=_groupUserAdapter;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) id <TBIMGroupAdapter> groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupService; // @synthesize groupService=_groupService;
- (void).cxx_destruct;
- (void)updateNoticeTip;
- (void)groupInfoChange:(id)arg1 fail:(unsigned long long)arg2 error:(id)arg3;
- (void)groupInfoChange:(id)arg1;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (void)editLayoutViewWithDuration:(double)arg1 keyboardAreaHeightChange:(double)arg2;
- (void)restoreLayoutViewWithDuration:(double)arg1;
- (void)keyboardAreaRectChange:(struct CGRect)arg1 duration:(double)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerNotifications;
- (void)unRegisterNotifications;
- (void)finishNotice:(id)arg1;
- (void)editNotice:(id)arg1;
- (void)refreshContentViewWithForceRefresh:(_Bool)arg1;
- (void)configContentView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

