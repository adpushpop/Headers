//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKView.h>

#import "MirrorOpenGLProtocol-Protocol.h"

@class MirrorGLKProgram, MirrorOpenGLFrameBuffer, NSString;

@interface MirrorOpenGLView : GLKView <MirrorOpenGLProtocol>
{
    int _inputRotation;
    float _imageVertices[8];
    _Bool _enabled;
    _Bool _isEnterBackground;
    int _fillMode;
    unsigned int _framebuffer;
    unsigned int _colorRenderbuffer;
    MirrorGLKProgram *_displayProgram;
    MirrorOpenGLFrameBuffer *_inputFrameBuffer;
    CDUnknownBlockType _takeAPhotoCompletion;
    struct CGSize _sizeInPixels;
    struct CGSize _boundsSizeAtFrameBuffer;
    struct CGSize _inputSize;
}

+ (const float *)textureCoordinatesForRotation:(int)arg1;
+ (Class)layerClass;
@property(nonatomic) _Bool isEnterBackground; // @synthesize isEnterBackground=_isEnterBackground;
@property(copy) CDUnknownBlockType takeAPhotoCompletion; // @synthesize takeAPhotoCompletion=_takeAPhotoCompletion;
@property(retain, nonatomic) MirrorOpenGLFrameBuffer *inputFrameBuffer; // @synthesize inputFrameBuffer=_inputFrameBuffer;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(nonatomic) struct CGSize boundsSizeAtFrameBuffer; // @synthesize boundsSizeAtFrameBuffer=_boundsSizeAtFrameBuffer;
@property(nonatomic) unsigned int colorRenderbuffer; // @synthesize colorRenderbuffer=_colorRenderbuffer;
@property(nonatomic) unsigned int framebuffer; // @synthesize framebuffer=_framebuffer;
@property(retain, nonatomic) MirrorGLKProgram *displayProgram; // @synthesize displayProgram=_displayProgram;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int fillMode; // @synthesize fillMode=_fillMode;
- (void).cxx_destruct;
- (void)didEndProcessing;
- (_Bool)shouldUpdatesSimpleBufferToThisTarget;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (long long)nextAvailableTextureIndex;
- (void)inputFramebufferAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setCurrentMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)takeAPhotoWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
- (struct CGSize)maximumOutputSize;
- (id)snapshot;
- (void)presentFramebuffer;
- (void)activeFramebuffer;
- (void)dealloc;
- (void)layoutSubviews;
- (void)recalculateViewGeometry;
- (void)createDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)initializer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

