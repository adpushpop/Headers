//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CPTGraphHostingView, NSMutableArray, NSString;

@interface BEEChartView : UIView
{
    CPTGraphHostingView *defaultLayerHostingView;
    NSMutableArray *graphs;
    NSString *section;
    NSString *title;
    struct UIImage *cachedImage;
}

- (void).cxx_destruct;
- (void)reloadData;
- (void)renderInLayer:(id)arg1 withTheme:(id)arg2 animated:(_Bool)arg3;
- (void)renderInView:(id)arg1 withTheme:(id)arg2 animated:(_Bool)arg3;
- (void)applyTheme:(id)arg1 toGraph:(id)arg2 withDefault:(id)arg3;
- (id)image;
- (void)setPaddingDefaultsForGraph:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)setTitleDefaultsForGraph:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)dealloc;
- (void)killGraph;
- (void)addGraph:(id)arg1;
- (void)addGraph:(id)arg1 toHostingView:(id)arg2;
- (id)init;

@end

