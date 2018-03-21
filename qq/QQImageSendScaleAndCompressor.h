//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface QQImageSendScaleAndCompressor : NSObject
{
    _Bool _async;
    NSArray *_images;
    _Bool _useMD5Name;
    int _scaleMode;
    int _accType;
    int _xo;
    BOOL _oldImageExistFlag;
    int _imageType;
    _Bool _isFlash;
    int _sessionType;
    CDUnknownBlockType _complete_handle;
}

@property(nonatomic) _Bool isFlash; // @synthesize isFlash=_isFlash;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) CDUnknownBlockType complete_handle; // @synthesize complete_handle=_complete_handle;
- (void).cxx_destruct;
- (_Bool)isInputImageCompressed;
- (_Bool)isOrigImageExisted;
- (_Bool)isThumbImageExisted;
- (void)cancelToReport;
- (void)prepareToReport:(id)arg1;
- (struct CGSize)getImageSize:(id)arg1;
- (double)getImageScaleNeedMem:(id)arg1;
- (_Bool)isJpegQQAssetNotEdited:(id)arg1;
- (_Bool)isJpegAssetNotEdited:(id)arg1;
- (_Bool)isMemTooLowToScaleJpegImage:(struct CGImage *)arg1;
- (_Bool)isIphone5EarlyDevice;
- (void)dealloc;
- (void)asyncScaleAndCompress:(CDUnknownBlockType)arg1;
- (id)scaleAndCompress;
- (id)asyncScaleAndCompressImages;
- (id)syncScaleAndCompressImages;
- (_Bool)isCompressedJpegImage:(id)arg1 withUUID:(id)arg2;
- (_Bool)isScreenSnapshotImage:(struct CGSize)arg1 fileSize:(unsigned long long)arg2;
- (id)syncScaleAndCompressScreenSnapshotImage:(id)arg1 fileSize:(unsigned long long)arg2 andUUID:(id)arg3 scaledImageSize:(struct CGSize *)arg4;
- (id)syncScaleAndCompressQQAsset:(id)arg1;
- (id)syncScaleAndCompressQQAssetGif:(id)arg1 rawData:(id)arg2 withFullResolutionImage:(id)arg3 uuid:(id)arg4;
- (_Bool)syncScaleAndCompressQQAsset:(id)arg1 saveAssetPathName:(id)arg2;
- (void)printUseOfMemory:(id)arg1;
- (id)syncScaleAndCompressImage:(id)arg1;
- (id)syncScaleAndCompressScreenShotWordsImageEdit:(id)arg1 withUuid:(id)arg2;
- (_Bool)syncScaleAndCompressImage:(id)arg1 saveImagePathName:(id)arg2;
- (id)getMd5HashString:(id)arg1 withUUID:(id)arg2;
- (id)getQQMsgPicInfo:(id)arg1 uuid:(id)arg2 imageType:(int)arg3 imgSize:(struct CGSize)arg4 fileLen:(unsigned long long)arg5 showLen:(unsigned long long)arg6 downloadLen:(unsigned long long)arg7;
- (id)compressImageToProgressiveJpeg:(id)arg1 withUUID:(id)arg2;
- (id)compressImage:(id)arg1 withUUID:(id)arg2;
- (id)scaleQQAssetImage:(id)arg1 fullResolutionImage:(id)arg2 withUUID:(id)arg3;
- (id)scaleImage:(id)arg1 withUUID:(id)arg2;
- (int)getMsgImageTypeByUTI:(id)arg1 withRef:(id)arg2 orNSData:(id)arg3;
- (int)getQQAssetImageType:(id)arg1;
- (int)getAssetImageType:(id)arg1;
- (_Bool)isGifInNSData:(id)arg1;
- (_Bool)isGif:(id)arg1;
- (_Bool)saveOriginalImage:(id)arg1 atPath:(id)arg2 withUUID:(id)arg3;
- (_Bool)saveThumbnail:(id)arg1 atPath:(id)arg2;
- (id)genImagePath:(id)arg1 type:(int)arg2 uuid:(id)arg3;
- (id)genThumbnailFromUIImage:(id)arg1 atPath:(id)arg2;
- (id)initWithImage:(id)arg1 scaleMode:(int)arg2;

// Remaining properties
@property(nonatomic) int accType; // @dynamic accType;
@property(nonatomic) _Bool async; // @dynamic async;
@property(retain, nonatomic) NSArray *images; // @dynamic images;
@property(nonatomic) int scaleMode; // @dynamic scaleMode;
@property(nonatomic) _Bool useMD5Name; // @dynamic useMD5Name;

@end
