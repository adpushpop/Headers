//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBContactGroup.h"

@class NSDictionary, NSString, WBResultSet;

@interface WBUserListGroup : WBContactGroup
{
    WBResultSet *_userList;
}

+ (long long)groupTypeFromString:(id)arg1;
@property(retain, nonatomic) WBResultSet *userList; // @synthesize userList=_userList;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)purgeUserList;
@property(readonly, retain, nonatomic) NSString *groupTypeString;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;

@end

