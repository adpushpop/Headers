//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface APMidasToastContainerView : UIView
{
    UIView *divider;
    UIView *closeBtn;
    UILabel *nameLb;
    UILabel *priceLb;
    UIView *mbody;
    UIView *btn;
    UIImageView *closeImg;
}

- (void)onBtnClicked;
- (void)onClose;
- (void)dismiss;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 bodyView:(id)arg2 btnTitle:(id)arg3;

@end
