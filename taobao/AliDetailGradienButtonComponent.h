//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "AliDetailBottomBarItemProtocol-Protocol.h"

@class AliDetailBottomBarIconModel, NSString, UIView;

@interface AliDetailGradienButtonComponent : UIButton <AliDetailBottomBarItemProtocol>
{
    AliDetailBottomBarIconModel *_itemModel;
    UIView *_gradientView;
    UIButton *_iconButton;
}

@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) AliDetailBottomBarIconModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (void)componentActionClicked:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setToolItemModel:(id)arg1;
- (_Bool)drawLine;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

