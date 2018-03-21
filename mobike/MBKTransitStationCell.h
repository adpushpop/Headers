//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MBKViewProtocol-Protocol.h"

@class MBKTransitStationCellModel, Mobike_ViewController, NSString, UIImageView, UILabel, UIView;

@interface MBKTransitStationCell : UITableViewCell <MBKViewProtocol>
{
    UIView *_startBackgroundView;
    UIView *_startStopPointView;
    UILabel *_startStoplabel;
    UIImageView *_arrowImageView;
    UIView *_endBackgroundView;
    UIView *_endStopPointView;
    UILabel *_endStoplabel;
    UIView *_lineView;
    MBKTransitStationCellModel *_model;
    id _delegate;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKTransitStationCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *endStoplabel; // @synthesize endStoplabel=_endStoplabel;
@property(retain, nonatomic) UIView *endStopPointView; // @synthesize endStopPointView=_endStopPointView;
@property(retain, nonatomic) UIView *endBackgroundView; // @synthesize endBackgroundView=_endBackgroundView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *startStoplabel; // @synthesize startStoplabel=_startStoplabel;
@property(retain, nonatomic) UIView *startStopPointView; // @synthesize startStopPointView=_startStopPointView;
@property(retain, nonatomic) UIView *startBackgroundView; // @synthesize startBackgroundView=_startBackgroundView;
- (void).cxx_destruct;
- (void)updateEndStopString;
- (void)updateStartStopString;
- (void)initLineView;
- (void)initEndStopPointView;
- (void)initEndStoplabel;
- (void)initEndBackgroundView;
- (void)initStartStopPointView;
- (void)initStartStoplabel;
- (void)initStartBackgroundView;
- (void)initArrowImageView;
- (void)configSubView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(nonatomic) __weak Mobike_ViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
