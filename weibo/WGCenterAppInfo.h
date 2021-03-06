//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WGGameAppInfo2.h"

@class NSArray, NSString;

@interface WGCenterAppInfo : WGGameAppInfo2
{
    _Bool _is_new;
    int _total_number;
    NSString *_app_logo_url;
    NSString *_app_poster_url;
    NSString *_scheme;
    NSString *_friend_total;
    NSArray *_intro_urls;
    NSString *_rank;
    NSString *_sng_info;
    NSString *_sng_uninstall_info;
    NSString *_appleId;
}

+ (id)centerAppListWithDic:(id)arg1;
+ (id)centerAppListInfoWithDic:(id)arg1;
@property(retain, nonatomic) NSString *appleId; // @synthesize appleId=_appleId;
@property(retain, nonatomic) NSString *sng_uninstall_info; // @synthesize sng_uninstall_info=_sng_uninstall_info;
@property(retain, nonatomic) NSString *sng_info; // @synthesize sng_info=_sng_info;
@property(retain, nonatomic) NSString *rank; // @synthesize rank=_rank;
@property(nonatomic) _Bool is_new; // @synthesize is_new=_is_new;
@property(retain, nonatomic) NSArray *intro_urls; // @synthesize intro_urls=_intro_urls;
@property(retain, nonatomic) NSString *friend_total; // @synthesize friend_total=_friend_total;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *app_poster_url; // @synthesize app_poster_url=_app_poster_url;
@property(retain, nonatomic) NSString *app_logo_url; // @synthesize app_logo_url=_app_logo_url;
@property(nonatomic) int total_number; // @synthesize total_number=_total_number;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

