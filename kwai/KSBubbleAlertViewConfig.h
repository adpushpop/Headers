//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface KSBubbleAlertViewConfig : NSObject
{
    _Bool _forceTapDismiss;
    double _width;
    UIColor *_backgroundColor;
    UIColor *_bubbleBackgroundColor;
    double _cornerRadius;
    double _arrowWidth;
    double _arrowHeight;
    UIFont *_font;
    UIColor *_textColor;
    double _bubbleOffsetY;
    unsigned long long _position;
    double _dismissDuration;
    unsigned long long _type;
}

+ (id)defaultBottomBubbleConfig;
+ (id)defaultBubbleConfig;
+ (id)storyBubbleConfig;
+ (id)publishGuideBubbleConfig;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool forceTapDismiss; // @synthesize forceTapDismiss=_forceTapDismiss;
@property(nonatomic) double dismissDuration; // @synthesize dismissDuration=_dismissDuration;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) double bubbleOffsetY; // @synthesize bubbleOffsetY=_bubbleOffsetY;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *bubbleBackgroundColor; // @synthesize bubbleBackgroundColor=_bubbleBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;

@end
