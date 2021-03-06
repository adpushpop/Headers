//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "FRConcernHomepageChildViewControllerProtocol-Protocol.h"
#import "FRPageStayManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"

@class FRConcernTabStructModel, FRMovieEntity, FRMovieReviewRatingHeaderView, NSDate, NSDictionary, NSMutableArray, NSString, SSThemedButton, SSThemedTableView, UIScrollView;
@protocol FRConcernHomepageViewControllerProtocol;

@interface FRConcernHomepageMovieReviewTabViewController : SSViewControllerBase <FRPageStayManagerDelegate, UITableViewDataSource, UITableViewDelegate, UIViewControllerErrorHandler, FRConcernHomepageChildViewControllerProtocol>
{
    _Bool _isDataValid;
    _Bool _hasMoreSmartComments;
    _Bool _isSmartCommentsLoading;
    _Bool _isViewAppear;
    _Bool _isShowing;
    _Bool _isFirstAppearAndShowing;
    id <FRConcernHomepageViewControllerProtocol> _concernHomepageViewController;
    NSString *_concernID;
    FRConcernTabStructModel *_concernTabStructModel;
    long long _index;
    NSDictionary *_extraTracks;
    NSString *_apiParameters;
    FRMovieEntity *_movieEntity;
    SSThemedTableView *_tableView;
    NSMutableArray *_smartComments;
    NSMutableArray *_longComments;
    FRMovieReviewRatingHeaderView *_ratingHeaderView;
    SSThemedButton *_smartCommentloadMoreButton;
    long long _smartCommentsMaxCursor;
    long long _longCommentsMaxCursor;
    long long _smartCommentsMinCursor;
    long long _longCommentsMinCursor;
    NSDate *_lastRefreshDate;
}

@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(nonatomic) _Bool isFirstAppearAndShowing; // @synthesize isFirstAppearAndShowing=_isFirstAppearAndShowing;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(nonatomic) _Bool isSmartCommentsLoading; // @synthesize isSmartCommentsLoading=_isSmartCommentsLoading;
@property(nonatomic) long long longCommentsMinCursor; // @synthesize longCommentsMinCursor=_longCommentsMinCursor;
@property(nonatomic) long long smartCommentsMinCursor; // @synthesize smartCommentsMinCursor=_smartCommentsMinCursor;
@property(nonatomic) long long longCommentsMaxCursor; // @synthesize longCommentsMaxCursor=_longCommentsMaxCursor;
@property(nonatomic) long long smartCommentsMaxCursor; // @synthesize smartCommentsMaxCursor=_smartCommentsMaxCursor;
@property(nonatomic) _Bool hasMoreSmartComments; // @synthesize hasMoreSmartComments=_hasMoreSmartComments;
@property(retain, nonatomic) SSThemedButton *smartCommentloadMoreButton; // @synthesize smartCommentloadMoreButton=_smartCommentloadMoreButton;
@property(retain, nonatomic) FRMovieReviewRatingHeaderView *ratingHeaderView; // @synthesize ratingHeaderView=_ratingHeaderView;
@property(retain, nonatomic) NSMutableArray *longComments; // @synthesize longComments=_longComments;
@property(retain, nonatomic) NSMutableArray *smartComments; // @synthesize smartComments=_smartComments;
@property(nonatomic) _Bool isDataValid; // @synthesize isDataValid=_isDataValid;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FRMovieEntity *movieEntity; // @synthesize movieEntity=_movieEntity;
@property(copy, nonatomic) NSString *apiParameters; // @synthesize apiParameters=_apiParameters;
@property(copy, nonatomic) NSDictionary *extraTracks; // @synthesize extraTracks=_extraTracks;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) FRConcernTabStructModel *concernTabStructModel; // @synthesize concernTabStructModel=_concernTabStructModel;
@property(copy, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(nonatomic) __weak id <FRConcernHomepageViewControllerProtocol> concernHomepageViewController; // @synthesize concernHomepageViewController=_concernHomepageViewController;
- (void).cxx_destruct;
- (id)convertOriginalDataToExploreOrderedData:(id)arg1;
- (void)stopAnimating:(id)arg1;
- (void)startAnimating:(id)arg1;
- (void)pageStayRecorderWithTimeInterval:(long long)arg1 pageDisappearType:(unsigned long long)arg2;
- (void)refreshWithUserClick:(_Bool)arg1;
- (void)childViewControllerDidDisappear;
- (void)childViewControllerDidAppear;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 extraDict:(id)arg3 containExtra:(_Bool)arg4;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 containExtra:(_Bool)arg3;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)deleteItemWithCommentRepostID:(long long)arg1;
- (void)deleteCommentRepostNotification:(id)arg1;
- (void)deleteItemWithTheadID:(long long)arg1;
- (void)deleteThreadNotification:(id)arg1;
- (void)setNotInterestToOrderedData:(id)arg1;
- (void)removeItemFromNotification:(id)arg1;
- (void)receiveNotInterestNotification:(id)arg1;
- (void)removeNotifications;
- (void)registerNotifications;
- (void)loadMoreLongCommets:(id)arg1;
- (void)loadMoreSmartComments:(id)arg1;
- (void)updateLoadMoreButtonIfNeed:(id)arg1;
- (void)updateHeaderViewWithResponseModel:(id)arg1;
- (void)setDisableButton:(id)arg1 isContentEmpty:(_Bool)arg2;
- (void)setLoadingButton:(id)arg1;
- (void)setNormalButton:(id)arg1;
- (id)tableViewHeaderView;
- (void)setupTableview;
- (void)sessionExpiredAction;
- (void)emptyViewBtnAction;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)setupOriginalTableView;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)setIsViewAppear:(_Bool)arg1 andIsShowing:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConcernID:(id)arg1 concernTabStructModel:(id)arg2 threadListStructModel:(id)arg3 atIndex:(long long)arg4 extraTracks:(id)arg5 apiParameters:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

