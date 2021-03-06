//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEPhotoGalleryView.h"

#import "MFWidgetPluginProtocol-Protocol.h"

@class NSString;

@interface BEEPhotoGalleryViewMF : BEEPhotoGalleryView <MFWidgetPluginProtocol>
{
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
+ (id)getGalleryDataItemsWithMusicList:(id)arg1 templateCode:(id)arg2 card:(id)arg3 bizType:(id)arg4 scenceCode:(id)arg5;
+ (id)getGalleryDataItemsWithDataList:(id)arg1 card:(id)arg2 templateCode:(id)arg3;
- (void)setMFDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

