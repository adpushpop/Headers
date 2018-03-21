//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/ISCBusinessCallback-Protocol.h>
#import <QQMainProject/ISCListenerCallback-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol PendantStoreManagerDelegate;

@interface PendantStoreManager : NSObject <IEngineDispatchDelegate, ISCBusinessCallback, ISCListenerCallback>
{
    _Bool _isDownloading;
    _Bool _isLoadingJson;
    _Bool _isActiveSwitchOn;
    _Bool _rareAct;
    long long _timeStamp;
    NSMutableArray *_entryList;
    NSArray *_nIdList;
    NSArray *_hotIdList;
    NSArray *_finalIdList;
    NSMutableDictionary *_detailDic;
    NSMutableArray *_recommendArr;
    long long _selectPendantId;
    long long _selectSeriesId;
    id <PendantStoreManagerDelegate> _delegate;
}

+ (id)getInstance;
@property(nonatomic) id <PendantStoreManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectSeriesId; // @synthesize selectSeriesId=_selectSeriesId;
@property(nonatomic) long long selectPendantId; // @synthesize selectPendantId=_selectPendantId;
@property(retain, nonatomic) NSMutableArray *recommendArr; // @synthesize recommendArr=_recommendArr;
@property(retain, nonatomic) NSMutableDictionary *detailDic; // @synthesize detailDic=_detailDic;
@property(nonatomic) _Bool rareAct; // @synthesize rareAct=_rareAct;
@property(retain, nonatomic) NSArray *finalIdList; // @synthesize finalIdList=_finalIdList;
@property(retain, nonatomic) NSArray *hotIdList; // @synthesize hotIdList=_hotIdList;
@property(retain, nonatomic) NSArray *nIdList; // @synthesize nIdList=_nIdList;
@property(retain, nonatomic) NSMutableArray *entryList; // @synthesize entryList=_entryList;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
- (id)getSelectedPendantInfo;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)parseSelectPandantInfoResp:(char *)arg1 len:(int)arg2 reqId:(int)arg3;
- (char *)makeUpSavePendantReqBufWithPandantId:(unsigned long long)arg1 fromType:(unsigned int)arg2;
- (int)sendDidSelectPandantFromType:(unsigned int)arg1;
- (int)sendDidSelectPandant;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 dlFrom:(int)arg5 result:(int)arg6 httpcode:(int)arg7;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (void)startCheckContentUpdate;
- (void)loadInfoFromJson:(id)arg1;
- (id)getJsonPath;
- (void)activeSwitchCheck;
- (void)loadInfoFromJson;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
