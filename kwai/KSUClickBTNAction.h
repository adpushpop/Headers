//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSString;

@interface KSUClickBTNAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64Array *clickListParamsArray; // @dynamic clickListParamsArray;
@property(readonly, nonatomic) unsigned long long clickListParamsArray_Count; // @dynamic clickListParamsArray_Count;
@property(copy, nonatomic) NSString *elementName; // @dynamic elementName;

@end
