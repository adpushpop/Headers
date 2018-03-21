//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FTSDataManager, NSMutableSet, NSString, QQRelationSearchEngine;

@interface QQRelationSearchFilter : NSObject
{
    long long *_pTaskSerialNum;
    long long _lastTaskSerialNum;
    _Bool _isNeedCompWeight;
    QQRelationSearchEngine *_engine;
    NSMutableSet *_lastResults;
    NSString *_lastKeyWord;
    unsigned long long _rdmFilterDataSourcCount;
    unsigned long long _rdmFilterOpElapse;
    FTSDataManager *_ftsDataManager;
}

+ (void)sortResults:(id)arg1;
+ (id)aiRangesOfString:(id)arg1 inString:(id)arg2;
+ (id)aiSubChineseString:(id)arg1;
+ (_Bool)aiEditDistanceMatch:(id)arg1 dest:(id)arg2 originalDest:(id)arg3 optimizeDest:(id)arg4 outMatchedStr:(id *)arg5 outEDValue:(unsigned long long *)arg6;
+ (_Bool)isNeedAIBlurMatch:(id)arg1;
@property(retain, nonatomic) FTSDataManager *ftsDataManager; // @synthesize ftsDataManager=_ftsDataManager;
@property(nonatomic) unsigned long long rdmFilterOpElapse; // @synthesize rdmFilterOpElapse=_rdmFilterOpElapse;
@property(nonatomic) unsigned long long rdmFilterDataSourcCount; // @synthesize rdmFilterDataSourcCount=_rdmFilterDataSourcCount;
@property(nonatomic) _Bool isNeedCompWeight; // @synthesize isNeedCompWeight=_isNeedCompWeight;
@property(retain, nonatomic) NSString *lastKeyWord; // @synthesize lastKeyWord=_lastKeyWord;
@property(retain, nonatomic) NSMutableSet *lastResults; // @synthesize lastResults=_lastResults;
@property(nonatomic) __weak QQRelationSearchEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)addLastResults:(id)arg1;
- (id)isUsingLastResults:(id)arg1;
- (_Bool)isTaskCanceled;
- (void)setTaskSerialNum:(long long *)arg1;
- (void)resetSortWeightBit;
- (void)resetTop5Flag;
- (void)topSearchResultsHandle:(id)arg1 currUids:(id)arg2 typePriority:(int)arg3 forKeyword:(id)arg4;
- (id)opFilterGetMatchUids;
- (id)opFilterGetTopResults;
- (_Bool)isCancelCurrFilter;
- (id)copyAllSearchResults:(id)arg1 excludeUinList:(id)arg2;
- (void)dealloc;
- (id)init;

@end
