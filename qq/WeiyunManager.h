//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSError, QQAIOMsgModel;

@interface WeiyunManager : NSObject
{
    _Bool _isWeiyunVIP;
    _Bool _isWeiyunSuperVIP;
    _Bool _isIAPEntryValid;
    _Bool _secondPwdPassed;
    NSData *_uploadDirkey;
    unsigned long long _aioToWeiyunReqNum;
    QQAIOMsgModel *_aioToWeiyunModel;
    NSError *_aioToWeiyunError;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSError *aioToWeiyunError; // @synthesize aioToWeiyunError=_aioToWeiyunError;
@property(retain) QQAIOMsgModel *aioToWeiyunModel; // @synthesize aioToWeiyunModel=_aioToWeiyunModel;
@property unsigned long long aioToWeiyunReqNum; // @synthesize aioToWeiyunReqNum=_aioToWeiyunReqNum;
@property(retain) NSData *uploadDirkey; // @synthesize uploadDirkey=_uploadDirkey;
@property(getter=isSecondPwdPassed) _Bool secondPwdPassed; // @synthesize secondPwdPassed=_secondPwdPassed;
@property _Bool isIAPEntryValid; // @synthesize isIAPEntryValid=_isIAPEntryValid;
@property _Bool isWeiyunSuperVIP; // @synthesize isWeiyunSuperVIP=_isWeiyunSuperVIP;
@property _Bool isWeiyunVIP; // @synthesize isWeiyunVIP=_isWeiyunVIP;
- (void).cxx_destruct;
- (void)aioToWeiyunTimeout;
- (void)aioToWeiyunStartTimer;
- (void)aioToWeiyunSetAIOModel:(id)arg1;
- (void)aioToWeiyunHandleError;
- (void)aioToWeiyunEndRequestWithError:(id)arg1;
- (void)aioToWeiyunAddRequest;
- (_Bool)aioToWeiyunShowTips;
- (void)onAccountLogOut:(id)arg1;
- (void)unregisteNotification;
- (void)registeNotification;
- (void)verify2ndPwdOnVC:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)verify2ndPwd:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)checkSaved2ndSigWithBlock:(CDUnknownBlockType)arg1;
- (void)refreshVipStatus;
- (void)refreshEntryInfo:(CDUnknownBlockType)arg1;
- (id)dateForLastAlbumStatusReport;
- (_Bool)isNeverBackuped;
- (void)setHasBackuped;
- (void)filterPhotoChanged:(id)arg1;
- (void)onAccountLogIn;
- (void)dealloc;
- (id)init;

@end

