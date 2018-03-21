//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSRechargeViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class KSMarquisePageControl, NSString, UIActivityIndicatorView, UIButton, UICollectionView, UIImageView, UILabel, UIView, UIWindow;

@interface _KSPanelRechargeViewController : KSRechargeViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isInTransition;
    UIWindow *_window;
    UIView *_backgroundView;
    UIView *_contentView;
    UIView *_titleView;
    UIView *_bottomBar;
    UILabel *_balanceTitleLabel;
    UIImageView *_balanceIcon;
    UILabel *_balanceLabel;
    UIActivityIndicatorView *_balanceLoadingView;
    UIButton *_exchangeKwaiCoinButton;
    UIButton *_closeButton;
    KSMarquisePageControl *_pageControl;
    UICollectionView *_collectionView;
}

+ (id)rechargeViewControllerWithUsingLandcapeMode:(_Bool)arg1;
@property(nonatomic) _Bool isInTransition; // @synthesize isInTransition=_isInTransition;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) KSMarquisePageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *exchangeKwaiCoinButton; // @synthesize exchangeKwaiCoinButton=_exchangeKwaiCoinButton;
@property(retain, nonatomic) UIActivityIndicatorView *balanceLoadingView; // @synthesize balanceLoadingView=_balanceLoadingView;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UIImageView *balanceIcon; // @synthesize balanceIcon=_balanceIcon;
@property(retain, nonatomic) UILabel *balanceTitleLabel; // @synthesize balanceTitleLabel=_balanceTitleLabel;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (unsigned char)pageCount;
- (unsigned char)itemCountEachPage;
- (_Bool)isTouchesInContentView:(id)arg1;
- (_Bool)shouldAutorotate;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)didTapRefreshWithloadingErrorView:(id)arg1;
- (void)kwaiCoinChanged;
- (void)dataSourceChanged;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)show;
- (void)makeViewResponsive:(_Bool)arg1;
- (void)showErrorWithMessage:(id)arg1;
- (double)portraitContentHeight;
- (struct CGSize)collectionViewSize;
- (void)makeContentViewContraints;
- (unsigned long long)backgroundViewEdges;
- (void)setupCollectionViewLayout:(id)arg1;
- (Class)itemCellClass;
- (void)doDismissAnimation;
- (void)prepareForDismissAnimation;
- (void)doShowAnimation;
- (void)prepareForShowAnimation;
- (void)setCanExchangeCoins:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
