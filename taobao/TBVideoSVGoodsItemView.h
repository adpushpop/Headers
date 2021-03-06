//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBIctEventSubscriber-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBLiveAddCart, TBVideoSVGoodsItemInfo, TBVideoTweSVVC, TBVideoUIButtonWithBlock, UIImageView, UIScrollView;

@interface TBVideoSVGoodsItemView : UIView <UIScrollViewDelegate, TBIctEventSubscriber>
{
    TBVideoUIButtonWithBlock *_goodsItemBTN;
    UIImageView *_underlayerImageView;
    TBVideoTweSVVC *_superVC;
    TBVideoUIButtonWithBlock *_fullScreenBGView;
    UIScrollView *_contentBGView;
    UIView *_bottomMaskView;
    NSArray *_models;
    long long _maxItemNum;
    UIImageView *_tagImage;
    NSMutableArray *_tagImages;
    TBLiveAddCart *_addCartManager;
    TBVideoSVGoodsItemInfo *_currentModel;
    UIView *_currentTargetView;
}

@property(retain, nonatomic) UIView *currentTargetView; // @synthesize currentTargetView=_currentTargetView;
@property(retain, nonatomic) TBVideoSVGoodsItemInfo *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) TBLiveAddCart *addCartManager; // @synthesize addCartManager=_addCartManager;
@property(retain, nonatomic) NSMutableArray *tagImages; // @synthesize tagImages=_tagImages;
@property(retain, nonatomic) UIImageView *tagImage; // @synthesize tagImage=_tagImage;
@property(nonatomic) long long maxItemNum; // @synthesize maxItemNum=_maxItemNum;
@property(nonatomic) __weak NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIScrollView *contentBGView; // @synthesize contentBGView=_contentBGView;
@property(retain, nonatomic) TBVideoUIButtonWithBlock *fullScreenBGView; // @synthesize fullScreenBGView=_fullScreenBGView;
@property(nonatomic) __weak TBVideoTweSVVC *superVC; // @synthesize superVC=_superVC;
@property(retain, nonatomic) UIImageView *underlayerImageView; // @synthesize underlayerImageView=_underlayerImageView;
@property(retain, nonatomic) TBVideoUIButtonWithBlock *goodsItemBTN; // @synthesize goodsItemBTN=_goodsItemBTN;
- (void).cxx_destruct;
- (id)handleEvent:(id)arg1;
- (id)getUTControlNameFromBizScene:(id)arg1;
- (void)addCartWithCheckLogin;
- (void)addItemToCart;
- (void)gotoItemDetailWithModel:(id)arg1;
- (id)addedItemViewWithModel:(id)arg1 index:(long long)arg2;
- (void)activateLandscapeGoodsListView;
- (void)activatePortraitGoodsListView;
- (void)closeGoodsListView;
- (void)activateGoodsListView;
- (void)updateFrameWithPortrait:(_Bool)arg1;
- (void)triggerSmallItemAnimation;
- (void)configBTNWithURL:(id)arg1;
- (void)dealloc;
- (void)unRegistEvent;
- (void)registEvent;
- (id)initWithTarget:(id)arg1 models:(id)arg2 maxItemNum:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

