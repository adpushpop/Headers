//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QZoneGIFDecodeCacheHelper : NSObject
{
    NSMutableDictionary *_frames;
    unsigned long long _frameCount;
    NSMutableDictionary *_frameDurations;
    long long _oneGifSize;
    int _xo;
}

- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long frameCount; // @dynamic frameCount;
@property(retain, nonatomic) NSMutableDictionary *frameDurations; // @dynamic frameDurations;
@property(retain, nonatomic) NSMutableDictionary *frames; // @dynamic frames;

@end
