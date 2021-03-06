//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BlueToothGuideView, MBKBoardAccessoryView, UIButton;
@protocol MBKScanerBottomViewDelegate;

@interface MBKScanerBottomView : UIView
{
    _Bool _autoOpenClicked;
    long long _type;
    id <MBKScanerBottomViewDelegate> _delegate;
    UIButton *_inputBtn;
    UIButton *_flashlightBtn;
    MBKBoardAccessoryView *_bluetoothTips;
    BlueToothGuideView *_blueToothGuideView;
}

@property(nonatomic) _Bool autoOpenClicked; // @synthesize autoOpenClicked=_autoOpenClicked;
@property(retain, nonatomic) BlueToothGuideView *blueToothGuideView; // @synthesize blueToothGuideView=_blueToothGuideView;
@property(retain, nonatomic) MBKBoardAccessoryView *bluetoothTips; // @synthesize bluetoothTips=_bluetoothTips;
@property(retain, nonatomic) UIButton *flashlightBtn; // @synthesize flashlightBtn=_flashlightBtn;
@property(retain, nonatomic) UIButton *inputBtn; // @synthesize inputBtn=_inputBtn;
@property(nonatomic) __weak id <MBKScanerBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)togleFlashlightWithHigherLevel:(_Bool)arg1;
- (void)flashBtnClicked;
- (void)openFlishLightAutomatiacally;
- (void)inputBtnClick:(id)arg1;
- (void)bluetoothTipsClick;
- (void)buildUI;
- (void)dealloc;
- (void)applicationBecomeActive;
- (id)init;

@end

