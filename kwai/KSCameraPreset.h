//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSCameraPreset : NSObject
{
    _Bool _needsCheck;
    NSString *_sessionPreset;
    struct CGSize _size;
}

@property(readonly, nonatomic) _Bool needsCheck; // @synthesize needsCheck=_needsCheck;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
- (void).cxx_destruct;
- (id)initWithSessionPreset:(id)arg1 size:(struct CGSize)arg2 needsCheck:(_Bool)arg3;

@end
