//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshAutoFooter.h"

@class UIActivityIndicatorView, UILabel, UITapGestureRecognizer;

@interface HTSLiveTableViewFooter : MJRefreshAutoFooter
{
    CDUnknownBlockType _noMoreDataClickBlock;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    UITapGestureRecognizer *_tapGesture;
}

@property(nonatomic) __weak UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType noMoreDataClickBlock; // @synthesize noMoreDataClickBlock=_noMoreDataClickBlock;
- (void).cxx_destruct;
- (void)handleTapInView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

