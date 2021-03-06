//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBWVJAEHandler-Protocol.h"

@class NSString;

@interface TBWebViewJAEHandler : NSObject <TBWVJAEHandler>
{
    _Bool _lastCheckResult;
    NSString *_lastURL;
}

+ (id)shareInstance;
@property(nonatomic) _Bool lastCheckResult; // @synthesize lastCheckResult=_lastCheckResult;
@property(copy, nonatomic) NSString *lastURL; // @synthesize lastURL=_lastURL;
- (void).cxx_destruct;
- (void)startMonitorWithViewController:(id)arg1;
- (void)startLoadRequest:(id)arg1 viewController:(id)arg2;
- (_Bool)checkIsJAEDomain:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

