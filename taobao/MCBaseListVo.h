//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseVo.h"

#import "MCBaseListVoProtocol-Protocol.h"

@class IMThreadSafeMutableArry, NSString;

@interface MCBaseListVo : MCBaseVo <MCBaseListVoProtocol>
{
    long long _updateIndex;
    long long _updateIndexExt;
    long long _actionType;
    IMThreadSafeMutableArry *_datas;
}

@property(retain, nonatomic) IMThreadSafeMutableArry *datas; // @synthesize datas=_datas;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long updateIndexExt; // @synthesize updateIndexExt=_updateIndexExt;
@property(nonatomic) long long updateIndex; // @synthesize updateIndex=_updateIndex;
- (void).cxx_destruct;
- (void)emitDataChanged:(long long)arg1 updateIndex:(long long)arg2 indexExt:(long long)arg3;
- (long long)count;
- (void)onclear;
- (void)reset;
- (void)emitDataChanged:(long long)arg1 updateIndex:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) NSString *handlerImpClassName;
@property(nonatomic) _Bool hasMore;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long loadState;
@property(nonatomic) NSString *presenterClassName;
@property(readonly) Class superclass;

@end

