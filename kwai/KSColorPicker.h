//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView;

@interface KSColorPicker : UIControl
{
    UIImageView *_colorPickerBar;
    UIColor *_currentColor;
}

@property(retain, nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
@property(retain, nonatomic) UIImageView *colorPickerBar; // @synthesize colorPickerBar=_colorPickerBar;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)handleTouch:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

