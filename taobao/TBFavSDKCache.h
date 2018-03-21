//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBFavSDKCacheProtocol-Protocol.h"

@class AVFSFileCache, NSString;

@interface TBFavSDKCache : NSObject <TBFavSDKCacheProtocol>
{
    AVFSFileCache *_cacheModule;
}

@property(retain, nonatomic) AVFSFileCache *cacheModule; // @synthesize cacheModule=_cacheModule;
- (void).cxx_destruct;
- (void)fav_removeObjectForKey:(id)arg1;
- (id)fav_objectForKey:(id)arg1;
- (void)fav_setObject:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
