//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTLUserInfoCard.h"

@class TTLRoomFollowService, UIButton;

@interface TTLAudienceLiveEndingInfoCard : TTLUserInfoCard
{
    UIButton *_followButton;
    TTLRoomFollowService *_followService;
}

@property(retain, nonatomic) TTLRoomFollowService *followService; // @synthesize followService=_followService;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
- (void).cxx_destruct;
- (void)_follow;
- (void)setUser:(id)arg1;
- (id)_attributedStringFromNumber:(long long)arg1;
- (void)_updateSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
