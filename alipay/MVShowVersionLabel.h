//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont;

@interface MVShowVersionLabel : UIView
{
    _Bool _isDobby;
    NSString *_leftText;
    NSString *_rightText;
    unsigned long long _style;
    UIFont *_font;
    UIColor *_mainColor;
    UIColor *_viceColor;
    struct UIEdgeInsets _marginOffset;
}

@property(nonatomic) struct UIEdgeInsets marginOffset; // @synthesize marginOffset=_marginOffset;
@property(nonatomic) _Bool isDobby; // @synthesize isDobby=_isDobby;
@property(retain, nonatomic) UIColor *viceColor; // @synthesize viceColor=_viceColor;
@property(retain, nonatomic) UIColor *mainColor; // @synthesize mainColor=_mainColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(retain, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (_Bool)colorSchemeSameAsDefault;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)shouldBeVisible;
- (void)setShowVersion:(id)arg1;
- (void)setShowVersion:(id)arg1 canSpecial:(_Bool)arg2;
- (id)initWithShowVersion:(id)arg1;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithLeftText:(id)arg1 rightText:(id)arg2;

@end
