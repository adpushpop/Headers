//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LiveRoomFollowProtocol-Protocol.h"

@class NSString, TBFollowSDKModule;

@interface TBLiveFollowAdapter : NSObject <LiveRoomFollowProtocol>
{
    TBFollowSDKModule *_followSDKModule;
    CDUnknownBlockType _callBack;
}

@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) TBFollowSDKModule *followSDKModule; // @synthesize followSDKModule=_followSDKModule;
- (void).cxx_destruct;
- (void)subscribe:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFollowByAccountId:(id)arg1 type:(int)arg2 option:(int)arg3 originBiz:(id)arg4 originPage:(id)arg5 originFlag:(id)arg6 hideFollowAnimation:(_Bool)arg7 extra:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)loadFollowState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followStateChanged:(CDUnknownBlockType)arg1;
- (void)addFollowView:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
