//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEECellScrollController.h"

@class APButton, BEESelectBox;

@interface BEEUtilScrollController : BEECellScrollController
{
    APButton *_doneButton;
    BEESelectBox *_selectBox;
}

@property(readonly, nonatomic) BEESelectBox *selectBox; // @synthesize selectBox=_selectBox;
@property(readonly, nonatomic) APButton *doneButton; // @synthesize doneButton=_doneButton;
- (void).cxx_destruct;
- (void)selectBoxDidEnd:(id)arg1;
- (void)hideSelectBox;
- (id)addSwitchCellWithTitle:(id)arg1 changed:(SEL)arg2;
- (id)addHeaderCellWithTitle:(id)arg1 value:(id)arg2 height:(double)arg3;
- (id)numericKeyboardDoneButton;
- (id)numericKeyboardDotButton;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)addAmountCellWithTitle:(id)arg1 text:(id)arg2 placeholder:(id)arg3 changed:(SEL)arg4;
- (void)monitorPoint:(id)arg1;
- (id)addTextCellWithTitle:(id)arg1 text:(id)arg2 placeholder:(id)arg3 changed:(SEL)arg4;
- (id)valueViewForMultirowItem:(id)arg1 frame:(struct CGRect)arg2 font:(id)arg3 color:(id)arg4;
- (id)addLabelWithText:(id)arg1 icon:(id)arg2;
- (id)addLabelWithText:(id)arg1 color:(id)arg2 font:(id)arg3;
- (id)addLabelWithText:(id)arg1 color:(id)arg2 font:(id)arg3 left:(double)arg4;
- (id)addAgreementBoxWithLabel:(id)arg1 link:(id)arg2 action:(SEL)arg3 changed:(SEL)arg4;
- (id)addAgreementButtonWithLabel:(id)arg1 link:(id)arg2 action:(SEL)arg3;
- (void)doneButtonClicked:(id)arg1;
- (id)addDoneButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 type:(long long)arg2 action:(SEL)arg3;

@end

