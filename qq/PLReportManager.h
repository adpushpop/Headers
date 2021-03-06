//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PLMediaDetailCommonInfo;

@interface PLReportManager : NSObject
{
    _Bool _hasReportClickClose;
    int _feedsType;
    unsigned long long _feedsource;
    NSString *_networktype;
    unsigned long long _timelong;
    PLMediaDetailCommonInfo *_currentMediaInfo;
}

+ (int)getReportFeedType:(long long)arg1;
+ (id)sharedManager;
@property(nonatomic) int feedsType; // @synthesize feedsType=_feedsType;
@property(retain, nonatomic) PLMediaDetailCommonInfo *currentMediaInfo; // @synthesize currentMediaInfo=_currentMediaInfo;
@property(nonatomic) _Bool hasReportClickClose; // @synthesize hasReportClickClose=_hasReportClickClose;
@property(nonatomic) unsigned long long timelong; // @synthesize timelong=_timelong;
@property(copy, nonatomic) NSString *networktype; // @synthesize networktype=_networktype;
@property(nonatomic) unsigned long long feedsource; // @synthesize feedsource=_feedsource;
- (void)updateNetworkType;

@end

