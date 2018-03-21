//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class ContactAppLauncher, NSString, UIViewController;

@interface ContactAppAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    UIViewController *_rootController;
    ContactAppLauncher *_launcher;
}

+ (void)exitContactAppWithAppId:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) ContactAppLauncher *launcher; // @synthesize launcher=_launcher;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (id)decodeParam:(id)arg1;
- (id)existSPProfileViewControllerWith:(id)arg1;
- (id)existedSPProfileViewController;
- (_Bool)loadAppWithOption:(id)arg1;
- (void)jumpToSocalWidgte:(id)arg1;
- (void)jumpToMyFriend:(id)arg1;
- (void)jumpToRecommenViewController:(id)arg1;
- (_Bool)applicationShouldStartMultapplication:(id)arg1 launchMode:(long long)arg2 sourceId:(id)arg3;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
