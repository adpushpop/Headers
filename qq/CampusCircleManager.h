//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LocationReader, QQProfileModel, QQRedPointModel;

@interface CampusCircleManager : NSObject
{
    LocationReader *_locationReader;
    QQProfileModel *_profileCache;
    QQRedPointModel *_redPointModel;
}

+ (void)handleApnsNotification:(id)arg1;
+ (_Bool)isCampusCirclePush:(id)arg1;
+ (_Bool)isCampusEntranceFlagExpired;
+ (_Bool)isCampusTableCellItem:(id)arg1;
+ (void)requestCampusEntranceFlag:(CDUnknownBlockType)arg1;
+ (void)saveHaveEntranceFlag:(_Bool)arg1;
+ (void)updateRequestEntranceTimestamp;
+ (void)handlePluginTabFirstAppear:(id)arg1;
+ (void)reqestCampusCircle:(id)arg1 withblock:(CDUnknownBlockType)arg2;
+ (id)getInstance;
@property(nonatomic) __weak QQRedPointModel *redPointModel; // @synthesize redPointModel=_redPointModel;
@property(retain, nonatomic) QQProfileModel *profileCache; // @synthesize profileCache=_profileCache;
@property(retain, nonatomic) LocationReader *locationReader; // @synthesize locationReader=_locationReader;
- (void).cxx_destruct;
- (void)onGetPersonProfileNotification:(id)arg1;
- (void)registerNotifications;
- (long long)redPointPriority:(int)arg1;
- (void)setRedPointRead:(id)arg1;
- (long long)campusRedPointUnreadCount:(id)arg1;
- (id)campusCellRedPointModel:(id)arg1;
- (int)campusTabBarRedPointHintType:(id)arg1;
- (_Bool)hasCampusRedPoint:(id)arg1;
- (void)performApnsOpenUrlAction:(id)arg1 userInfo:(id)arg2;
- (id)removeStringSuffix:(id)arg1 suffix:(id)arg2;
- (id)removeStringPrefix:(id)arg1 prefix:(id)arg2;
- (void)updateSelfProfileCache;
- (_Bool)shouldShowCampusCellItem;
- (_Bool)readHaveEntranceFlag;
- (id)init;

@end
