//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface RichMediaToastTipManager : NSObject
{
    NSMutableDictionary *_picUploadTips;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)getTipKeyWithUin:(id)arg1 chatType:(long long)arg2;
- (id)getTipMsg:(id)arg1;
- (void)checkUploadTipWithUin:(id)arg1 chatType:(long long)arg2 aioDelegate:(id)arg3;
- (void)removeUploadTipWithUin:(id)arg1 chatType:(long long)arg2;
- (void)addUploadFailTip:(id)arg1 chatType:(long long)arg2 uin:(id)arg3 aioDelegate:(id)arg4;
- (id)init;

@end

