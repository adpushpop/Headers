//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppImageLoad.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TBWeAppImageLoad : WeAppImageLoad
{
    NSObject<OS_dispatch_queue> *_ioQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (void).cxx_destruct;
- (void)setButtonBacgroundImageByURL:(id)arg1 button:(id)arg2 forState:(unsigned long long)arg3 forParam:(id)arg4;
- (void)setButtonImageByURL:(id)arg1 button:(id)arg2 forState:(unsigned long long)arg3 forParam:(id)arg4;
- (void)setImageByURL:(id)arg1 forImageView:(id)arg2 moduleType:(id)arg3 cutType:(long long)arg4 completed:(CDUnknownBlockType)arg5 widthHighRatio:(double)arg6 withImageOption:(unsigned long long)arg7;
- (_Bool)getImageUseIoQueueforParam:(id)arg1;
- (unsigned long long)getImageQualityforParam:(id)arg1;
- (long long)getImageCutTypeforParam:(id)arg1;
- (id)getImageModuleTypeforParam:(id)arg1;
- (void)setImageByURL:(id)arg1 forImageView:(id)arg2 forParam:(id)arg3;
- (void)setImageByURL:(id)arg1 forImageView:(id)arg2;
- (id)init;

@end
