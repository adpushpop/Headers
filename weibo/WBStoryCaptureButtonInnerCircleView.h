//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CAShapeLayer, NSArray, NSIndexPath, NSString, UICollectionView;

@interface WBStoryCaptureButtonInnerCircleView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    CAShapeLayer *_roundLayer;
    UICollectionView *_collectionView;
    NSArray *_cameraModes;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSArray *cameraModes; // @synthesize cameraModes=_cameraModes;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CAShapeLayer *roundLayer; // @synthesize roundLayer=_roundLayer;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)beginProcessingAnimation;
- (void)beginTouchEndAnimation;
- (void)beginTouchDownAnimation;
- (void)resetUIElements;
- (void)updateCellState:(_Bool)arg1;
- (void)updateButtonState:(unsigned long long)arg1;
- (void)updateHighlightedState:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

