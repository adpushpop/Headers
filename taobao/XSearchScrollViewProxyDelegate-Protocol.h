//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol XSearchScrollViewProxyDelegate <NSObject>

@optional
- (void)contract:(UIScrollView *)arg1;
- (void)expand:(UIScrollView *)arg1;
- (void)scrollViewProxyWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewProxyWillBeginDecelerating:(UIScrollView *)arg1;
- (void)scrollViewProxyDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewProxyDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewProxyDidScroll:(UIScrollView *)arg1;
@end

