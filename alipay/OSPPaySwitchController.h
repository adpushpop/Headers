//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class OSPPaySwitchService;

@interface OSPPaySwitchController : DTViewController
{
    OSPPaySwitchService *_switchService;
}

@property(retain, nonatomic) OSPPaySwitchService *switchService; // @synthesize switchService=_switchService;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)modifyBarcodeSwitch;
- (void)viewWillDestroy;
- (void)viewDidLoad;
- (void)dealloc;

@end
