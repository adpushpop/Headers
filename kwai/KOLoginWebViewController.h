//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UIColor, UINavigationBar, UINavigationController, UIWebView;
@protocol KOLoginWebViewControllerDelegate;

@interface KOLoginWebViewController : UIViewController <UIWebViewDelegate>
{
    id <KOLoginWebViewControllerDelegate> _delegate;
    UINavigationController *_navigationController;
    UINavigationBar *_navigationBar;
    UIWebView *_webView;
    _Bool _isKorean;
    _Bool _isUpgradeGrantFailed;
    UIColor *_defaultBarTintColor;
    long long _ageAuthErrorCode;
    NSString *_ageAuthErrorDescription;
    UIBarButtonItem *_backButtonItem;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(nonatomic) id <KOLoginWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (struct CGRect)currentScreenBoundsDependOnOrientation;
- (void)viewDidLayoutSubviews;
- (id)countryISO;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)processNavigationTypeCanOpenURL:(id)arg1;
- (void)processNavigationTypeConfirm:(id)arg1;
- (void)processNavigationTypeAlert:(id)arg1;
- (void)processNavigationTypeNavigate:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)invokeBackWithTarget:(id)arg1;
- (void)invokeCancelWithTarget:(id)arg1;
- (void)dismissFromKeyWindowModalController:(CDUnknownBlockType)arg1;
- (void)showOnKeyWindowModalController;
- (id)getCustomButtonByTitle:(id)arg1 action:(SEL)arg2 isBack:(_Bool)arg3 withImage:(_Bool)arg4;
- (void)loadLoginModalViewIfNotLoaded:(id)arg1;
- (void)hideWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithUrl:(id)arg1 title:(id)arg2 headers:(id)arg3 parameters:(id)arg4 httpMethod:(long long)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

