//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseMessage.h"

@class NSString;

@interface TTIMGroupSendMsgResponse : TTResponseMessage
{
    long long _svrMsgId;
    long long _svrIndex;
    NSString *_extraInfo;
}

@property(copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long svrIndex; // @synthesize svrIndex=_svrIndex;
@property(nonatomic) long long svrMsgId; // @synthesize svrMsgId=_svrMsgId;
- (void).cxx_destruct;
- (void)extractProto:(id)arg1;
- (id)init;

@end
