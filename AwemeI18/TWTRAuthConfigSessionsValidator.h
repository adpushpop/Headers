//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TWTRAuthConfigStore;
@protocol TWTRSessionStore_Private;

@interface TWTRAuthConfigSessionsValidator : NSObject
{
    TWTRAuthConfigStore *_configStore;
    id <TWTRSessionStore_Private> _sessionStore;
}

@property(readonly, nonatomic) id <TWTRSessionStore_Private> sessionStore; // @synthesize sessionStore=_sessionStore;
@property(readonly, nonatomic) TWTRAuthConfigStore *configStore; // @synthesize configStore=_configStore;
- (void).cxx_destruct;
- (void)purgeSessionsFromSessionStore;
- (_Bool)doesSessionStoreNeedPurge;
- (void)validateSessionStoreContainsValidAuthConfig;
- (id)initWithConfigStore:(id)arg1 sessionStore:(id)arg2;

@end

