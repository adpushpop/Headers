//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimationlessLayer, UIButton;
@protocol KSVideoJoinBarDelegate;

@interface KSVideoJoinBar : UIView
{
    id <KSVideoJoinBarDelegate> _delegate;
    UIButton *_leftRotateBtn;
    UIButton *_swipeBtn;
    UIButton *_verificationBtn;
    UIButton *_rightRoateBtn;
    CAAnimationlessLayer *_topLine;
}

@property(retain, nonatomic) CAAnimationlessLayer *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *rightRoateBtn; // @synthesize rightRoateBtn=_rightRoateBtn;
@property(retain, nonatomic) UIButton *verificationBtn; // @synthesize verificationBtn=_verificationBtn;
@property(retain, nonatomic) UIButton *swipeBtn; // @synthesize swipeBtn=_swipeBtn;
@property(retain, nonatomic) UIButton *leftRotateBtn; // @synthesize leftRotateBtn=_leftRotateBtn;
@property(nonatomic) __weak id <KSVideoJoinBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapRightRoateBtn:(id)arg1;
- (void)didTapVerificationBtn:(id)arg1;
- (void)didTapSwipeBtn:(id)arg1;
- (void)didTapLeftRotateBtn:(id)arg1;
- (id)buttonWithImage:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)enableAllButtons;
- (void)disableAllButtons;
- (id)init;

@end
