//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWlxBaseViewController.h>

#import <QQMainProject/DialogUtilsProtocol-Protocol.h>
#import <QQMainProject/QQWlxNetWorkRequestDelegate-Protocol.h>

@class NSDictionary, NSString, UIButton, UILabel, UIScrollView, UIView, YktConfig;

@interface QQWlxPaySuccessViewController : QQWlxBaseViewController <QQWlxNetWorkRequestDelegate, DialogUtilsProtocol>
{
    UIScrollView *scrollView;
    UIView *contentView;
    UILabel *vSep3;
    UIButton *btnFollow;
    YktConfig *yktConfig;
    NSDictionary *_rootParams;
    NSDictionary *_payResult;
}

@property(retain, nonatomic) NSDictionary *payResult; // @synthesize payResult=_payResult;
@property(retain, nonatomic) NSDictionary *rootParams; // @synthesize rootParams=_rootParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

