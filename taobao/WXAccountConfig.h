//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WXAccountConfig : NSObject
{
    NSNumber *_appId;
    NSString *_loginName;
    long long _clientType;
    NSString *_clientVersion;
    long long _domainType;
    NSString *_accountPrefix;
    NSString *_multiSignAccountPrefix;
    NSString *_appkey;
}

+ (id)accountConfigWithLoginName:(id)arg1 clientType:(long long)arg2 clientVersion:(id)arg3 domainType:(long long)arg4 accountPrefix:(id)arg5 appId:(id)arg6 appkey:(id)arg7;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *multiSignAccountPrefix; // @synthesize multiSignAccountPrefix=_multiSignAccountPrefix;
@property(copy, nonatomic) NSString *accountPrefix; // @synthesize accountPrefix=_accountPrefix;
@property(nonatomic) long long domainType; // @synthesize domainType=_domainType;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(copy, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *clientVersionWithSuffix;
- (id)init;

@end

