//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class FMFBOSwitcher, FMFaceShaderResource, FMFaceShaderTouchPointEndParam, FMHandGestureRecognizerInfo, FMPoseFeature, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface FMFaceShaderFilter : GPUImageFilter
{
    struct CGECacheManager *cacheManager;
    NSArray *mNecessaryFacePointsIndexArray;
    int _pointCoordinateSystem;
    int WIDTH;
    int HEIGHT;
    NSString *mVertexShader;
    NSString *mFragmentShader;
    unsigned int mProgramId;
    int mBgTextureUniform;
    int mVertexAttribute;
    int mHasFaceUniform;
    int mRatioUniform;
    int mImageSizeUniform;
    int mTextureCoordinatesAttribute;
    int mUniTimeUniform;
    int mUniAudioTimeUniform;
    int intensityLocation;
    int cycleLocation;
    int mHandGestureUniform;
    int mHandGestureLocationUniform;
    int mHandGestureRatioUniform;
    int mHandGestureStartTimeUniform;
    int mHandGestureEndTimeUniform;
    int rollUniform;
    int yawUniform;
    int pitchUniform;
    NSMutableDictionary *comprehensiveLocationMap;
    NSMutableDictionary *textureUniformMap;
    NSDictionary *texture;
    _Bool isMiddleScale;
    FMFBOSwitcher *mMiddleFBOSwitcher;
    NSMutableArray *locationUniformHandle;
    struct CGPoint mFacePoints[101];
    float mFaceroll;
    float mFaceyaw;
    float mFacepitch;
    int faceCount;
    int _maxFaceCount;
    NSDictionary *_faceUniformDic;
    FMFaceShaderTouchPointEndParam *touchPointEndParam;
    NSMutableArray *touchMoveParams;
    FMPoseFeature *_posefeature;
    int hasBodyUniform;
    int leftLegUniform;
    int rightLegUniform;
    int leftArmUniform;
    int rightArmUniform;
    int chestUniform;
    int headUniform;
    int screenRotationUniform;
    float _intensity;
    float _cycle;
    int _rotation;
    long long _audioSchedule;
    double _currentTime;
    FMHandGestureRecognizerInfo *_handGestureInfo;
    FMFaceShaderResource *_resource;
}

+ (id)faceShaderFilterWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(retain, nonatomic) FMFaceShaderResource *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) FMHandGestureRecognizerInfo *handGestureInfo; // @synthesize handGestureInfo=_handGestureInfo;
@property(nonatomic) int rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float cycle; // @synthesize cycle=_cycle;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) long long audioSchedule; // @synthesize audioSchedule=_audioSchedule;
- (void).cxx_destruct;
- (void)setPoseFeature:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 touchPosition:(struct CGPoint)arg3;
- (struct CGPoint)convertY:(struct CGPoint)arg1;
- (void)updateWithFaceFeatures:(id)arg1 filterEnable:(_Bool)arg2;
- (void)onDraw:(int)arg1 vertices:(const float *)arg2 textureCoordinates:(const float *)arg3;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setCacheMananger:(void *)arg1;
- (void)setMiddleScale:(_Bool)arg1;
- (void)onInit;
- (id)initWithVertexShaderFromData:(id)arg1 fragmentShaderFromData:(id)arg2 size:(struct CGSize)arg3 params:(id)arg4 array:(id)arg5 pointCoordinateSystem:(int)arg6 playingTime:(double)arg7 maxPlayingPoint:(int)arg8 maxMovePoint:(int)arg9 audioName:(id)arg10 maxFaceCount:(int)arg11;
- (void)dealloc;

@end

