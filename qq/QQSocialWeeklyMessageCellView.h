//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSMMessageBaseCellView.h>

@class NSString, QQSocialWeeklyMessageCellHeadView, QQSocialWeeklyMessageCellItemView, UIView;

@interface QQSocialWeeklyMessageCellView : QQSMMessageBaseCellView
{
    QQSocialWeeklyMessageCellHeadView *_headPannel;
    QQSocialWeeklyMessageCellItemView *_subtitlePannel;
    UIView *_separatorLine;
    NSString *_url;
    NSString *_uin;
    _Bool _longPressCallBack;
}

+ (int)getCellHeight:(id)arg1;
+ (id)createSubLabelWithFontSize:(double)arg1 bold:(_Bool)arg2 textColor:(id)arg3 text:(id)arg4 left:(double)arg5 right:(double)arg6;
+ (id)createLabelWithFontSize:(double)arg1 bold:(_Bool)arg2 textColor:(id)arg3 text:(id)arg4;
@property(nonatomic) _Bool longPressCallBack; // @synthesize longPressCallBack=_longPressCallBack;
- (void).cxx_destruct;
- (_Bool)didAction:(struct CGPoint)arg1;
- (_Bool)shouldHandleTouch:(struct CGPoint)arg1;
- (struct CGRect)getContentFrame;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGRect)GetPaoPaoBgRect;
- (void)updateBackgroundImage;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)findElementWithName:(id)arg1 forElement:(id)arg2;

@end

