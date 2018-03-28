//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTAccountCustomLoginConfiguration;
@protocol TTAccountLogger, TTAccountMessageFirstResponder, TTAccountMonitorProtocol;

@interface TTAccountConfiguration : NSObject
{
    _Bool _multiThreadSafeEnabled;
    _Bool _unbindAlertEnabled;
    _Bool _showAlertWhenLoginFail;
    _Bool _byFindPasswordLoginEnabled;
    _Bool _autoSynchronizeUserInfo;
    CDUnknownBlockType _networkParamsHandler;
    CDUnknownBlockType _appRequiredParamsHandler;
    NSString *_sharingKeyChainGroup;
    NSString *_domain;
    NSObject<TTAccountMessageFirstResponder> *_accountMessageFirstResponder;
    NSObject<TTAccountLogger> *_loggerDelegate;
    NSObject<TTAccountMonitorProtocol> *_monitorDelegate;
    CDUnknownBlockType _visibleViewControllerHandler;
}

+ (id)tta_appBundleID;
+ (id)tta_defaultURLParameters;
@property(copy, nonatomic) CDUnknownBlockType visibleViewControllerHandler; // @synthesize visibleViewControllerHandler=_visibleViewControllerHandler;
@property(retain, nonatomic) NSObject<TTAccountMonitorProtocol> *monitorDelegate; // @synthesize monitorDelegate=_monitorDelegate;
@property(retain, nonatomic) NSObject<TTAccountLogger> *loggerDelegate; // @synthesize loggerDelegate=_loggerDelegate;
@property(retain, nonatomic) NSObject<TTAccountMessageFirstResponder> *accountMessageFirstResponder; // @synthesize accountMessageFirstResponder=_accountMessageFirstResponder;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool autoSynchronizeUserInfo; // @synthesize autoSynchronizeUserInfo=_autoSynchronizeUserInfo;
@property(nonatomic) _Bool byFindPasswordLoginEnabled; // @synthesize byFindPasswordLoginEnabled=_byFindPasswordLoginEnabled;
@property(nonatomic) _Bool showAlertWhenLoginFail; // @synthesize showAlertWhenLoginFail=_showAlertWhenLoginFail;
@property(nonatomic) _Bool unbindAlertEnabled; // @synthesize unbindAlertEnabled=_unbindAlertEnabled;
@property(copy, nonatomic) NSString *sharingKeyChainGroup; // @synthesize sharingKeyChainGroup=_sharingKeyChainGroup;
@property(nonatomic) _Bool multiThreadSafeEnabled; // @synthesize multiThreadSafeEnabled=_multiThreadSafeEnabled;
@property(copy, nonatomic) CDUnknownBlockType appRequiredParamsHandler; // @synthesize appRequiredParamsHandler=_appRequiredParamsHandler;
@property(copy, nonatomic) CDUnknownBlockType networkParamsHandler; // @synthesize networkParamsHandler=_networkParamsHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) TTAccountCustomLoginConfiguration *wapLoginConf;
- (void)setWapLoginConf:(id)arg1;
- (id)platformConfigurations;
- (void)setPlatformConfigurations:(id)arg1;
- (void)addPlatformConfigurations:(id)arg1;
- (void)addPlatformConfiguration:(id)arg1;
- (id)__platformConfigurationForType:(long long)arg1;
- (id)tta_platformAppSupportedSchemesForPlatformType:(long long)arg1;
- (id)tta_platformAppInstalledSchemesForPlatformType:(long long)arg1;
- (id)tta_platformAppInstallUrlForPlatformType:(long long)arg1;
- (id)tta_SNSBarTextForPlatformType:(long long)arg1;
- (_Bool)tta_SNSBarHiddenForPlatformType:(long long)arg1;
- (_Bool)tta_tryCustomWAPLoginWhenSDKFailureForPlatformType:(long long)arg1;
- (_Bool)tta_useDefaultWAPLoginForPlatformType:(long long)arg1;
- (void)tta_laziedRegisterPlatformAppIDForPlatformType:(long long)arg1;
- (id)tta_scopeForPlatformType:(long long)arg1;
- (id)tta_redirectURLForPlatformType:(long long)arg1;
- (id)tta_authSchemeCallbackURLForPlatformType:(long long)arg1;
- (id)tta_platformAppDisplayNameForPlatformType:(long long)arg1;
- (id)tta_platformAppIdForPlatformType:(long long)arg1;
- (id)tta_platformAppNameForPlatformType:(long long)arg1;
- (id)tta_consumerKeyForPlatformType:(long long)arg1;
- (id)tta_sharingKeyChainGroup;
- (id)tta_installID;
- (id)tta_deviceID;
- (id)tta_ssMID;
- (id)tta_ssAppID;
- (id)tta_currentViewController;
- (id)tta_commonNetworkParameters;
- (id)tta_appRequiredParameters;

@end
