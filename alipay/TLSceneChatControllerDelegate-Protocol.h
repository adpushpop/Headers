//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TLDanmakuModel, TLSceneChatController;

@protocol TLSceneChatControllerDelegate <NSObject>
- (void)chatController:(TLSceneChatController *)arg1 finishWithOwnDanmaku:(TLDanmakuModel *)arg2;
- (void)chatController:(TLSceneChatController *)arg1 danmuModelList:(NSArray *)arg2;
@end

