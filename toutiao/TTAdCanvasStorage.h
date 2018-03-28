//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TTAdCanvasStorage : NSObject
{
    NSDictionary *_cachedCanvasProjects;
}

+ (id)sharedStorage;
@property(copy, nonatomic) NSDictionary *cachedCanvasProjects; // @synthesize cachedCanvasProjects=_cachedCanvasProjects;
- (void).cxx_destruct;
- (void)clearModelCache;
- (id)getCacheCanvasDict;
- (void)saveProjects:(id)arg1;
- (void)mergeProject:(id)arg1;
- (id)getMatchProjctModel:(id)arg1;
- (void)didReceiveWarning:(id)arg1;
- (id)init;

@end
