//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface TBStoryVideoLikeInfoModel : QQModel
{
    unsigned int _role;
    unsigned long long _uID;
    unsigned long long _likeTime;
    NSString *_union_id;
    NSString *_nick;
    NSString *_avatarUrl;
}

+ (id)createWithQQStory:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *union_id; // @synthesize union_id=_union_id;
@property(nonatomic) unsigned int role; // @synthesize role=_role;
@property(nonatomic) unsigned long long likeTime; // @synthesize likeTime=_likeTime;
@property(nonatomic) unsigned long long uID; // @synthesize uID=_uID;
- (void)dealloc;
- (id)initWithPBData:(struct CPBMessageDecoder *)arg1;

@end
