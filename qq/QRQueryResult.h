//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabase, FMResultSet;

@interface QRQueryResult : NSObject
{
    FMDatabase *_database;
    _Bool _status;
    FMResultSet *_resultSet;
    unsigned long long _lastInsertId;
}

@property(readonly, nonatomic) _Bool status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long lastInsertId; // @synthesize lastInsertId=_lastInsertId;
@property(readonly, nonatomic) FMResultSet *resultSet; // @synthesize resultSet=_resultSet;
- (void)dealloc;
- (id)description;
- (id)initWithStatus:(_Bool)arg1 andResultSet:(id)arg2 andDatabase:(id)arg3;

@end

