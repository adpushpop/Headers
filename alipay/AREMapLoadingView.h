//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ARELoadingHUD, AREMemoTipsView, UILabel;

@interface AREMapLoadingView : UIView
{
    unsigned long long _status;
    ARELoadingHUD *_loadingView;
    AREMemoTipsView *_memotipsView;
    UILabel *_loadingTipsView;
}

@property(retain, nonatomic) UILabel *loadingTipsView; // @synthesize loadingTipsView=_loadingTipsView;
@property(retain, nonatomic) AREMemoTipsView *memotipsView; // @synthesize memotipsView=_memotipsView;
@property(retain, nonatomic) ARELoadingHUD *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)dismiss;
- (void)updateLoadingViewStatus:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
