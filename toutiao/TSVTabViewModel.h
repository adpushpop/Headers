//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSVTabViewModel : NSObject
{
    NSArray *_categoryNames;
    long long _currentIndex;
    NSArray *_categories;
}

@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSArray *categoryNames; // @synthesize categoryNames=_categoryNames;
- (void).cxx_destruct;
- (id)currentCategoryName;
- (long long)indexOfCategory:(id)arg1;
- (id)pageCategories;
- (void)fetchCategoryData;
- (void)bindModel;
- (id)init;

@end

