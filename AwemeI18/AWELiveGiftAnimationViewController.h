//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWELiveBigGiftPalletView, AWELiveLocalPresentModel, AWELivePresentCacheManager, UIView, YYAnimatedImageView;

@interface AWELiveGiftAnimationViewController : UIViewController
{
    _Bool _isAnimating;
    _Bool _setupKVO;
    _Bool _shutdown;
    UIView *_palletBaseView;
    AWELiveLocalPresentModel *_model;
    CDUnknownBlockType _completion;
    long long _startCount;
    long long _endCount;
    long long _increase;
    YYAnimatedImageView *_webpView;
    AWELiveBigGiftPalletView *_bigView;
    AWELivePresentCacheManager *_cacheManager;
}

@property(nonatomic) _Bool shutdown; // @synthesize shutdown=_shutdown;
@property(retain, nonatomic) AWELivePresentCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) AWELiveBigGiftPalletView *bigView; // @synthesize bigView=_bigView;
@property(nonatomic) _Bool setupKVO; // @synthesize setupKVO=_setupKVO;
@property(retain, nonatomic) YYAnimatedImageView *webpView; // @synthesize webpView=_webpView;
@property(nonatomic) long long increase; // @synthesize increase=_increase;
@property(nonatomic) long long endCount; // @synthesize endCount=_endCount;
@property(nonatomic) long long startCount; // @synthesize startCount=_startCount;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AWELiveLocalPresentModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIView *palletBaseView; // @synthesize palletBaseView=_palletBaseView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startWebpAnimation;
- (void)forceDisappear;
- (void)startAnimationWithPresent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;

@end

