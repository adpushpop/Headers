//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableSet, NSString;

@interface FTSFavIndexState : NSObject <PBCoding>
{
    unsigned int curLocalId;
    NSMutableSet *arrUpdateLocalId;
    NSMutableSet *arrDeleteLocalId;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *arrDeleteLocalId; // @synthesize arrDeleteLocalId;
@property(retain, nonatomic) NSMutableSet *arrUpdateLocalId; // @synthesize arrUpdateLocalId;
@property(nonatomic) unsigned int curLocalId; // @synthesize curLocalId;
- (void).cxx_destruct;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

