//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol QQStoryFeedRecommendFeedbackViewDelegate;

@interface QQStoryFeedRecommendFeedbackView : UIView
{
    UILabel *_wordingLabel;
    UIButton *_feedbackButton;
    id <QQStoryFeedRecommendFeedbackViewDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) __weak id <QQStoryFeedRecommendFeedbackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
- (void).cxx_destruct;
- (void)feedbackButtonTouchUpInside:(id)arg1;
- (void)setupFeedbackButton;
- (void)setupWordingLabel;
- (void)setup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
