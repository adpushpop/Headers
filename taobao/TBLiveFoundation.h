//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBLiveFoundation : NSObject
{
}

+ (_Bool)isShowNewBrandLiveSwitchOptions;
+ (_Bool)isShowNewBrandLive;
+ (_Bool)isElderEdition;
+ (id)fontWithName:(id)arg1 fontSize:(double)arg2;
+ (id)MD5:(id)arg1;
+ (void)hideTabBarInIOS11;
+ (_Bool)enableH265ForMachine;
+ (id)renderReloadButton:(id)arg1;
+ (long long)delayTimeForRequest;
+ (id)actionReportData:(id)arg1 params:(id)arg2;
+ (id)dictionaryWithUrlString:(id)arg1;
+ (void)toast:(id)arg1 toView:(id)arg2 positionY:(double)arg3 displaytime:(float)arg4;
+ (void)toast:(id)arg1 toView:(id)arg2 displaytime:(float)arg3;
+ (void)toast:(id)arg1 toView:(id)arg2;
+ (_Bool)checkRecordSta;
+ (_Bool)checkCameraSta;
+ (id)formatMillionBabyUserCount:(long long)arg1;
+ (id)formatGoodsPrice:(id)arg1;
+ (id)formatLikeCount:(long long)arg1;
+ (id)createStringAddedCommaFromInt:(unsigned long long)arg1;
+ (id)formatNumWithTenThousands:(long long)arg1;
+ (id)formatLonglongValueToDate:(long long)arg1;
+ (id)converAppointmentDate:(id)arg1;
+ (id)formatAppointmentDate:(id)arg1;
+ (_Bool)formatBoolValue:(id)arg1;
+ (void)millionBabyTLog:(id)arg1 level:(long long)arg2 params:(id)arg3;
+ (void)tlogService:(id)arg1;
+ (id)dictionaryWithPropertiesOfObject:(id)arg1;
+ (id)paraseJSONStringToDict:(id)arg1;
+ (id)parseDictToJSONString:(id)arg1;
+ (id)environmentPrefix;
+ (void)validLogin:(CDUnknownBlockType)arg1;
+ (_Bool)isTaoBaoApp;
+ (_Bool)isTMallApp;
+ (double)timeStamp;
+ (id)secondsToMinuteString:(float)arg1;
+ (id)secondsToString:(float)arg1;
+ (_Bool)isFollowMsg:(id)arg1;

@end
