//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZoneFaceDetector : NSObject
{
    _Bool _canDetectFace;
    struct TC_FaceAlignmentRunner *_ufaRunner;
    struct YtFaceFeatureExtractSdk *_frRunner;
    struct FaceDetectionParam _param;
}

+ (void)detectFaceFeatureInQZone:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)downloadSDK;
+ (_Bool)isFaceDetectable;
- (id).cxx_construct;
- (vector_10c95ae6)get5PointsFromFaceShape:(struct _TC_FaceShape)arg1;
- (vector_be8cf01e)localRecognizeFace:(struct Mat)arg1 faceShape:(struct _TC_FaceShape)arg2 runner:(struct YtFaceFeatureExtractSdk *)arg3;
- (void)synDetectFaceInImage:(id)arg1 getFaces:(CDUnknownBlockType)arg2;
- (void)detectFaceInImage:(id)arg1 getFaces:(CDUnknownBlockType)arg2;
- (void)detectFaceInImage:(id)arg1 faceRects:(id)arg2 getFaceFeatures:(CDUnknownBlockType)arg3;
- (void)detectFaceInImage:(id)arg1 getFaceRects:(CDUnknownBlockType)arg2;
- (void)prepareForFaceDetectWithBlock:(CDUnknownBlockType)arg1;
- (void)prepareForFaceDetect;
- (void)dealloc;
- (id)init;

@end

