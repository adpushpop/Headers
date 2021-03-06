//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableDictionary, UIButton, UIImageView, UILabel, UIView;

@interface MessageTableViewCell : UITableViewCell
{
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_timeLabel;
    UIButton *_overdueButton;
    UIImageView *_contentImageView;
    UIImageView *_rightArrowImageView;
    UIView *_newMessageHintView;
    NSMutableDictionary *_messageInfo;
}

+ (long long)heightForCellWith:(id)arg1;
+ (long long)getMessageCellType:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *messageInfo; // @synthesize messageInfo=_messageInfo;
@property(retain, nonatomic) UIView *newMessageHintView; // @synthesize newMessageHintView=_newMessageHintView;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIButton *overdueButton; // @synthesize overdueButton=_overdueButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addConstraints;
- (void)updateCellWithDict:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

