//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, WBCanvasListViewController;

@interface WBCanvasListViewAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _animatedDismissing;
    unsigned long long _animatorType;
    WBCanvasListViewController *_canvasViewController;
}

+ (id)animatorForType:(unsigned long long)arg1;
@property(nonatomic) _Bool animatedDismissing; // @synthesize animatedDismissing=_animatedDismissing;
@property(nonatomic) __weak WBCanvasListViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
@property(nonatomic) unsigned long long animatorType; // @synthesize animatorType=_animatorType;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateDismissTransition:(id)arg1;
- (void)animatePresentTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

