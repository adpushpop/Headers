//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWTRAuthenticationProvider.h"

@class TWTRAuthConfig, TwitterNetworking;
@protocol TWTRAPIServiceConfig;

@interface TWTRAppAuthProvider : TWTRAuthenticationProvider
{
    TWTRAuthConfig *_authConfig;
    id <TWTRAPIServiceConfig> _apiServiceConfig;
    TwitterNetworking *_networkingClient;
}

@property(retain, nonatomic) TwitterNetworking *networkingClient; // @synthesize networkingClient=_networkingClient;
@property(readonly, nonatomic) id <TWTRAPIServiceConfig> apiServiceConfig; // @synthesize apiServiceConfig=_apiServiceConfig;
@property(readonly, nonatomic) TWTRAuthConfig *authConfig; // @synthesize authConfig=_authConfig;
- (void).cxx_destruct;
- (id)base64EncodedBasicAuthHeader;
- (id)appAuthTokenRequest;
- (void)authenticateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAuthConfig:(id)arg1 apiServiceConfig:(id)arg2;

@end
