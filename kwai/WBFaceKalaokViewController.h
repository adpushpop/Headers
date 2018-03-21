//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, NSTimer, UIImageView, UILabel, WBFaceReadLipView;
@protocol WBFaceKalaokViewControllerDelegate;

@interface WBFaceKalaokViewController : UIViewController
{
    float terminaTime;
    NSTimer *timer;
    WBFaceKalaokViewController *weakSelf;
    _Bool _isKalaokFinished;
    id <WBFaceKalaokViewControllerDelegate> _delegate;
    NSString *_readLips;
    UILabel *_tipsLabel;
    UILabel *_guideWord;
    WBFaceReadLipView *_srcView;
    UILabel *_numberImage;
    UIImageView *_aniMaik;
    UILabel *_kalaOkLabel;
    UILabel *_kalaOkRedLabel;
}

@property(retain, nonatomic) UILabel *kalaOkRedLabel; // @synthesize kalaOkRedLabel=_kalaOkRedLabel;
@property(retain, nonatomic) UILabel *kalaOkLabel; // @synthesize kalaOkLabel=_kalaOkLabel;
@property(retain, nonatomic) UIImageView *aniMaik; // @synthesize aniMaik=_aniMaik;
@property(retain, nonatomic) UILabel *numberImage; // @synthesize numberImage=_numberImage;
@property(retain, nonatomic) WBFaceReadLipView *srcView; // @synthesize srcView=_srcView;
@property(retain, nonatomic) UILabel *guideWord; // @synthesize guideWord=_guideWord;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(readonly, nonatomic) _Bool isKalaokFinished; // @synthesize isKalaokFinished=_isKalaokFinished;
@property(retain, nonatomic) NSString *readLips; // @synthesize readLips=_readLips;
@property(nonatomic) __weak id <WBFaceKalaokViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateState;
- (void)stopTimer;
- (void)startTimer;
- (void)changeLabelState:(float)arg1;
- (void)initState;
- (void)changeToCaptureVideoState;
- (void)stopKalaok;
- (void)startKalaok;
- (void)initUI;
- (void)viewDidLoad;

@end
