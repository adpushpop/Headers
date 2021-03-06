//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TBMPBPlayerOptions : NSObject
{
    _Bool _autoplay;
    _Bool _loop;
    _Bool _cache;
    _Bool _pauseInBackground;
    _Bool _playerShouldUpthrowImage;
    int _playerType;
    int _playScenario;
    int _playerRenderType;
    int _playerRenderOrientation;
    NSDictionary *_extraConfig;
}

+ (id)defaultPlayerOptions;
@property(copy, nonatomic) NSDictionary *extraConfig; // @synthesize extraConfig=_extraConfig;
@property(nonatomic) int playerRenderOrientation; // @synthesize playerRenderOrientation=_playerRenderOrientation;
@property(nonatomic) int playerRenderType; // @synthesize playerRenderType=_playerRenderType;
@property(nonatomic) _Bool playerShouldUpthrowImage; // @synthesize playerShouldUpthrowImage=_playerShouldUpthrowImage;
@property(nonatomic) _Bool pauseInBackground; // @synthesize pauseInBackground=_pauseInBackground;
@property(nonatomic) _Bool cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) int playScenario; // @synthesize playScenario=_playScenario;
@property(nonatomic) int playerType; // @synthesize playerType=_playerType;
- (void).cxx_destruct;
- (id)init;

@end

