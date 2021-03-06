//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKIconLable, NSString, UIButton, UIImage, UIImageView, UILabel;
@protocol MBKCarCodeUserSelectionDelegate;

@interface MBKBusQRCodeView : UIView
{
    long long _viewType;
    id <MBKCarCodeUserSelectionDelegate> _delegate;
    UIImage *_QrIcon;
    NSString *_preferentialText;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_content;
    UIButton *_sureButton;
    MBKIconLable *_busCodeFresh;
}

@property(retain, nonatomic) MBKIconLable *busCodeFresh; // @synthesize busCodeFresh=_busCodeFresh;
@property(retain, nonatomic) UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *preferentialText; // @synthesize preferentialText=_preferentialText;
@property(retain, nonatomic) UIImage *QrIcon; // @synthesize QrIcon=_QrIcon;
@property(nonatomic) id <MBKCarCodeUserSelectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)hideAll;
- (void)busCodeUsed;
- (void)busCodeNew;
- (void)wxClose;
- (void)busCodeExpier;
- (void)unPayOrder;
- (void)screenShotShareToAnother;
- (void)busCodeGuideLine;
- (void)openBusCodeService;
- (void)layoutSubviews;
- (void)buttonClicked:(id)arg1;
- (void)freshClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

