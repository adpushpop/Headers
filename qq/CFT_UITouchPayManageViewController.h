//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UICustomNaviBarViewController.h>

@class CFT_TenpayCertificate, CFT_UIGroupStyleView, NSString, UILabel, UISwitch;

@interface CFT_UITouchPayManageViewController : CFT_UICustomNaviBarViewController
{
    CFT_TenpayCertificate *_tenpayCert;
    UISwitch *_touchPaySwitch;
    UILabel *_recommendLabel;
    CFT_UIGroupStyleView *group;
    _Bool _switchState;
    _Bool _needBindCard;
    _Bool _jailBreakUnavilable;
    int _evaluateResult;
    unsigned long long _biometryType;
    NSString *_uin;
}

@property(nonatomic) int evaluateResult; // @synthesize evaluateResult=_evaluateResult;
@property(nonatomic) _Bool jailBreakUnavilable; // @synthesize jailBreakUnavilable=_jailBreakUnavilable;
@property(nonatomic) _Bool needBindCard; // @synthesize needBindCard=_needBindCard;
@property(nonatomic) _Bool switchState; // @synthesize switchState=_switchState;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned long long biometryType; // @synthesize biometryType=_biometryType;
- (void)dealloc;
- (void)presentTouchPayProtocol;
- (void)gotoBindNewCard;

@end
