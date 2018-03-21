//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface QQAVBarrageView : UIView
{
    NSMutableArray *_tagsArray;
    NSMutableDictionary *_viewsDict;
    double *_pointsY;
    NSTimer *_barrageTimer;
    NSMutableArray *_colorsArray;
    NSMutableArray *_fontsArray;
    NSMutableArray *_stepLengthArray;
    double *_trackMarginLeft;
    NSMutableArray *_trackIndexArray;
    NSMutableArray *_trackIndexSelectedArray;
    int _curCount;
    int _trackIndex;
    int _fontsIndex;
    int _colorIndex;
    int _trackNum;
    int _trackMargin;
    int _usingTrackNum;
    int _fps;
    NSString *_fontName;
}

@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) int fps; // @synthesize fps=_fps;
@property(nonatomic) int usingTrackNum; // @synthesize usingTrackNum=_usingTrackNum;
@property(nonatomic) int trackMargin; // @synthesize trackMargin=_trackMargin;
@property(nonatomic) int trackNum; // @synthesize trackNum=_trackNum;
- (id)randNumberNORepeat:(int)arg1 max:(int)arg2 count:(int)arg3;
- (int)randNumber:(int)arg1 max:(int)arg2;
- (_Bool)isFontDownloaded:(id)arg1;
- (void)onAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)startAnimation:(id)arg1;
- (void)fixContent:(id)arg1 withTag:(id)arg2;
- (id)addContent:(id)arg1;
- (void)dealloc;
- (void)initPointsY;
- (id)getTagCanUse;
- (void)initTags;
- (int)getColorIndexNORan;
- (int)getFontsIndexNORan;
- (int)getTrackIndexNORan;
- (id)getTrackArray:(int)arg1;
- (int)getTrack;
- (void)initTrack;
- (void)initStepLength;
- (void)initFonts;
- (void)initColors;
- (id)initWithFrame:(struct CGRect)arg1 withTrackNum:(int)arg2 withTrackMargin:(int)arg3;

@end
