//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTAccountMulticastProtocol-Protocol.h"

@class NSDictionary, NSString, SSThemedLabel, TTImageView, UIButton;
@protocol WDWendaListCellInputCommentViewDelegate;

@interface WDWendaListCellInputCommentView : SSThemedView <TTAccountMulticastProtocol>
{
    _Bool _isInputingState;
    id <WDWendaListCellInputCommentViewDelegate> _delegate;
    SSThemedView *_cellAvatarView;
    SSThemedView *_placeHolderView;
    NSString *_ansid;
    NSDictionary *_gdExtJson;
    SSThemedLabel *_placeHolderLabel;
    TTImageView *_imageView;
    UIButton *_inputButton;
}

@property(nonatomic) _Bool isInputingState; // @synthesize isInputingState=_isInputingState;
@property(retain, nonatomic) UIButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) TTImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SSThemedLabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
@property(copy, nonatomic) NSString *ansid; // @synthesize ansid=_ansid;
@property(retain, nonatomic) SSThemedView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(retain, nonatomic) SSThemedView *cellAvatarView; // @synthesize cellAvatarView=_cellAvatarView;
@property(nonatomic) __weak id <WDWendaListCellInputCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inputButtonClick:(id)arg1;
- (void)avatarButtonClick:(id)arg1;
- (void)notifyDelegate;
- (void)onAccountLogin;
- (void)stopInputingWithCommentView:(id)arg1;
- (void)startInputingWithCommentView:(id)arg1;
- (void)setPlaceHolderViewSubviewsFrameInputingState:(_Bool)arg1;
- (void)setPlaceHolderViewFrame;
- (void)refreshSubviewsContentAndLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
