//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliHAPluginProtocol-Protocol.h"

@class GodeyeJointPointCenter, GodeyeLocalCommandManager, GodeyeRemoteCommandCenter, NSString;

@interface Godeye : NSObject <AliHAPluginProtocol>
{
    NSString *_appId;
    NSString *_appVersion;
    GodeyeJointPointCenter *_defaultJointPointCenter;
    GodeyeRemoteCommandCenter *_defaultRemoteCommandCenter;
    GodeyeLocalCommandManager *_defaultLocalCommandManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GodeyeLocalCommandManager *defaultLocalCommandManager; // @synthesize defaultLocalCommandManager=_defaultLocalCommandManager;
@property(retain, nonatomic) GodeyeRemoteCommandCenter *defaultRemoteCommandCenter; // @synthesize defaultRemoteCommandCenter=_defaultRemoteCommandCenter;
@property(retain, nonatomic) GodeyeJointPointCenter *defaultJointPointCenter; // @synthesize defaultJointPointCenter=_defaultJointPointCenter;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)upload:(id)arg1 localFileDir:(id)arg2;
- (void)response:(id)arg1 responseData:(id)arg2;
- (void)handleRemoteCommand:(id)arg1;
- (void)registerCommandController:(id)arg1;
- (void)initialize:(id)arg1 appVersion:(id)arg2;
- (void)onPluginDestory;
- (void)onPluginInit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

