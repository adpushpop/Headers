//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTXiguaLiveViewModelProtocol-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface TTXiguaLiveProfileModel : NSObject <TTXiguaLiveViewModelProtocol>
{
    NSString *_title;
    NSString *_name;
    NSNumber *_watchCount;
    NSString *_roomID;
    NSString *_userID;
    NSString *_avatarUrl;
    NSString *_groupID;
    NSString *_groupSource;
    NSString *_streamUrl;
    NSString *_flvPullUrl;
    NSString *_alternatePullUrl;
    NSDictionary *_largeImage;
    NSString *_categoryName;
    NSString *_logPb;
}

@property(retain, nonatomic) NSString *logPb; // @synthesize logPb=_logPb;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) NSDictionary *largeImage; // @synthesize largeImage=_largeImage;
@property(retain, nonatomic) NSString *alternatePullUrl; // @synthesize alternatePullUrl=_alternatePullUrl;
@property(retain, nonatomic) NSString *flvPullUrl; // @synthesize flvPullUrl=_flvPullUrl;
@property(retain, nonatomic) NSString *streamUrl; // @synthesize streamUrl=_streamUrl;
@property(retain, nonatomic) NSString *groupSource; // @synthesize groupSource=_groupSource;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSNumber *watchCount; // @synthesize watchCount=_watchCount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)largeImageModel;

// Remaining properties
@property(readonly, nonatomic) NSNumber *creatTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *streamId;
@property(readonly) Class superclass;

@end
