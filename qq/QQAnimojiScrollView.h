//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol QQAnimojiScrollViewDelegate;

@interface QQAnimojiScrollView : UIView <UIGestureRecognizerDelegate>
{
    int _currentIndex;
    int _startLongPressIndex;
    NSMutableArray *_cellListArray;
    id <QQAnimojiScrollViewDelegate> _delegate;
    struct CGSize _contentSize;
    struct CGPoint _contentOffset;
    struct CGPoint _startLocation;
    struct CGPoint _startOffset;
}

@property(nonatomic) struct CGPoint startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) struct CGPoint startLocation; // @synthesize startLocation=_startLocation;
@property(nonatomic) __weak id <QQAnimojiScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *cellListArray; // @synthesize cellListArray=_cellListArray;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void).cxx_destruct;
- (void)updateScrollViewOffset:(float)arg1;
- (void)startScroll;
- (void)setCurrentIndex;
- (float)getCurrentGap:(float)arg1 index:(int)arg2;
- (struct CGRect)getStopViewRect:(int)arg1 bounds:(struct CGRect)arg2;
- (struct CGRect)getCurrentViewRect:(_Bool)arg1 index:(int)arg2 zoom:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5;
- (void)updateSubViewLocal:(float)arg1 animate:(_Bool)arg2;
- (float)getScrollCurrentIndex:(float)arg1 isInt:(_Bool)arg2;
- (float)getScrollCurrentIndexFloat:(float)arg1;
- (int)getScrollCurrentIndexInt:(float)arg1;
- (void)longPressGestureAction:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)panGestureAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

