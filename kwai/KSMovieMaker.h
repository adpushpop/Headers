//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSURL;

@interface KSMovieMaker : NSObject
{
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    AVAssetWriterInputPixelBufferAdaptor *_bufferAdaptor;
    _Bool _expectsMediaDataInRealTime;
    unsigned int _pixelFormatType;
    unsigned long long _status;
    struct CGSize _videoSize;
}

@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned int pixelFormatType; // @synthesize pixelFormatType=_pixelFormatType;
@property(nonatomic) _Bool expectsMediaDataInRealTime; // @synthesize expectsMediaDataInRealTime=_expectsMediaDataInRealTime;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)cancel;
- (_Bool)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)appendImage:(struct CGImage *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)waitMoreMediaDataReady;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)startAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (struct __CVBuffer *)createPixelBuffer;
@property(readonly, nonatomic) NSURL *outputURL;
- (id)init;
- (id)initWithVideoSize:(struct CGSize)arg1 outputURL:(id)arg2 transform:(struct CGAffineTransform)arg3;
- (id)initWithVideoSize:(struct CGSize)arg1 outputURL:(id)arg2;
- (void)dealloc;

@end
