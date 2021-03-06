//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatTableViewCell.h"

@class UIImageView, UILabel;

@interface MMChatroomTableViewCell : MMChatTableViewCell
{
    UILabel *_blockLabel;
    UIImageView *_dotView;
}

@property(retain, nonatomic) UIImageView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UILabel *blockLabel; // @synthesize blockLabel=_blockLabel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)avatarViewPressed:(id)arg1;
- (void)layoutSubviews;
- (void)setConversation:(id)arg1;
- (void)setAvatarViewImage:(id)arg1;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

