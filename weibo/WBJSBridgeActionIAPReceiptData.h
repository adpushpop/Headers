//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBJSBridgeAction.h"

#import "SKRequestDelegate-Protocol.h"

@class NSString, SKReceiptRefreshRequest;

@interface WBJSBridgeActionIAPReceiptData : WBJSBridgeAction <SKRequestDelegate>
{
    _Bool _isResponding;
    SKReceiptRefreshRequest *_receiptRequest;
    long long _receiptFileModifyTime;
}

@property(nonatomic) long long receiptFileModifyTime; // @synthesize receiptFileModifyTime=_receiptFileModifyTime;
@property(nonatomic) _Bool isResponding; // @synthesize isResponding=_isResponding;
@property(retain, nonatomic) SKReceiptRefreshRequest *receiptRequest; // @synthesize receiptRequest=_receiptRequest;
- (void).cxx_destruct;
- (void)logActionForResultDic:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)dealloc;
- (id)_receiptBase64String;
- (void)_stopRequestIfNeeded;
- (void)_startRequestIfNeeded;
- (void)_logAndActionResult:(id)arg1;
- (void)_loadReceiptToH5WithErrorReason:(id)arg1;
- (void)startAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

