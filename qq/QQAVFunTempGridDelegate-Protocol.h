//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class MCGridVideoItem, NSString, QQAVFunTempGridBaseView;

@protocol QQAVFunTempGridDelegate <NSObject>
- (void)onShowSupport:(NSString *)arg1;
- (_Bool)getExpressionSelfDevEnable;
- (_Bool)getPeerMultiVerSwapFaceEnable;
- (_Bool)getPeerMultiDevSwapFaceEnable;
- (_Bool)getSelfMultiSwapFaceEnable;
- (_Bool)getMultiSelfDevEnable;
- (void)gridView:(QQAVFunTempGridBaseView *)arg1 needShowShadow:(_Bool)arg2;
- (void)gridView:(QQAVFunTempGridBaseView *)arg1 didSelected:(MCGridVideoItem *)arg2 temState:(long long)arg3;
@end

