//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface TTFclient_v1_wx_share_init_response : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errNo; // @dynamic errNo;
@property(copy, nonatomic) NSString *errTips; // @dynamic errTips;
@property(nonatomic) int shareCountLimit; // @dynamic shareCountLimit;
@property(retain, nonatomic) NSMutableArray *shareInfoArray; // @dynamic shareInfoArray;
@property(readonly, nonatomic) unsigned long long shareInfoArray_Count; // @dynamic shareInfoArray_Count;
@property(nonatomic) int totalShareCount; // @dynamic totalShareCount;
@property(nonatomic) int userShareCount; // @dynamic userShareCount;

@end

