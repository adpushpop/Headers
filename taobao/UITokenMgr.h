//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IPluginToken-Protocol.h"

@class NSMutableDictionary, NSString;

@interface UITokenMgr : NSObject <IPluginToken>
{
    NSMutableDictionary *_tokensMap;
}

+ (id)instance;
- (void).cxx_destruct;
- (id)addPlugin:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addTestTokenWithURL:(id)arg1;
- (void)setupHitTestView;
- (void)removeAll;
- (void)removeTokenWithURL:(id)arg1;
- (void)addTokenWithURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)onMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
