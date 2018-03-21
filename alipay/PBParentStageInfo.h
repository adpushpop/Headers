//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface PBParentStageInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasStageCode;
    NSString *_stageCode;
    NSMutableArray *_appShowInfos;
    NSMutableArray *_childStages;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *childStages; // @synthesize childStages=_childStages;
@property(retain, nonatomic) NSMutableArray *appShowInfos; // @synthesize appShowInfos=_appShowInfos;
@property(retain, nonatomic) NSString *stageCode; // @synthesize stageCode=_stageCode;
@property(readonly) _Bool hasStageCode; // @synthesize hasStageCode=_hasStageCode;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addChildStages:(id)arg1;
- (void)setChildStagesArray:(id)arg1;
- (void)addAppShowInfos:(id)arg1;
- (void)setAppShowInfosArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
