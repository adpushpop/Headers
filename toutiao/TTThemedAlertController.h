//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, TTThemedAlertActionModel, UIButton, UIImageView, UILabel, UIPopoverController, UITableView, UITextView, UIView;

@interface TTThemedAlertController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isPopover;
    UIView *_visualEffectView;
    UIView *_alertView;
    UIView *_actionSheetView;
    UIPopoverController *_iPadPopoverController;
    UITableView *_contentTableView;
    UIView *_headerView;
    UILabel *_titleLabel;
    UITextView *_textView;
    UIView *_textFieldsView;
    UIImageView *_bannerImageView;
    UIButton *_actionSheetCancelButton;
    UIView *_actionSheetCancelButtonBgView;
    UIViewController *_showFromViewController;
    long long _alertType;
    NSString *_alertTitle;
    NSString *_message;
    double _tableViewWidth;
    NSMutableArray *_actionBlockArr;
    NSMutableArray *_textFieldArr;
    CDUnknownBlockType _textViewActionBlock;
    TTThemedAlertActionModel *_actionSheetCancelAction;
    NSDictionary *_alertUIConfiguration;
}

@property(retain, nonatomic) NSDictionary *alertUIConfiguration; // @synthesize alertUIConfiguration=_alertUIConfiguration;
@property(retain, nonatomic) TTThemedAlertActionModel *actionSheetCancelAction; // @synthesize actionSheetCancelAction=_actionSheetCancelAction;
@property(copy, nonatomic) CDUnknownBlockType textViewActionBlock; // @synthesize textViewActionBlock=_textViewActionBlock;
@property(retain, nonatomic) NSMutableArray *textFieldArr; // @synthesize textFieldArr=_textFieldArr;
@property(retain, nonatomic) NSMutableArray *actionBlockArr; // @synthesize actionBlockArr=_actionBlockArr;
@property(nonatomic) _Bool isPopover; // @synthesize isPopover=_isPopover;
@property(nonatomic) double tableViewWidth; // @synthesize tableViewWidth=_tableViewWidth;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) UIViewController *showFromViewController; // @synthesize showFromViewController=_showFromViewController;
@property(retain, nonatomic) UIView *actionSheetCancelButtonBgView; // @synthesize actionSheetCancelButtonBgView=_actionSheetCancelButtonBgView;
@property(retain, nonatomic) UIButton *actionSheetCancelButton; // @synthesize actionSheetCancelButton=_actionSheetCancelButton;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) UIView *textFieldsView; // @synthesize textFieldsView=_textFieldsView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) UIPopoverController *iPadPopoverController; // @synthesize iPadPopoverController=_iPadPopoverController;
@property(retain, nonatomic) UIView *actionSheetView; // @synthesize actionSheetView=_actionSheetView;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void).cxx_destruct;
- (void)dismissSelfFromParentViewControllerWithComplectionBlock:(CDUnknownBlockType)arg1;
- (void)dismissSelfFromParentViewControllerDidCancel;
- (void)layoutBeforeAnimation;
- (void)showSelfWithAnimated:(_Bool)arg1;
- (void)buildSelfAsChildViewControllerOfViewController:(id)arg1;
- (void)addSelfAsChildViewControllerOfViewController:(id)arg1;
- (void)showContent;
- (void)showFrom:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3 sourceBarButton:(id)arg4 animated:(_Bool)arg5;
- (void)showFrom:(id)arg1 animated:(_Bool)arg2 keyboardPresentingWithFrameTop:(double)arg3;
- (void)showFrom:(id)arg1 animated:(_Bool)arg2;
- (void)didSelectActionAtIndex:(long long)arg1;
- (void)alertHorizentalRightButtonPressed;
- (void)alertHorizentalLeftButtonPressed;
- (void)keyboardDidShow:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)isSingleLineTitle;
- (struct CGRect)frameOfToBeAddedTextElement:(id)arg1;
- (double)titleViewHeight;
- (double)contentTableHeaderViewHeight;
- (double)contentTableViewHeight;
- (void)arrangeActionBlockArr;
- (long long)numberOfContentCells;
- (_Bool)showSingleLineCellHorizentally;
- (_Bool)shouldSortActionsVertically;
- (void)initContainers;
- (void)addTTThemedAlertControllerUIConfig:(id)arg1;
- (void)actionSheetCancelActionTrigged;
- (void)addTextViewWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (void)addActionWithTitle:(id)arg1 actionType:(long long)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)addBannerImage:(id)arg1;
- (void)adjustAlertViewLocationIfNeededWithFrameTop:(double)arg1;
- (void)restrictToTableViewWithForSubView:(id)arg1;
- (void)layoutActionSheetViewSubViewsWhenOrientationOccured;
- (void)layoutViewsWhenOrientationOccured;
- (void)themedMainContentView:(id)arg1;
- (void)configContent;
- (void)settingActionSheetFrame;
- (void)settingAlertView;
- (struct CGRect)_alertViewFrame;
- (void)constructTableView;
- (struct CGRect)_tableViewFrame;
- (void)configHeaderView;
- (void)configTitleView;
- (struct CGRect)_headerViewFrame;
- (id)uniqueTextView;
- (void)addObservers;
- (void)dealloc;
- (void)layoutOniOS7WithOrientation:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)buildPopoverContent;
- (void)buildContent;
- (void)configViews;
- (void)layoutSubViewsInController;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)arg1 message:(id)arg2 preferredType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

