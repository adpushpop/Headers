//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAsyncDrawingView.h"

@class WBUIViewItem, WBUIViewRootItem;

@interface WBUIItemContainerView : WBAsyncDrawingView
{
    WBUIViewRootItem *_rootItem;
    WBUIViewItem *_respondingItem;
}

@property(nonatomic) __weak WBUIViewItem *respondingItem; // @synthesize respondingItem=_respondingItem;
@property(retain, nonatomic) WBUIViewRootItem *rootItem; // @synthesize rootItem=_rootItem;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)respondingItemImplementsTouchesBegan:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)viewItemHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawingDidFinishAsynchronously:(_Bool)arg1 success:(_Bool)arg2;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3;
- (_Bool)renderViewItemsIntoContext:(struct CGContext *)arg1 drawingCount:(long long)arg2;
- (_Bool)renderViewItemsIntoContext:(struct CGContext *)arg1;
- (void)drawingWillStartAsynchronously:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

