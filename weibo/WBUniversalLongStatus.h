//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBDatabaseModel-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, WBTimelinePageInfo;

@interface WBUniversalLongStatus : WBModelObject <WBDatabaseModel>
{
    NSString *_v4ItemID;
    long long _preloadType;
    NSString *_textContent;
    NSMutableDictionary *_urls;
    NSArray *_topics;
    WBTimelinePageInfo *_pageInfo;
    long long _isInvalid;
}

+ (_Bool)deleteLongStatusRowIdLessThan:(long long)arg1 fromDB:(id)arg2;
+ (id)getLongStatusArrayOfstatusIds:(id)arg1 fromDB:(id)arg2;
+ (int)getMaxRowIdOfLongStatusFromDB:(id)arg1;
+ (int)getCountOfLongStatusFromDB:(id)arg1;
+ (id)loadLongStatusWithID:(id)arg1 fromDB:(id)arg2;
+ (id)getLongStatusArrayOfStatusArray:(id)arg1 existInDB:(id)arg2;
+ (void)insertDictLongStatus:(id)arg1 intoDB:(id)arg2;
+ (void)saveDictLongStatuses:(id)arg1 intoDB:(id)arg2;
+ (void)deleteAllFromDB:(id)arg1;
+ (void)deleteLongStatusWithID:(id)arg1 fromDB:(id)arg2;
+ (void)saveDictLongStatus:(id)arg1 intoDB:(id)arg2;
+ (void)saveLongStatus:(id)arg1 intoDB:(id)arg2;
+ (void)saveLongStatusArray:(id)arg1 intoDB:(id)arg2;
+ (id)toJSONDictionary:(id)arg1;
@property(nonatomic) long long isInvalid; // @synthesize isInvalid=_isInvalid;
@property(retain, nonatomic) WBTimelinePageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSMutableDictionary *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property(nonatomic) long long preloadType; // @synthesize preloadType=_preloadType;
@property(retain, nonatomic) NSString *v4ItemID; // @synthesize v4ItemID=_v4ItemID;
- (void).cxx_destruct;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;
- (_Bool)isStatusWithID:(id)arg1 existInDB:(id)arg2;
- (id)toJSONDictionary;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

