//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZVideoFeedCommStateView.h>

@class UILabel, UIView;

@interface QZFeedVideoStateView : QZVideoFeedCommStateView
{
    UILabel *_msgLabel;
    UIView *_msgBg;
    _Bool _alwaysHideDurationLabel;
}

@property(nonatomic) _Bool alwaysHideDurationLabel; // @synthesize alwaysHideDurationLabel=_alwaysHideDurationLabel;
- (void).cxx_destruct;
- (unsigned long long)actionTypeWithPoint:(struct CGPoint)arg1;
- (void)changeTimeBgAlpha;
- (void)setState:(unsigned long long)arg1;
- (void)reset;

@end

