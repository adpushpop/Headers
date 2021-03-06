//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKBaseRefreshView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface MovieSDKPullToRefreshView : MovieSDKBaseRefreshView
{
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
    UIImageView *_circleImageView;
    UIActivityIndicatorView *_indicatorView;
    _Bool animate;
    _Bool animationCompleting;
    _Bool animationPending;
    _Bool animating;
}

- (void).cxx_destruct;
- (double)textWidthForText:(id)arg1 font:(id)arg2;
- (void)circlingAnimation;
- (void)startCircling;
- (void)stopSpin;
- (void)startSpin;
- (void)spinWithOptions:(unsigned long long)arg1;
- (struct CGSize)textSizeWithFont:(id)arg1 font:(id)arg2;
- (void)flipImage:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showTipsView:(_Bool)arg1;
- (void)showLoadingView:(_Bool)arg1;

@end

