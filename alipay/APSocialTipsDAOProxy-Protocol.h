//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, APSocialTipsModel, NSArray, NSString;

@protocol APSocialTipsDAOProxy <APDAOProtocol>
- (APDAOResult *)daoInsertAPSocialTipsArr:(NSArray *)arg1;
- (NSArray *)daoSelectTipsModelsWithModels:(NSArray *)arg1;
- (NSArray *)daoSelectRecentTipsWithSessionId:(NSString *)arg1 toType:(NSString *)arg2;
- (NSArray *)daoSelectRecentTips;
- (APDAOResult *)daoDeleteAPSocialTipsFromSessionId:(NSString *)arg1 toType:(NSString *)arg2 bizType:(NSString *)arg3;
- (APSocialTipsModel *)daoSelectAPSocialTipsFromSessionId:(NSString *)arg1 toType:(NSString *)arg2 bizType:(NSString *)arg3;
- (APDAOResult *)daoUpdateAPSocialTips:(APSocialTipsModel *)arg1;
- (APDAOResult *)daoInsertAPSocialTips:(APSocialTipsModel *)arg1;
@end

