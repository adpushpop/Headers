//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, UIPanGestureRecognizer, UIView, UIViewController;
@protocol TBNavigationControllerDelegate;

@interface TBNavigationController : TBViewController
{
    NSMutableArray *_viewControllers;
    UIView *_transitionView;
    UIViewController *_wrapperTopViewController;
    _Bool _isUpdateVisibleController;
    long long _visibleViewControllerTransition;
    UIViewController *_visibleViewController;
    UIViewController *_visibleWrapperController;
    UIView *_panToWrapperView;
    UIView *_panFromWrapperView;
    UIView *_panMaskView;
    UIViewController *_panTopViewController;
    UIViewController *_panToWrapperController;
    UIViewController *_panFromWrapperController;
    NSDate *panGestureBeganDate;
    NSDate *panGestureEndDate;
    double beginPanX;
    double beginPanY;
    _Bool panToCtrlHidesBottom;
    _Bool panFromCtrlHidesBottom;
    _Bool isResponseBackPanGesture;
    _Bool _isAnimating;
    _Bool _isPanGestureAnimating;
    id <TBNavigationControllerDelegate> _delegate;
    NSMutableDictionary *_wrapperRelationShip;
    NSMutableArray *_operationQueue;
    NSDate *_animateBeginDate;
    NSDate *_animateEndDate;
    UIPanGestureRecognizer *_panGesture;
    long long _naviOperation;
}

+ (void)setSwapGestureEndPostion:(double)arg1;
+ (void)setSwapGestureStartPostion:(double)arg1;
+ (void)setAnimationTime:(double)arg1;
+ (double)animationTime;
+ (_Bool)tbNeedToolbar;
+ (_Bool)useSystemTransitionBehavior;
@property(nonatomic) long long naviOperation; // @synthesize naviOperation=_naviOperation;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) NSDate *animateEndDate; // @synthesize animateEndDate=_animateEndDate;
@property(retain, nonatomic) NSDate *animateBeginDate; // @synthesize animateBeginDate=_animateBeginDate;
@property(retain, nonatomic) NSMutableArray *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool isPanGestureAnimating; // @synthesize isPanGestureAnimating=_isPanGestureAnimating;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSMutableDictionary *wrapperRelationShip; // @synthesize wrapperRelationShip=_wrapperRelationShip;
@property(nonatomic) __weak id <TBNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)topSecondeViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
@property(retain, nonatomic) NSArray *viewControllers;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2 transitionStyle:(long long)arg3;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView *transitionView;
- (void)popViewControllerWithSingleViews:(id)arg1;
- (void)pushViewControllerWithSingleViews:(id)arg1;
- (_Bool)popToTopViewController:(id)arg1;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 transitionParams:(id)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 transitionStyle:(long long)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)adjustStatusBarStyleForVC:(id)arg1;
- (void)adjustStatusBarStyleForWrapperViewController:(id)arg1;
- (void)synchronizeMoreState;
- (void)setNeedUpdateVisibleController;
- (void)updateVisibleViewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIViewController *wrapperTopViewController;
- (id)initWithRootViewController:(id)arg1;
- (id)wrapperController:(id)arg1;
- (id)sharedMaskView;
- (void)popVCForward:(id)arg1 andFrom:(id)arg2;
- (void)clearPanGestureVC;
- (void)pushVCBack:(id)arg1 andFrom:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)dealloc;
- (_Bool)bSupportLandscape:(id)arg1;
- (void)removeSubController:(id)arg1 navigateType:(id)arg2 animated:(_Bool)arg3;
- (void)addSubcontroller:(id)arg1 navigateType:(id)arg2 animated:(_Bool)arg3;
- (void)addSubcontroller:(id)arg1 navigateType:(id)arg2 animated:(_Bool)arg3 naviParams:(id)arg4;
- (void)monitorPopFromVC:(id)arg1 toVC:(id)arg2;
- (void)monitorPushFromVC:(id)arg1 toVC:(id)arg2;
- (void)removeSingleViews:(id)arg1;
- (void)addSingleViews:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *mapSingleViews;

@end

