//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSFeedBaseComponent.h"

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSError, NSNumber, NSString, SKStoreProductViewController, UIViewController, _KSFeedAppDetailLoadingView;

@interface KSFeedAppDetailComponent : KSFeedBaseComponent <SKStoreProductViewControllerDelegate>
{
    _Bool _didShowAppStore;
    UIViewController *_headerContainer;
    _KSFeedAppDetailLoadingView *_loadingView;
    NSNumber *_appID;
    SKStoreProductViewController *_storeProductVC;
    NSError *_storeError;
}

@property(retain, nonatomic) NSError *storeError; // @synthesize storeError=_storeError;
@property(retain, nonatomic) SKStoreProductViewController *storeProductVC; // @synthesize storeProductVC=_storeProductVC;
@property(retain, nonatomic) NSNumber *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) _KSFeedAppDetailLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIViewController *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(nonatomic) _Bool didShowAppStore; // @synthesize didShowAppStore=_didShowAppStore;
- (void).cxx_destruct;
- (void)movePageUpIfNeeded;
- (void)showAppStore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)componentDidAppear:(_Bool)arg1;
- (void)componentWillAppear:(_Bool)arg1;
- (void)reloadData;
- (void)preloadAppStore;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)detailView;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
