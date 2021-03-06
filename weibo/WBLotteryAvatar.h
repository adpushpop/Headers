//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIColor, UIImageView, UILabel, WBLotteryAvatarView, WBUser;

@interface WBLotteryAvatar : UIView
{
    float avatarViewMeasure;
    float avatarSmallViewMeasure;
    float avatarLabelToAvatarViewMargin;
    float avatarLabelHeight;
    WBLotteryAvatarView *avatarView;
    UIImageView *backgroundImageView;
    UILabel *userNameLabel;
    NSDictionary *user;
    NSDictionary *frameDict;
    WBUser *userModel;
    UIColor *userNameColor;
}

@property(retain, nonatomic) UIColor *userNameColor; // @synthesize userNameColor;
@property(retain, nonatomic) WBUser *userModel; // @synthesize userModel;
@property(nonatomic) float avatarLabelHeight; // @synthesize avatarLabelHeight;
@property(nonatomic) float avatarLabelToAvatarViewMargin; // @synthesize avatarLabelToAvatarViewMargin;
@property(nonatomic) float avatarSmallViewMeasure; // @synthesize avatarSmallViewMeasure;
@property(nonatomic) float avatarViewMeasure; // @synthesize avatarViewMeasure;
@property(retain, nonatomic) NSDictionary *frameDict; // @synthesize frameDict;
@property(retain, nonatomic) NSDictionary *user; // @synthesize user;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView;
@property(retain, nonatomic) WBLotteryAvatarView *avatarView; // @synthesize avatarView;
- (void)avatarViewPressed:(id)arg1;
- (void)userNameAppear;
- (void)userNameDisappear;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withFrameInfo:(id)arg2;
- (void)dealloc;

@end

