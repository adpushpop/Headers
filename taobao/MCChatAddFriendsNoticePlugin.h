//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCChatAddFriendsNoticeViewProtocol-Protocol.h"
#import "MCPluginBaseProtocol-Protocol.h"
#import "TBIMRelationServiceDelegate-Protocol.h"

@class MCChatAddFriendsNoticeView, NSDictionary, NSString;
@protocol MCPluginChatPageContextProtocol, TBIMUserAdapter;

@interface MCChatAddFriendsNoticePlugin : NSObject <MCChatAddFriendsNoticeViewProtocol, TBIMRelationServiceDelegate, MCPluginBaseProtocol>
{
    MCChatAddFriendsNoticeView *_noticeView;
    id <TBIMUserAdapter> _targetUser;
    long long _closeStatus;
    id <MCPluginChatPageContextProtocol> _chatPageContext;
    NSDictionary *_friendData;
}

@property(retain, nonatomic) NSDictionary *friendData; // @synthesize friendData=_friendData;
@property(retain, nonatomic) id <MCPluginChatPageContextProtocol> chatPageContext; // @synthesize chatPageContext=_chatPageContext;
@property(nonatomic) long long closeStatus; // @synthesize closeStatus=_closeStatus;
@property(retain, nonatomic) id <TBIMUserAdapter> targetUser; // @synthesize targetUser=_targetUser;
@property(retain, nonatomic) MCChatAddFriendsNoticeView *noticeView; // @synthesize noticeView=_noticeView;
- (void).cxx_destruct;
- (void)addFriendRequest:(id)arg1;
- (void)friendDeleteIsSuccess:(_Bool)arg1 userId:(id)arg2 error:(id)arg3;
- (void)userAcceptFriendRequest:(id)arg1;
- (void)userRelationshipData:(id)arg1;
- (void)closeAcceptNoticeButtonTapped:(id)arg1;
- (void)acceptFriendsButtonTapped:(id)arg1;
- (void)closeAddFriendsNoticeButtonTapped:(id)arg1;
- (void)addFriendsButtonTapped:(id)arg1;
- (void)processPage:(id)arg1;
- (id)getPageName;
- (id)getKey;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithTargetUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

