//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBTipsTableViewControllerDelegate-Protocol.h"
#import "WBUserProfileItemButtonDelegate-Protocol.h"
#import "WBUserProfileItemViewDelegate-Protocol.h"

@class NSString, WBUserProfileBirthdayViewController;

@interface WBUserProfileBirthdayEventHandler : NSObject <WBUserProfileItemViewDelegate, WBUserProfileItemButtonDelegate, WBTipsTableViewControllerDelegate>
{
    WBUserProfileBirthdayViewController *_controller;
}

@property(nonatomic) WBUserProfileBirthdayViewController *controller; // @synthesize controller=_controller;
- (void)onUserProfileItemSwitchControlChanged:(id)arg1;
- (void)onUserProfileItemButtonClicked:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

