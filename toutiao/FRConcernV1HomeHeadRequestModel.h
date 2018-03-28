//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface FRConcernV1HomeHeadRequestModel : TTRequestModel
{
    NSString *_concern_id;
    NSString<Optional> *_city;
    NSNumber<Optional> *_longitude;
    NSNumber<Optional> *_latitude;
}

@property(retain, nonatomic) NSNumber<Optional> *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber<Optional> *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString<Optional> *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *concern_id; // @synthesize concern_id=_concern_id;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
