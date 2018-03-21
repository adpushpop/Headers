//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TXDPayQueryModel : TBJSONModel
{
    _Bool _success;
    NSString *_actionId;
    unsigned long long _status;
    unsigned long long _resultCode;
    NSString *_orderId;
    NSString *_barcode;
    NSString *_alipayTradeId;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *alipayTradeId; // @synthesize alipayTradeId=_alipayTradeId;
@property(copy, nonatomic) NSString *barcode; // @synthesize barcode=_barcode;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned long long resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end
