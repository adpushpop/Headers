//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

@class AliDetailPtGoodsmatchingModel, UIImageView;

@interface AliDetailGoodsmatchingComponent : AliProductDetailComponent
{
    AliDetailPtGoodsmatchingModel *_goodsMatchingModel;
    double _titleHight;
    UIImageView *_bgImageView;
}

+ (double)plusFontSize;
+ (id)plusFont;
+ (double)textFontSize;
+ (id)textFont;
+ (double)getNearestHeight:(struct CGSize)arg1 tempHeight:(double)arg2 realWidth:(double)arg3;
+ (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) double titleHight; // @synthesize titleHight=_titleHight;
@property(retain, nonatomic) AliDetailPtGoodsmatchingModel *goodsMatchingModel; // @synthesize goodsMatchingModel=_goodsMatchingModel;
- (void).cxx_destruct;
- (void)singleTap:(id)arg1;
- (void)addPulseWithView:(id)arg1;
- (void)createMainView;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;

@end

