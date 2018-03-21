//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSMediaPreviewFilterSwitchableControl, NSString;

@protocol KSMediaPreviewFilterSwitchableControlDelegate <NSObject>
- (NSString *)currentTitleForSwitchableControl:(KSMediaPreviewFilterSwitchableControl *)arg1;
- (void)switchableControl:(KSMediaPreviewFilterSwitchableControl *)arg1 swipingAtProgress:(double)arg2 fromRight:(_Bool)arg3 animating:(_Bool)arg4;
- (void)switchableControl:(KSMediaPreviewFilterSwitchableControl *)arg1 didEndSwitching:(_Bool)arg2 fromRight:(_Bool)arg3;
- (void)switchableControl:(KSMediaPreviewFilterSwitchableControl *)arg1 willEndSwitching:(_Bool)arg2 fromRight:(_Bool)arg3;
- (void)switchableControl:(KSMediaPreviewFilterSwitchableControl *)arg1 willBeginSwitchingFromRight:(_Bool)arg2;
@end
