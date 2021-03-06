//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TBSCOperationResultItem;

@interface TBSCBatOperationResultItem : TBJSONModel
{
    _Bool _isAllSuccess;
    _Bool _success;
    unsigned long long _commentId;
    unsigned long long _id;
    NSArray<TBSCOperationResultItem> *_result;
    unsigned long long _createrId;
    NSString *_commenterPic;
    NSString *_commenterNick;
    NSString *_extSymbol;
}

@property(retain, nonatomic) NSString *extSymbol; // @synthesize extSymbol=_extSymbol;
@property(retain, nonatomic) NSString *commenterNick; // @synthesize commenterNick=_commenterNick;
@property(retain, nonatomic) NSString *commenterPic; // @synthesize commenterPic=_commenterPic;
@property(nonatomic) unsigned long long createrId; // @synthesize createrId=_createrId;
@property(retain, nonatomic) NSArray<TBSCOperationResultItem> *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
@property(nonatomic) unsigned long long commentId; // @synthesize commentId=_commentId;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool isAllSuccess; // @synthesize isAllSuccess=_isAllSuccess;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

