//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString;

@interface QQAIODouTuPBProxy : NSObject <IEngineDispatchDelegate>
{
    CDUnknownBlockType _callback;
    CDUnknownBlockType _hotPicCallback;
    CDUnknownBlockType _shanmengCallback;
    CDUnknownBlockType _reportHotPicCallback;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType reportHotPicCallback; // @synthesize reportHotPicCallback=_reportHotPicCallback;
@property(copy, nonatomic) CDUnknownBlockType shanmengCallback; // @synthesize shanmengCallback=_shanmengCallback;
@property(copy, nonatomic) CDUnknownBlockType hotPicCallback; // @synthesize hotPicCallback=_hotPicCallback;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)ImageInfosFromRsp:(struct GetImgInfoRsp *)arg1;
- (id)imageInfoFromRspInfo:(struct ImgInfo *)arg1;
- (void)cancelAllDouTuReq;
- (void)cancelShanmengReq;
- (void)cancelHotPicReq;
- (_Bool)reportHotPicImageInfo:(id)arg1;
- (_Bool)reqShanmengImageInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)reqHotPicImageInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)reqDouTuImageInfoWithUin:(unsigned long long)arg1 age:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
