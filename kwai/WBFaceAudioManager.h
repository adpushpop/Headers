//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WBFaceSound;

@interface WBFaceAudioManager : NSObject
{
    _Bool _allowsBackgroundMusic;
    float _musicVolume;
    double _soundFadeDuration;
    double _musicFadeDuration;
    WBFaceSound *_currentMusic;
    NSMutableArray *_currentSounds;
}

@property(retain, nonatomic) NSMutableArray *currentSounds; // @synthesize currentSounds=_currentSounds;
@property(retain, nonatomic) WBFaceSound *currentMusic; // @synthesize currentMusic=_currentMusic;
@property(nonatomic) double musicFadeDuration; // @synthesize musicFadeDuration=_musicFadeDuration;
@property(nonatomic) double soundFadeDuration; // @synthesize soundFadeDuration=_soundFadeDuration;
@property(nonatomic) float musicVolume; // @synthesize musicVolume=_musicVolume;
@property(nonatomic) _Bool allowsBackgroundMusic; // @synthesize allowsBackgroundMusic=_allowsBackgroundMusic;
- (void).cxx_destruct;
- (void)dealloc;
- (void)musicFinished:(id)arg1;
@property(readonly, nonatomic, getter=isPlayingMusic) _Bool playingMusic;
- (void)stopMusic;
- (void)stopMusic:(_Bool)arg1;
- (void)playMusic:(id)arg1;
- (void)playMusic:(id)arg1 fadeIn:(_Bool)arg2;
- (void)playMusic:(id)arg1 fadeIn:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)prepareToPlay;
- (void)prepareToPlayWithSound:(id)arg1;
- (id)init;

@end
