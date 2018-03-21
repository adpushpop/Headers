//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliBViewAnimator-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;
@protocol AliBViewAnimationContext;

@interface AliBAbstractAnimator : NSObject <AliBViewAnimator>
{
    _Bool _animating;
    NSString *_animationKey;
    NSString *_name;
    long long _version;
    NSString *_type;
    NSDictionary *_script;
    CDUnknownBlockType _complete;
    CDUnknownBlockType _startedBlock;
    id <AliBViewAnimationContext> _context;
    NSMutableArray *_textures;
    unsigned long long _textureCount;
    double _duration;
    NSString *_blackDevices;
    NSString *_blackVersions;
    NSMutableArray *_rollbacks;
}

@property(retain, nonatomic) NSMutableArray *rollbacks; // @synthesize rollbacks=_rollbacks;
@property(copy, nonatomic) NSString *blackVersions; // @synthesize blackVersions=_blackVersions;
@property(copy, nonatomic) NSString *blackDevices; // @synthesize blackDevices=_blackDevices;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long textureCount; // @synthesize textureCount=_textureCount;
@property(retain, nonatomic) NSMutableArray *textures; // @synthesize textures=_textures;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) id <AliBViewAnimationContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType startedBlock; // @synthesize startedBlock=_startedBlock;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSDictionary *script; // @synthesize script=_script;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
- (void).cxx_destruct;
- (void)excuteRollbacks;
- (void)addRollback:(CDUnknownBlockType)arg1;
- (void)updateTextures;
@property(readonly, nonatomic, getter=isInverse) _Bool inverse;
- (_Bool)isValid;
- (void)finishComplete:(_Bool)arg1;
- (_Bool)animate;
- (id)initWithKey:(id)arg1 info:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
