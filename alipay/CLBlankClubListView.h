//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface CLBlankClubListView : UIView
{
    UIImageView *_imageView;
    UILabel *_noticeLabel;
    UIButton *_actionButton;
    CDUnknownBlockType _buttonCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType buttonCallBack; // @synthesize buttonCallBack=_buttonCallBack;
- (void).cxx_destruct;
- (void)onButtonClick:(id)arg1;
- (void)addActionButton;
- (void)buildSubViews:(id)arg1;
- (id)initWithNotice:(id)arg1 buttonActionBlock:(CDUnknownBlockType)arg2;
- (id)initWithNotice:(id)arg1;

@end

