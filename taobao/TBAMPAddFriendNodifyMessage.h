//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBAMPTextMessage.h"

@class NSString;

@interface TBAMPAddFriendNodifyMessage : TBAMPTextMessage
{
    NSString *_nick;
    NSString *_logoUrl;
    NSString *_phone;
}

@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;
- (id)initWithPacetObject:(id)arg1;
- (void)loadFromCoreDataMessage:(id)arg1;
- (void)copyToCoreDataMessage:(id)arg1;
- (void)loadDataWithMessage:(id)arg1;
- (id)ampDeepCopy;
- (id)initWithMessage:(id)arg1;
- (id)initWithJson:(id)arg1;

@end

