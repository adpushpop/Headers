//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKTouchThroughViewController.h"

#import "MBKAnimatedStackViewControllerDelegate-Protocol.h"
#import "MBKParkingPanelViewControllerDelegate-Protocol.h"

@class MBKAnimatedStackViewController, MBKPanelBaseViewController, MBKParkingPoiPanelViewController, NSString, RACDisposable, UIButton, UIView;
@protocol MBKParkingPannelViewControllerDelegate;

@interface MBKParkingPanvelViewController : MBKTouchThroughViewController <MBKAnimatedStackViewControllerDelegate, MBKParkingPanelViewControllerDelegate>
{
    id <MBKParkingPannelViewControllerDelegate> _delegate;
    UIView *_unlockButton;
    MBKAnimatedStackViewController *_PanelController;
    MBKParkingPoiPanelViewController *_weakParkingPoiVC;
    MBKPanelBaseViewController *_initialPanelVC;
    UIButton *_locateButton;
    double _currentPanelContentHeight;
    RACDisposable *_subVCPanelHeightObservationDisposable;
    struct CGRect _visiableArea;
}

+ (id)generateASmallButton;
@property(retain, nonatomic) RACDisposable *subVCPanelHeightObservationDisposable; // @synthesize subVCPanelHeightObservationDisposable=_subVCPanelHeightObservationDisposable;
@property(nonatomic) double currentPanelContentHeight; // @synthesize currentPanelContentHeight=_currentPanelContentHeight;
@property(retain, nonatomic) UIButton *locateButton; // @synthesize locateButton=_locateButton;
@property(retain, nonatomic) MBKPanelBaseViewController *initialPanelVC; // @synthesize initialPanelVC=_initialPanelVC;
@property(nonatomic) __weak MBKParkingPoiPanelViewController *weakParkingPoiVC; // @synthesize weakParkingPoiVC=_weakParkingPoiVC;
@property(retain, nonatomic) MBKAnimatedStackViewController *PanelController; // @synthesize PanelController=_PanelController;
@property(retain, nonatomic) UIView *unlockButton; // @synthesize unlockButton=_unlockButton;
@property(nonatomic) struct CGRect visiableArea; // @synthesize visiableArea=_visiableArea;
@property(nonatomic) __weak id <MBKParkingPannelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeContentHeightOfVC:(struct UIViewController *)arg1;
- (void)animatedStackViewController:(id)arg1 willPopToController:(struct UIViewController *)arg2 fromController:(struct UIViewController *)arg3;
- (void)animatedStackViewController:(id)arg1 willPushToController:(struct UIViewController *)arg2 fromController:(struct UIViewController *)arg3;
- (id)visiableAreaSignal;
- (void)mbkParkingPanelDidTapBookingButton:(id)arg1;
- (void)didTapLocateButton:(id)arg1 withEvent:(id)arg2;
- (void)didTapUnlockButton:(id)arg1;
- (void)mbkParkingPanel:(id)arg1 didTapExternalJump:(id)arg2;
- (_Bool)isParkingPanelShown;
- (void)popParkingPanel;
- (_Bool)pushParkingPanelIfNeeded;
- (void)pushToParkingPanelRedStopIfNeededWith:(id)arg1 title:(id)arg2 content:(id)arg3;
- (void)pushToParkingPanelIfNeededAndShowBikeInfo:(id)arg1;
- (void)popToRootPanel;
- (void)setLocateButtonShownWeakly:(_Bool)arg1;
- (void)setUpLocateButton;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

