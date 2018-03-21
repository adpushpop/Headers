//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class NSString, UIButton, UILabel;

@interface TBOUGCPublicChoiceComponent : TBOBaseUGCComponent
{
    UIButton *_btnChoice;
    UILabel *_lbTitle;
    UILabel *_lbDesc;
    NSString *_unSelectedDesc;
    NSString *_selectedDesc;
}

+ (id)componentName;
@property(retain, nonatomic) NSString *selectedDesc; // @synthesize selectedDesc=_selectedDesc;
@property(retain, nonatomic) NSString *unSelectedDesc; // @synthesize unSelectedDesc=_unSelectedDesc;
@property(retain, nonatomic) UILabel *lbDesc; // @synthesize lbDesc=_lbDesc;
@property(retain, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(retain, nonatomic) UIButton *btnChoice; // @synthesize btnChoice=_btnChoice;
- (void).cxx_destruct;
- (void)changeSelectState:(_Bool)arg1;
- (void)publish:(CDUnknownBlockType)arg1;
- (_Bool)isValid;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end
