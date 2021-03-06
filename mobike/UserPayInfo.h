//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Mobike_Controller.h"

@class CUserInfo, NSNumber, NSString;

@interface UserPayInfo : Mobike_Controller
{
    unsigned long long _platform;
    long long _index;
    long long _type;
    NSString *_uid;
    CUserInfo *_userInfo;
    long long _totalfee;
    NSString *_openId;
    NSString *_accessToken;
    NSString *_refreshToken;
    double _expirationDate;
    long long _status;
    NSNumber *_pagetimestamp;
    long long _pageSize;
    long long _cardId;
}

@property(nonatomic) long long cardId; // @synthesize cardId=_cardId;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSNumber *pagetimestamp; // @synthesize pagetimestamp=_pagetimestamp;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(nonatomic) long long totalfee; // @synthesize totalfee=_totalfee;
@property(copy, nonatomic) CUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long type; // @synthesize type=_type;
@property long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
- (void).cxx_destruct;

@end

