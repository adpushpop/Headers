//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIRedGiftView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/UICheckBoxDelegate-Protocol.h>

@class CAShapeLayer, CFT_UICheckBox, CFT_UIPayRedVideoView, NSDictionary, NSMutableDictionary, NSString, UIBezierPath, UIImageView, UILabel, UIView;

@interface CFT_UINewEnterpirseRedView : CFT_UIRedGiftView <UICheckBoxDelegate, CAAnimationDelegate>
{
    UIImageView *_bannerImgview;
    UIImageView *_headerImgview;
    UIView *_faceBgview;
    UIBezierPath *_bottomPath;
    CFT_UICheckBox *_checkBox;
    UILabel *_bottomDescLabel;
    _Bool _isCheckResult;
    _Bool _ischeck;
    _Bool _isFollow;
    _Bool _isAnimation;
    CAShapeLayer *_bootomGhape;
    UIView *_videoBackgroundView;
    NSString *_enterpirseIconUrl;
    NSString *_enterpirseBannerUrl;
    NSString *_mchId;
    NSString *_businessId;
    NSString *_submchspid;
    NSString *_listId;
    NSString *_bannerType;
    CDUnknownBlockType _isShowTabbarBlock;
    NSDictionary *_publicInfoDict;
    NSMutableDictionary *_viewRectDict;
    CFT_UIPayRedVideoView *_playerVideoView;
    UIImageView *_maskview;
}

@property(retain, nonatomic) UIImageView *maskview; // @synthesize maskview=_maskview;
@property(retain, nonatomic) CFT_UIPayRedVideoView *playerVideoView; // @synthesize playerVideoView=_playerVideoView;
@property(retain, nonatomic) NSMutableDictionary *viewRectDict; // @synthesize viewRectDict=_viewRectDict;
@property(retain, nonatomic) NSDictionary *publicInfoDict; // @synthesize publicInfoDict=_publicInfoDict;
@property(copy, nonatomic) CDUnknownBlockType isShowTabbarBlock; // @synthesize isShowTabbarBlock=_isShowTabbarBlock;
@property(retain, nonatomic) NSString *bannerType; // @synthesize bannerType=_bannerType;
@property(retain, nonatomic) NSString *listId; // @synthesize listId=_listId;
@property(retain, nonatomic) NSString *submchspid; // @synthesize submchspid=_submchspid;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *mchId; // @synthesize mchId=_mchId;
@property(retain, nonatomic) NSString *enterpirseBannerUrl; // @synthesize enterpirseBannerUrl=_enterpirseBannerUrl;
@property(retain, nonatomic) NSString *enterpirseIconUrl; // @synthesize enterpirseIconUrl=_enterpirseIconUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

