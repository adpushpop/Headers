//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class UIImageView;

@interface FFBuyInvalidBarCell : TBExtBuyBaseCell
{
    UIImageView *_titleLabel;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) UIImageView *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
