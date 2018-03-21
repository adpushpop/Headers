//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APVideoPlayerDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface Ant3DPlayerManager : NSObject <APVideoPlayerDelegate>
{
    NSMutableDictionary *_playerInfoMap;
}

- (void).cxx_destruct;
- (void)videoPlayerDidFinishToEnd:(id)arg1;
- (id)resolveIdentifier:(id)arg1;
- (void)setNodeId:(id)arg1 toPlayer:(id)arg2;
- (id)getNodeIdForPlayer:(id)arg1;
- (struct __CVBuffer *)pixelBufferForNodeId:(id)arg1;
- (id)nodeIds;
- (void)stopVideoForNodeId:(id)arg1;
- (void)pauseVideoForNodeId:(id)arg1;
- (void)playVideoForNodeId:(id)arg1;
- (void)setVideoIdentifier:(id)arg1 forNodeId:(id)arg2 repeatCount:(int)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
