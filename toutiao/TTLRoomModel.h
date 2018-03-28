//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, TTLRoomAuthStatus, TTLRoomShareInfo, TTLRoomStreamURLModel, TTLUserModel;

@interface TTLRoomModel : MTLModel <MTLJSONSerializing>
{
    _Bool _perspective;
    TTLUserModel *_owner;
    NSString *_createTime;
    NSString *_finishTime;
    NSString *_followPopTime;
    NSNumber *_mosaicStatus;
    NSString *_streamID;
    unsigned long long _status;
    NSString *_userCount;
    NSNumber *_fakeUserCount;
    NSNumber *_anonymousUserCount;
    NSNumber *_cheatUserCount;
    NSString *_title;
    NSString *_roomID;
    NSNumber *_cellStyle;
    TTLRoomStreamURLModel *_streamURL;
    NSArray *_coverList;
    TTLRoomAuthStatus *_authStatus;
    NSNumber *_liveID;
    NSString *_lastPingTime;
    TTLRoomShareInfo *_shareInfo;
    NSDictionary *_extraInfo;
    NSString *_groupID;
    NSString *_extra;
}

+ (id)statusJSONTransformer;
+ (id)authStatusJSONTransformer;
+ (id)ownerJSONTransformer;
+ (id)streamURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(readonly, copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(readonly, nonatomic) TTLRoomShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(readonly, copy, nonatomic) NSString *lastPingTime; // @synthesize lastPingTime=_lastPingTime;
@property(readonly, nonatomic) NSNumber *liveID; // @synthesize liveID=_liveID;
@property(readonly, nonatomic) TTLRoomAuthStatus *authStatus; // @synthesize authStatus=_authStatus;
@property(readonly, copy, nonatomic) NSArray *coverList; // @synthesize coverList=_coverList;
@property(readonly, nonatomic) TTLRoomStreamURLModel *streamURL; // @synthesize streamURL=_streamURL;
@property(readonly, nonatomic) NSNumber *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSNumber *cheatUserCount; // @synthesize cheatUserCount=_cheatUserCount;
@property(readonly, nonatomic) NSNumber *anonymousUserCount; // @synthesize anonymousUserCount=_anonymousUserCount;
@property(readonly, nonatomic) NSNumber *fakeUserCount; // @synthesize fakeUserCount=_fakeUserCount;
@property(readonly, copy, nonatomic) NSString *userCount; // @synthesize userCount=_userCount;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) NSNumber *mosaicStatus; // @synthesize mosaicStatus=_mosaicStatus;
@property(readonly, copy, nonatomic) NSString *followPopTime; // @synthesize followPopTime=_followPopTime;
@property(readonly, copy, nonatomic) NSString *finishTime; // @synthesize finishTime=_finishTime;
@property(readonly, copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) TTLUserModel *owner; // @synthesize owner=_owner;
@property(nonatomic, getter=isPerspective) _Bool perspective; // @synthesize perspective=_perspective;
- (void).cxx_destruct;
- (id)summaryInfo;
@property(readonly, copy, nonatomic) NSString *itemID;
@property(readonly, nonatomic, getter=isSandbox) _Bool sandbox;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
