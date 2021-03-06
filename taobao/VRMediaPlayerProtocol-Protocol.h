//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol VRMediaPlayerProtocol <NSObject>
@property(nonatomic) long long playStatus;
@property(readonly, nonatomic) long long status;
@property(nonatomic) struct __CVBuffer *currentVideoFrame;
@property(nonatomic) _Bool isDefaultPlayer;
@property(copy, nonatomic) NSString *playerName;
- (void)free;
- (double)bufferPersent;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (void)play;
- (void)pause;
- (_Bool)retrievePixelBufferToDraw;
- (void)setupVideoPlaybackForURL:(NSURL *)arg1;
- (id)initWithVideoPath:(NSURL *)arg1;

@optional
@property(nonatomic) double naturalHeightPixels;
@property(nonatomic) double naturalWidthPixels;
@property(nonatomic) float rate;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float volume;
- (NSString *)getMetaDataInfo;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)stop;
@end

