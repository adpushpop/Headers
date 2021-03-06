//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface QQExAvatarManager : NSObject <AvatarServiceDelegate>
{
    NSMutableDictionary *_avatarMetas;
    NSMutableDictionary *_tmpAvatarMetas;
    NSObject<OS_dispatch_queue> *share_avatar_queue;
}

+ (id)getInstance;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)onFriendListShare;
- (void)addUinToMeta:(id)arg1;
- (void)copyAvatarForUin:(id)arg1 fromPath:(id)arg2;
- (void)updateSiriSelfAvatar;
- (void)shareAvatarToExtension:(id)arg1 imagePath:(id)arg2 needOverWrite:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

