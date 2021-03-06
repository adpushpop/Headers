//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, TWTRVideoDeeplinkConfiguration;

@interface TWTRVideoPlaybackConfiguration : NSObject
{
    NSURL *_videoURL;
    double _aspectRatio;
    double _duration;
    unsigned long long _mediaType;
    NSString *_mediaID;
    TWTRVideoDeeplinkConfiguration *_deeplinkConfiguration;
}

+ (id)expandedURLFromEntities:(id)arg1 matchingURL:(id)arg2;
+ (id)playbackConfigurationForCardEntity:(id)arg1 URLEntities:(id)arg2;
+ (id)lowestBitrateVariant:(id)arg1;
+ (id)bestVariantFromMetaData:(id)arg1;
+ (id)playbackConfigurationForTweetMediaEntity:(id)arg1;
@property(readonly, nonatomic) TWTRVideoDeeplinkConfiguration *deeplinkConfiguration; // @synthesize deeplinkConfiguration=_deeplinkConfiguration;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (id)initWithVideoURL:(id)arg1 aspectRatio:(double)arg2 duration:(double)arg3 mediaType:(unsigned long long)arg4 mediaID:(id)arg5 deeplinkConfiguration:(id)arg6;

@end

