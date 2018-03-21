//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQShareWebRichMsgTaskBase.h>

#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>

@class NSString, QQFriendSelectedViewController;

@interface QQShare2FriendWebRichMsgTask : QQShareWebRichMsgTaskBase <QQFriendSelectedViewControllerDelegate>
{
    QQFriendSelectedViewController *_friendSelectViewController;
}

- (void)shareToFriendDoReport:(id)arg1;
- (void)headerViewInitCompleted;
- (void)shareToFriendSuccess;
- (void)shareToFriendCancelled;
- (id)creatXMLMessageStringWithRichData:(id)arg1;
- (_Bool)checkShareDataSourceIsValid:(id)arg1;
- (void)_specialHandleJoinDisGroupData;
- (void)shareToFriend:(id)arg1;
- (void)doShare:(id)arg1;
- (_Bool)shareWebRichMsg:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
