//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBStoryMsgLikeInfo : NSObject
{
    _Bool _isBigV;
    unsigned int _likeTime;
    unsigned int _type;
    unsigned int _shareGroupProperty;
    unsigned long long _likeUid;
    NSString *_likeUnionId;
    NSString *_shareGroupName;
    NSString *_shareGroupUnionId;
}

@property(nonatomic) unsigned int shareGroupProperty; // @synthesize shareGroupProperty=_shareGroupProperty;
@property(copy, nonatomic) NSString *shareGroupUnionId; // @synthesize shareGroupUnionId=_shareGroupUnionId;
@property(copy, nonatomic) NSString *shareGroupName; // @synthesize shareGroupName=_shareGroupName;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *likeUnionId; // @synthesize likeUnionId=_likeUnionId;
@property(nonatomic) _Bool isBigV; // @synthesize isBigV=_isBigV;
@property(nonatomic) unsigned int likeTime; // @synthesize likeTime=_likeTime;
@property(nonatomic) unsigned long long likeUid; // @synthesize likeUid=_likeUid;
- (void)dealloc;

@end
