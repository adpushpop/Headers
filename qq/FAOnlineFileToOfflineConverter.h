//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FAModel, NSTimer;
@protocol FADelegate, FAOnlineFileToOfflineConverterDelegate;

@interface FAOnlineFileToOfflineConverter : NSObject
{
    id <FAOnlineFileToOfflineConverterDelegate> _delegate;
    int _onlineToOfflineReqSeq;
    int _progressQueryReqSeq;
    FAModel *_model;
    _Bool _isPendingFlag;
    unsigned long long _fakeProgressStartTime;
    unsigned long long _currentSpeed;
    NSTimer *_notifyProgressTimer;
    _Bool _isDownloadAvailable;
    _Bool _isTimeToPostNotifyDownload;
    NSTimer *_querySigTimer;
    NSTimer *_O2OReqTimer;
    unsigned long long _currentSpeedForCalculateTimeOut;
    float _maxPauseProgress;
    _Bool _online2offlineTimeOutFlag;
    _Bool _queryProgressTimeOutFlag;
    id <FADelegate> _delegateFA;
    int _xo;
}

- (void)recoverFakeProgressStrategy;
- (void)jumpToSessionInvalid;
- (void)jumpToFailStatus;
- (void)resumeFakeProgressStrategy;
- (void)startFakeProgressStrategy;
- (void)onNotifyFakeProgress:(id)arg1;
- (void)startDownloadOfflineFile;
- (void)onQueryProgressTimeOut:(id)arg1;
- (void)onO2OReqTimeOut:(id)arg1;
- (void)killO2OReqTimer;
- (void)RestartO2OReqTimer;
- (void)ResetO2OReqTimer;
- (void)killQueryTimer;
- (void)RestartQueryTimer;
- (void)ResetQueryTimer;
- (void)killNotifyProgressTimer;
- (void)RestartNotifyProgressTimer;
- (void)ResetNotifyProgressTimer;
- (void)onRecvOfflineFileNotify;
- (void)onRecvPCProgressNotify;
- (void)onRecvPCStartUpdateNotify;
- (void)onRecvO2ORequestConfirm;
- (void)onO2ORequestSend:(_Bool)arg1;
- (void)onQueryProgressRequestSend:(_Bool)arg1;
- (_Bool)requestReceive;
- (_Bool)NotifyUIStartFileDownload;
- (void)onError;
- (void)recoverQueryProgress;
- (void)recoverOnline2OfflineReq;
- (void)resumeQueryProgress;
- (void)doStatusLoop;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (id)initWithFile:(id)arg1;

// Remaining properties
@property(nonatomic) id <FAOnlineFileToOfflineConverterDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) FAModel *model; // @dynamic model;
@property(nonatomic) int onlineToOfflineReqSeq; // @dynamic onlineToOfflineReqSeq;
@property(nonatomic) int progressQueryReqSeq; // @dynamic progressQueryReqSeq;

@end
