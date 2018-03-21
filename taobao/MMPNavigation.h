//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UINavigationController, UIViewController;
@protocol MMPNavigationDelegate;

@interface MMPNavigation : NSObject <UINavigationControllerDelegate>
{
    _Bool _naviVCPopGestureEnabled;
    id <MMPNavigationDelegate> _delegate;
    UINavigationController *_naviCtrl;
    UIViewController *_rootVC;
}

@property(nonatomic) _Bool naviVCPopGestureEnabled; // @synthesize naviVCPopGestureEnabled=_naviVCPopGestureEnabled;
@property(retain, nonatomic) UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) UINavigationController *naviCtrl; // @synthesize naviCtrl=_naviCtrl;
@property(nonatomic) __weak id <MMPNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewControllers;
- (void)resumeAllView;
- (void)hideAllView;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 forceWalletNavi:(_Bool)arg3;
- (void)navigationPopNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
