//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOInfoModel.h>

@class NSString;

@interface QQTimeModel : QQAIOInfoModel
{
    double _time;
    NSString *_timeStr;
    int _timeType;
    NSString *_voiceOverStr;
}

- (void).cxx_destruct;
- (double)cellHeight;
- (id)eventHandleClassName;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;
@property(readonly, copy, nonatomic) NSString *voiceOverStr; // @dynamic voiceOverStr;
@property(copy, nonatomic) NSString *timeStr; // @dynamic timeStr;
- (id)initWithTime:(double)arg1;

// Remaining properties
@property(nonatomic) double time; // @dynamic time;
@property(nonatomic) int timeType; // @dynamic timeType;

@end

