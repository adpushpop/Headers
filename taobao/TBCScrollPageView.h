//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIScrollView;

@interface TBCScrollPageView : UIView <UIScrollViewDelegate>
{
    UIView *_wholeHeaderView;
    UIView *_headerView;
    UIView *_suspensionView;
    NSArray *_pageViews;
    float wholeHeaderViewHeight;
    float currentPageOffsetY;
    float wholeHeaderViewInSelfY;
    int currentPageIndex;
    struct CGRect suspensionViewOriginRect;
    UIView *suspensionViewOriginSuperView;
    NSMutableArray *delegateArr;
    NSMutableDictionary *originContentInsetDic;
    _Bool isSuspension;
    _Bool _scrollEnable;
    CDUnknownBlockType _didScrollToPageViewBlock;
    UIScrollView *_myScrollView;
}

@property(retain, nonatomic) UIScrollView *myScrollView; // @synthesize myScrollView=_myScrollView;
@property(copy, nonatomic) CDUnknownBlockType didScrollToPageViewBlock; // @synthesize didScrollToPageViewBlock=_didScrollToPageViewBlock;
@property(nonatomic) _Bool scrollEnable; // @synthesize scrollEnable=_scrollEnable;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateAroundPageViewOffset;
- (void)handleMessageForwardForPageView:(id)arg1;
- (void)selectPageIndex:(long long)arg1 animation:(_Bool)arg2;
- (void)refreshHeaderLayout;
- (void)setupHeaderView:(id)arg1 suspensionView:(id)arg2 pageViews:(id)arg3;
- (void)setupScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

