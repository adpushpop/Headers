//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTBaseThemedViewController.h"

#import "TTHorizontalCategoryBarDelegate-Protocol.h"
#import "TTSwipePageViewControllerDelegate-Protocol.h"

@class ArticleFriend, NSArray, NSString, SSThemedButton, SSThemedView, TTAlphaThemedButton, TTHorizontalCategoryBar, TTSwipePageViewController;

@interface TTRelationshipViewController : TTBaseThemedViewController <TTSwipePageViewControllerDelegate, TTHorizontalCategoryBarDelegate>
{
    _Bool _reloadSelectedEnabled;
    unsigned long long _selectedIndex;
    NSArray *_titles;
    NSArray *_viewControllers;
    TTSwipePageViewController *_containerViewController;
    TTHorizontalCategoryBar *_navCategoryBar;
    SSThemedView *_navigationView;
    TTAlphaThemedButton *_backButton;
    SSThemedButton *_addFriendButton;
    ArticleFriend *_friendModel;
}

+ (void)load;
@property(retain, nonatomic) ArticleFriend *friendModel; // @synthesize friendModel=_friendModel;
@property(retain, nonatomic) SSThemedButton *addFriendButton; // @synthesize addFriendButton=_addFriendButton;
@property(retain, nonatomic) TTAlphaThemedButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) SSThemedView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) TTHorizontalCategoryBar *navCategoryBar; // @synthesize navCategoryBar=_navCategoryBar;
@property(retain, nonatomic) TTSwipePageViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) _Bool reloadSelectedEnabled; // @synthesize reloadSelectedEnabled=_reloadSelectedEnabled;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)refreshScrollToTopViewController;
- (void)didTapAddFriendButton:(id)arg1;
- (void)didTapBackButton:(id)arg1;
- (struct UIEdgeInsets)insetForSection;
- (struct UIOffset)offsetOfBadgeViewToTitleView;
- (struct CGSize)sizeForEachItem:(id)arg1;
- (void)pageViewControllerWillBeginDragging:(id)arg1;
- (void)pageViewController:(id)arg1 didPagingToIndex:(long long)arg2;
- (void)pageViewController:(id)arg1 willPagingToIndex:(long long)arg2;
- (void)pageViewController:(id)arg1 pagingFromIndex:(long long)arg2 toIndex:(long long)arg3 completePercent:(double)arg4;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
- (void)buildCategoriesIfNeeded;
- (void)setupContainerViewController;
- (void)setupNavigationView;
- (void)viewSafeAreaInsetsDidChange;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTitles:(id)arg1 classNames:(id)arg2 friendModel:(id)arg3;
- (id)initWithSelectedIndex:(unsigned long long)arg1 titles:(id)arg2 viewControllers:(id)arg3 friendModel:(id)arg4;
- (id)initWithTitles:(id)arg1 viewControllers:(id)arg2 friendModel:(id)arg3;
- (id)initWithTitles:(id)arg1 viewControllers:(id)arg2;
- (id)init;
- (id)initWithAppearType:(unsigned long long)arg1 currentUser:(id)arg2 titles:(id)arg3;
- (id)initWithAppearType:(unsigned long long)arg1 currentUser:(id)arg2;
- (id)initWithRouteParamObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
