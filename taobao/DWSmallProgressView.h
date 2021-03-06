//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DWAnchorNaviView, NSDateFormatter, UILabel;

@interface DWSmallProgressView : UIView
{
    _Bool _progressViewHidden;
    _Bool _anchorHidden;
    double _progress;
    double _maxProgress;
    double _totalDuration;
    double _curDuration;
    UILabel *_timeLabel;
    double _secondaryValue;
    UIView *_frontView;
    UIView *_midView;
    NSDateFormatter *_dateFormatter;
    DWAnchorNaviView *_anchorNaviView;
    UIView *_progressView;
}

@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) DWAnchorNaviView *anchorNaviView; // @synthesize anchorNaviView=_anchorNaviView;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) UIView *midView; // @synthesize midView=_midView;
@property(retain, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(nonatomic) _Bool anchorHidden; // @synthesize anchorHidden=_anchorHidden;
@property(nonatomic) _Bool progressViewHidden; // @synthesize progressViewHidden=_progressViewHidden;
@property(nonatomic) double secondaryValue; // @synthesize secondaryValue=_secondaryValue;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) double curDuration; // @synthesize curDuration=_curDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, nonatomic) double maxProgress; // @synthesize maxProgress=_maxProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateAnchorNaviWithDuration:(double)arg1;
- (void)updateAnchorNaviWithModels:(id)arg1 duration:(double)arg2;
- (void)insertAnchorNaviView;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateAnchorViewState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

