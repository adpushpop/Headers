//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSChartletBottomDetailView, KSChartletToolItem, KSPencilItem, KSVideoShapePrototype;

@protocol KSChartletBottomDetailViewDelegate <NSObject>
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didSelectEraserItem:(KSChartletToolItem *)arg2;
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didTapUndoItem:(KSChartletToolItem *)arg2;
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didChangePenSize:(double)arg2;
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didSelectPenItem:(KSPencilItem *)arg2;
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didSelectChartletItem:(KSVideoShapePrototype *)arg2;
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didSelectTextItem:(KSVideoShapePrototype *)arg2;
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didTapMoreTextItem:(KSChartletToolItem *)arg2;
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didTapCopyTextItem:(KSChartletToolItem *)arg2;
- (void)chartletBottomDetailView:(KSChartletBottomDetailView *)arg1 didSelectPlainTextItem:(KSChartletToolItem *)arg2;
@end
