//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FriendsVerifyMsgRspHeadModel : NSObject
{
    int _result;
    int _seq;
    NSString *_msg_fail;
}

@property(retain, nonatomic) NSString *msg_fail; // @synthesize msg_fail=_msg_fail;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

