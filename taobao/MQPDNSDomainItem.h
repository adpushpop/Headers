//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MQPDNSDomainItem : NSObject
{
    NSString *_domain;
    NSString *_currentHost;
    NSArray *_iplist;
    unsigned long long _currentIndex;
}

+ (id)itemWithDict:(id)arg1;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSArray *iplist; // @synthesize iplist=_iplist;
@property(copy, nonatomic) NSString *currentHost; // @synthesize currentHost=_currentHost;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)alterCurrentHost;

@end

