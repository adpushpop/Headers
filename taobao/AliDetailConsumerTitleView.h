//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AliDetailServiceAreaModel, NSString, UIImageView, UILabel;

@interface AliDetailConsumerTitleView : UIView
{
    NSString *_eventToken;
    AliDetailServiceAreaModel *_areaModel;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_rightView;
    UILabel *_lbllinkdesc;
    UILabel *_lblmore;
}

@property(retain, nonatomic) UILabel *lblmore; // @synthesize lblmore=_lblmore;
@property(retain, nonatomic) UILabel *lbllinkdesc; // @synthesize lbllinkdesc=_lbllinkdesc;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AliDetailServiceAreaModel *areaModel; // @synthesize areaModel=_areaModel;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tapItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 serviceAreaModel:(id)arg2;

@end

