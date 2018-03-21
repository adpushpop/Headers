//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMAnnotationViewKVO, NSString, UIImage;
@protocol MMAnnotation;

@interface MMAnnotationView : UIView
{
    _Bool _canShowCallout;
    NSString *_reuseIdentifier;
    id <MMAnnotation> _annotation;
    UIImage *_image;
    UIView *_customCalloutView;
    MMAnnotationViewKVO *_KVO;
    struct CGPoint _centerOffset;
    struct CGPoint _calloutOffset;
}

+ (id)KVOAttributes;
+ (id)AnimOut1:(id)arg1;
+ (id)AnimInLively:(id)arg1;
+ (id)AnimIn2:(id)arg1;
+ (id)AnimIn1:(id)arg1;
@property(retain, nonatomic) MMAnnotationViewKVO *KVO; // @synthesize KVO=_KVO;
@property(retain, nonatomic) UIView *customCalloutView; // @synthesize customCalloutView=_customCalloutView;
@property(nonatomic) _Bool canShowCallout; // @synthesize canShowCallout=_canShowCallout;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) id <MMAnnotation> annotation; // @synthesize annotation=_annotation;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setObserver:(id)arg1;
- (id)animationWithType:(long long)arg1;

@end
