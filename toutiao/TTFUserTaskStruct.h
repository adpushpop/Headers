//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, TTFAwardStruct;

@interface TTFUserTaskStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TTFAwardStruct *award; // @dynamic award;
@property(nonatomic) int currentStep; // @dynamic currentStep;
@property(nonatomic) _Bool hasAward; // @dynamic hasAward;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(nonatomic) int lifeNum; // @dynamic lifeNum;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) NSMutableArray *subTasksArray; // @dynamic subTasksArray;
@property(readonly, nonatomic) unsigned long long subTasksArray_Count; // @dynamic subTasksArray_Count;
@property(nonatomic) long long taskId; // @dynamic taskId;
@property(nonatomic) long long totalCount; // @dynamic totalCount;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) long long userId; // @dynamic userId;

@end

