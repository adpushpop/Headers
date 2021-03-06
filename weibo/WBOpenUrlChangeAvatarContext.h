//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOpenUrlContextBase.h"

#import "WBALAssetPickerContextManagerDelegate-Protocol.h"

@class NSString, SNHTTPRequestOperationWrapper, UIViewController, WBALAssetPickerContextManager, WBProgressHUD;

@interface WBOpenUrlChangeAvatarContext : WBOpenUrlContextBase <WBALAssetPickerContextManagerDelegate>
{
    WBALAssetPickerContextManager *_pickerManager;
    WBProgressHUD *_progressHUD;
    SNHTTPRequestOperationWrapper *_fetchRequestOperationWrapper;
    UIViewController *_basicViewController;
}

@property(nonatomic) __weak UIViewController *basicViewController; // @synthesize basicViewController=_basicViewController;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *fetchRequestOperationWrapper; // @synthesize fetchRequestOperationWrapper=_fetchRequestOperationWrapper;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) WBALAssetPickerContextManager *pickerManager; // @synthesize pickerManager=_pickerManager;
- (void).cxx_destruct;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImage:(id)arg2;
- (void)dealloc;
- (void)uploadProfileImage:(id)arg1;
- (void)startContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

