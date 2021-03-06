//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TTAlphaThemedButton, TTVDetailFollowRecommendView, UIPanGestureRecognizer;

@interface TTVDetailFollowRecommendViewController : SSViewControllerBase <UIGestureRecognizerDelegate>
{
    _Bool _isDraggingView;
    TTVDetailFollowRecommendView *_recommendView;
    TTAlphaThemedButton *_backButton;
    CDUnknownBlockType _backActionFired;
    UIPanGestureRecognizer *_pan;
    double _lastY;
    double _originY;
}

@property(nonatomic) _Bool isDraggingView; // @synthesize isDraggingView=_isDraggingView;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(nonatomic) double lastY; // @synthesize lastY=_lastY;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(copy, nonatomic) CDUnknownBlockType backActionFired; // @synthesize backActionFired=_backActionFired;
@property(retain, nonatomic) TTAlphaThemedButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) TTVDetailFollowRecommendView *recommendView; // @synthesize recommendView=_recommendView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)pan:(id)arg1;
- (void)viewDidLoad;
- (id)initWithPGCViewModel:(id)arg1 ViewWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

