//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AWEVideoCacheUtil : NSObject
{
    NSMutableDictionary *_urlMap;
}

+ (id)originalSchemeURL:(id)arg1;
+ (id)customSchemeURL:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *urlMap; // @synthesize urlMap=_urlMap;
- (void).cxx_destruct;
- (id)init;

@end
