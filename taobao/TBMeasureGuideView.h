//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface TBMeasureGuideView : UIView
{
    _Bool _isShowed;
    UIImageView *_imageView;
    UIButton *_closeButton;
}

@property(nonatomic) _Bool isShowed; // @synthesize isShowed=_isShowed;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)hideGuidView;
- (void)showGuideView;
- (void)show;

@end
