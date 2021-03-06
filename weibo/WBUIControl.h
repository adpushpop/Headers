//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAsyncDrawingView.h"

@class NSMutableArray;

@interface WBUIControl : WBAsyncDrawingView
{
    NSMutableArray *_targetActions;
    _Bool _enabled;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _tracking;
    _Bool _touchInside;
    long long _contentHorizontalAlignment;
    long long _contentVerticalAlignment;
    struct CGPoint _touchStartPoint;
}

@property(nonatomic) struct CGPoint touchStartPoint; // @synthesize touchStartPoint=_touchStartPoint;
@property(readonly, nonatomic, getter=isTouchInside) _Bool touchInside; // @synthesize touchInside=_touchInside;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long contentVerticalAlignment; // @synthesize contentVerticalAlignment=_contentVerticalAlignment;
@property(nonatomic) long long contentHorizontalAlignment; // @synthesize contentHorizontalAlignment=_contentHorizontalAlignment;
- (void).cxx_destruct;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)_sendActionsForControlEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (unsigned long long)allControlEvents;
- (id)allTargets;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)_targetActions;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) _Bool redrawsAutomaticallyWhenStateChange;
- (void)_stateDidChange;
- (void)_stateWillChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

