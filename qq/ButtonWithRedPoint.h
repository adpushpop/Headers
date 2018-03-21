//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImage, UIImageView;

@interface ButtonWithRedPoint : UIButton
{
    UIImageView *_redPoint;
    UIImageView *_backgroupImageView;
    NSString *_norBgImgName;
    NSString *_highLightBgImgName;
    NSString *_selectedBgImgName;
    int _xo;
    UIImage *_norBgImg;
    UIImage *_highBgImg;
    UIImage *_selectBgImg;
}

@property(retain, nonatomic) UIImage *selectBgImg; // @synthesize selectBgImg=_selectBgImg;
@property(retain, nonatomic) UIImage *highBgImg; // @synthesize highBgImg=_highBgImg;
@property(retain, nonatomic) UIImage *norBgImg; // @synthesize norBgImg=_norBgImg;
@property(retain, nonatomic) NSString *selectedBgImgName; // @synthesize selectedBgImgName=_selectedBgImgName;
@property(retain, nonatomic) NSString *highLightBgImgName; // @synthesize highLightBgImgName=_highLightBgImgName;
@property(retain, nonatomic) NSString *norBgImgName; // @synthesize norBgImgName=_norBgImgName;
@property(retain, nonatomic) UIImageView *redPoint; // @synthesize redPoint=_redPoint;
- (void)dealloc;
- (void)reloadAppearance;
- (void)updateBgImgView;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
