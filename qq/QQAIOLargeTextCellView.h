//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOTextCellView.h>

@interface QQAIOLargeTextCellView : QQAIOTextCellView
{
}

- (void)menuActionGroupTopic:(id)arg1;
- (void)menuActionRecall:(id)arg1;
- (void)menuActionCancelSendAllImage:(id)arg1;
- (void)menuActionSaveImage:(id)arg1;
- (id)getMenuItems;
- (_Bool)shouldShowMenuItemAddToFace;
- (id)larMsgModel;
- (id)currentRichModel;
- (id)menuCopyStr;
- (_Bool)shouldDisplayMsgSendFail;
- (_Bool)shouldDisplayMsgSendLoading;
- (_Bool)isLastSubCell;
- (_Bool)supportReplay;
- (_Bool)containsText;
- (_Bool)containsImg;
- (void)loadBubbleImageNor:(int)arg1 imageSel:(int)arg2;
- (void)drawBubbleImageOnMainThread:(id)arg1;
- (void)reciveDividedImageNotification:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end

