//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIScrollView;

@interface KSSlideCommentPanHandle : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _frozenWhenTouchTheTop;
    _Bool _isOnTop;
    _Bool _isTouchInTopBar;
    _Bool _isMoving;
    _Bool _isScrolling;
    double _closeThreshold;
    CDUnknownBlockType _progressChanged;
    CDUnknownBlockType _touchUpAction;
    double _currentTranslationY;
    double _startY;
    UIScrollView *_view;
    UIPanGestureRecognizer *_gestureRecognizer;
    struct CGPoint _currentContentOffset;
    struct CGRect _topBarFrame;
}

@property(retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak UIScrollView *view; // @synthesize view=_view;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) _Bool isTouchInTopBar; // @synthesize isTouchInTopBar=_isTouchInTopBar;
@property(nonatomic) _Bool isOnTop; // @synthesize isOnTop=_isOnTop;
@property(nonatomic) double startY; // @synthesize startY=_startY;
@property(nonatomic) double currentTranslationY; // @synthesize currentTranslationY=_currentTranslationY;
@property(nonatomic) struct CGPoint currentContentOffset; // @synthesize currentContentOffset=_currentContentOffset;
@property(copy, nonatomic) CDUnknownBlockType touchUpAction; // @synthesize touchUpAction=_touchUpAction;
@property(copy, nonatomic) CDUnknownBlockType progressChanged; // @synthesize progressChanged=_progressChanged;
@property(nonatomic) struct CGRect topBarFrame; // @synthesize topBarFrame=_topBarFrame;
@property(nonatomic) _Bool frozenWhenTouchTheTop; // @synthesize frozenWhenTouchTheTop=_frozenWhenTouchTheTop;
@property(nonatomic) double closeThreshold; // @synthesize closeThreshold=_closeThreshold;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setupContentOffsetObvserver:(id)arg1;
- (void)ks_action:(id)arg1;
- (void)setupGestureAction:(id)arg1;
- (id)initWithScrollView:(id)arg1 panGestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
