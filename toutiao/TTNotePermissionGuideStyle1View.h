//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTNotePermissonGuideView.h"

@class NSMutableArray, SSThemedButton, SSThemedView;

@interface TTNotePermissionGuideStyle1View : TTNotePermissonGuideView
{
    SSThemedButton *_continueUseButton;
    SSThemedButton *_openSysSettingButton;
    SSThemedView *_seperatorView;
    NSMutableArray *_buttonArray;
}

@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) SSThemedView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) SSThemedButton *openSysSettingButton; // @synthesize openSysSettingButton=_openSysSettingButton;
@property(retain, nonatomic) SSThemedButton *continueUseButton; // @synthesize continueUseButton=_continueUseButton;
- (void).cxx_destruct;
- (id)createSeparator;
- (id)createButton;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (void)actionForDidTapButton:(id)arg1;
- (void)layoutSubviews;
- (void)setupTappedTextButtons;
- (void)dealloc;

@end
