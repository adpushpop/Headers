//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAvatarView, UIActivityIndicatorView, UILabel;

@interface SglMemSelMemberCell : UIView
{
    QQAvatarView *_imgHeaderView;
    UILabel *_labelNick;
    UILabel *_labelAtAllCount;
    UIActivityIndicatorView *_activityView;
    UILabel *_labelSelf;
}

- (void).cxx_destruct;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)loadCellWithMemberInfo:(id)arg1;
- (void)initCellUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

