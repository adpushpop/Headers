//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshHeader.h"

@class UIImageView;

@interface AWEIMMessageListRefreshHeader : MJRefreshHeader
{
    UIImageView *_loadingview;
}

@property(retain, nonatomic) UIImageView *loadingview; // @synthesize loadingview=_loadingview;
- (void).cxx_destruct;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

