//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ALBBAuthRuleView, UIButton, UIImageView, UILabel;
@protocol ALBBAuthViewDelegate;

@interface ALBBAuthView : UIView
{
    id <ALBBAuthViewDelegate> _delegate;
    ALBBAuthRuleView *_authorityView;
    UIButton *_authButton;
    UIImageView *_appIconView;
    UILabel *_appNameLabel;
    UILabel *_authTitleLabel;
}

@property(retain, nonatomic) UILabel *authTitleLabel; // @synthesize authTitleLabel=_authTitleLabel;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) UIImageView *appIconView; // @synthesize appIconView=_appIconView;
@property(retain, nonatomic) UIButton *authButton; // @synthesize authButton=_authButton;
@property(retain, nonatomic) ALBBAuthRuleView *authorityView; // @synthesize authorityView=_authorityView;
@property(nonatomic) __weak id <ALBBAuthViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)authAndLogin;
- (void)loadDataWithAppUrl:(id)arg1 appName:(id)arg2 authorityList:(id)arg3;
- (void)showAuth;

@end
