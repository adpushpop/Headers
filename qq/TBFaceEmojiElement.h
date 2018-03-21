//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBInteractiveElementView.h>

@class TBFaceModel, UIImageView;

@interface TBFaceEmojiElement : TBInteractiveElementView
{
    TBFaceModel *_faceModel;
    unsigned long long _multimediaType;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long multimediaType; // @synthesize multimediaType=_multimediaType;
@property(retain, nonatomic) TBFaceModel *faceModel; // @synthesize faceModel=_faceModel;
- (void)move2Trash;
- (void)configureWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
