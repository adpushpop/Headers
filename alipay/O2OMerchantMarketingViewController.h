//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCommonSchemeProtocol-Protocol.h"

@class NSDictionary, NSString, O2OMerchantMarketingDataSource, O2OMerchantMarketingDelegate, O2OMerchantMarketingModel, O2OMerchantProtocolItem;

@interface O2OMerchantMarketingViewController : O2OListViewController <O2OCommonSchemeProtocol>
{
    O2OMerchantMarketingModel *_merchantMarketingModel;
    O2OMerchantMarketingDelegate *_dl;
    O2OMerchantMarketingDataSource *_ds;
    NSString *_shopId;
    NSString *_voucherType;
    NSString *_cityId;
    NSString *_reqSrc;
    NSDictionary *_monitorDic;
    O2OMerchantProtocolItem *_protocolInfo;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) O2OMerchantProtocolItem *protocolInfo; // @synthesize protocolInfo=_protocolInfo;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *reqSrc; // @synthesize reqSrc=_reqSrc;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *voucherType; // @synthesize voucherType=_voucherType;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) O2OMerchantMarketingDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OMerchantMarketingDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) O2OMerchantMarketingModel *merchantMarketingModel; // @synthesize merchantMarketingModel=_merchantMarketingModel;
- (void).cxx_destruct;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showLoading:(id)arg1;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)reloadDocument;
- (void)viewDidLoad;
- (id)pageParams;
- (id)pageSpm;
- (void)loadView;
- (id)initWithShopId:(id)arg1 voucherType:(id)arg2 cityId:(id)arg3 reqSrc:(id)arg4;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

