//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, QQWalletDateRange;

@interface QQWalletTips : NSObject
{
    NSNumber *theID;
    NSString *iconURL;
    NSString *words;
    NSString *jumpURL;
    int tipsType;
    QQWalletDateRange *dateRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAvalible;
@property(readonly, nonatomic) _Bool hasIcon;
- (id)initWithFreezeData:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

