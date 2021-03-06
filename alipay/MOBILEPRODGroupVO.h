//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSFundProdToString.h"

@class MOBILEPRODPersonalGroupConfig, NSArray, NSDate, NSString;

@interface MOBILEPRODGroupVO : CSFundProdToString
{
    int _threshold;
    int _groupCount;
    long long _version;
    NSString *_groupId;
    NSString *_groupName;
    NSString *_groupImg;
    NSString *_creatorId;
    NSString *_masterUserId;
    NSString *_bizType;
    NSDate *_gmtCreate;
    MOBILEPRODPersonalGroupConfig *_config;
    NSArray *_permissions;
    NSArray *_memberInfos;
}

+ (Class)memberInfosElementClass;
+ (Class)permissionsElementClass;
@property(retain, nonatomic) NSArray *memberInfos; // @synthesize memberInfos=_memberInfos;
@property(retain, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(retain, nonatomic) MOBILEPRODPersonalGroupConfig *config; // @synthesize config=_config;
@property(nonatomic) int groupCount; // @synthesize groupCount=_groupCount;
@property(retain, nonatomic) NSDate *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) int threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSString *masterUserId; // @synthesize masterUserId=_masterUserId;
@property(retain, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
@property(retain, nonatomic) NSString *groupImg; // @synthesize groupImg=_groupImg;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;

@end

