//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface GdtAdManager : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *m_packDataDic;
    NSLock *m_lock;
    NSMutableArray *_adPostionCache;
}

+ (int)sendSSOData:(id)arg1 Cmd:(id)arg2;
+ (int)sendAdGetReqWithPosition:(id)arg1 Count:(id)arg2 isBack:(_Bool)arg3;
+ (void)setAdGetSign;
+ (id)getReportAdType:(id)arg1;
+ (_Bool)pullAdWithPosition:(id)arg1 Count:(id)arg2 callBack:(CDUnknownBlockType)arg3;
+ (_Bool)pullAdWithPosition:(id)arg1 Count:(id)arg2;
+ (_Bool)doAdReportWithDic:(id)arg1;
+ (id)getInstance;
+ (id)createGDTVideoAttachmentWithStartTime:(long long)arg1 endTime:(long long)arg2 completion:(_Bool)arg3 playScene:(long long)arg4;
+ (id)encoderUrlWithString:(id)arg1;
+ (void)traceReportwithUrl:(id)arg1 andValue:(id)arg2;
+ (void)exposureWithUrl:(id)arg1;
+ (void)appAdClickReportWithUrl:(id)arg1;
+ (_Bool)traceCgiReportWithConvType:(long long)arg1 traceId:(id)arg2 produceId:(long long)arg3;
+ (_Bool)isInWhiteListWithMsg:(id)arg1;
+ (void)adReporteWithMsg:(id)arg1 Type:(unsigned int)arg2 Param:(id)arg3;
+ (id)getReportAdType:(unsigned int)arg1 Msg:(id)arg2 Param:(id)arg3;
+ (void)adReporteWithMsg:(id)arg1 Type:(int)arg2 uin:(long long)arg3;
+ (void)adReporteWithMsg:(id)arg1 Param:(id)arg2;
@property(readonly, nonatomic) NSMutableArray *adPostionCache; // @synthesize adPostionCache=_adPostionCache;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)removeSeq:(int)arg1;
- (id)getGdtPackBySeq:(int)arg1;
- (void)addSeq:(int)arg1 Action:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
