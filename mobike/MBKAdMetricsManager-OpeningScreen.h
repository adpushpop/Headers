//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKAdMetricsManager.h"

@interface MBKAdMetricsManager (OpeningScreen)
+ (void)load;
- (void)adImageViewTap:(id)arg1;
- (void)removeAdView;
- (void)skipButtonTap;
- (id)getAdImageView;
- (void)setupAdViewWithWindow:(id)arg1 bgdImageView:(id)arg2;
- (id)setLaunchImage:(id)arg1;
- (id)getAdMetricsOpeningScreenModel;
- (void)clearAdMetricsOpeningScreen;
- (void)saveAdMetricsOpeningScreen:(id)arg1;
- (void)fetchOpeningScreenAdDataAndShow:(_Bool)arg1;
- (void)downloadAdImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showOpeningScreen;
@end

