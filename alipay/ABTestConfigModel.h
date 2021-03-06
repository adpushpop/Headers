//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ABTestConfigModel : NSObject
{
    NSMutableArray *_sourceConfigArray;
    NSMutableDictionary *_experimentDictionary;
    NSMutableDictionary *_spmidDictionary;
}

+ (id)convertSpmidsWithArray:(id)arg1;
+ (id)convertExperimentsWithArray:(id)arg1;
+ (void)filterArray:(id)arg1;
- (void).cxx_destruct;
- (id)experimentIds;
- (void)reset;
- (void)updateWithArray:(id)arg1;
- (id)allSpmidDictionary;
- (id)allExperimentDictionary;
- (id)init;

@end

