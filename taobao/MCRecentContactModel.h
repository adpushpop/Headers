//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseModel.h"

#import "MCGCDTimerDelegate-Protocol.h"
#import "MCMergeSessionDataSourceDelegate-Protocol.h"
#import "MCRecentContactDataSourceDelegate-Protocol.h"

@class MCGCDTimer, NSString;
@protocol MCMergeSessionDataSourceProtocol, MCRecentContactDataSourceProtocol, MCRecentContactModelDelegate;

@interface MCRecentContactModel : MCBaseModel <MCRecentContactDataSourceDelegate, MCMergeSessionDataSourceDelegate, MCGCDTimerDelegate>
{
    id <MCRecentContactDataSourceProtocol> _dataSource;
    MCGCDTimer *_gcdTimer;
    id <MCRecentContactModelDelegate> _delegate;
    id <MCMergeSessionDataSourceProtocol> _vGroupMergeSessionDataSource;
    id <MCMergeSessionDataSourceProtocol> _subScriptionMergeSessionDataSource;
    id <MCMergeSessionDataSourceProtocol> _shopMergeSessionDataSource;
}

@property(nonatomic) __weak id <MCMergeSessionDataSourceProtocol> shopMergeSessionDataSource; // @synthesize shopMergeSessionDataSource=_shopMergeSessionDataSource;
@property(nonatomic) __weak id <MCMergeSessionDataSourceProtocol> subScriptionMergeSessionDataSource; // @synthesize subScriptionMergeSessionDataSource=_subScriptionMergeSessionDataSource;
@property(nonatomic) __weak id <MCMergeSessionDataSourceProtocol> vGroupMergeSessionDataSource; // @synthesize vGroupMergeSessionDataSource=_vGroupMergeSessionDataSource;
@property(nonatomic) __weak id <MCRecentContactModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MCGCDTimer *gcdTimer; // @synthesize gcdTimer=_gcdTimer;
@property(nonatomic) __weak id <MCRecentContactDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)mergeSessionChange;
- (void)sessionStatusChange;
- (void)timer:(id)arg1;
- (void)callbackDelegate;
- (void)merageSession:(id)arg1 fetchResult:(id)arg2;
- (void)sessionUpdateFinish;
- (void)sessionFetchResult:(id)arg1;
- (void)sessionChange:(id)arg1;
- (void)sessionDel:(id)arg1;
- (void)sessionAdd:(id)arg1;
- (void)recentContactFinishLoad:(id)arg1;
- (void)recentContactStartLoad:(id)arg1;
- (void)clearSessionUnreadCount:(id)arg1 sessionType:(int)arg2;
- (void)batchClearSessionUnreadCount:(id)arg1;
- (_Bool)removeSession:(id)arg1 sessionType:(int)arg2;
- (void)updateSessions;
- (void)getSessionList;
- (void)dealloc;
- (id)initWithBizKey:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

