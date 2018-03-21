//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OPBaseViewController.h"

#import "O2OPSchemeProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class APExceptionView, NSString, O2OPGoodsListModel, UIScrollView, UISegmentedControl, UIView;

@interface O2OPGoodsViewController : O2OPBaseViewController <UIScrollViewDelegate, O2OPSchemeProtocol>
{
    NSString *_selectedType;
    O2OPGoodsListModel *_listModel;
    UIView *_tabbedControl;
    UISegmentedControl *_segmentedControl;
    UIView *_indicator;
    UIScrollView *_scrollView;
    APExceptionView *_exceptionView;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *tabbedControl; // @synthesize tabbedControl=_tabbedControl;
@property(retain, nonatomic) O2OPGoodsListModel *listModel; // @synthesize listModel=_listModel;
@property(copy, nonatomic) NSString *selectedType; // @synthesize selectedType=_selectedType;
- (void).cxx_destruct;
- (id)pageParams;
- (id)pageSpm;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showExceptionView:(id)arg1;
- (void)showEmpty:(id)arg1;
- (_Bool)canShowModel:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)tabDidChanged:(id)arg1;
- (void)addListControllerToView:(id)arg1 frame:(struct CGRect)arg2 goodsList:(id)arg3;
- (void)updateContent;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
