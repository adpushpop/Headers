//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBShopViewController-Protocol.h"

@class NSString, TBShopContainerComponent, TBShopContext, TBShopErrorHandleService, UIScrollView;

@interface TBShopErrorVC : UIViewController <TBShopViewController>
{
    TBShopErrorHandleService *_statusService;
    TBShopContext *_shopContext;
    UIScrollView *_mainShopScroller;
    CDUnknownBlockType _shopScrollerChangeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType shopScrollerChangeHandler; // @synthesize shopScrollerChangeHandler=_shopScrollerChangeHandler;
@property(retain, nonatomic) UIScrollView *mainShopScroller; // @synthesize mainShopScroller=_mainShopScroller;
@property(retain, nonatomic) TBShopErrorHandleService *statusService; // @synthesize statusService=_statusService;
@property(retain, nonatomic) TBShopContext *shopContext; // @synthesize shopContext=_shopContext;
- (void).cxx_destruct;
- (_Bool)isSkipUserTrackPage;
- (void)dismissErrorViewIfNeeded;
- (void)showErrorViewWithError:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithShopContext:(id)arg1 component:(id)arg2;
- (id)initWithShopContext:(id)arg1 viewModel:(id)arg2;
@property(readonly, nonatomic) TBShopContainerComponent *shopComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
