//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/QUIShareDelegate-Protocol.h>

@class NSAttributedString, NSMutableArray, NSString, QUIShareView;

@interface QQActivityViewController : UIViewController <QUIShareDelegate>
{
    QUIShareView *_shareView;
    NSAttributedString *_attributedTitle;
    NSMutableArray *_applicationActivities;
    NSMutableArray *_quiActivities;
}

@property(retain, nonatomic) NSMutableArray *quiActivities; // @synthesize quiActivities=_quiActivities;
@property(retain, nonatomic) NSMutableArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void)shareDidDismiss:(id)arg1;
- (void)shareDidAppear:(id)arg1;
- (void)shareDidAction:(id)arg1;
- (void)dealloc;
- (void)handleBGClick:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)dismiss;
- (void)showInWindow:(id)arg1;
- (void)show;
- (id)initWithActivityItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

