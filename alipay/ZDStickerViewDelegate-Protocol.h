//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, ZDStickerView;

@protocol ZDStickerViewDelegate <NSObject>

@optional
- (void)stickerViewDelete:(ZDStickerView *)arg1;
- (void)stickerViewDidClose:(ZDStickerView *)arg1;
- (void)stickerViewDidTap:(ZDStickerView *)arg1 recognizer:(UIGestureRecognizer *)arg2;
- (void)stickerViewDidTap:(ZDStickerView *)arg1;
- (void)stickerViewDidBeginEditing:(ZDStickerView *)arg1;
@end
