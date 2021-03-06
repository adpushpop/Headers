//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTCustomAnimationManager : NSObject
{
    _Bool _pushSearchVCWithCustomAnimation;
    NSMutableDictionary *_animationInfoDict;
}

+ (void)enterTSVDetailAnimateTransition:(id)arg1 selectedCellFrame:(struct CGRect)arg2;
+ (double)enterTSVDetailTransitionDuration;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *animationInfoDict; // @synthesize animationInfoDict=_animationInfoDict;
@property(nonatomic) _Bool pushSearchVCWithCustomAnimation; // @synthesize pushSearchVCWithCustomAnimation=_pushSearchVCWithCustomAnimation;
- (void).cxx_destruct;
- (id)percentDrivenTransitionForAnimationController:(id)arg1;
- (id)customAnimationForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)registerFromVCClass:(Class)arg1 toVCClass:(Class)arg2 animationClass:(Class)arg3;
- (id)init;

@end

