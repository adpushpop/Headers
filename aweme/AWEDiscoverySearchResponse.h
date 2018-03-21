//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface AWEDiscoverySearchResponse : MTLModel <MTLJSONSerializing>
{
    long long _type;
    NSArray *_userList;
    NSNumber *_cursor;
    long long _hasMore;
    long long _statusCode;
    NSString *_userId;
}

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
