//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MBCircularProgressBarView, UIImageView, UILabel, UIView;

@interface QZLVThemeSelectCell : UICollectionViewCell
{
    MBCircularProgressBarView *_progressView;
    UIView *_maskView;
    UIImageView *_bgImageView;
    UILabel *_descLabel;
    UIImageView *_selectedImgView;
}

+ (id)identifier;
@property(retain, nonatomic) UIImageView *selectedImgView; // @synthesize selectedImgView=_selectedImgView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)setProgressHiiden:(_Bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setCellSeleced:(_Bool)arg1;
- (void)setImgUrl:(id)arg1;
- (void)prepareForReuse;
- (void)layoutViews;
- (void)configSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
