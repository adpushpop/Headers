//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBLiveUIUtils : NSObject
{
}

+ (void)addKeyFrameAnimation:(id)arg1;
+ (id)addBlurEffectToView:(id)arg1 effectStyle:(long long)arg2 frame:(struct CGRect)arg3;
+ (void)addBlurEffect:(id)arg1 frame:(struct CGRect)arg2;
+ (id)findSubviewWithClass:(Class)arg1 superView:(id)arg2;
+ (id)lineViewWithFrame:(struct CGRect)arg1;
+ (id)verticalLineViewWithFrame:(struct CGRect)arg1;
+ (id)horizontalLineViewWithFrame:(struct CGRect)arg1;
+ (id)verticalGradientLayerWithFrame:(struct CGRect)arg1 cgcolors:(id)arg2;
+ (id)horizontalGradientLayerWithFrame:(struct CGRect)arg1 cgcolors:(id)arg2;
+ (id)gradientLayerWithFrame:(struct CGRect)arg1 cgcolors:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;

@end

