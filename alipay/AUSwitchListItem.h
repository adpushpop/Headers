//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUBaseListItem.h"

@class UISwitch;

@interface AUSwitchListItem : AUBaseListItem
{
    UISwitch *_switchControl;
}

+ (double)cellHeight;
@property(retain, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
- (void).cxx_destruct;
- (void)setLeftAccessorView:(id)arg1;
- (void)prepareForReuse;
- (void)showLoadingIndicator:(_Bool)arg1;
- (id)titleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
