//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFPopUpInfoV2, UIButton;

@interface TTFInviteTaskPopView : UIView
{
    CDUnknownBlockType _closeAction;
    CDUnknownBlockType _finishAction;
    TTFPopUpInfoV2 *_info;
    UIView *_contentView;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TTFPopUpInfoV2 *info; // @synthesize info=_info;
@property(copy, nonatomic) CDUnknownBlockType finishAction; // @synthesize finishAction=_finishAction;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void).cxx_destruct;
- (void)_closeBtnClick;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)_setupContentView;
- (id)initWithFrame:(struct CGRect)arg1 info:(id)arg2;

@end

