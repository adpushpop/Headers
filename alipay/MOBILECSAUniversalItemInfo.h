//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class NSArray, NSString;

@interface MOBILECSAUniversalItemInfo : MOBILECSAToString
{
    NSString *_name;
    NSString *_nameIcon;
    NSString *_type;
    NSArray *_blockList;
}

+ (Class)blockListElementClass;
@property(retain, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *nameIcon; // @synthesize nameIcon=_nameIcon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

