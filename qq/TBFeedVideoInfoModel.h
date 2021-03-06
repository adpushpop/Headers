//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString, TBFeedVideoAttribModel, TBVideoTagInfoBase;

@interface TBFeedVideoInfoModel : QQModel
{
    _Bool _isFakeVideoInfo;
    unsigned int _videoState;
    NSString *_videoCover;
    NSString *_vid;
    TBFeedVideoAttribModel *_videoAttribModel;
    unsigned long long _createTime;
    TBVideoTagInfoBase *_videoTag;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) TBVideoTagInfoBase *videoTag; // @synthesize videoTag=_videoTag;
@property(nonatomic) unsigned int videoState; // @synthesize videoState=_videoState;
@property(nonatomic) _Bool isFakeVideoInfo; // @synthesize isFakeVideoInfo=_isFakeVideoInfo;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) TBFeedVideoAttribModel *videoAttribModel; // @synthesize videoAttribModel=_videoAttribModel;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *videoCover; // @synthesize videoCover=_videoCover;
- (void)dealloc;
- (_Bool)isExistInBatchModel:(id)arg1;
- (_Bool)isEqualToModel:(id)arg1;

@end

