//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage;
@protocol FBPaddingViewDelegate;

@interface FBPaddingView : UIView
{
    UIColor *_normalColor;
    UIColor *_disableColor;
    UIColor *_activeColor;
    UIImage *_normalImage;
    UIImage *_disableImage;
    UIImage *_activeImage;
    id <FBPaddingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPaddingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *activeImage; // @synthesize activeImage=_activeImage;
@property(retain, nonatomic) UIImage *disableImage; // @synthesize disableImage=_disableImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UIColor *activeColor; // @synthesize activeColor=_activeColor;
@property(retain, nonatomic) UIColor *disableColor; // @synthesize disableColor=_disableColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
