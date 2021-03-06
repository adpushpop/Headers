//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWELivePressureCreatorApiProtocol-Protocol.h"

@class AWELivePressurePresentCountModel, NSMutableArray, NSNumber, NSString;
@protocol AWELivePressureCreatorCallbackProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface AWELivePressurePresentCreator : NSObject <AWELivePressureCreatorApiProtocol>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSObject<OS_dispatch_source> *_timer;
    id <AWELivePressureCreatorCallbackProtocol> _delegate;
    NSNumber *_roomID;
    AWELivePressurePresentCountModel *_smallModel;
    AWELivePressurePresentCountModel *_bigModel;
    AWELivePressurePresentCountModel *_stickerModel;
    NSMutableArray *_smallPresentIDArray;
    NSMutableArray *_bigPresentIDArray;
    NSMutableArray *_stickerPresentIDArray;
}

@property(retain, nonatomic) NSMutableArray *stickerPresentIDArray; // @synthesize stickerPresentIDArray=_stickerPresentIDArray;
@property(retain, nonatomic) NSMutableArray *bigPresentIDArray; // @synthesize bigPresentIDArray=_bigPresentIDArray;
@property(retain, nonatomic) NSMutableArray *smallPresentIDArray; // @synthesize smallPresentIDArray=_smallPresentIDArray;
@property(retain, nonatomic) AWELivePressurePresentCountModel *stickerModel; // @synthesize stickerModel=_stickerModel;
@property(retain, nonatomic) AWELivePressurePresentCountModel *bigModel; // @synthesize bigModel=_bigModel;
@property(retain, nonatomic) AWELivePressurePresentCountModel *smallModel; // @synthesize smallModel=_smallModel;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(nonatomic) __weak id <AWELivePressureCreatorCallbackProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mockPresentDictWithPresentType:(long long)arg1 countModel:(id)arg2;
- (id)mockStickerPresentsWithCount:(long long)arg1;
- (id)mockBigPresentsWithCount:(long long)arg1;
- (id)mockSmallPresentsWithCount:(long long)arg1;
- (void)_notifyWithPresentArray:(id)arg1;
- (void)_processCreating;
- (void)stopCreator;
- (void)_startCreator;
- (void)startCreator;
- (void)_fetchPresentIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 roomID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

