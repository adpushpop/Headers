//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MMMusicPlayerErrInfo;

@protocol MMMusicPlayerExt

@optional
- (void)onDataBuffering:(double)arg1;
- (void)onNeedSetPlayPercent;
- (void)onNewSeekTime:(double)arg1;
- (void)onForceStopMusic;
- (void)onMusicPlayStatusChanged:(unsigned long long)arg1 error:(MMMusicPlayerErrInfo *)arg2;
- (void)onLevelMeterPeak:(float)arg1;
@end

