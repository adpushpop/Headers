//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, NSString, SSThemedTableView, UIView;

@interface SSThemedTableViewCell : UITableViewCell
{
    _Bool _separatorAtTOP;
    _Bool _separatorAtBottom;
    _Bool _needMargin;
    NSString *_backgroundColorThemeKey;
    NSString *_backgroundSelectedColorThemeKey;
    NSString *_separatorColorThemeKey;
    double _separatorThemeInsetLeft;
    double _separatorThemeInsetRight;
    NSIndexPath *_cellIndex;
    SSThemedTableView *_tableView;
    UIView *_selectedContentView;
    UIView *_separtorView;
    UIView *_bottomSepartorView;
}

@property(retain, nonatomic) UIView *bottomSepartorView; // @synthesize bottomSepartorView=_bottomSepartorView;
@property(retain, nonatomic) UIView *separtorView; // @synthesize separtorView=_separtorView;
@property(retain, nonatomic) UIView *selectedContentView; // @synthesize selectedContentView=_selectedContentView;
@property(nonatomic) _Bool needMargin; // @synthesize needMargin=_needMargin;
@property(nonatomic) __weak SSThemedTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSIndexPath *cellIndex; // @synthesize cellIndex=_cellIndex;
@property(nonatomic) _Bool separatorAtBottom; // @synthesize separatorAtBottom=_separatorAtBottom;
@property(nonatomic) _Bool separatorAtTOP; // @synthesize separatorAtTOP=_separatorAtTOP;
@property(nonatomic) double separatorThemeInsetRight; // @synthesize separatorThemeInsetRight=_separatorThemeInsetRight;
@property(nonatomic) double separatorThemeInsetLeft; // @synthesize separatorThemeInsetLeft=_separatorThemeInsetLeft;
@property(copy, nonatomic) NSString *separatorColorThemeKey; // @synthesize separatorColorThemeKey=_separatorColorThemeKey;
@property(copy, nonatomic) NSString *backgroundSelectedColorThemeKey; // @synthesize backgroundSelectedColorThemeKey=_backgroundSelectedColorThemeKey;
@property(copy, nonatomic) NSString *backgroundColorThemeKey; // @synthesize backgroundColorThemeKey=_backgroundColorThemeKey;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)fixIOS9BugOnIPad;
- (void)showSelected:(_Bool)arg1 animation:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)themeChanged:(id)arg1;
- (void)_customThemeChanged:(id)arg1;
- (void)ss_didInitialize;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

