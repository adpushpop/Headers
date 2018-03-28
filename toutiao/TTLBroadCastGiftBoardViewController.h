//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TTLBroadCastGiftBoardManager, TTLGetRoomRankListService, TTLRoomModel, UIButton, UIScrollView, UIView;

@interface TTLBroadCastGiftBoardViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _statusBarHidden;
    _Bool _navigationHidden;
    CDUnknownBlockType _closeCallback;
    TTLGetRoomRankListService *_roomService;
    UIScrollView *_scrollView;
    UIView *_navigationView;
    UIButton *_roomFans;
    UIButton *_anchorFans;
    UIView *_scrollIndicator;
    TTLBroadCastGiftBoardManager *_roomBoardManager;
    TTLBroadCastGiftBoardManager *_anchorBoardManager;
    TTLRoomModel *_room;
    unsigned long long _refer;
}

@property(nonatomic) unsigned long long refer; // @synthesize refer=_refer;
@property(nonatomic) _Bool navigationHidden; // @synthesize navigationHidden=_navigationHidden;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) TTLRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) TTLBroadCastGiftBoardManager *anchorBoardManager; // @synthesize anchorBoardManager=_anchorBoardManager;
@property(retain, nonatomic) TTLBroadCastGiftBoardManager *roomBoardManager; // @synthesize roomBoardManager=_roomBoardManager;
@property(retain, nonatomic) UIView *scrollIndicator; // @synthesize scrollIndicator=_scrollIndicator;
@property(retain, nonatomic) UIButton *anchorFans; // @synthesize anchorFans=_anchorFans;
@property(retain, nonatomic) UIButton *roomFans; // @synthesize roomFans=_roomFans;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) TTLGetRoomRankListService *roomService; // @synthesize roomService=_roomService;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)viewSafeAreaInsetsDidChange;
- (void)addBlankView:(id)arg1;
- (void)back:(id)arg1;
- (void)switchTable:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupTableView;
- (void)setupScrollView;
- (void)setupNavigation;
- (void)setupUI;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRoom:(id)arg1 refer:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
