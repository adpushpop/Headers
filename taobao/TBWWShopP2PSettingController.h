//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBWWP2PSettingBaseViewController.h"

@class NSMutableArray, NSNumber, YWP2PChatSettingCell;

@interface TBWWShopP2PSettingController : TBWWP2PSettingBaseViewController
{
    NSMutableArray *_sectionsArray;
    YWP2PChatSettingCell *_cellReceive;
    NSNumber *_shopSubscribed;
    NSNumber *_serviceUpdated;
}

@property(copy, nonatomic) NSNumber *serviceUpdated; // @synthesize serviceUpdated=_serviceUpdated;
@property(copy, nonatomic) NSNumber *shopSubscribed; // @synthesize shopSubscribed=_shopSubscribed;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_enterService;
- (void)_updateSubscribedView;
- (void)_forceReloadCellReceive;
- (void)_setShopSubscribed:(id)arg1;
- (void)_setServiceUpdated:(id)arg1;
- (void)_asyncRefreshSubscribeRelation;
@property(readonly, nonatomic) YWP2PChatSettingCell *cellReceive; // @synthesize cellReceive=_cellReceive;
- (void)didSelectCustomRowWithIndexPath:(id)arg1;
- (void)refreshCell:(id)arg1 indexPath:(id)arg2;
- (id)sectionsArray;

@end

