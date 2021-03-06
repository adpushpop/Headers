//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IHtRecentMsgDBService-Protocol.h>

@class HtDBRecentMsg, NSString;

@interface HtRecentMsgDBService : NSObject <IHtRecentMsgDBService>
{
    HtDBRecentMsg *_recentMsg;
}

- (void).cxx_destruct;
- (void)updateMessageExInfo:(id)arg1;
- (void)updateMessagePicUrlOfRichInfo:(id)arg1;
- (void)updateMessageRichInfo:(id)arg1;
- (void)SetMsgSendStateWithMsgID:(id)arg1 state:(int)arg2 uin:(id)arg3;
- (void)updateReadStateWithMessageModel:(id)arg1;
- (int)asyncUpdateRecentMsgWithSendResultModels:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (void)deleteMsgsWithUin:(id)arg1 adId:(id)arg2;
- (id)getMsgWithUin:(id)arg1 adId:(id)arg2;
- (void)insertRecentMsg:(id)arg1;
- (id)loadRecentMessage;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

