//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TightTableViewCell.h>

@class NearbyFriendCellTag, UIImageView, UILabel, UIView;

@interface NearbyCharmInfoCell : TightTableViewCell
{
    UIView *_tipsLabelView;
    UIView *_charmView;
    UIImageView *_iconView;
    NearbyFriendCellTag *_levelCountTag;
    UILabel *_levelStrLabel;
    UILabel *_rightLabel;
}

- (void).cxx_destruct;
- (void)setVoiceOverString:(int)arg1 perCharm:(int)arg2 summaryType:(int)arg3;
- (void)selectCell:(id)arg1;
- (void)layoutCharmInfo;
- (void)layoutSubviews;
- (void)showTipsLabelAnimation;
- (void)showTipsLabelAnimation:(id)arg1;
- (void)createLevelImage;
- (void)createLevelImage:(id)arg1;
- (void)showTaskProgress;
- (void)showCharmLevel;
- (void)configure:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
