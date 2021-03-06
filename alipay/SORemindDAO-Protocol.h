//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSDate, NSNumber, NSString;

@protocol SORemindDAO <APDAOProtocol>
- (APDAOResult *)daoClearAllUnread;
- (APDAOResult *)daoClearUnread:(NSString *)arg1;
- (NSNumber *)daoSelectUnreadRemindCountFromDateWithScene:(NSDate *)arg1 limit:(NSNumber *)arg2 remindScene:(NSString *)arg3;
- (NSArray *)daoSelectRemindListFromDateWithScene:(NSDate *)arg1 limit:(NSNumber *)arg2 read:(NSNumber *)arg3 remindScene:(NSString *)arg4;
- (APDAOResult *)daoClearRemindsWithScene:(NSString *)arg1;
- (NSNumber *)daoSelectUnreadRemindCountFromDate:(NSDate *)arg1 limit:(NSNumber *)arg2;
- (APDAOResult *)daoClearAllReminds;
- (NSArray *)daoSelectRemindListFromDate:(NSDate *)arg1 limit:(NSNumber *)arg2 read:(NSNumber *)arg3;
- (NSArray *)daoSelectRemindWithMidList:(NSArray *)arg1;
- (APDAOResult *)daoDeleteRemindWithMidList:(NSArray *)arg1;
- (APDAOResult *)daoInsertRemindList:(NSArray *)arg1;
@end

