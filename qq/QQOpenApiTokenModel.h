//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface QQOpenApiTokenModel : NSObject
{
    _Bool _isValid;
    NSArray *_apiList;
    long long _frequency;
    double _createTime;
    long long _timeOut;
    int _xo;
}


// Remaining properties
@property(retain, nonatomic) NSArray *apiList; // @dynamic apiList;
@property(nonatomic) double createTime; // @dynamic createTime;
@property(nonatomic) long long frequency; // @dynamic frequency;
@property(nonatomic) _Bool isValid; // @dynamic isValid;
@property(nonatomic) long long timeOut; // @dynamic timeOut;
@end

