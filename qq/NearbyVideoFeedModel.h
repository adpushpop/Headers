//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface NearbyVideoFeedModel : QQModel
{
    NSString *_coverUrl;
    NSString *_videoUrl;
    unsigned int _videoDuration;
    unsigned int _watchTimes;
    int _xo;
    NSString *_tnowVideoUrl;
}

@property(copy, nonatomic) NSString *tnowVideoUrl; // @synthesize tnowVideoUrl=_tnowVideoUrl;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(nonatomic) unsigned int videoDuration; // @dynamic videoDuration;
@property(copy, nonatomic) NSString *videoUrl; // @dynamic videoUrl;
@property(nonatomic) unsigned int watchTimes; // @dynamic watchTimes;

@end

