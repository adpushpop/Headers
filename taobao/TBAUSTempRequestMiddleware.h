//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBURLActionRequestMiddleware-Protocol.h"

@class NSString;

@interface TBAUSTempRequestMiddleware : NSObject <TBURLActionRequestMiddleware>
{
}

- (id)initWithPageURL:(id)arg1;
- (id)responseForSchemeIntercept:(id)arg1;
- (_Bool)handleAdURL:(id)arg1;
- (void)commitAdUrlWithUrl:(id)arg1;
- (_Bool)handleGameCenterURL:(id)arg1;
- (_Bool)handleScriptAction:(id)arg1;
- (id)getParameterValueWithName:(id)arg1 parameters:(id)arg2;
- (_Bool)isScriptAction:(id)arg1;
- (_Bool)handleAppURL:(id)arg1;
- (void)processUsertrack:(id)arg1;
- (id)responseForForceJumpToWebView:(id)arg1;
- (id)responseForRewriteURL:(id)arg1;
- (id)noneResponse;
- (id)processURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

