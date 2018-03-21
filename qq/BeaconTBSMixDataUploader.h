//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/AnaPersistListener-Protocol.h>
#import <QQMainProject/AnaUploader-Protocol.h>

@class NSString;

@interface BeaconTBSMixDataUploader : NSObject <AnaPersistListener, AnaUploader>
{
    NSString *uploadUrl;
    _Bool _isUploading;
    int _maxPkgSize;
    int _xo;
}

+ (id)sharedInstance;
@property(retain) NSString *uploadUrl; // @synthesize uploadUrl;
- (_Bool)processStrategy:(id)arg1;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (_Bool)deleteUploadData:(id)arg1;
- (id)getUploadPkg:(long long)arg1 cleanData:(_Bool)arg2;
- (id)doSizeProtect:(id)arg1 maxPkgSize:(int)arg2 maxByte:(long long)arg3;
- (_Bool)doUpload;
- (_Bool)uploadFinishWithResult:(_Bool)arg1 error:(id *)arg2;
- (id)getUploadData:(_Bool)arg1 error:(id *)arg2;
- (_Bool)checkMixSizeForUpload;
- (void)onPersist;
- (id)getAllSupportedPersistTypesWithWifi:(_Bool)arg1;
- (void)setMaxSizeDataListener:(id)arg1;
@property(nonatomic) int maxPkgSize; // @dynamic maxPkgSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isUploading; // @dynamic isUploading;
@property(readonly) Class superclass;

@end
