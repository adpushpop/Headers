//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchUIUtilityBaseButton.h"

@class NSString, UILabel;

@interface TBSearchXFilterPriceRangeButton : TBXSearchUIUtilityBaseButton
{
    UILabel *_priceRangeLabel;
    UILabel *_priceSelectionLabel;
    NSString *_priceRange;
}

@property(retain, nonatomic) NSString *priceRange; // @synthesize priceRange=_priceRange;
@property(retain, nonatomic) UILabel *priceSelectionLabel; // @synthesize priceSelectionLabel=_priceSelectionLabel;
@property(retain, nonatomic) UILabel *priceRangeLabel; // @synthesize priceRangeLabel=_priceRangeLabel;
- (void).cxx_destruct;
- (void)resetButtonStyle;
- (void)setButtonStyle:(unsigned long long)arg1;
- (id)addWanToString:(id)arg1;
- (void)setButtonWithStartPrice:(id)arg1 endPrice:(id)arg2 percent:(id)arg3;
- (void)priceRangeButtonInit;

@end

