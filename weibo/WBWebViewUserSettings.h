//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, WBBasicWebViewController;

@interface WBWebViewUserSettings : NSObject
{
    WBBasicWebViewController *_controller;
}

@property(nonatomic) __weak WBBasicWebViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
@property(nonatomic) long long textSize;
- (void)tearDown;
- (id)initWithWebViewController:(id)arg1;
- (void)updateTextSizeWithJSBridge;
@property(readonly, copy, nonatomic) NSDictionary *JSBridgeSessionData;
- (long long)textSizeInPercent;

@end

