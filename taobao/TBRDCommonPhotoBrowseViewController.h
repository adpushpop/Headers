//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRDBaseViewController.h"

#import "TBCPhotoBrowseViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, TBCPhotoBrowseView, UIActionSheet, UIImageView, UIView;

@interface TBRDCommonPhotoBrowseViewController : TBRDBaseViewController <TBCPhotoBrowseViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    float defaultOrigin;
    long long barStyle;
    UIImageView *_ivBg;
    TBCPhotoBrowseView *_browseView;
    NSArray *_list;
    id _jsContext;
    long long _startIndex;
    NSString *_globalHeaderUrl;
    UIView *_globalHeaderView;
    NSString *_globalFooterUrl;
    UIView *_globalFooterView;
    NSArray *_actionList;
    NSMutableDictionary *_actionDic;
    NSDictionary *_currentActionObj;
    UIActionSheet *_actionSheetView;
    long long _index_fresh;
}

@property(nonatomic) long long index_fresh; // @synthesize index_fresh=_index_fresh;
@property(retain, nonatomic) UIActionSheet *actionSheetView; // @synthesize actionSheetView=_actionSheetView;
@property(retain, nonatomic) NSDictionary *currentActionObj; // @synthesize currentActionObj=_currentActionObj;
@property(retain, nonatomic) NSMutableDictionary *actionDic; // @synthesize actionDic=_actionDic;
@property(retain, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(retain, nonatomic) UIView *globalFooterView; // @synthesize globalFooterView=_globalFooterView;
@property(copy, nonatomic) NSString *globalFooterUrl; // @synthesize globalFooterUrl=_globalFooterUrl;
@property(retain, nonatomic) UIView *globalHeaderView; // @synthesize globalHeaderView=_globalHeaderView;
@property(copy, nonatomic) NSString *globalHeaderUrl; // @synthesize globalHeaderUrl=_globalHeaderUrl;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) id jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) TBCPhotoBrowseView *browseView; // @synthesize browseView=_browseView;
@property(retain, nonatomic) UIImageView *ivBg; // @synthesize ivBg=_ivBg;
- (void).cxx_destruct;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)excuteActionCallback:(id)arg1;
- (void)photoBrowseView:(id)arg1 didScrollToHalfOfIndex:(long long)arg2;
- (void)photoBrowseView:(id)arg1 tapIndex:(long long)arg2;
- (void)hiddenSelf;
- (void)show;
- (void)loadWeexViewWithUrl:(id)arg1 atIndex:(long long)arg2 renderFinish:(CDUnknownBlockType)arg3;
- (void)setupFooterViewAtIndex:(long long)arg1;
- (void)setupHeaderViewAtIndex:(long long)arg1;
- (void)setupDataSource;
- (void)setupPhotoBrowseView;
- (void)deleteAction:(id)arg1;
- (id)dataOfListAtIndex:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
