//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, NSString, UIButton, UIColor, UIFont, UITextView, WBLiveKitHPTextViewInternal;
@protocol WBLiveKitHPGrowingTextViewDelegate;

@interface WBLiveKitHPGrowingTextView : UIView
{
    WBLiveKitHPTextViewInternal *internalTextView;
    int minHeight;
    int maxHeight;
    int maxNumberOfLines;
    int minNumberOfLines;
    _Bool animateHeightChange;
    NSObject<WBLiveKitHPGrowingTextViewDelegate> *delegate;
    NSString *text;
    UIFont *font;
    UIColor *textColor;
    long long textAlignment;
    struct _NSRange selectedRange;
    _Bool editable;
    unsigned long long dataDetectorTypes;
    long long returnKeyType;
    struct UIEdgeInsets contentInset;
    struct _NSRange lastSelectedRange;
    UIButton *_emotionToggleButton;
}

@property(retain, nonatomic) UIButton *emotionToggleButton; // @synthesize emotionToggleButton=_emotionToggleButton;
@property(nonatomic) struct _NSRange lastSelectedRange; // @synthesize lastSelectedRange;
@property _Bool animateHeightChange; // @synthesize animateHeightChange;
@property(nonatomic) __weak NSObject<WBLiveKitHPGrowingTextViewDelegate> *delegate; // @synthesize delegate;
@property(retain) UITextView *internalTextView; // @synthesize internalTextView;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (_Bool)hasText;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font;
@property(copy, nonatomic) NSString *text;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)growDidStop;
- (void)resizeTextView:(long long)arg1;
- (void)textViewDidChangeSize:(id)arg1;
- (void)textViewDidChange:(id)arg1;
@property(readonly, nonatomic) int numberOfLines;
@property int minNumberOfLines;
@property int maxNumberOfLines;
@property struct UIEdgeInsets contentInset;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)commonInitialiser;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

