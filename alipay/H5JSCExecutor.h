//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class H5JSCBridge, H5JavaScriptContext, NSThread;

@interface H5JSCExecutor : NSObject
{
    NSThread *_javaScriptThread;
    H5JavaScriptContext *_context;
    H5JSCBridge *_bridge;
}

+ (void)runRunLoopThread;
@property(retain, nonatomic) H5JSCBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) H5JavaScriptContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSThread *javaScriptThread; // @synthesize javaScriptThread=_javaScriptThread;
- (void).cxx_destruct;
- (void)dispatchJSErrorToContextWithError:(id)arg1;
- (id)getCallInfoFromURL:(id)arg1;
- (void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)executeSyncApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)executeBaseScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)executeJavaScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (_Bool)doSyncCallTOJSCWithResonseData:(id)arg1 func:(id)arg2;
- (_Bool)doSyncCall:(id)arg1;
- (void)setUp;
- (void)executeBlockOnJavaScriptQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBridge:(id)arg1;

@end
