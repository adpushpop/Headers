//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface commandModel : NSObject
{
    NSString *_groupCode;
    long long _commandType;
    unsigned int _timeStamp;
    int _totalReqCount;
    int _requestCount;
    unsigned long long _groupUin;
    int _lastSeq;
    _Bool _topRefreshForce;
    int _xo;
}

+ (id)cmdModelForGroupUin:(unsigned long long)arg1 groupCode:(id)arg2 cmdType:(long long)arg3 time:(unsigned int)arg4;
@property(nonatomic) _Bool topRefreshForce; // @synthesize topRefreshForce=_topRefreshForce;
@property(nonatomic) int lastSeq; // @synthesize lastSeq=_lastSeq;
- (void)dealloc;

// Remaining properties
@property(nonatomic) long long commandType; // @dynamic commandType;
@property(retain, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(nonatomic) unsigned long long groupUin; // @dynamic groupUin;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;

@end
