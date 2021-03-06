//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, KS_user_info, UIImageView, UILabel;

@interface KSLiveQuizCountDownView : UIView
{
    KS_user_info *_anchor;
    double _totalDuration;
    double _duration;
    UIImageView *_imageView;
    UILabel *_countView;
    UILabel *_watchView;
    UIImageView *_alertView;
    CALayer *_progressContainerLayer;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_alertProgressLayer;
}

@property(retain, nonatomic) CAShapeLayer *alertProgressLayer; // @synthesize alertProgressLayer=_alertProgressLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CALayer *progressContainerLayer; // @synthesize progressContainerLayer=_progressContainerLayer;
@property(retain, nonatomic) UIImageView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UILabel *watchView; // @synthesize watchView=_watchView;
@property(retain, nonatomic) UILabel *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) KS_user_info *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (void)alert;
- (CDUnknownBlockType)audienceCountFinishAnimation;
- (CDUnknownBlockType)anchorCountFinishAnimation;
- (void)alertWithCountDown:(long long)arg1 finishAnimation:(CDUnknownBlockType)arg2;
- (void)startCountDown;
- (void)resetAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)watchAnimation;
- (void)showWatch;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

