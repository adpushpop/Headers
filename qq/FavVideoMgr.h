//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/FADownloadDelegate-Protocol.h>
#import <QQMainProject/FAUpHttpDelegate-Protocol.h>
#import <QQMainProject/FavFileDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface FavVideoMgr : NSObject <FavFileDelegate, FAUpHttpDelegate, FADownloadDelegate>
{
    NSMutableArray *_models;
    NSMutableArray *_delegates;
    NSMutableArray *_helpers;
    NSMutableArray *_blocks;
}

+ (id)getInstance;
- (void)onFAThumbnailFail:(id)arg1 size:(int)arg2;
- (void)onFAThumbnailSuccess:(id)arg1 size:(int)arg2;
- (void)OnFADownloadUpdate:(id)arg1 isFinish:(_Bool)arg2 withErr:(id)arg3;
- (void)OnHttpResult:(_Bool)arg1 isInvalidUrl:(_Bool)arg2 info:(id)arg3;
- (void)OnHttpProgress:(id)arg1;
- (void)onCallback_OnlinePreview:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Thumbnail:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Download:(int)arg1 errorType:(int)arg2;
- (void)onCallback_FastUpload:(int)arg1 errorType:(int)arg2;
- (void)cancelRequest:(id)arg1;
- (int)requestDownload:(id)arg1 withDelegate:(id)arg2;
- (int)requestUpload:(id)arg1 withDelegate:(id)arg2;
- (void)request:(_Bool)arg1 pop:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

