//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRUserStructModel, NSArray, NSNumber, NSString;
@protocol FRActionStructModel><Optional;

@interface FRGroupLikeStructModel : JSONModel
{
    NSNumber *_group_id;
    NSString *_schema;
    FRUserStructModel *_user;
    NSNumber *_digg_count;
    NSNumber *_comment_count;
    NSString *_content;
    NSNumber *_create_time;
    NSString *_title;
    NSArray<FRActionStructModel><Optional> *_action_list;
}

@property(retain, nonatomic) NSArray<FRActionStructModel><Optional> *action_list; // @synthesize action_list=_action_list;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *create_time; // @synthesize create_time=_create_time;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSNumber *digg_count; // @synthesize digg_count=_digg_count;
@property(retain, nonatomic) FRUserStructModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
