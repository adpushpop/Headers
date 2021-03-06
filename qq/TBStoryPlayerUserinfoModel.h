//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBGPSModel, TBVideoSpreadGroupListModel;

@interface TBStoryPlayerUserinfoModel : NSObject
{
    _Bool _isHost;
    _Bool _isSubscribe;
    _Bool _isLocal;
    _Bool _needShowNormalUserInfo;
    _Bool _isFromMsgTabNew;
    unsigned int _type;
    unsigned int _videoLimit;
    int _timezoneOffset;
    int _videoSource;
    int _addVideoTimeZone;
    NSString *_vid;
    long long _userType;
    unsigned long long _uid;
    NSString *_unionID;
    NSString *_nick;
    NSString *_headUrl;
    unsigned long long _createTime;
    NSString *_plateIconURL;
    NSString *_groupName;
    TBVideoSpreadGroupListModel *_groupLimitModel;
    unsigned long long _captureTime;
    NSString *_captureLocation;
    TBGPSModel *_captureGPSModel;
}

@property(nonatomic) _Bool isFromMsgTabNew; // @synthesize isFromMsgTabNew=_isFromMsgTabNew;
@property(nonatomic) int addVideoTimeZone; // @synthesize addVideoTimeZone=_addVideoTimeZone;
@property(nonatomic) int videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) _Bool needShowNormalUserInfo; // @synthesize needShowNormalUserInfo=_needShowNormalUserInfo;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(retain, nonatomic) TBGPSModel *captureGPSModel; // @synthesize captureGPSModel=_captureGPSModel;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(copy, nonatomic) NSString *captureLocation; // @synthesize captureLocation=_captureLocation;
@property(nonatomic) unsigned long long captureTime; // @synthesize captureTime=_captureTime;
@property(nonatomic) unsigned int videoLimit; // @synthesize videoLimit=_videoLimit;
@property(retain, nonatomic) TBVideoSpreadGroupListModel *groupLimitModel; // @synthesize groupLimitModel=_groupLimitModel;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) _Bool isSubscribe; // @synthesize isSubscribe=_isSubscribe;
@property(copy, nonatomic) NSString *plateIconURL; // @synthesize plateIconURL=_plateIconURL;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) _Bool isHost; // @synthesize isHost=_isHost;
- (void)dealloc;

@end

