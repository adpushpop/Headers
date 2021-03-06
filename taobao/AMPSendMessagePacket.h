//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class TBAMPMessage;

@interface AMPSendMessagePacket : AMPNetPacket
{
    TBAMPMessage *_message;
}

@property(retain, nonatomic) TBAMPMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)verifySendMessage;
- (void)trackActionSuccess:(_Bool)arg1 error:(id)arg2 duration:(double)arg3;
- (_Bool)sendAccsBody:(id)arg1 appkey:(id)arg2 callback:(id)arg3;
- (id)generateAccsHeader;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (void)retryAction:(unsigned long long)arg1;
- (id)initWithMessage:(id)arg1;

@end

