//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSSDKJsonObject.h"

@class MSSDKNumberInfo, NSDate, NSString;

@interface MSSDKLocalNumberInfo : MSSDKJsonObject
{
    NSString *_number;
    long long _type;
    NSString *_name;
    NSDate *_time;
    MSSDKNumberInfo *_remoteNumInfo;
}

@property(retain, nonatomic) MSSDKNumberInfo *remoteNumInfo; // @synthesize remoteNumInfo=_remoteNumInfo;
@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)toJSONObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
