//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

@class TBLiveCPLiveMenuGroupModel, TBLiveHPUpDownScrollView, UIImageView, UIView;

@interface TBLiveHPJieMuDanCell : TBLiveTableViewCell
{
    UIImageView *_headImageView;
    TBLiveHPUpDownScrollView *_upDownScrollView;
    TBLiveCPLiveMenuGroupModel *_menuModel;
    UIView *_cellView;
}

+ (struct CGSize)viewSizeWithModel:(id)arg1;
@property(retain, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
@property(retain, nonatomic) TBLiveCPLiveMenuGroupModel *menuModel; // @synthesize menuModel=_menuModel;
@property(retain, nonatomic) TBLiveHPUpDownScrollView *upDownScrollView; // @synthesize upDownScrollView=_upDownScrollView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)refreshWithModel:(id)arg1;
- (void)setupSubview;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
