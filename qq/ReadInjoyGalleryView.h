//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UILabel;

@interface ReadInjoyGalleryView : UIImageView
{
    UILabel *galleryCountLabel;
    UIImageView *galleryIconView;
    int _galleryCount;
}

@property(nonatomic) int galleryCount; // @synthesize galleryCount=_galleryCount;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 galleryViewType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithGalleryViewType:(long long)arg1;

@end
