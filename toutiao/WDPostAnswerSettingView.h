//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;
@protocol WDPostAnswerSettingViewDelegate;

@interface WDPostAnswerSettingView : SSThemedTableView <UITableViewDataSource, UITableViewDelegate>
{
    id <WDPostAnswerSettingViewDelegate> _settingViewDelegate;
}

@property(nonatomic) __weak id <WDPostAnswerSettingViewDelegate> settingViewDelegate; // @synthesize settingViewDelegate=_settingViewDelegate;
- (void).cxx_destruct;
- (void)refreshswitch:(id)arg1;
- (void)banCommentValueChanged:(id)arg1;
- (struct CGRect)frameForSwitchWithCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
