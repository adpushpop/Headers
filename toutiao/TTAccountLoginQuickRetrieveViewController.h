//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAccountLoginBaseViewController.h"

@class NSString, SSThemedLabel, SSThemedView;

@interface TTAccountLoginQuickRetrieveViewController : TTAccountLoginBaseViewController
{
    long long _state;
    NSString *_phoneNumberString;
    SSThemedLabel *_upInfoLabel;
    SSThemedLabel *_bottomInfoLabel;
    SSThemedView *_areaSeparatorView;
    SSThemedLabel *_areaLabel;
    SSThemedView *_areaView;
}

@property(retain, nonatomic) SSThemedView *areaView; // @synthesize areaView=_areaView;
@property(retain, nonatomic) SSThemedLabel *areaLabel; // @synthesize areaLabel=_areaLabel;
@property(retain, nonatomic) SSThemedView *areaSeparatorView; // @synthesize areaSeparatorView=_areaSeparatorView;
@property(retain, nonatomic) SSThemedLabel *bottomInfoLabel; // @synthesize bottomInfoLabel=_bottomInfoLabel;
@property(retain, nonatomic) SSThemedLabel *upInfoLabel; // @synthesize upInfoLabel=_upInfoLabel;
@property(copy, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)isContentValid;
- (void)textFieldDidChange:(id)arg1;
- (void)resendButtonClicked:(id)arg1;
- (void)rightItemClicked;
- (void)leftItemClicked;
- (void)changePassword;
- (void)sendCode:(long long)arg1;
- (void)registerButtonClicked:(id)arg1;
- (void)fitResendView;
- (void)layoutSubviews;
- (void)refreshSubviews;
- (void)initSubviews;
- (void)viewDidLoad;
- (id)init;

@end

