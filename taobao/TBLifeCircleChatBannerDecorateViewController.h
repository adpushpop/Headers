//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class CAGradientLayer, NSString, UILabel, UIView;

@interface TBLifeCircleChatBannerDecorateViewController : TBViewController
{
    UIView *_backgroundView;
    UIView *_shopAddressView;
    UILabel *_iconView;
    UILabel *_addressLabel;
    UILabel *_timeLabel;
    UIView *_shopStatus;
    CAGradientLayer *_gradientLayer;
    NSString *_address;
    NSString *_time;
    NSString *_storeStatusType;
    NSString *_storeName;
    NSString *_lng;
    NSString *_lat;
    NSString *_storeId;
}

@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(copy, nonatomic) NSString *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(copy, nonatomic) NSString *storeStatusType; // @synthesize storeStatusType=_storeStatusType;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *shopStatus; // @synthesize shopStatus=_shopStatus;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *shopAddressView; // @synthesize shopAddressView=_shopAddressView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)tap;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initVCWithParams:(id)arg1 size:(struct CGSize)arg2;

@end
