//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class MSWeakTimer, NSDate, NSString, NSTimer, UIColor, UIImageView, UILabel;

@interface MBKActivityHUD : UIView <CAAnimationDelegate>
{
    UILabel *label;
    float _opacity;
    NSString *_labelText;
    double _graceTime;
    UIColor *_color;
    MSWeakTimer *_graceTimer;
    NSTimer *_minShowTimer;
    NSDate *_showStarted;
    UIImageView *_backgroundImageView;
    UIImageView *_routateImageView;
    struct CGSize _size;
}

+ (id)allHUDsForView:(id)arg1;
+ (id)HUDForView:(id)arg1;
+ (id)showHUDAddedTo:(id)arg1 inSeconds:(long long)arg2 animated:(_Bool)arg3;
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2 graceTime:(double)arg3;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
+ (id)sharedView;
+ (void)dismiss;
+ (void)showWithStatus:(id)arg1;
+ (void)show;
@property(retain, nonatomic) UIImageView *routateImageView; // @synthesize routateImageView=_routateImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain) NSDate *showStarted; // @synthesize showStarted=_showStarted;
@property struct CGSize size; // @synthesize size=_size;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer=_minShowTimer;
@property(retain) MSWeakTimer *graceTimer; // @synthesize graceTimer=_graceTimer;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double graceTime; // @synthesize graceTime=_graceTime;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (void)hideDelayed:(id)arg1;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)layoutSubviews;
- (void)updateIndicators;
- (void)setupLabel;
- (void)showInner:(_Bool)arg1;
- (void)graceTimerHandler:(id)arg1;
- (void)show:(_Bool)arg1;
- (void)animatedCommit;
- (void)hide:(_Bool)arg1;
- (id)initWithWindow:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showInKeyWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
