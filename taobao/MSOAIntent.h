//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MSOAIntent : NSObject
{
    NSString *_strictServiceId;
    NSString *_strictSourceId;
    NSString *_universalToken;
    double _requestStartTime;
    double _requestEndTime;
    NSMutableDictionary *_UTArgs;
    NSMutableDictionary *_MonitorArgs;
    NSString *_serviceId;
    NSString *_version;
    NSString *_bizName;
    NSString *_sceneName;
    NSString *_samplingRate;
    NSString *_invokePage;
    NSString *_invokePageUrl;
}

@property(retain, nonatomic) NSString *invokePageUrl; // @synthesize invokePageUrl=_invokePageUrl;
@property(retain, nonatomic) NSString *invokePage; // @synthesize invokePage=_invokePage;
@property(retain, nonatomic) NSString *samplingRate; // @synthesize samplingRate=_samplingRate;
@property(retain, nonatomic) NSString *sceneName; // @synthesize sceneName=_sceneName;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
- (void).cxx_destruct;
- (id)initWithServiceId:(id)arg1 bizName:(id)arg2;
- (id)initWithServiceId:(id)arg1 version:(id)arg2 bizName:(id)arg3;
- (id)generateMonitorErrorArgsStr:(id)arg1;
- (id)mosa_dicToString:(id)arg1;
- (id)generateMonitorArgsStr;
- (id)generateUTArgsStr;
- (id)generateMonitorArgs;
- (id)generateUTArgs;
- (double)performanceRecordEnd;
- (void)performanceRecordStart;
- (id)strictSourceId;
- (id)strictServiceId;
- (id)uniqueToken;
@property(retain, nonatomic) NSMutableDictionary *UTArgs;

@end
