//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AliDetailWebView, NSURL;

@interface AliDetailWebViewController : UIViewController
{
    AliDetailWebView *_webview;
    CDUnknownBlockType _loadFinishedHandler;
    NSURL *_loadUrl;
}

@property(retain, nonatomic) NSURL *loadUrl; // @synthesize loadUrl=_loadUrl;
@property(copy, nonatomic) CDUnknownBlockType loadFinishedHandler; // @synthesize loadFinishedHandler=_loadFinishedHandler;
@property(retain, nonatomic) AliDetailWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (_Bool)interruptJumpToLocalPage:(long long)arg1 withParam:(id)arg2 withRequest:(id)arg3;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (void)dealloc;

@end

