//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OFNodeListItem.h"

@class NSArray;

@interface ALPAdSpaceItem : O2OFNodeListItem
{
    NSArray *_itemList;
}

+ (id)nodeForItem:(id)arg1 Store:(id)arg2 Context:(id)arg3;
+ (id)itemWithDTO:(id)arg1;
@property(copy, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (void)updateModel;
- (float)itemHeight;

@end

