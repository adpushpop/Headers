//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FAOnlineFileInfoCache : NSObject <DBAsyncCallbackProtocol>
{
    NSMutableDictionary *_onlineFileCache;
    NSMutableArray *_refuseSigCache;
    NSMutableArray *_senderCancelSigCache;
    NSMutableArray *_PCRecvSigCache;
    NSMutableArray *_saveWYSigCahce;
    unsigned long long selfUin;
    int _xo;
    int _onlineWorkId;
}

+ (id)getInstance;
- (_Bool)isInSaveWYSigModelCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)removeSaveWYSigModelFromCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)addsaveWYSigModelToCache:(id)arg1;
- (_Bool)isInPCRecvSigModelCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)removePCRecvSigModelFromCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)addPCRecvSigModelToCache:(id)arg1;
- (_Bool)isInSenderCacnelSigModelCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)removeSenderCacnelSigModelFromCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)addSenderCacnelSigModelToCache:(id)arg1;
- (_Bool)isInRefuseSigModelCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)removeRefuseSigModelFromCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)addRefuseSigModelToCache:(id)arg1;
- (id)queryFAModelFromCacheWithOutInsert:(id)arg1 msgId:(unsigned long long)arg2;
- (id)queryFAModelFromCacheWithOutInsert:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (id)queryFAModelFromCache:(id)arg1;
- (_Bool)removeFAModelFromCache:(unsigned long long)arg1 SessionID:(unsigned int)arg2;
- (_Bool)addFAModelToCache:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (_Bool)initOnlineFileCacheDicByDB;
- (_Bool)cleanSaveWYSigCache;
- (_Bool)cleanPCRecvSigCache;
- (_Bool)cleanSenderCancelSigCache;
- (_Bool)cleanRefuseSigCache;
- (_Bool)cleanOnlineFileCache;
- (void)dealloc;
- (void)logOut;
- (void)changeAccount;
- (void)clearData;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *PCRecvSigCache; // @dynamic PCRecvSigCache;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *onlineFileCache; // @dynamic onlineFileCache;
@property(retain, nonatomic) NSMutableArray *refuseSigCache; // @dynamic refuseSigCache;
@property(retain, nonatomic) NSMutableArray *saveWYSigCahce; // @dynamic saveWYSigCahce;
@property(retain, nonatomic) NSMutableArray *senderCancelSigCache; // @dynamic senderCancelSigCache;
@property(readonly) Class superclass;

@end

