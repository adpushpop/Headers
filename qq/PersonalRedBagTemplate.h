//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSString;

@interface PersonalRedBagTemplate : NSObject <NSCoding>
{
    int _Id;
    int _version;
    int _fontTypeId;
    int _aioAnimSize;
    int _aioAnimDelay;
    NSString *_name;
    long long _templateType;
    NSString *_aioZipUrl;
    NSString *_aioImgPath;
    NSString *_bigImgPath;
    NSString *_sendImgPath;
    NSString *_aioZipPath;
    NSString *_aioUnZipPath;
    NSString *_oldFilePath;
    NSString *_oldAioImgPath;
    NSString *_oldBigImgPath;
    NSString *_oldSendImgPath;
    NSString *_oldAioUnZipPath;
    struct CGRect _aioCharRect;
    struct CGRect _packetCharRect;
    struct CGRect _sendCharRect;
}

@property(retain, nonatomic) NSString *oldAioUnZipPath; // @synthesize oldAioUnZipPath=_oldAioUnZipPath;
@property(retain, nonatomic) NSString *oldSendImgPath; // @synthesize oldSendImgPath=_oldSendImgPath;
@property(retain, nonatomic) NSString *oldBigImgPath; // @synthesize oldBigImgPath=_oldBigImgPath;
@property(retain, nonatomic) NSString *oldAioImgPath; // @synthesize oldAioImgPath=_oldAioImgPath;
@property(retain, nonatomic) NSString *oldFilePath; // @synthesize oldFilePath=_oldFilePath;
@property(retain, nonatomic) NSString *aioUnZipPath; // @synthesize aioUnZipPath=_aioUnZipPath;
@property(retain, nonatomic) NSString *aioZipPath; // @synthesize aioZipPath=_aioZipPath;
@property(retain, nonatomic) NSString *sendImgPath; // @synthesize sendImgPath=_sendImgPath;
@property(retain, nonatomic) NSString *bigImgPath; // @synthesize bigImgPath=_bigImgPath;
@property(retain, nonatomic) NSString *aioImgPath; // @synthesize aioImgPath=_aioImgPath;
@property(retain, nonatomic) NSString *aioZipUrl; // @synthesize aioZipUrl=_aioZipUrl;
@property(nonatomic) struct CGRect sendCharRect; // @synthesize sendCharRect=_sendCharRect;
@property(nonatomic) struct CGRect packetCharRect; // @synthesize packetCharRect=_packetCharRect;
@property(nonatomic) struct CGRect aioCharRect; // @synthesize aioCharRect=_aioCharRect;
@property(nonatomic) int aioAnimDelay; // @synthesize aioAnimDelay=_aioAnimDelay;
@property(nonatomic) int aioAnimSize; // @synthesize aioAnimSize=_aioAnimSize;
@property(nonatomic) int fontTypeId; // @synthesize fontTypeId=_fontTypeId;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) int Id; // @synthesize Id=_Id;
@property(nonatomic) long long templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isOldAIOAnimFileCompleat;
- (_Bool)isAIOAnimFileCompleat;
- (_Bool)isAllBgImageExist;
- (id)resourcePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
