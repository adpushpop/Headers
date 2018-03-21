//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, QQOpenApiPluginScheduler, QQWebViewController;

@interface QQWebViewPluginScheduler : NSObject
{
    NSMutableDictionary *_pluginName2InstanceDic;
    QQWebViewController *_ownerWebViewController;
    QQOpenApiPluginScheduler *_qqOpenApiPluginScheduler;
}

@property(retain, nonatomic) QQOpenApiPluginScheduler *qqOpenApiPluginScheduler; // @synthesize qqOpenApiPluginScheduler=_qqOpenApiPluginScheduler;
@property(nonatomic) __weak QQWebViewController *ownerWebViewController; // @synthesize ownerWebViewController=_ownerWebViewController;
- (void).cxx_destruct;
- (id)pluginInstanceWithClassName:(id)arg1;
- (id)instanceForModule:(id)arg1 andMethod:(id)arg2;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)loadingInitPluginArray;
- (void)handleEvent:(int)arg1 userInfo:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)customURLInShouldStartLoadWithRequest:(id)arg1;
- (id)customURLBeforeLoadRequest:(id)arg1;
- (_Bool)canInvokeFixApiWithURL:(id)arg1 api:(id)arg2;
- (_Bool)isCheckWhiteListReferer:(id)arg1;
- (_Bool)isCheckFixApi:(id)arg1;
- (_Bool)handleSchemaRequest:(id)arg1;
- (void)reportJsBridgeNoAuthorityWithModuleName:(id)arg1 methodName:(id)arg2 urlStr:(id)arg3 result:(_Bool)arg4;
- (void)dealloc;
- (id)initWithOwnerWebViewController:(id)arg1;

@end
