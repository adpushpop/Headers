//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface ALBBLoginViewRefererStore : NSObject
{
    NSMutableArray *_loginViewRefererDicts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *loginViewRefererDicts; // @synthesize loginViewRefererDicts=_loginViewRefererDicts;
- (void).cxx_destruct;
- (void)clearLoginViewReferers;
- (id)loginViewReferersString;
- (id)loginViewReferersJSONString;
- (id)loginViewReferers;
- (id)readLoginViewRefererFromUD;
- (void)addLoginViewReferer:(id)arg1;

@end
