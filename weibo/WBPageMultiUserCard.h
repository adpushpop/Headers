//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray;

@interface WBPageMultiUserCard : WBPageCard
{
    NSArray *_users;
    NSArray *_elements;
}

+ (id)findUserByID:(id)arg1 FromUsers:(id)arg2;
+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(retain, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)contentsArrayWithArray:(id)arg1;
- (id)getTheElementsFromDicArray:(id)arg1 FromUsers:(id)arg2;
- (_Bool)updateWithDictionary:(id)arg1;

@end

