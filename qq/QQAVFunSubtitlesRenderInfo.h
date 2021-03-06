//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface QQAVFunSubtitlesRenderInfo : NSObject
{
    int _trackNum;
    int _curStepCount;
    int _curXDegree;
    int _curYDegree;
    int _curZDegree;
    int _degreeXRate;
    int _degreeYRate;
    int _degreeZRate;
    int _rotateStartStep;
    NSString *_name;
    UIColor *_color;
    double _trackRate;
    double _stepLength;
    double _curLength;
    double _curScale;
    double _scaleRate;
}

@property(nonatomic) int rotateStartStep; // @synthesize rotateStartStep=_rotateStartStep;
@property(nonatomic) double scaleRate; // @synthesize scaleRate=_scaleRate;
@property(nonatomic) double curScale; // @synthesize curScale=_curScale;
@property(nonatomic) int degreeZRate; // @synthesize degreeZRate=_degreeZRate;
@property(nonatomic) int degreeYRate; // @synthesize degreeYRate=_degreeYRate;
@property(nonatomic) int degreeXRate; // @synthesize degreeXRate=_degreeXRate;
@property(nonatomic) int curZDegree; // @synthesize curZDegree=_curZDegree;
@property(nonatomic) int curYDegree; // @synthesize curYDegree=_curYDegree;
@property(nonatomic) int curXDegree; // @synthesize curXDegree=_curXDegree;
@property(nonatomic) double curLength; // @synthesize curLength=_curLength;
@property(nonatomic) int curStepCount; // @synthesize curStepCount=_curStepCount;
@property(nonatomic) double stepLength; // @synthesize stepLength=_stepLength;
@property(nonatomic) double trackRate; // @synthesize trackRate=_trackRate;
@property(nonatomic) int trackNum; // @synthesize trackNum=_trackNum;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

