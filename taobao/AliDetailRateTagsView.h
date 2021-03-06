//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol AliDetailRateTagItemModel;

@interface AliDetailRateTagsView : UIView
{
    NSArray<AliDetailRateTagItemModel> *_rateTagArray;
    long long _lineNumber;
    NSMutableArray *_rateTypes;
    NSMutableArray *_buttonPools;
}

+ (id)font;
+ (double)getRateButtonWidth:(id)arg1;
+ (struct CGSize)getTagsSizeFromArray:(id)arg1 position:(struct CGPoint)arg2 maxWidth:(long long)arg3;
+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *buttonPools; // @synthesize buttonPools=_buttonPools;
@property(retain, nonatomic) NSMutableArray *rateTypes; // @synthesize rateTypes=_rateTypes;
@property(nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(copy, nonatomic) NSArray<AliDetailRateTagItemModel> *rateTagArray; // @synthesize rateTagArray=_rateTagArray;
- (void).cxx_destruct;
- (void)rateTagBtnClick:(id)arg1;
- (id)runtimeGetValue:(id)arg1 variableName:(id)arg2 object:(id)arg3;
- (void)layoutSubviews;
- (void)addImageToButotn:(id)arg1 icon:(id)arg2;
- (void)setButtonContent:(id)arg1 model:(id)arg2;
- (void)setButtonOffset:(id)arg1;
- (void)setButtonStyle:(id)arg1 bgColor:(id)arg2;
- (id)bgColor:(long long)arg1;
- (void)generateTagFromArray:(_Bool)arg1;
- (void)setTagArray:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

