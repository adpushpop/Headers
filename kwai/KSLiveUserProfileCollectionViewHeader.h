//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class KSLiveUserProfileViewModel, NSString, UIImageView, UILabel;

@interface KSLiveUserProfileCollectionViewHeader : UIView <UITextViewDelegate>
{
    CDUnknownBlockType _descContentClickBlock;
    KSLiveUserProfileViewModel *_profileViewModel;
    UILabel *_descView;
    UIImageView *_sexIcon;
    UILabel *_constellationLabel;
    UILabel *_locationLabel;
}

@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *constellationLabel; // @synthesize constellationLabel=_constellationLabel;
@property(retain, nonatomic) UIImageView *sexIcon; // @synthesize sexIcon=_sexIcon;
@property(retain, nonatomic) UILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) KSLiveUserProfileViewModel *profileViewModel; // @synthesize profileViewModel=_profileViewModel;
@property(copy, nonatomic) CDUnknownBlockType descContentClickBlock; // @synthesize descContentClickBlock=_descContentClickBlock;
- (void).cxx_destruct;
- (void)_initUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
