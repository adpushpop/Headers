//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, NSString, UIViewController;
@protocol TBExtBuyBuilderDelegate;

@protocol TBExtBuyViewInterceptProtocol <NSObject>
- (void)showToastWithMessage:(NSString *)arg1 viewController:(UIViewController *)arg2;
- (UIViewController<TBExtBuyBuilderDelegate> *)subPageController;
- (void)pushViewController:(UIViewController *)arg1 fromViewController:(UIViewController *)arg2;

@optional
- (NSMutableDictionary *)hackEvent:(NSMutableDictionary *)arg1 viewController:(UIViewController *)arg2;
@end

