//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOpenUrlContextBase.h"

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSString;

@interface WBUniversalOpenUrlStoreKitContext : WBOpenUrlContextBase <SKStoreProductViewControllerDelegate>
{
    NSString *appID;
}

@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)contextFinished;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)startContext;
- (void)parseUrlAndRefreshValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

