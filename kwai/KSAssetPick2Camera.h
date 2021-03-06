//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BFCancellationTokenSource, BFTask, GPUImageOutput, GPUImageVideoCamera, GPUImageiOSBlurFilter;

@interface KSAssetPick2Camera : NSObject
{
    CDUnknownBlockType _cameraDidLoad;
    GPUImageVideoCamera *_camera;
    GPUImageiOSBlurFilter *_blurFilter;
    BFTask *_cameraWarmUpTask;
    BFCancellationTokenSource *_cameraWarmUpCancellationTokenSource;
}

@property(retain, nonatomic) BFCancellationTokenSource *cameraWarmUpCancellationTokenSource; // @synthesize cameraWarmUpCancellationTokenSource=_cameraWarmUpCancellationTokenSource;
@property(retain, nonatomic) BFTask *cameraWarmUpTask; // @synthesize cameraWarmUpTask=_cameraWarmUpTask;
@property(retain, nonatomic) GPUImageiOSBlurFilter *blurFilter; // @synthesize blurFilter=_blurFilter;
@property(retain, nonatomic) GPUImageVideoCamera *camera; // @synthesize camera=_camera;
@property(copy, nonatomic) CDUnknownBlockType cameraDidLoad; // @synthesize cameraDidLoad=_cameraDidLoad;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) GPUImageOutput *cameraOutput;
- (void)_cameraDidLoad;
- (void)_loadCamera;
- (id)requiredMediaTypes;
- (id)requiredPermissions;
- (id)_cameraPermissionRequestTask;
- (void)stopCapture;
- (void)startCapture;

@end

