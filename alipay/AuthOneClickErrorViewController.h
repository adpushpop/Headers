//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AuthBaseController.h"

@class ALPAuthButton, NSDictionary, UILabel;

@interface AuthOneClickErrorViewController : AuthBaseController
{
    UILabel *_message;
    ALPAuthButton *_button;
    NSDictionary *_bizData;
}

@property(retain, nonatomic) NSDictionary *bizData; // @synthesize bizData=_bizData;
@property(retain, nonatomic) ALPAuthButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)reScan;
- (id)initWithBizData:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UILabel *title; // @dynamic title;

@end
