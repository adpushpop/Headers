//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBLikeAttitudeViewDelegate-Protocol.h"
#import "WBViewControllerPeekingProvider-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIFont, UIImageView, WBTimelineItem, WBTimelineLikeButton;
@protocol WBTimelineActionButtonsViewDelegate;

@interface WBTimelineActionButtonsView : UIView <WBViewControllerPeekingProvider, WBLikeAttitudeViewDelegate>
{
    NSMutableArray *_actionButtons;
    _Bool _ignoreTimelineItemShouldShowButtonsSetting;
    _Bool _needsBackgroundImageForHighlightedState;
    _Bool _needsButtonSeparators;
    id <WBTimelineActionButtonsViewDelegate> _delegate;
    WBTimelineItem *_timelineItem;
    UIImageView *_actionButtonsBgImageView;
    NSString *_composeDefaultText;
    UIFont *_btnFont;
    long long _btnHeight;
    long long _lineHeight;
    long long _buttonWidth;
    WBTimelineLikeButton *_likeButton;
    NSArray *_actionButtonTypes;
}

+ (id)likedStatisticsWithParameters:(id)arg1 forStatus:(id)arg2;
+ (void)adClickeStatisticsWithActionCode:(id)arg1 status:(id)arg2;
+ (void)addExtParametersTo:(id)arg1 withStatus:(id)arg2;
+ (void)respondToLikeButton:(id)arg1 type:(unsigned long long)arg2 inView:(id)arg3 timelineItem:(id)arg4 delegate:(id)arg5 attitudeType:(long long)arg6 isClickAction:(_Bool)arg7;
+ (void)respondToLikeButton:(id)arg1 type:(unsigned long long)arg2 inView:(id)arg3 timelineItem:(id)arg4 delegate:(id)arg5;
+ (void)respondToForwardButton:(id)arg1 type:(unsigned long long)arg2 inView:(id)arg3 timelineItem:(id)arg4 delegate:(id)arg5;
+ (void)showForwardComposerWithStatus:(id)arg1 view:(id)arg2;
+ (void)respondToCommentButton:(id)arg1 type:(unsigned long long)arg2 inView:(id)arg3 timelineItem:(id)arg4 delegate:(id)arg5;
+ (_Bool)shouldJumpToDetailedStatusView:(id)arg1;
+ (void)showCommentComposerWithStatus:(id)arg1 view:(id)arg2;
@property(retain, nonatomic) NSArray *actionButtonTypes; // @synthesize actionButtonTypes=_actionButtonTypes;
@property(readonly, nonatomic) WBTimelineLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) long long buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) long long lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) long long btnHeight; // @synthesize btnHeight=_btnHeight;
@property(retain, nonatomic) UIFont *btnFont; // @synthesize btnFont=_btnFont;
@property(retain, nonatomic) NSString *composeDefaultText; // @synthesize composeDefaultText=_composeDefaultText;
@property(nonatomic) _Bool needsButtonSeparators; // @synthesize needsButtonSeparators=_needsButtonSeparators;
@property(nonatomic) _Bool needsBackgroundImageForHighlightedState; // @synthesize needsBackgroundImageForHighlightedState=_needsBackgroundImageForHighlightedState;
@property(nonatomic) _Bool ignoreTimelineItemShouldShowButtonsSetting; // @synthesize ignoreTimelineItemShouldShowButtonsSetting=_ignoreTimelineItemShouldShowButtonsSetting;
@property(retain, nonatomic) UIImageView *actionButtonsBgImageView; // @synthesize actionButtonsBgImageView=_actionButtonsBgImageView;
@property(retain, nonatomic) WBTimelineItem *timelineItem; // @synthesize timelineItem=_timelineItem;
@property(nonatomic) __weak id <WBTimelineActionButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)likeAttitudeView:(id)arg1 selectedOptionIndex:(unsigned long long)arg2 optionEntity:(id)arg3;
- (void)buttonAutoresizingMask:(id)arg1;
- (void)currentAccountDidChangeNotification:(id)arg1;
- (void)likeStateDidChangeNotification:(id)arg1;
- (void)likeStatePostRequestCompletedNotification:(id)arg1;
- (id)peekViewControllerForActionButtonType:(unsigned long long)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)didPressShareButton:(id)arg1;
- (void)didPressLikeButton:(id)arg1 withType:(unsigned long long)arg2;
- (void)didPressCancelLikeAndFavoriteButton:(id)arg1;
- (void)didPressCancelLikeButton:(id)arg1;
- (void)didPressCancelFavoriteButton:(id)arg1;
- (void)likeButtonLongGesture:(id)arg1;
- (void)didPressLikeButton:(id)arg1;
- (void)didPressForwardButton:(id)arg1 withType:(unsigned long long)arg2;
- (void)didPressForwardButton:(id)arg1;
- (void)didPressCommentButton:(id)arg1 withType:(unsigned long long)arg2;
- (void)didPressCommentButton:(id)arg1;
- (void)didPressActionButton:(id)arg1 atIndex:(unsigned long long)arg2 withType:(unsigned long long)arg3 andCommonButtonModel:(id)arg4;
- (void)didPressActionButton:(id)arg1;
- (void)initActionButtons;
- (_Bool)isNeedReinitActionButtons;
- (id)setupActionButtonAtIndex:(unsigned long long)arg1 withType:(unsigned long long)arg2 andCommonButtonModel:(id)arg3 andButtonName:(id)arg4;
- (id)buttonHighlightedBackgroundImage;
- (void)reloadActionButtonsUI;
- (void)reloadActionButtonUI:(id)arg1 atIndex:(unsigned long long)arg2 withType:(unsigned long long)arg3 andCommonButtonModel:(id)arg4;
- (void)refreshActionButton:(id)arg1 atIndex:(unsigned long long)arg2 withType:(unsigned long long)arg3 andCommonButtonModel:(id)arg4;
- (void)refreshActionButtons;
@property(readonly, nonatomic) _Bool shouldShowActionButtons;
- (void)setButtonsHighlighted:(_Bool)arg1;
- (void)setButtonsHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (Class)likeButtonClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

