//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, UIView;

@interface TBXSearchComplexComponent : NSObject
{
    NSMutableArray *_components;
    UIView *_container;
    struct CGSize _viewSize;
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (double)totalHeight;
- (void)setViewController:(id)arg1;
- (void)renderWithCompetion:(CDUnknownBlockType)arg1;
- (void)addComponent:(id)arg1;

@end

