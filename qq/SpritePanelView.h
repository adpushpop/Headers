//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>
#import <QQMainProject/SglMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/SpriteDataManagerDelegate-Protocol.h>
#import <QQMainProject/SpritePanelGameViewDelagate-Protocol.h>
#import <QQMainProject/SpritePanelKeyboardViewDelegate-Protocol.h>
#import <QQMainProject/SpritePanelScrollViewDelegate-Protocol.h>
#import <QQMainProject/SpritePanelTabBarDelegate-Protocol.h>
#import <QQMainProject/SpriteSlaveHeaderViewDelegate-Protocol.h>

@class NSMutableArray, NSNumber, NSString, NSTimer, QQPageControl, QUIAlertView, SpriteActionModle, SpriteItemControl, SpriteOpenTipView, SpritePanelModel, SpritePanelNoDataTipView, SpritePanelScrollView, SpritePanelTabBar, SpriteSlaveHeaderView, UIActivityIndicatorView, UIImageView;
@protocol SpritePanelDelegate;

@interface SpritePanelView : UIView <SglMemSelBusiProcessDelegate, SpritePanelKeyboardViewDelegate, SpritePanelGameViewDelagate, SpriteSlaveHeaderViewDelegate, QUIAlertViewDelegate, SpriteDataManagerDelegate, SpritePanelScrollViewDelegate, SpritePanelTabBarDelegate>
{
    SpritePanelScrollView *_scrollView;
    SpritePanelTabBar *_tabBar;
    QQPageControl *_pageIndicator;
    SpriteSlaveHeaderView *_slaveHeaderView;
    unsigned long long _slaveNum;
    _Bool _isCaptured;
    NSString *_slaveListString;
    struct SpritePanelPagePointer _leftPointer;
    struct SpritePanelPagePointer _middlePointer;
    struct SpritePanelPagePointer _rightPointer;
    struct SpritePanelPagePointer _currentPointer;
    SpriteOpenTipView *_openTipView;
    NSMutableArray *_loadingActions;
    SpritePanelNoDataTipView *_noDataTipView;
    UIActivityIndicatorView *_loadingView;
    id <SpritePanelDelegate> _delegate;
    _Bool _isGroup;
    int _failJsonType;
    NSNumber *_targetPkgID;
    NSNumber *_targetActionID;
    NSNumber *_targetGameID;
    _Bool _needRelocate;
    NSMutableArray *_guidePkgIdArray;
    UIView *_newActionGuideView;
    UIImageView *_actionImageView;
    SpriteActionModle *_newActionModel;
    NSTimer *_showGuideViewTimer;
    _Bool _isNewActionGuideViewTriggerJumpToWeb;
    _Bool _hasShowGuideView;
    QUIAlertView *tipAlert;
    SpriteItemControl *_curHitTouchControl;
    SpritePanelModel *_panelModel;
    UIView *_shopTipsView;
}

+ (_Bool)isActionTab:(unsigned long long)arg1;
@property(nonatomic) __weak UIView *shopTipsView; // @synthesize shopTipsView=_shopTipsView;
@property(retain, nonatomic) SpritePanelModel *panelModel; // @synthesize panelModel=_panelModel;
@property(nonatomic) _Bool hasShowGuideView; // @synthesize hasShowGuideView=_hasShowGuideView;
@property(retain, nonatomic) SpriteItemControl *curHitTouchControl; // @synthesize curHitTouchControl=_curHitTouchControl;
@property(retain, nonatomic) QUIAlertView *tipAlert; // @synthesize tipAlert;
@property(nonatomic) id <SpritePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locatePkgID:(id)arg1 actionID:(id)arg2 gameId:(id)arg3;
- (void)uploadDoubleSend:(id)arg1 content:(id)arg2 isGroup:(_Bool)arg3 menuin:(id)arg4;
- (void)dataReportForClickingJoinActivityAlertOK:(id)arg1;
- (void)dataReportForClickingActivityActionItem:(id)arg1;
- (id)getEnterType;
- (void)showTipsImg:(id)arg1 atRootView:(id)arg2 startY:(int)arg3 success:(_Bool)arg4;
- (void)spriteApolloNotification:(id)arg1;
- (void)entryJoninActionWithUrl:(id)arg1;
- (void)entryOpenVip:(id)arg1;
- (void)entryViewDetail:(id)arg1;
- (void)goUrl:(id)arg1;
- (void)goActivity;
- (void)goShop:(id)arg1 params:(id)arg2;
- (void)pushShopVCWithParam:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSpriteTipRightTitle:(id)arg1 msg:(id)arg2 url:(id)arg3 selecter:(id)arg4 model:(id)arg5 title:(id)arg6;
- (void)insertInLocalFileOfGoldCollectionActionModel:(int)arg1;
- (void)buyActionByGold:(id)arg1;
- (void)buyMoreGold:(id)arg1;
- (void)handleNoAuthWithActionModel:(id)arg1 itemControl:(id)arg2;
- (void)onBusiProcessDidSelectedSglMem:(id)arg1 currViewContr:(id)arg2;
- (void)didAtSelectedMember:(id)arg1;
- (void)didFinishLoadShowIcon:(id)arg1 action:(id)arg2 isSuccess:(_Bool)arg3;
- (void)didFinishLoadPreview:(id)arg1 action:(id)arg2 isSuccess:(_Bool)arg3;
- (void)didFinishLoadPlayRes:(id)arg1 action:(id)arg2 isSuccess:(_Bool)arg3;
- (void)didUpdateGameList:(id)arg1;
- (void)didFinishLoadFunPreviewRes:(id)arg1 path:(id)arg2 isSuccess:(_Bool)arg3;
- (void)didFinishFetchPermission:(_Bool)arg1 err:(id)arg2 url:(id)arg3 action:(id)arg4;
- (void)didFinishOpenSwitch:(_Bool)arg1 err:(id)arg2;
- (void)didFinishLoadPanelModel:(id)arg1 isSuccess:(_Bool)arg2 jsonType:(int)arg3;
- (void)didUpdateFavoriteActionList:(id)arg1;
- (void)updateTabWithPkgId:(int)arg1;
- (void)openSprite;
- (_Bool)isSupportRightDragToGoBack;
- (void)freshActionJsonEvent:(id)arg1;
- (id)findAtSomeoneInText:(id)arg1;
- (id)getUpLoadEnterStrWithItemModel:(id)arg1 withInputContent:(id)arg2;
- (id)sendWithModel:(id)arg1 menuin:(id)arg2 memName:(id)arg3;
- (void)sendMessage:(id)arg1;
- (id)getGameItemModels;
- (void)onGamePanelBtnClicked:(id)arg1 type:(int)arg2;
- (void)onGoBackGame:(id)arg1;
- (void)onStartGameClicked:(id)arg1 type:(unsigned long long)arg2;
- (void)spritePanelKeyboardView:(id)arg1 didClickSpriteItemControl:(id)arg2;
- (void)hideLoadingActionJsonStatus;
- (void)showFreshLoadingActionJson;
- (void)hideNoDataTipView;
- (void)showNoDataTipView;
- (void)setSpriteStatus:(int)arg1;
- (void)showTipOpenSprintView:(int)arg1;
- (void)markSelectActionPage:(int)arg1;
- (void)markSelectTab:(int)arg1;
- (id)pkdIdArrayOfShowingRedDot;
- (_Bool)isCanShowIconWith:(id)arg1;
- (unsigned long long)currentGameId;
- (_Bool)hasTinyGame;
- (id)GetBaseChatModel;
- (void)didTapItem:(id)arg1;
- (void)willBeginDragging:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)didEndScrolling:(id)arg1;
- (id)leftView:(id)arg1;
- (id)rightView:(id)arg1;
- (void)spritePanelTabBar:(id)arg1 needsShopTips:(id)arg2;
- (void)onSlavePersonClicked;
- (id)panelGameView;
- (void)updateNoSlaveTipViewIsShow:(_Bool)arg1;
- (void)updateCanCapSlaveTipViewIsShow:(_Bool)arg1;
- (void)updateHeaderViewWithSlaveNumber:(unsigned long long)arg1 isCaptured:(_Bool)arg2;
- (id)keyboardViewWithItemModels:(id)arg1 packageType:(int)arg2;
- (void)updatePageControl;
- (void)updateSlaveHeaderViewWhileScroll:(id)arg1;
- (void)updateSlaveHeaderView;
- (id)slaveHeaderView;
- (void)onShopMainControllerClose:(id)arg1;
- (void)checkSlaveNumber;
- (void)checkNeedShowSlaveActionTips;
- (id)showTips:(id)arg1 frame:(struct CGRect)arg2 dismissTime:(double)arg3;
- (void)showShopTips:(id)arg1;
- (id)getSendButtonTitle:(id)arg1;
- (id)getExtraWording:(id)arg1;
- (void)sendButtonOnClicked:(id)arg1;
- (void)previewButtonOnClicked:(id)arg1;
- (void)guideCloseButtonOnClicked:(id)arg1;
- (id)getCurrentPageNewestActionModel:(unsigned long long)arg1;
- (void)removeGuidePkgId:(int)arg1;
- (void)showIconUpdate:(id)arg1;
- (void)showNewActionGuideView:(id)arg1;
- (_Bool)needShowNewActionGuideView:(int)arg1;
- (void)updateGuidePkgIdArray:(id)arg1;
- (void)checkNeedShowActionGuideView:(int)arg1;
- (void)configScrollViewDataWithPackageId:(int)arg1 pageIndex:(int)arg2 actionIndexAtCurrentPage:(int)arg3;
- (void)updateKeyBoard;
- (int)getLastSelectActionPage;
- (int)getLastSelectTab;
- (void)reloadWithPanelModel:(id)arg1;
- (void)configUI;
- (void)reportPanelEntryClick;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewController:(id)arg2 spriteState:(int)arg3;
- (void)removeNewActionGuideViewAndData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
