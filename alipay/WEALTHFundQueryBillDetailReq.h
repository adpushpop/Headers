//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEALTHFUNDToString.h"

@class NSString;

@interface WEALTHFundQueryBillDetailReq : WEALTHFUNDToString
{
    NSString *_serviceName;
    NSString *_filterCodition;
    NSString *_billNo;
    NSString *_subTransCode;
}

@property(retain, nonatomic) NSString *subTransCode; // @synthesize subTransCode=_subTransCode;
@property(retain, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(retain, nonatomic) NSString *filterCodition; // @synthesize filterCodition=_filterCodition;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;

@end

