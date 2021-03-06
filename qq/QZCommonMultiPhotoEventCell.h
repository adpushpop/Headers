//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBasePhotoCell.h>

@class NSArray, NSMutableOrderedSet, UIButton, UILabel, UIView;

@interface QZCommonMultiPhotoEventCell : QZBasePhotoCell
{
    UIView *_avatarView;
    UILabel *_titleLabel;
    UIButton *_selectAllBtn;
    NSArray *_photoModels;
    UIButton *_enterHomepageBtn;
    NSMutableOrderedSet *_selectedPhotoModels;
}

+ (double)height;
@property(retain, nonatomic) NSMutableOrderedSet *selectedPhotoModels; // @synthesize selectedPhotoModels=_selectedPhotoModels;
- (void).cxx_destruct;
- (void)onClickSelectAllBtn:(id)arg1;
- (void)onClickEnterHomepage;
- (void)updateContentWithRowModel:(id)arg1 photoListStatus:(long long)arg2;

@end

