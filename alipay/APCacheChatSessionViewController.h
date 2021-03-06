//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "APCacheChatSessionTableViewCellProtocol-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APToastView, NSMutableArray, NSString, UIButton, UILabel, UITableView, UIView;

@interface APCacheChatSessionViewController : DTViewController <UITableViewDelegate, UITableViewDataSource, APCacheChatSessionTableViewCellProtocol, UIActionSheetDelegate>
{
    UIButton *_selectAll;
    UIButton *_delete;
    UILabel *_sumSizeText;
    UIView *_footer;
    UITableView *_tableView;
    NSMutableArray *_models;
    APToastView *_toastView;
}

@property(retain, nonatomic) APToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)shouldRecalculateSize;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)delete;
- (void)selectAll;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

