//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKCarHailingOrder, NSAttributedString, NSString;

@interface MBKDriverLineViewModel : NSObject
{
    _Bool _isFinished;
    NSString *_photoSrcString;
    NSString *_nameString;
    NSString *_licensePlatesString;
    NSString *_taxiCompanyString;
    NSString *_phoneNumString;
    NSAttributedString *_driverRateAttributeString;
    MBKCarHailingOrder *_order;
}

@property(retain, nonatomic) MBKCarHailingOrder *order; // @synthesize order=_order;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) NSAttributedString *driverRateAttributeString; // @synthesize driverRateAttributeString=_driverRateAttributeString;
@property(copy, nonatomic) NSString *phoneNumString; // @synthesize phoneNumString=_phoneNumString;
@property(copy, nonatomic) NSString *taxiCompanyString; // @synthesize taxiCompanyString=_taxiCompanyString;
@property(copy, nonatomic) NSString *licensePlatesString; // @synthesize licensePlatesString=_licensePlatesString;
@property(copy, nonatomic) NSString *nameString; // @synthesize nameString=_nameString;
@property(copy, nonatomic) NSString *photoSrcString; // @synthesize photoSrcString=_photoSrcString;
- (void).cxx_destruct;
- (id)attributeWithString:(id)arg1;
- (id)init;

@end

