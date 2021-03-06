//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString;

@interface IPSiteServiceEngine : NSObject <IEngineDispatchDelegate>
{
    NSString *_curReqKey;
    CDUnknownBlockType _ipSiteInfoReqComplete;
}

+ (id)getInstance;
@property(copy, nonatomic) CDUnknownBlockType ipSiteInfoReqComplete; // @synthesize ipSiteInfoReqComplete=_ipSiteInfoReqComplete;
@property(copy, nonatomic) NSString *curReqKey; // @synthesize curReqKey=_curReqKey;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)requestIPSiteInfo:(long long)arg1 appId:(int)arg2 itemId:(id)arg3 isRetSummary:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;
- (id)getReqKey:(int)arg1 itemId:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

