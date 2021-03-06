//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

@class QZJCustomFacade, QzCustomPraiseSetting, QzoneCustomPassivePraise, QzoneCustomVipInfo, QzoneFeedAvatar, QzoneFeedCellCover, QzoneFeedCustomBubbleSkin;

@interface QzoneFeedCellFeedsDeco : QzoneModel
{
    QzoneFeedAvatar *_feedAvatar;
    QzoneCustomVipInfo *_customVip;
    QzoneCustomPassivePraise *_customPassivePraise;
    QzCustomPraiseSetting *_customPraise;
    QzoneFeedCellCover *_feedSkin;
    QzoneFeedCustomBubbleSkin *_passiveFeedSkin;
    QZJCustomFacade *_feedFacade;
}

@property(retain, nonatomic) QZJCustomFacade *feedFacade; // @synthesize feedFacade=_feedFacade;
@property(retain, nonatomic) QzoneFeedCustomBubbleSkin *passiveFeedSkin; // @synthesize passiveFeedSkin=_passiveFeedSkin;
@property(retain, nonatomic) QzoneFeedCellCover *feedSkin; // @synthesize feedSkin=_feedSkin;
@property(retain, nonatomic) QzCustomPraiseSetting *customPraise; // @synthesize customPraise=_customPraise;
@property(retain, nonatomic) QzoneCustomPassivePraise *customPassivePraise; // @synthesize customPassivePraise=_customPassivePraise;
@property(retain, nonatomic) QzoneCustomVipInfo *customVip; // @synthesize customVip=_customVip;
@property(retain, nonatomic) QzoneFeedAvatar *feedAvatar; // @synthesize feedAvatar=_feedAvatar;
- (void).cxx_destruct;

@end

