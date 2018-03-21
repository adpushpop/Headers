//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEDebugBaseModel, UILabel, UISwitch;

@interface AWEDebugTableViewCell : UITableViewCell
{
    UISwitch *_aSwitch;
    UILabel *_cellLabel;
    AWEDebugBaseModel *_baseModel;
}

+ (id)identifier;
@property(retain, nonatomic) AWEDebugBaseModel *baseModel; // @synthesize baseModel=_baseModel;
@property(retain, nonatomic) UILabel *cellLabel; // @synthesize cellLabel=_cellLabel;
@property(retain, nonatomic) UISwitch *aSwitch; // @synthesize aSwitch=_aSwitch;
- (void).cxx_destruct;
- (void)switchAction:(id)arg1;
- (void)configWithSwitch:(_Bool)arg1;
- (void)configWithString:(id)arg1;
- (void)configWithNormal;
- (void)configWithBaseModel:(id)arg1;
- (void)_setUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
