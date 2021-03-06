//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/BRSActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class FAPrinter, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FAPrintCenter : NSObject <BRSActionSheetDelegate, UIAlertViewDelegate>
{
    NSMutableArray *_managers;
    NSMutableDictionary *_managerDict;
    NSDictionary *_currentPrintParam;
}

+ (id)sharedPrintCenter;
@property(retain, nonatomic) NSDictionary *currentPrintParam; // @synthesize currentPrintParam=_currentPrintParam;
@property(retain, nonatomic) NSMutableDictionary *managerDict; // @synthesize managerDict=_managerDict;
@property(retain, nonatomic) NSMutableArray *managers; // @synthesize managers=_managers;
- (void).cxx_destruct;
- (_Bool)canPrintFileAtPath:(id)arg1;
- (_Bool)canAirPrintFileAtPath:(id)arg1;
- (_Bool)hasAvailablePrinters;
- (id)printerManagers;
- (void)loadPrinterManagers;
- (id)init;
- (void)forceAllPrinterManagerToReload;
@property(retain, nonatomic) FAPrinter *latestPrinter;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)PCQQPrintWithCurrentPrintParam;
- (void)AirPrintWithCurrentPrintParam;
- (void)actionSheet:(id)arg1 didTappedButtonAtIndex:(long long)arg2;
- (void)showPrintActionSheetWithFilePaths:(id)arg1 source:(int)arg2 parentViewController:(id)arg3 viewControllerToDismiss:(id)arg4 cellarAlert:(_Bool)arg5;
- (void)showPrintActionSheetWithFileModel:(id)arg1 source:(int)arg2 parentViewController:(id)arg3 viewControllerToDismiss:(id)arg4 cellarAlert:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

