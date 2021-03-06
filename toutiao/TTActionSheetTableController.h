//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSNumber, NSString, SSThemedButton, SSThemedView, TTActionSheetManager, TTActionSheetModel, TTActionSheetTitleView, UITableView;

@interface TTActionSheetTableController : UIViewController <UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate>
{
    TTActionSheetModel *_model;
    double _viewHeight;
    long long _source;
    TTActionSheetManager *_manager;
    CDUnknownBlockType _trackBlock;
    NSNumber *_adID;
    UITableView *_tableView;
    SSThemedButton *_finishedButton;
    SSThemedView *_bottomSafeAreaView;
    long long _numberOfRows;
    TTActionSheetTitleView *_titleView;
    double _screenWidth;
    double _screenHeight;
}

@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) TTActionSheetTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(retain, nonatomic) SSThemedView *bottomSafeAreaView; // @synthesize bottomSafeAreaView=_bottomSafeAreaView;
@property(retain, nonatomic) SSThemedButton *finishedButton; // @synthesize finishedButton=_finishedButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) CDUnknownBlockType trackBlock; // @synthesize trackBlock=_trackBlock;
@property(retain, nonatomic) TTActionSheetManager *manager; // @synthesize manager=_manager;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) TTActionSheetModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configViews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

