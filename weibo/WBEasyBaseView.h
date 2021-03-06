//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;
@protocol WBEasyBaseViewDelegate;

@interface WBEasyBaseView : UIView
{
    id <WBEasyBaseViewDelegate> _easyDelegate;
    NSDictionary *_extParams;
}

@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) __weak id <WBEasyBaseViewDelegate> easyDelegate; // @synthesize easyDelegate=_easyDelegate;
- (void).cxx_destruct;
- (void)removeThisView;
- (void)showEasyView;
- (void)configWithTitle:(id)arg1 withPlaceholder:(id)arg2;

@end

