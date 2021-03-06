//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, PBBasicAppInfo, PBBasicDeviceInfo, PBBasicEnvInfo, PBBasicPushServiceToken;

@interface PBBasicRegisterRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int appActiveStatus; // @dynamic appActiveStatus;
@property(copy, nonatomic) NSData *appCustomStatus; // @dynamic appCustomStatus;
@property(retain, nonatomic) PBBasicAppInfo *appInfo; // @dynamic appInfo;
@property(retain, nonatomic) PBBasicDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) PBBasicEnvInfo *envInfo; // @dynamic envInfo;
@property(nonatomic) _Bool hasAppInfo; // @dynamic hasAppInfo;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(nonatomic) _Bool hasEnvInfo; // @dynamic hasEnvInfo;
@property(nonatomic) _Bool hasPushServiceToken; // @dynamic hasPushServiceToken;
@property(nonatomic) long long instanceId; // @dynamic instanceId;
@property(nonatomic) int presenceStatus; // @dynamic presenceStatus;
@property(retain, nonatomic) PBBasicPushServiceToken *pushServiceToken; // @dynamic pushServiceToken;
@property(retain, nonatomic) NSMutableArray *pushServiceTokenListArray; // @dynamic pushServiceTokenListArray;
@property(readonly, nonatomic) unsigned long long pushServiceTokenListArray_Count; // @dynamic pushServiceTokenListArray_Count;

@end

