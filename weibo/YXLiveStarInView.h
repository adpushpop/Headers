//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABasicAnimation, CALayer, YXGiftModel, YXLiveStarInNickView, YXLiveUserView, YYLiveAnimatedImageView;

@interface YXLiveStarInView : UIView
{
    CDUnknownBlockType _stopBlock;
    YXGiftModel *_giftModel;
    CABasicAnimation *_leftLightAnimation;
    CABasicAnimation *_rightLightAnimation;
    YYLiveAnimatedImageView *_animationView;
    YXLiveUserView *_headView;
    CALayer *_leftLightLayer;
    CALayer *_rightLightLayer;
    CALayer *_starLayerTop;
    CALayer *_starLayerBottom;
    UIView *_bgView;
    YXLiveStarInNickView *_nickView;
    CALayer *_shootingStarLayer;
}

@property(retain, nonatomic) CALayer *shootingStarLayer; // @synthesize shootingStarLayer=_shootingStarLayer;
@property(retain, nonatomic) YXLiveStarInNickView *nickView; // @synthesize nickView=_nickView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) CALayer *starLayerBottom; // @synthesize starLayerBottom=_starLayerBottom;
@property(retain, nonatomic) CALayer *starLayerTop; // @synthesize starLayerTop=_starLayerTop;
@property(retain, nonatomic) CALayer *rightLightLayer; // @synthesize rightLightLayer=_rightLightLayer;
@property(retain, nonatomic) CALayer *leftLightLayer; // @synthesize leftLightLayer=_leftLightLayer;
@property(retain, nonatomic) YXLiveUserView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) YYLiveAnimatedImageView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) CABasicAnimation *rightLightAnimation; // @synthesize rightLightAnimation=_rightLightAnimation;
@property(retain, nonatomic) CABasicAnimation *leftLightAnimation; // @synthesize leftLightAnimation=_leftLightAnimation;
@property(retain, nonatomic) YXGiftModel *giftModel; // @synthesize giftModel=_giftModel;
@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initConstrains;
- (void)initView;
- (void)shootingStarAnimation;
- (void)rotateLayer:(id)arg1 from:(double)arg2 to:(double)arg3 duration:(double)arg4;
- (void)mainAnimationWithPrefix:(id)arg1;
- (void)startAnimationWithAvater:(id)arg1 prefixName:(id)arg2 shootingAnimation:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 withModel:(id)arg2;

@end

