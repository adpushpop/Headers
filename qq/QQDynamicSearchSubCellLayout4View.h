//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQDynamicSearchSubCellBaseView.h>

@class UILabel, UIView;

@interface QQDynamicSearchSubCellLayout4View : QQDynamicSearchSubCellBaseView
{
    double _contentViewHeight;
    UILabel *_titleLabel;
    UILabel *_rightTextLabel;
    UIView *_itemBGView;
}

@property(retain, nonatomic) UIView *itemBGView; // @synthesize itemBGView=_itemBGView;
@property(retain, nonatomic) UILabel *rightTextLabel; // @synthesize rightTextLabel=_rightTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
- (double)calHeightForCell;
- (void)resetContentViewFrame;
- (double)calContentViewWidth;
- (double)calContentViewHeight;
- (void)layoutContentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
