//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSMySettingsUserInfo : TBJSONModel
{
    NSString *_userLogo;
    NSString *_jianghuNick;
    NSString *_jianghuNickNotice;
    NSString *_userNick;
    NSString *_QRCodeUrl;
    NSString *_address;
    NSString *_city;
    NSString *_job;
    NSString *_gender;
}

@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *job; // @synthesize job=_job;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *QRCodeUrl; // @synthesize QRCodeUrl=_QRCodeUrl;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *jianghuNickNotice; // @synthesize jianghuNickNotice=_jianghuNickNotice;
@property(copy, nonatomic) NSString *jianghuNick; // @synthesize jianghuNick=_jianghuNick;
@property(copy, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
- (void).cxx_destruct;

@end
