//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface QRBookInfoUpdater : NSObject
{
    NSArray *_onlineBookInfos;
    void *_cfSelfRef;
}

+ (id)lastUpdateTime;
- (void).cxx_destruct;
- (void)releaseSelf;
- (void)update;
- (id)initWithOnlineBookInfos:(id)arg1;

@end

