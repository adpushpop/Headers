//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNLogisticsDetailCellModel.h"

@class NSString;

@interface CNLogisticsDetailTerminalDeliveryModel : CNLogisticsDetailCellModel
{
    NSString *_text;
    NSString *_phone;
    unsigned long long _deliveryType;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long deliveryType; // @synthesize deliveryType=_deliveryType;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (double)cellHeight;
- (Class)cellClass;

@end
