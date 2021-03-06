//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAsynUrlImageView, UIButton, UILabel;
@protocol QQReadInJoySubsChannelHeaderDelegate;

@interface QQReadInJoySubsChannelHeader : UIView
{
    unsigned int _parentChannelId;
    unsigned int _channelId;
    id <QQReadInJoySubsChannelHeaderDelegate> _delegate;
    QQAsynUrlImageView *_coverView;
    UILabel *_channelTitleLabel;
    UILabel *_channelInfoLabel;
    UIButton *_followButton;
}

@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *channelInfoLabel; // @synthesize channelInfoLabel=_channelInfoLabel;
@property(retain, nonatomic) UILabel *channelTitleLabel; // @synthesize channelTitleLabel=_channelTitleLabel;
@property(retain, nonatomic) QQAsynUrlImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <QQReadInJoySubsChannelHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int channelId; // @synthesize channelId=_channelId;
@property(nonatomic) unsigned int parentChannelId; // @synthesize parentChannelId=_parentChannelId;
- (void).cxx_destruct;
- (int)headerShowNavOffset;
- (int)headerHeight;
- (int)statusBarHeight;
- (void)setTitleOnFollowButton:(_Bool)arg1;
- (void)setFollowNumber:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)updateCoverHeight:(double)arg1;
- (void)onClickFollow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

