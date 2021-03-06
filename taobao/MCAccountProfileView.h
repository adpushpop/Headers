//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MCAccountProfileViewProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MCAccountProfileVO, NSString, UIButton, UITableView;
@protocol MCAccountProfileCellVOHandler;

@interface MCAccountProfileView : UIView <UITableViewDelegate, UITableViewDataSource, MCAccountProfileViewProtocol>
{
    MCAccountProfileVO *_accoutProfile;
    id <MCAccountProfileCellVOHandler> _voToCellHandler;
    UITableView *_tableView;
    UIButton *_bottomButton;
    UIView *_tableViewFootView;
}

@property(retain, nonatomic) UIView *tableViewFootView; // @synthesize tableViewFootView=_tableViewFootView;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <MCAccountProfileCellVOHandler> voToCellHandler; // @synthesize voToCellHandler=_voToCellHandler;
@property(retain, nonatomic) MCAccountProfileVO *accoutProfile; // @synthesize accoutProfile=_accoutProfile;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)bottomButtonClick:(id)arg1;
- (void)setupFooterView;
- (void)reloadData;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

