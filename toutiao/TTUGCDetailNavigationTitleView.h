//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ExploreAvatarView, NSString, SSThemedLabel, TTIconLabel;

@interface TTUGCDetailNavigationTitleView : SSThemedView <UIGestureRecognizerDelegate>
{
    _Bool _isShow;
    _Bool _isAnimating;
    unsigned long long _type;
    ExploreAvatarView *_logoView;
    TTIconLabel *_titleLabel;
    SSThemedLabel *_fansLabel;
    CDUnknownBlockType _titleViewTapHandler;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) CDUnknownBlockType titleViewTapHandler; // @synthesize titleViewTapHandler=_titleViewTapHandler;
@property(retain, nonatomic) SSThemedLabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) TTIconLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ExploreAvatarView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)show:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setTitleAlpha:(double)arg1;
- (void)clickTitleView:(id)arg1;
- (void)setTapHandler:(CDUnknownBlockType)arg1;
- (void)showVerifyIconWithVerifyInfo:(id)arg1 decoratorURL:(id)arg2 logoViewIsHiden:(_Bool)arg3;
- (void)updateNavigationTitle:(id)arg1 imageURL:(id)arg2 verifyInfo:(id)arg3 decoratorURL:(id)arg4 fansNum:(long long)arg5;
- (void)themeChanged:(id)arg1;
- (void)refreshUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
