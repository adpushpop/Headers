//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HTSImageCache, LiveRoomModel, NSNumber;

@interface LiveRoomDiggMessageQueue : NSObject
{
    long long _diggCount;
    LiveRoomModel *_roomModel;
    HTSImageCache *_imageCache;
    _Bool _open;
    NSNumber *_diggColor;
}

+ (id)dispatchBarrierQueue;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) NSNumber *diggColor; // @synthesize diggColor=_diggColor;
- (void).cxx_destruct;
- (void)open;
- (void)receiveDiggMessage;
- (void)uploadDiggCount;
- (void)uploadDiggcountAutomatically;
- (id)initWithLiveRoomModel:(id)arg1;
- (void)dealloc;

@end
