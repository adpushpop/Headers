//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSMutableArray, SSThemedButton, SSThemedImageView, SSThemedLabel, TTPersonalHomeHeaderInfoItemView, TTPersonalHomeHeaderInfoNumberView, TTPersonalHomeMultiplePlatformFollowersInfoView, TTPersonalHomeMultiplePlatformFollowersInfoViewModel, TTPersonalHomeUserInfoDataResponseModel, UIButton;

@interface TTPersonalHomeHeaderInfoView : SSThemedView
{
    SSThemedButton *_spreadOutBtn;
    TTPersonalHomeUserInfoDataResponseModel *_infoModel;
    double _headerViewTopMargin;
    CDUnknownBlockType _multiplePlatformFollowersInfoViewSpreadOutBlock;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_realNameLabel;
    SSThemedImageView *_sexImageView;
    SSThemedImageView *_toutiaoIcon;
    TTPersonalHomeHeaderInfoItemView *_recommendReasonView;
    TTPersonalHomeHeaderInfoItemView *_locationView;
    TTPersonalHomeHeaderInfoItemView *_authView;
    SSThemedLabel *_introduceLabel;
    TTPersonalHomeHeaderInfoNumberView *_followNumberView;
    TTPersonalHomeHeaderInfoNumberView *_likeNumbrView;
    SSThemedView *_bottomLine;
    TTPersonalHomeMultiplePlatformFollowersInfoViewModel *_multiplePlatformFollowersInfoViewModel;
    TTPersonalHomeMultiplePlatformFollowersInfoView *_multiplePlatformFollowersInfoView;
    SSThemedImageView *_multiplePlatformFollowersTriangleView;
    UIButton *_multiplePlatformFollowersTriangleButton;
    NSMutableArray *_medalImageViews;
}

@property(retain, nonatomic) NSMutableArray *medalImageViews; // @synthesize medalImageViews=_medalImageViews;
@property(retain, nonatomic) UIButton *multiplePlatformFollowersTriangleButton; // @synthesize multiplePlatformFollowersTriangleButton=_multiplePlatformFollowersTriangleButton;
@property(retain, nonatomic) SSThemedImageView *multiplePlatformFollowersTriangleView; // @synthesize multiplePlatformFollowersTriangleView=_multiplePlatformFollowersTriangleView;
@property(retain, nonatomic) TTPersonalHomeMultiplePlatformFollowersInfoView *multiplePlatformFollowersInfoView; // @synthesize multiplePlatformFollowersInfoView=_multiplePlatformFollowersInfoView;
@property(retain, nonatomic) TTPersonalHomeMultiplePlatformFollowersInfoViewModel *multiplePlatformFollowersInfoViewModel; // @synthesize multiplePlatformFollowersInfoViewModel=_multiplePlatformFollowersInfoViewModel;
@property(nonatomic) __weak SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak TTPersonalHomeHeaderInfoNumberView *likeNumbrView; // @synthesize likeNumbrView=_likeNumbrView;
@property(nonatomic) __weak TTPersonalHomeHeaderInfoNumberView *followNumberView; // @synthesize followNumberView=_followNumberView;
@property(nonatomic) __weak SSThemedLabel *introduceLabel; // @synthesize introduceLabel=_introduceLabel;
@property(nonatomic) __weak TTPersonalHomeHeaderInfoItemView *authView; // @synthesize authView=_authView;
@property(nonatomic) __weak TTPersonalHomeHeaderInfoItemView *locationView; // @synthesize locationView=_locationView;
@property(nonatomic) __weak TTPersonalHomeHeaderInfoItemView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(nonatomic) __weak SSThemedImageView *toutiaoIcon; // @synthesize toutiaoIcon=_toutiaoIcon;
@property(nonatomic) __weak SSThemedImageView *sexImageView; // @synthesize sexImageView=_sexImageView;
@property(nonatomic) __weak SSThemedLabel *realNameLabel; // @synthesize realNameLabel=_realNameLabel;
@property(nonatomic) __weak SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType multiplePlatformFollowersInfoViewSpreadOutBlock; // @synthesize multiplePlatformFollowersInfoViewSpreadOutBlock=_multiplePlatformFollowersInfoViewSpreadOutBlock;
@property(readonly, nonatomic) double headerViewTopMargin; // @synthesize headerViewTopMargin=_headerViewTopMargin;
@property(retain, nonatomic) TTPersonalHomeUserInfoDataResponseModel *infoModel; // @synthesize infoModel=_infoModel;
@property(nonatomic) __weak SSThemedButton *spreadOutBtn; // @synthesize spreadOutBtn=_spreadOutBtn;
- (void).cxx_destruct;
- (void)multiplePlatformFollowersInfoViewDidClick;
- (void)likeNumberViewTap;
- (void)followNumberViewTap;
- (void)refreshUIWithMultiplePlatformFollowersInfoViewSpreadOut:(_Bool)arg1;
- (void)setupSubviewFrameWithTopMargin:(double)arg1;
- (void)setupSubviewData;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end
