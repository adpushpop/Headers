//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, QQTabView;
@protocol DynamicButtonClickDelegate;

@interface QQDynamicTopItem : UITableViewCell
{
    QQTabView *_tabView;
    id <DynamicButtonClickDelegate> _callback;
    NSMutableArray *_items;
    NSMutableArray *_buttons;
}

@property(nonatomic) id <DynamicButtonClickDelegate> callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)updateDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)onButtonClicked:(id)arg1;
- (void)updateButtons;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

