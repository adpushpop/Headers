//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DFCrashReport : NSObject
{
}

+ (void)uploadCrashReport;
+ (id)crashedViewId;
+ (_Bool)isCrashedLastTimeInBootup;
+ (_Bool)isCrashedLastTime;
+ (id)generateReadableMonitorLogWithThread:(unsigned int)arg1;
+ (id)generateMonitorLogWithThread:(unsigned int)arg1;
+ (void)hierarchiesFromView:(id)arg1 container:(id)arg2;
+ (_Bool)removePlusSignWithController:(id)arg1 container:(id)arg2;
+ (void)hierarchiesFromController:(id)arg1 container:(id)arg2;
+ (id)allAliveVc;

@end

