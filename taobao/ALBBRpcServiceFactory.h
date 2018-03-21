//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ALBBRpcServiceFactory : NSObject
{
}

+ (id)loginValidationCheck:(id)arg1 riskControlInfo:(id)arg2 callBack:(CDUnknownBlockType)arg3;
+ (id)preScanFaceLogin:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)unifyTokenLogin:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)applyUnifyTokenWithOpenAccountId:(id)arg1 sid:(id)arg2 havaneId:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)ssoLoginBasedJump:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)ssoLogin:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)applySSOToken:(id)arg1 ext:(id)arg2 callBack:(CDUnknownBlockType)arg3;
+ (id)applySSOTitleImgUrl:(id)arg1 slaveAppKey:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)cultivateYoukuCookies:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)cultivateAlipayCookies:(id)arg1 ext:(id)arg2 callBack:(CDUnknownBlockType)arg3;
+ (id)getUrl4QueryLink:(id)arg1 riskInfo:(id)arg2 extra:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)getUrl4RetrivePassword:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)getFindPasswordUrl:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)getAccountCenterURL:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)verification4Register:(id)arg1 info:(id)arg2 riskInfo:(id)arg3 extra:(id)arg4 callBack:(CDUnknownBlockType)arg5;
+ (id)prepareRegister:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)loginWithAlipayAuthToken:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)applyAsoToken:(id)arg1 ext:(id)arg2 callBack:(CDUnknownBlockType)arg3;
+ (id)retrieveHidWithAlipayToken:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)loginWithTokenInfo:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)taobaoMockEasyLoginAsync:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)compatibleLogin:(id)arg1 userId:(id)arg2 extra:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)checkIVToken:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)idetityVerify:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)IVCheckAsync:(id)arg1 riskControlInfo:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)taobaoLoginAsync:(id)arg1 apiName:(id)arg2 riskControlInfo:(id)arg3 ext:(id)arg4 callBack:(CDUnknownBlockType)arg5;

@end
