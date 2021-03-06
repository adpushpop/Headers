//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/PLFeedsDeleteLogicDelegate-Protocol.h>
#import <QQMainProject/PLSVShortVideoMoreViewDelegate-Protocol.h>

@class CAGradientLayer, NSString, PLFeedsBaseModel, PLFeedsDeleteLogic, PLFeedsInteractionView, PLHeadView, PLSVShortVideoMoreView, QQStoryUrlImageView, UIButton, UIImageView, UILabel, UIView;
@protocol PLFeedsBaseCellDelegate;

@interface PLFeedsBaseCell : UITableViewCell <PLSVShortVideoMoreViewDelegate, PLFeedsDeleteLogicDelegate>
{
    _Bool _isSelf;
    id <PLFeedsBaseCellDelegate> _delegate;
    UIView *_moreButtonShowView;
    UIView *_bgView;
    PLHeadView *_headerView;
    UILabel *_anchorNameLabel;
    UILabel *_createTimeLabel;
    UIButton *_moreButton;
    UILabel *_contentLabel;
    QQStoryUrlImageView *_coverImage;
    UIImageView *_logoView;
    PLFeedsInteractionView *_interactionView;
    UIView *_bottomLine;
    UIView *_failedView;
    UIImageView *_failedIcon;
    UILabel *_failedLabel;
    UIImageView *_defaultLogo;
    UILabel *_addressLabel;
    UIView *_loactionView;
    PLFeedsBaseModel *_model;
    PLFeedsDeleteLogic *_delegteLogic;
    PLSVShortVideoMoreView *_moreView;
    UIImageView *_genderIcon;
    UILabel *_ageLabel;
    UILabel *_levelLabel;
    UIView *_bottomView;
    UIImageView *_loactionIcon;
    CAGradientLayer *_gradientLayer;
}

+ (struct CGSize)calculateCoverSize:(id)arg1;
+ (double)maxContentWidth;
+ (id)createContentLabel;
+ (double)calculateInteractionHeight:(id)arg1;
+ (void)setContentText:(id)arg1 text:(id)arg2;
+ (double)calculateAddressTextHeight:(id)arg1;
+ (double)calculateTextHeight:(id)arg1;
+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *loactionIcon; // @synthesize loactionIcon=_loactionIcon;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UILabel *ageLabel; // @synthesize ageLabel=_ageLabel;
@property(retain, nonatomic) UIImageView *genderIcon; // @synthesize genderIcon=_genderIcon;
@property(retain, nonatomic) PLSVShortVideoMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) PLFeedsDeleteLogic *delegteLogic; // @synthesize delegteLogic=_delegteLogic;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(retain, nonatomic) PLFeedsBaseModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *loactionView; // @synthesize loactionView=_loactionView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIImageView *defaultLogo; // @synthesize defaultLogo=_defaultLogo;
@property(retain, nonatomic) UILabel *failedLabel; // @synthesize failedLabel=_failedLabel;
@property(retain, nonatomic) UIImageView *failedIcon; // @synthesize failedIcon=_failedIcon;
@property(retain, nonatomic) UIView *failedView; // @synthesize failedView=_failedView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) PLFeedsInteractionView *interactionView; // @synthesize interactionView=_interactionView;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) QQStoryUrlImageView *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(retain, nonatomic) UILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) PLHeadView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UIView *moreButtonShowView; // @synthesize moreButtonShowView=_moreButtonShowView;
@property(nonatomic) __weak id <PLFeedsBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDeleteFeedsRequestFailed;
- (void)onDeleteFeedsRequestSucceed:(id)arg1;
- (void)didSVMoreViewDissmiss;
- (void)reportNearbyUserSummaryModule:(id)arg1;
- (void)reportDeleteConfirm;
- (void)reportRetransmissionModule:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportDeleteBtnClick;
- (void)onDeleteButtonClicked:(id)arg1;
- (void)onReportError:(id)arg1;
- (void)reportJuBaoSucData;
- (void)onReportResult:(unsigned int)arg1;
- (void)reportJuBaoClick;
- (void)onReportButtonClicked;
- (void)onCoverClick:(id)arg1;
- (id)getEndTimeStr:(long long)arg1;
- (void)reportClickMoreBtn;
- (void)onMoreButtonPressed:(id)arg1;
- (void)deleteFeeds;
- (void)reportClickFeeds;
- (void)jumpToShortVideoPageIfShowComment:(_Bool)arg1;
- (void)clickAddressLabel:(id)arg1;
- (void)retryButtonPressed:(id)arg1;
- (void)layoutFailedView;
- (void)layoutAddressLabel;
- (void)initFailedView;
- (void)initLBSLabel;
- (void)initGenderImage;
- (void)layoutSubviews;
- (void)initInternalUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

