//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchComboViewModelBase.h"

@class NSString, TBXSearchService;

@interface TBXSearchComboOnesearchViewModel : TBXSearchComboViewModelBase
{
    NSString *_oneSearchUrl;
    TBXSearchService *_itemSearchService;
    struct CGSize _oneSearchSize;
}

@property(retain, nonatomic) TBXSearchService *itemSearchService; // @synthesize itemSearchService=_itemSearchService;
@property(nonatomic) struct CGSize oneSearchSize; // @synthesize oneSearchSize=_oneSearchSize;
@property(retain, nonatomic) NSString *oneSearchUrl; // @synthesize oneSearchUrl=_oneSearchUrl;
- (void).cxx_destruct;
- (void)processData;
- (id)initWithSearchService:(id)arg1;

@end
