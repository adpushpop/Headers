//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString;

@interface YXMillionnaireBaseModel : YXModel
{
    long long _maxTime_;
    long long _utc;
    unsigned long long _status;
    NSString *_scid_;
    NSString *_uuid_;
}

@property(copy, nonatomic) NSString *uuid_; // @synthesize uuid_=_uuid_;
@property(copy, nonatomic) NSString *scid_; // @synthesize scid_=_scid_;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long utc; // @synthesize utc=_utc;
@property(nonatomic) long long maxTime_; // @synthesize maxTime_=_maxTime_;
- (void).cxx_destruct;

@end

