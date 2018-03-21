//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CampusCircleRequest.h>

#import <QQMainProject/GSRequestProtocol-Protocol.h>

@class NSString;

@interface QCCFeedRequest : CampusCircleRequest <GSRequestProtocol>
{
    NSString *_uin;
    unsigned long long _feedCount;
    NSString *_targetFeedContent;
}

@property(retain, nonatomic) NSString *targetFeedContent; // @synthesize targetFeedContent=_targetFeedContent;
@property(nonatomic) unsigned long long feedCount; // @synthesize feedCount=_feedCount;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (id)logicError;
- (id)parseRespError;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceNumber;
- (unsigned int)serviceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
