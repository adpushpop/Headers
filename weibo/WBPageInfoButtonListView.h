//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;
@protocol WBPageInfoButtonListViewDelegate;

@interface WBPageInfoButtonListView : UIView
{
    NSMutableArray *_buttons;
    UIImageView *_backgroundImageView;
    UIView *_buttonContentView;
    id <WBPageInfoButtonListViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WBPageInfoButtonListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *buttonContentView; // @synthesize buttonContentView=_buttonContentView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setHiddenWithAnimation:(_Bool)arg1;
- (void)reloadUIElements;
- (void)resetSubViews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)setButtonsWithTitleArray:(id)arg1;
- (struct CGSize)sizeWithButtons;
- (struct CGSize)sizeWithButtonCount:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

