//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMMenuController, NSArray;

@interface MMMenuContentView : UIView
{
    _Bool _menuVisible;
    NSArray *_menuItems;
    UIView *_containerView;
    long long _animation;
    MMMenuController *_menuController;
    UIView *_container;
}

+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) __weak UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak MMMenuController *menuController; // @synthesize menuController=_menuController;
@property(nonatomic) long long animation; // @synthesize animation=_animation;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic, getter=isMenuVisible) _Bool menuVisible; // @synthesize menuVisible=_menuVisible;
- (void).cxx_destruct;
- (void)hidenAnimated:(_Bool)arg1;
- (void)hidenAnimation:(long long)arg1;
- (void)showMenuAnimated:(_Bool)arg1;
- (void)showMenuAnimation:(long long)arg1;
- (void)onItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

