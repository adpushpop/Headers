//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, YWConversation, YWMessageBody;

@interface YWMessageLifeContext : NSObject
{
    NSNumber *_needContinue;
    YWMessageBody *_messageBody;
    NSDictionary *_controlParameters;
    YWConversation *_conversation;
}

@property(retain, nonatomic) YWConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSDictionary *controlParameters; // @synthesize controlParameters=_controlParameters;
@property(retain, nonatomic) YWMessageBody *messageBody; // @synthesize messageBody=_messageBody;
@property(copy, nonatomic) NSNumber *needContinue; // @synthesize needContinue=_needContinue;
- (void).cxx_destruct;
- (void)mergeValidContentFromContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
