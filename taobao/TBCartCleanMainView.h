//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VLViewDelegate-Protocol.h"

@class NSDate, NSString, TBHUDActivityView, VLView;

@interface TBCartCleanMainView : UIView <VLViewDelegate>
{
    _Bool _vlViewModified;
    VLView *_vlView;
    NSDate *_popupTime;
    NSString *_sourceString;
    TBHUDActivityView *_activityView;
}

+ (id)currentVC;
+ (void)showCleanViewAfterRequestWithSource:(id)arg1;
+ (void)requestCleanCartDataWithSource:(id)arg1;
+ (void)showCartCleanViewWithVCClass:(Class)arg1 andSource:(id)arg2;
+ (void)showCartCleanViewOnlyInVCClass:(Class)arg1 andSource:(id)arg2;
@property(retain, nonatomic) TBHUDActivityView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) _Bool vlViewModified; // @synthesize vlViewModified=_vlViewModified;
@property(copy, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
@property(retain, nonatomic) NSDate *popupTime; // @synthesize popupTime=_popupTime;
@property(retain, nonatomic) VLView *vlView; // @synthesize vlView=_vlView;
- (void).cxx_destruct;
- (void)onLoadStart:(id)arg1;
- (void)onLoadFinish:(id)arg1;
- (void)onLoadVLView:(id)arg1 Error:(id)arg2;
- (void)viewCall:(id)arg1 Callback:(CDUnknownBlockType)arg2;
- (void)dissmissCleanCartView;
- (void)vlViewTapped;
- (void)dealloc;
- (void)initShopCleanView;
- (id)initWithCleanShopSource:(id)arg1;
- (void)userTrackWithSource:(id)arg1 andCartCleanMainView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
