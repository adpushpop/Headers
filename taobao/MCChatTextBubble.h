//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCChatBubble.h"

#import "MCChatBubbleBackgroundViewDelegate-Protocol.h"
#import "TBTextLabelDelegate-Protocol.h"

@class MCChatBubbleBackgroundView, NSString, TBTextLabel;

@interface MCChatTextBubble : MCChatBubble <TBTextLabelDelegate, MCChatBubbleBackgroundViewDelegate>
{
    _Bool _needProcessLinkTap;
    MCChatBubbleBackgroundView *_innerBubbleImageView;
    TBTextLabel *_textLabel;
}

+ (struct CGSize)innerBubbleSizeForMessage:(id)arg1;
+ (struct CGSize)bubbleSizeForCellObject:(id)arg1 withContainer:(struct CGSize)arg2;
@property(nonatomic) _Bool needProcessLinkTap; // @synthesize needProcessLinkTap=_needProcessLinkTap;
@property(retain, nonatomic) TBTextLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MCChatBubbleBackgroundView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
- (void).cxx_destruct;
- (void)chatBubbleBackgroundViewLongPress:(id)arg1;
- (void)chatBubbleBackgroundViewTapped:(id)arg1;
- (void)textLabel:(id)arg1 didTapWithLink:(id)arg2 range:(struct _NSRange)arg3;
- (void)recycle;
- (void)updateBubbleWithCellObject:(id)arg1 bubbleHandler:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
