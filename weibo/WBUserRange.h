//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBUserRange : NSObject
{
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    unsigned long long _parentLength;
    long long _type;
    long long _subType;
}

@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long parentLength; // @synthesize parentLength=_parentLength;
@property(nonatomic) unsigned long long endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;

@end

