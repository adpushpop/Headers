//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEUserModel, UIImageView, UILabel, UIView;

@interface AWELiveEndRecommendCell : UICollectionViewCell
{
    AWEUserModel *_userModel;
    UIImageView *_liveImage;
    UILabel *_nameLabel;
    UIImageView *_recommendImage;
    UIView *_processView;
    UIView *_processBackView;
}

+ (id)identifier;
@property(retain, nonatomic) UIView *processBackView; // @synthesize processBackView=_processBackView;
@property(retain, nonatomic) UIView *processView; // @synthesize processView=_processView;
@property(retain, nonatomic) UIImageView *recommendImage; // @synthesize recommendImage=_recommendImage;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *liveImage; // @synthesize liveImage=_liveImage;
@property(retain, nonatomic) AWEUserModel *userModel; // @synthesize userModel=_userModel;
- (void).cxx_destruct;
- (void)_startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)configWithModel:(id)arg1;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

