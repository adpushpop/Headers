//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface RecallNotiAIOModel : NSObject
{
    int _xo;
    NSString *_aioUin;
    NSMutableArray *_notiMsgs;
    int _aioType;
}

- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) int aioType; // @dynamic aioType;
@property(retain, nonatomic) NSString *aioUin; // @dynamic aioUin;
@property(retain, nonatomic) NSMutableArray *notiMsgs; // @dynamic notiMsgs;

@end
