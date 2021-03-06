//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface UserLoginGWReqPb : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasLoginId;
    _Bool _hasLoginType;
    _Bool _hasLoginWthPwd;
    _Bool _hasLoginPassword;
    _Bool _hasLoginCheckCode;
    _Bool _hasTbCheckCodeId;
    _Bool _hasTbCheckCode;
    _Bool _hasProductId;
    _Bool _hasProductVersion;
    _Bool _hasOsVersion;
    _Bool _hasUserAgent;
    _Bool _hasChannels;
    _Bool _hasClientDigest;
    _Bool _hasSecTs;
    _Bool _hasDeviceToken;
    _Bool _hasScreenWidth;
    _Bool _hasScreenHigh;
    _Bool _hasClientId;
    _Bool _hasWalletTid;
    _Bool _hasWalletClientKey;
    _Bool _hasMspTid;
    _Bool _hasMspImsi;
    _Bool _hasMspImei;
    _Bool _hasMspClientKey;
    _Bool _hasSourceId;
    _Bool _hasMac;
    _Bool _hasCellId;
    _Bool _hasLocation;
    _Bool _hasVimsi;
    _Bool _hasVimei;
    _Bool _hasOperatorType;
    int _loginType;
    int _loginWthPwd;
    int _screenWidth;
    int _screenHigh;
    NSString *_loginId;
    NSString *_loginPassword;
    NSString *_loginCheckCode;
    NSString *_tbCheckCodeId;
    NSString *_tbCheckCode;
    NSString *_productId;
    NSString *_productVersion;
    NSString *_osVersion;
    NSString *_userAgent;
    NSString *_channels;
    NSString *_clientDigest;
    NSString *_secTs;
    NSString *_deviceToken;
    NSString *_clientId;
    NSString *_walletTid;
    NSString *_walletClientKey;
    NSString *_mspTid;
    NSString *_mspImsi;
    NSString *_mspImei;
    NSString *_mspClientKey;
    NSString *_sourceId;
    NSString *_mac;
    NSString *_cellId;
    NSString *_location;
    NSString *_vimsi;
    NSString *_vimei;
    NSString *_operatorType;
    NSMutableArray *_externParams;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *externParams; // @synthesize externParams=_externParams;
@property(retain, nonatomic) NSString *operatorType; // @synthesize operatorType=_operatorType;
@property(retain, nonatomic) NSString *vimei; // @synthesize vimei=_vimei;
@property(retain, nonatomic) NSString *vimsi; // @synthesize vimsi=_vimsi;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *mspClientKey; // @synthesize mspClientKey=_mspClientKey;
@property(retain, nonatomic) NSString *mspImei; // @synthesize mspImei=_mspImei;
@property(retain, nonatomic) NSString *mspImsi; // @synthesize mspImsi=_mspImsi;
@property(retain, nonatomic) NSString *mspTid; // @synthesize mspTid=_mspTid;
@property(retain, nonatomic) NSString *walletClientKey; // @synthesize walletClientKey=_walletClientKey;
@property(retain, nonatomic) NSString *walletTid; // @synthesize walletTid=_walletTid;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) int screenHigh; // @synthesize screenHigh=_screenHigh;
@property(nonatomic) int screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(retain, nonatomic) NSString *secTs; // @synthesize secTs=_secTs;
@property(retain, nonatomic) NSString *clientDigest; // @synthesize clientDigest=_clientDigest;
@property(retain, nonatomic) NSString *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *tbCheckCode; // @synthesize tbCheckCode=_tbCheckCode;
@property(retain, nonatomic) NSString *tbCheckCodeId; // @synthesize tbCheckCodeId=_tbCheckCodeId;
@property(retain, nonatomic) NSString *loginCheckCode; // @synthesize loginCheckCode=_loginCheckCode;
@property(retain, nonatomic) NSString *loginPassword; // @synthesize loginPassword=_loginPassword;
@property(nonatomic) int loginWthPwd; // @synthesize loginWthPwd=_loginWthPwd;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(readonly) _Bool hasOperatorType; // @synthesize hasOperatorType=_hasOperatorType;
@property(readonly) _Bool hasVimei; // @synthesize hasVimei=_hasVimei;
@property(readonly) _Bool hasVimsi; // @synthesize hasVimsi=_hasVimsi;
@property(readonly) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(readonly) _Bool hasCellId; // @synthesize hasCellId=_hasCellId;
@property(readonly) _Bool hasMac; // @synthesize hasMac=_hasMac;
@property(readonly) _Bool hasSourceId; // @synthesize hasSourceId=_hasSourceId;
@property(readonly) _Bool hasMspClientKey; // @synthesize hasMspClientKey=_hasMspClientKey;
@property(readonly) _Bool hasMspImei; // @synthesize hasMspImei=_hasMspImei;
@property(readonly) _Bool hasMspImsi; // @synthesize hasMspImsi=_hasMspImsi;
@property(readonly) _Bool hasMspTid; // @synthesize hasMspTid=_hasMspTid;
@property(readonly) _Bool hasWalletClientKey; // @synthesize hasWalletClientKey=_hasWalletClientKey;
@property(readonly) _Bool hasWalletTid; // @synthesize hasWalletTid=_hasWalletTid;
@property(readonly) _Bool hasClientId; // @synthesize hasClientId=_hasClientId;
@property(readonly) _Bool hasScreenHigh; // @synthesize hasScreenHigh=_hasScreenHigh;
@property(readonly) _Bool hasScreenWidth; // @synthesize hasScreenWidth=_hasScreenWidth;
@property(readonly) _Bool hasDeviceToken; // @synthesize hasDeviceToken=_hasDeviceToken;
@property(readonly) _Bool hasSecTs; // @synthesize hasSecTs=_hasSecTs;
@property(readonly) _Bool hasClientDigest; // @synthesize hasClientDigest=_hasClientDigest;
@property(readonly) _Bool hasChannels; // @synthesize hasChannels=_hasChannels;
@property(readonly) _Bool hasUserAgent; // @synthesize hasUserAgent=_hasUserAgent;
@property(readonly) _Bool hasOsVersion; // @synthesize hasOsVersion=_hasOsVersion;
@property(readonly) _Bool hasProductVersion; // @synthesize hasProductVersion=_hasProductVersion;
@property(readonly) _Bool hasProductId; // @synthesize hasProductId=_hasProductId;
@property(readonly) _Bool hasTbCheckCode; // @synthesize hasTbCheckCode=_hasTbCheckCode;
@property(readonly) _Bool hasTbCheckCodeId; // @synthesize hasTbCheckCodeId=_hasTbCheckCodeId;
@property(readonly) _Bool hasLoginCheckCode; // @synthesize hasLoginCheckCode=_hasLoginCheckCode;
@property(readonly) _Bool hasLoginPassword; // @synthesize hasLoginPassword=_hasLoginPassword;
@property(readonly) _Bool hasLoginWthPwd; // @synthesize hasLoginWthPwd=_hasLoginWthPwd;
@property(readonly) _Bool hasLoginType; // @synthesize hasLoginType=_hasLoginType;
@property(readonly) _Bool hasLoginId; // @synthesize hasLoginId=_hasLoginId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExternParams:(id)arg1;
- (void)setExternParamsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

