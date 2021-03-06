//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBInteractiveElementView.h>

#import <QQMainProject/TBStoryPOIViewListDelegate-Protocol.h>

@class CAShapeLayer, NSString, QQRichTinyVideoClips, QQStoryUrlImageView, TBFacePOIModel, TBGPSModel, TBPOIPosterDataModel, TBPosterLayoutDescModel, UIImageView, UILabel;
@protocol TBEmojiPOIViewDelegate;

@interface TBEmojiPOIView : TBInteractiveElementView <TBStoryPOIViewListDelegate>
{
    TBGPSModel *_currGPS;
    UILabel *_textLabel;
    TBPosterLayoutDescModel *_layoutDesc;
    QQStoryUrlImageView *_bgImageView;
    NSString *_reserved1;
    CAShapeLayer *_border;
    UIImageView *_bottomImage;
    QQRichTinyVideoClips *_videoInfo;
    NSString *_name;
    NSString *_posterName;
    NSString *_url;
    NSString *_currCity;
    NSString *_currBuilding;
    id <TBEmojiPOIViewDelegate> _delegate;
    TBPOIPosterDataModel *_posterModel;
    TBGPSModel *_gpsModel;
    TBFacePOIModel *_faceModel;
}

@property(retain, nonatomic) TBFacePOIModel *faceModel; // @synthesize faceModel=_faceModel;
@property(retain, nonatomic) TBGPSModel *gpsModel; // @synthesize gpsModel=_gpsModel;
@property(retain, nonatomic) TBPOIPosterDataModel *posterModel; // @synthesize posterModel=_posterModel;
@property(nonatomic) __weak id <TBEmojiPOIViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currBuilding; // @synthesize currBuilding=_currBuilding;
@property(copy, nonatomic) NSString *currCity; // @synthesize currCity=_currCity;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *posterName; // @synthesize posterName=_posterName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) QQRichTinyVideoClips *videoInfo; // @synthesize videoInfo=_videoInfo;
- (void).cxx_destruct;
- (void)storyPOIViewDidCancel:(id)arg1;
- (void)storyPOIView:(id)arg1 didFinishWithAddressInfo:(id)arg2;
- (void)layoutMarginFix;
- (void)layoutContent;
- (void)layoutContentFix;
- (void)setupGuideAnimation;
- (void)removeAniamtion;
- (void)layoutSubviews;
- (void)updateWithPoiModel:(id)arg1;
- (void)chosePosition:(id)arg1;
- (void)move2Trash;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 posterModel:(id)arg2 GPSModel:(id)arg3 withVideoInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

