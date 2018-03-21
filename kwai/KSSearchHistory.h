//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSORMObject.h"

@class NSDate, NSString;

@interface KSSearchHistory : KSORMObject
{
    NSString *_domain;
    NSString *_domainHash;
    NSString *_content;
    NSDate *_time;
    long long _searchedCount;
}

+ (_Bool)shouldIgnorePersistWithPropertyName:(id)arg1;
@property(nonatomic) long long searchedCount; // @synthesize searchedCount=_searchedCount;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *domainHash; // @synthesize domainHash=_domainHash;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)ksorm_customValueForProperty:(id)arg1 withSqlValue:(id)arg2;

@end
