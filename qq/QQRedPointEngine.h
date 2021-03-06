//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, QQRedPointTreeEngine;

@interface QQRedPointEngine : NSObject
{
    NSMutableDictionary *_taskInfoDic;
    NSMutableDictionary *_taskIDDic;
    NSString *_unreadRedPointsCacheFile;
    NSString *_unfinishedRedPointsCacheFile;
    _Bool _isRequesting;
    _Bool _isModel;
    NSString *_curConfigVer;
    QQRedPointTreeEngine *_treeEngine;
    NSString *_redPointTreeDescriptionFile;
    NSMutableDictionary *_redPointDic;
    NSMutableDictionary *_comRedPointDic;
    NSMutableArray *_unfinishedRedPointList;
    NSMutableArray *_readRedPointList;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *readRedPointList; // @synthesize readRedPointList=_readRedPointList;
@property(retain, nonatomic) NSMutableArray *unfinishedRedPointList; // @synthesize unfinishedRedPointList=_unfinishedRedPointList;
@property(retain, nonatomic) NSMutableDictionary *comRedPointDic; // @synthesize comRedPointDic=_comRedPointDic;
@property(retain, nonatomic) NSMutableDictionary *redPointDic; // @synthesize redPointDic=_redPointDic;
@property(copy, nonatomic) NSString *redPointTreeDescriptionFile; // @synthesize redPointTreeDescriptionFile=_redPointTreeDescriptionFile;
@property(retain, nonatomic) NSMutableDictionary *taskIDDic; // @synthesize taskIDDic=_taskIDDic;
@property(retain, nonatomic) NSMutableDictionary *taskInfoDic; // @synthesize taskInfoDic=_taskInfoDic;
@property(copy, nonatomic) NSString *unfinishedRedPointsCacheFile; // @synthesize unfinishedRedPointsCacheFile=_unfinishedRedPointsCacheFile;
@property(copy, nonatomic) NSString *unreadRedPointsCacheFile; // @synthesize unreadRedPointsCacheFile=_unreadRedPointsCacheFile;
- (void).cxx_destruct;
- (id)getDrawerRedPoint;
- (void)clearSuperRecZanRedPoint;
- (id)getSuperRecZanRedPoint;
- (void)updateUIWithTaskID:(id)arg1;
- (void)receivedPushRedPointData:(id)arg1;
- (void)requestRedPointDataFinished:(id)arg1;
- (void)checkRedPointStateForTask:(id)arg1;
- (id)curRedPointWithID:(id)arg1;
- (id)compareModelA:(id)arg1 modelB:(id)arg2;
- (int)priorityWithType:(int)arg1;
- (void)requestRedPointTask;
- (void)requestRedPointRead;
- (void)requestRedPointReq;
- (unsigned int)getHonestFriendReceivedTime;
- (unsigned long long)sayHonestFriendReceivedUnreadCount;
- (id)sayHonestFriendReceivedModel;
- (void)postSayHonestFriendDidReceiveCommentNotiWithRedPointModel:(id)arg1;
- (void)pushUpdateRedPointInfo:(id)arg1;
- (void)addObjectReadRP:(id)arg1;
- (void)removeAllObjectReadRP;
- (id)loadAllUnfinishedRP;
- (void)writeAllUnfinishedRP:(id)arg1;
- (void)cleanValueComRPDic;
- (void)setValueComRP:(id)arg1 key:(id)arg2;
- (id)valueForKeyComRP:(id)arg1;
- (void)setValueRP:(id)arg1 key:(id)arg2;
- (id)valueForKeyRP:(id)arg1;
- (id)redPointDicRP;
- (id)allUnreadReadPointWithID:(id)arg1;
- (void)calculateRedpoint;
- (void)readShowRedPoint:(id)arg1;
- (void)readShowRedPoint:(id)arg1 seq:(unsigned long long)arg2;
- (id)getShowRedPointWithID:(id)arg1;
- (void)readRedPoint:(id)arg1 seq:(unsigned long long)arg2;
- (void)removeSayHonestRedPointCache;
- (void)readSayHonestRedPoint;
- (void)readRedPoint:(id)arg1;
- (id)getRedPointWithID:(id)arg1;
- (void)clearMemoryData;
- (void)hasModel:(_Bool)arg1 taskID:(id)arg2;
- (void)loadRedPointData;
- (void)isRequestRedPoint:(id)arg1;
- (void)onLoginSuccess;
- (id)init;
- (void)clearZanRedPoint;
- (void)clearRecZanRedPoint;
- (id)getRecZanRedPoint;
- (void)writeRedPoint:(id)arg1 idStr:(id)arg2;
- (id)getPath:(id)arg1 idStr:(id)arg2;
- (id)getModelWithPath:(id)arg1;
- (_Bool)writeModel:(id)arg1 path:(id)arg2;
- (void)setValueTaskID:(id)arg1 key:(id)arg2;
- (id)taskIDWithRedPointID:(id)arg1;

@end

