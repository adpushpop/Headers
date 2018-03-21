//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (TBMagicCube)
@property(copy, nonatomic) CDUnknownBlockType didScrollBlock;
@property(nonatomic) _Bool allowSubScrollBounces;
@property(nonatomic) _Bool isSolveLocked;
- (void)setMcProxy:(id)arg1;
- (id)mcProxy;
@property(nonatomic) struct UIEdgeInsets mcBoundsInset;
- (struct CGRect)boundsFrame;
- (void)setMcChildScrollView:(id)arg1;
- (id)mcChildScrollView;
@property(nonatomic) __weak UIScrollView *mcParentScrollView;
- (id)nextResponseScrollView;
- (void)mc_setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mc_scrollToBottom:(_Bool)arg1;
- (void)mc_scrollToTop:(_Bool)arg1;
- (void)mc_unlockForScrollSolve;
- (void)mc_lockForScrollSolve;
- (void)mc_removeChildScrollView:(id)arg1;
- (void)mc_addChildScrollView:(id)arg1;
- (void)mc_reset;
- (void)startScrollViewProxy;
- (void)adjustContentOffset:(id)arg1;
- (void)mc_solveScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)mc_solveScrollViewDidEndDecelerating:(id)arg1;
- (void)setContentOffsetIfNeeded:(struct CGPoint)arg1;
- (void)mc_solveScrollViewDidScroll:(id)arg1;
@end
