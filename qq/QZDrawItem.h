//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, QZ3DTouchAction;

@interface QZDrawItem : NSObject
{
    _Bool _handleTouch;
    struct CGRect _rect;
    id _obj;
    _Bool _isHighlighted;
    _Bool _isReuse;
    _Bool _lazyLoad;
    long long _tag;
    NSString *_className;
    QZ3DTouchAction *_forceTouchAction;
    QZDrawItem *_hitEvent;
    NSMutableDictionary *_extraParams;
    Class _viewClass;
    struct CGPoint _focus;
}

@property(retain, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
@property(retain, nonatomic) NSMutableDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(retain, nonatomic) QZDrawItem *hitEvent; // @synthesize hitEvent=_hitEvent;
@property(retain, nonatomic) QZ3DTouchAction *forceTouchAction; // @synthesize forceTouchAction=_forceTouchAction;
@property(nonatomic) _Bool lazyLoad; // @synthesize lazyLoad=_lazyLoad;
@property(nonatomic) _Bool isReuse; // @synthesize isReuse=_isReuse;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
@property(nonatomic) struct CGPoint focus; // @synthesize focus=_focus;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(nonatomic) _Bool handleTouch; // @synthesize handleTouch=_handleTouch;
- (id)getDrawItemVoiceText;
- (void)setCenterY:(double)arg1;
- (double)centerY;
- (void)setCenterX:(double)arg1;
- (double)centerX;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)setRight:(double)arg1;
- (double)right;
- (void)setLeft:(double)arg1;
- (double)left;
- (void)setBottom:(double)arg1;
- (double)bottom;
- (void)setTop:(double)arg1;
- (double)top;
- (id)hitTest:(struct CGPoint)arg1;
- (void)draw;
- (id)forceTouchHitTest:(struct CGPoint)arg1;
- (void)setRectSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)init;

@end
