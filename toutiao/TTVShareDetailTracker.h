//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVShareDetailTrackerMessage-Protocol.h"

@class NSDictionary, NSString;

@interface TTVShareDetailTracker : NSObject <TTVShareDetailTrackerMessage>
{
    NSString *_categoryName;
    NSString *_enterFrom;
    NSString *_groupID;
    NSString *_itemID;
    NSString *_position;
    NSString *_platform;
    NSString *_source;
    NSDictionary *_logPb;
    NSString *_authorId;
}

@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSDictionary *logPb; // @synthesize logPb=_logPb;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (long long)sectionType:(id)arg1;
- (id)paramsAddPlatForm:(id)arg1 FromActionType:(long long)arg2 extraDic:(id)arg3 andiconSeat:(id)arg4;
- (void)shareTrackWithGroupID:(id)arg1 ActivityType:(long long)arg2 extraDic:(id)arg3 fullScreen:(_Bool)arg4 iconSeat:(id)arg5;
- (void)message_detailshareTrackActivityWithGroupID:(id)arg1 ActivityType:(long long)arg2 FromSource:(id)arg3 eventName:(id)arg4;
- (void)message_detailExposedShareTrackWithGroupID:(id)arg1 ActivityType:(long long)arg2 extraDic:(id)arg3 fullScreen:(_Bool)arg4;
- (void)message_detailShareTrackWithGroupID:(id)arg1 ActivityType:(long long)arg2 extraDic:(id)arg3 fullScreen:(_Bool)arg4;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

