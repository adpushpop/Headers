//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMultiImageViewController.h"

#import "WBMultiImageSubViewDelegate-Protocol.h"
#import "WBPhotoDelegate-Protocol.h"

@class NSArray, NSString;

@interface WBMultiPhotoViewController : WBMultiImageViewController <WBPhotoDelegate, WBMultiImageSubViewDelegate>
{
    NSArray *wbPhotoArray;
    CDUnknownBlockType _photoDidFinishedLoadingBlock;
}

@property(copy, nonatomic) CDUnknownBlockType photoDidFinishedLoadingBlock; // @synthesize photoDidFinishedLoadingBlock=_photoDidFinishedLoadingBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)photo:(id)arg1 didReceiveBytes:(long long)arg2 totalBytes:(long long)arg3 progress:(double)arg4;
- (void)photoDidFailToLoad:(id)arg1 error:(id)arg2;
- (unsigned long long)getPhotosCount;
- (void)copyPhotoToUploadDir:(id)arg1 pid:(id)arg2 image:(id)arg3;
- (void)photoDidFinishLoading:(id)arg1;
- (id)privateLetterphotoAtIndex:(unsigned long long)arg1;
- (void)didStartViewingPageAtIndex:(unsigned long long)arg1;
- (void)updateButtonState;
- (void)zoomInButtonClick;
- (_Bool)isUploadedOriginalImage;
- (id)currentPhotoModel;
- (_Bool)isOriginalImage;
- (_Bool)isLocalImageFile;
- (_Bool)isImageAvailable:(long long)arg1;
- (void)savePicture;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithWbPhotos:(id)arg1 index:(int)arg2;
- (id)initWithWbphoto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

