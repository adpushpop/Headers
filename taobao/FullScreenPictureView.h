//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImage, UIImageView, UIScrollView;
@protocol FullScreenPictureViewDelegate;

@interface FullScreenPictureView : UIView <UIScrollViewDelegate>
{
    NSMutableArray *_downloadOperations;
    _Bool _scaleEnabled;
    _Bool _cropAndFit;
    _Bool _showShadow;
    float _fitScale;
    float _minScale;
    float _maxScale;
    NSString *_imageURL;
    UIImage *_image;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    id <FullScreenPictureViewDelegate> _delegate;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <FullScreenPictureViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) float maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) float minScale; // @synthesize minScale=_minScale;
@property(nonatomic) float fitScale; // @synthesize fitScale=_fitScale;
@property(nonatomic) _Bool showShadow; // @synthesize showShadow=_showShadow;
@property(nonatomic) _Bool cropAndFit; // @synthesize cropAndFit=_cropAndFit;
@property(nonatomic) _Bool scaleEnabled; // @synthesize scaleEnabled=_scaleEnabled;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (void)getOriginalPic;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)handleDoubleTap;
- (void)handleSingleTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)resetScaleOfImage:(id)arg1;
- (void)replaceImg:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
