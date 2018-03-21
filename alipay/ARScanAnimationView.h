//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, UIBezierPath, UIButton, UIImageView, UILabel;

@interface ARScanAnimationView : UIView
{
    CAShapeLayer *_backgroundLayer;
    UIView *_innerScanView;
    CAShapeLayer *_innerHexagonShape;
    UIBezierPath *_hexagonPath;
    CALayer *_scanLineLayer;
    UIImageView *_outerScanView;
    UILabel *_scanTipsLabel;
    UIButton *_recognizedObjButton;
    CDUnknownBlockType _actionBlock;
}

- (void).cxx_destruct;
- (void)handleTapRecObj;
- (void)resetTipsLabel;
- (void)updateTipsLabelWithTips:(id)arg1 tapAction:(CDUnknownBlockType)arg2;
- (struct CGRect)gridRect;
- (void)stopScanAnimation;
- (void)lockScanAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeScanAnimation;
- (void)startScanLineAnimation;
- (void)startScanAnimation;
- (id)roundedPolygonPathWithRect:(struct CGRect)arg1 lineWidth:(double)arg2 sides:(long long)arg3 cornerRadius:(double)arg4;
- (void)setupSubviewsPaddingTop:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 scanViewPaddingTop:(double)arg2;

@end
