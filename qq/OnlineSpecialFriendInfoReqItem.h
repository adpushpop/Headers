//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@class NSString;

@interface OnlineSpecialFriendInfoReqItem : SAMRequestItem
{
    unsigned int _reqType;
    unsigned long long _reqUin;
    NSString *_strMobile;
}

@property(retain, nonatomic) NSString *strMobile; // @synthesize strMobile=_strMobile;
@property(nonatomic) unsigned long long reqUin; // @synthesize reqUin=_reqUin;
@property(nonatomic) unsigned int reqType; // @synthesize reqType=_reqType;
- (void).cxx_destruct;
- (void)updateSpecialPersonOnlineInfo:(struct GetOnlineInfoResp)arg1 requestMobilePhone:(id)arg2;
- (void)updateSpecialPersonOnlineInfo:(struct GetOnlineInfoResp)arg1 requestUin:(long long)arg2;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)init;

@end

