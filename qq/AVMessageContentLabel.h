//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EmotionParseResult, NSString;
@protocol MessageTouchDelegate;

@interface AVMessageContentLabel : UIView
{
    NSString *_content;
    EmotionParseResult *_parseResult;
    UIView *_emotionView;
    _Bool _tracking;
    id <MessageTouchDelegate> _delegate;
}

@property(nonatomic) id <MessageTouchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)setParseResult:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

