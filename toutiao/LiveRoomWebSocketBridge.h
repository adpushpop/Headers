//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol LiveRoomWebSocketProtocol;

@interface LiveRoomWebSocketBridge : NSObject
{
    id <LiveRoomWebSocketProtocol> _delegate;
}

+ (id)sharedBridge;
@property(retain, nonatomic) id <LiveRoomWebSocketProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;

@end

