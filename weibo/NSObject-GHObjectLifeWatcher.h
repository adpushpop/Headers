//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSObject (GHObjectLifeWatcher)
+ (id)objectForIdentifier:(id)arg1;
- (id)objectInfoForKey:(id)arg1;
- (void)setObjectInfo:(id)arg1 forKey:(id)arg2;
- (void)removeDeallocedCallbackForKey:(id)arg1;
- (void)addDeallocedCallback:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)lifeWatcherForceEnable:(_Bool)arg1;
- (id)lifeWatcher;
- (id)forceObjectIdentifier;
- (id)GHObjectIdentifier;
- (void)GHCustomDealloc;
@end

