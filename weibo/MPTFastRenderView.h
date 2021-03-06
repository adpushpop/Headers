//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPTRenderProgram;

@interface MPTFastRenderView : UIView
{
    unsigned int framebuffer;
    unsigned int renderbuffer;
    MPTRenderProgram *renderProgram;
    struct CGSize renderSize;
    int wScalingHandle;
    int hScalingHandle;
    float wScaling;
    float hScaling;
}

+ (Class)layerClass;
@property(nonatomic) float hScaling; // @synthesize hScaling;
@property(nonatomic) float wScaling; // @synthesize wScaling;
- (void).cxx_destruct;
- (void)caculateWScaling:(float *)arg1 hScaling:(float *)arg2 renderSize:(struct CGSize)arg3;
- (void)renderTexture:(CDStruct_4a413756)arg1;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1;
- (void)unloadRenderPorgram;
- (unsigned int)createShader:(id)arg1 type:(unsigned int)arg2;
- (void)loadRenderProgram;
- (void)unloadFramebuffer;
- (void)loadFramebuffer;
- (void)bindFramebuffer;
- (void)makeCtxCurrent;
- (void)setupGL;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

