//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

#import "UITextFieldDelegate-Protocol.h"

@class CAAnimationlessLayer, NSString, UIColor, UIFont;

@interface KSCustomSearchBar : UISearchBar <UITextFieldDelegate>
{
    _Bool _alwayEnableCancelButton;
    UIColor *_lineColor;
    CAAnimationlessLayer *_topLine;
    CAAnimationlessLayer *_buttomLine;
    id _aspectToken;
    double _placeholderWidth;
    struct UIEdgeInsets _cancelButtonHitTestEdgeInset;
}

+ (void)traverseView:(id)arg1 filter:(CDUnknownBlockType)arg2;
@property(nonatomic) double placeholderWidth; // @synthesize placeholderWidth=_placeholderWidth;
@property(retain, nonatomic) id aspectToken; // @synthesize aspectToken=_aspectToken;
@property(retain, nonatomic) CAAnimationlessLayer *buttomLine; // @synthesize buttomLine=_buttomLine;
@property(retain, nonatomic) CAAnimationlessLayer *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) struct UIEdgeInsets cancelButtonHitTestEdgeInset; // @synthesize cancelButtonHitTestEdgeInset=_cancelButtonHitTestEdgeInset;
@property(nonatomic) _Bool alwayEnableCancelButton; // @synthesize alwayEnableCancelButton=_alwayEnableCancelButton;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void).cxx_destruct;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (double)placeholderWidthWithPlaceholder:(id)arg1;
- (id)searchFieldBackgroundImage;
- (void)enableCancelButton;
- (_Bool)resignFirstResponder;
- (_Bool)endEditing:(_Bool)arg1;
- (_Bool)editing;
- (id)searchTextFiled;
- (void)disablesReturnKeyAutomatically;
- (void)setTopLineHidden:(_Bool)arg1;
- (void)setBottomLineHidden:(_Bool)arg1;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_cancelButtonInView:(id)arg1;
- (id)searchTextfieldInView:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

