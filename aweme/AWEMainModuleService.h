//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "HTSService-Protocol.h"

@class AWEShareServiceExtension, NSString;

@interface AWEMainModuleService : HTSService <HTSService>
{
}

- (void)createVideoWithMusic:(id)arg1 groupID:(id)arg2;
- (void)handleUserPromotionMsg:(id)arg1;
- (id)getTabBarController;
- (void)reportWithType:(unsigned long long)arg1 objectID:(id)arg2 ownerID:(id)arg3;
- (_Bool)isIMFantasyEnabled;
- (id)getFantasyActivityMessageView;
- (void)fetchFantasyWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AWEShareServiceExtension *shareExtension;
- (void)createVideoWithMusic:(id)arg1 groupID:(id)arg2;
- (void)handleUserPromotionMsg:(id)arg1;
- (id)getTabBarController;
- (void)reportWithType:(unsigned long long)arg1 objectID:(id)arg2 ownerID:(id)arg3;
- (_Bool)isIMFantasyEnabled;
- (id)getFantasyActivityMessageView;
- (void)fetchFantasyWithCompletion:(CDUnknownBlockType)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

