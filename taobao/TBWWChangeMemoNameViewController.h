//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIButton, UITextField;

@interface TBWWChangeMemoNameViewController : UIViewController <UITextFieldDelegate>
{
    NSString *_conversationId;
    NSString *_memoName;
    NSString *_shoppingGuideID;
    UITextField *_textFieldMemoName;
    UIButton *_buttonFinish;
}

@property(retain, nonatomic) UIButton *buttonFinish; // @synthesize buttonFinish=_buttonFinish;
@property(retain, nonatomic) UITextField *textFieldMemoName; // @synthesize textFieldMemoName=_textFieldMemoName;
@property(copy, nonatomic) NSString *shoppingGuideID; // @synthesize shoppingGuideID=_shoppingGuideID;
@property(copy, nonatomic) NSString *memoName; // @synthesize memoName=_memoName;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)buttonFinishClicked:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *stArgs;
- (void)backItemClicked:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithShoppingGuideID:(id)arg1 memoName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

