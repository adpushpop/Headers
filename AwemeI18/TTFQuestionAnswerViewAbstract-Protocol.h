//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTFPlayer, TTFQuestionAnswerUnit;
@protocol TTFQAViewDelegateAbstract;

@protocol TTFQuestionAnswerViewAbstract <NSObject>
@property(readonly, nonatomic) _Bool isQAViewShow;
@property(readonly, nonatomic) TTFQuestionAnswerUnit *questionAnswerUnit;
@property(nonatomic) __weak id <TTFQAViewDelegateAbstract> delegate;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)showAnswerWithQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
- (void)showQuestionWithQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
- (void)setPlayer:(TTFPlayer *)arg1;
@end

