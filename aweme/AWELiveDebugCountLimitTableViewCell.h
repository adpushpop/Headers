//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWELiveDebugBaseTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UISwitch, UITextField;

@interface AWELiveDebugCountLimitTableViewCell : AWELiveDebugBaseTableViewCell <UITextFieldDelegate>
{
    UILabel *_nameLabel;
    UISwitch *_aSwitch;
    UILabel *_tipLabel;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UISwitch *aSwitch; // @synthesize aSwitch=_aSwitch;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)switchChanged:(id)arg1;
- (void)configWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

