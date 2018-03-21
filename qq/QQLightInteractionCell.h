//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GifImageView, NSDictionary, Roundview, UIActivityIndicatorView, UIButton, UIImageView, UILabel;
@protocol QQLightInteractionDelegate;

@interface QQLightInteractionCell : UICollectionViewCell
{
    GifImageView *_imageView;
    UIImageView *_vipFlagView;
    UIImageView *_vipDownView;
    UIActivityIndicatorView *_loadingView;
    UILabel *_lable;
    UIButton *_button;
    Roundview *_roundview;
    NSDictionary *_animationInfo;
    id <QQLightInteractionDelegate> _delegate;
}

@property(nonatomic) __weak id <QQLightInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchEnd:(id)arg1;
- (void)pressed:(id)arg1;
- (void)PressedUpInside:(id)arg1;
- (void)loadSourceBytype:(id)arg1;
- (void)refreshImageUIForVipResource;
- (void)initSubViews;
- (void)handleVipPokeDownloadNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
