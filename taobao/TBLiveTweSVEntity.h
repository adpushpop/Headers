//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBLiveTweSVEntity : NSObject
{
    _Bool _hideAccountInfo;
    NSString *_from;
    NSString *_slicemode;
    NSString *_originType;
    NSString *_originTopicId;
    long long _originId;
    NSString *_type;
    long long _id;
    NSString *_bizParameters;
    NSString *_tppParameters;
    NSString *_trackInfo;
    NSString *_source;
    NSString *_spm;
    NSMutableArray *_recommandVideoList;
}

@property(retain, nonatomic) NSMutableArray *recommandVideoList; // @synthesize recommandVideoList=_recommandVideoList;
@property(copy, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool hideAccountInfo; // @synthesize hideAccountInfo=_hideAccountInfo;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(copy, nonatomic) NSString *tppParameters; // @synthesize tppParameters=_tppParameters;
@property(copy, nonatomic) NSString *bizParameters; // @synthesize bizParameters=_bizParameters;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long originId; // @synthesize originId=_originId;
@property(copy, nonatomic) NSString *originTopicId; // @synthesize originTopicId=_originTopicId;
@property(copy, nonatomic) NSString *originType; // @synthesize originType=_originType;
@property(copy, nonatomic) NSString *slicemode; // @synthesize slicemode=_slicemode;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long recommandTotalCount;
- (_Bool)isInLivingRoom;
- (void)setupEntity;
- (id)init;

@end

