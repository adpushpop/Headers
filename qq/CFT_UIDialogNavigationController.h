//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UICustomNaviBarViewController.h>

@class NSMutableArray, UIImageView, UINavigationController, UIViewController;

@interface CFT_UIDialogNavigationController : CFT_UICustomNaviBarViewController
{
    UIImageView *_backgroundImageView;
    NSMutableArray *_viewControllerArray;
    int _aniType;
    _Bool _animating;
    _Bool _notifyClosed;
    _Bool _notifyQuitWallet;
    UINavigationController *_navController;
    _Bool _recoverNavAtDidDisappear;
    _Bool _bgNoBlur;
    int _presentType;
    int _popin_ani_type;
    UIViewController *_presentFromViewController;
}

@property(nonatomic) int popin_ani_type; // @synthesize popin_ani_type=_popin_ani_type;
@property(nonatomic) _Bool bgNoBlur; // @synthesize bgNoBlur=_bgNoBlur;
@property(nonatomic) _Bool recoverNavAtDidDisappear; // @synthesize recoverNavAtDidDisappear=_recoverNavAtDidDisappear;
@property(nonatomic) int presentType; // @synthesize presentType=_presentType;
@property(nonatomic) UIViewController *presentFromViewController; // @synthesize presentFromViewController=_presentFromViewController;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismiss;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)showAt:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 PopinAniType:(int)arg2;
- (id)genBackgroundImage:(id)arg1;
- (id)genScreenShotImage:(id)arg1;
- (id)genScreenShotView:(id)arg1;
- (void)recoverQQNavigationController;
- (void)presentRootViewController;
- (void)setSceneValue:(id)arg1;
- (void)setScene:(int)arg1;
- (id)getCurrentViewController;
- (id)getPreViewController;
- (id)getRootViewController;
- (void)dealloc;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

