//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface GestureUserTipView : UIView
{
    NSString *_accountInfo;
    NSString *_errorInfo;
    UILabel *_accountLabel;
    UILabel *_errorLabel;
}

@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(copy, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(copy, nonatomic) NSString *accountInfo; // @synthesize accountInfo=_accountInfo;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
